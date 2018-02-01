import ROOT
import numpy as np

#from root_numpy import root2array, tree2array


import argparse

parser = argparse.ArgumentParser(description='This will read a flat ntuple with electrons and save then to numpy together with some plots.')
parser.add_argument('--input', dest='input', default="/groups/hep/alonso/ForTroels/CellHack/MyFlatNtuples/user.aalonso.03_00.361107.3601_s3126_r9781_r9778.signal.test_MyElectrons.root/user.aalonso.12923476._000114.MyElectrons.root" , help='Input root file')
parser.add_argument('--maxevents', dest='maxevents', type=int, default=100,  help='Max events to process')
parser.add_argument('--minpt', dest='minpt',   default=150000, type=float, help='Max events to process')
parser.add_argument('--mineta', dest='mineta', default=0     , type=float, help='Max events to process')
parser.add_argument('--maxeta', dest='maxeta', default=0.8   , type=float, help='Max events to process')


args = parser.parse_args()


maxevents = args.maxevents


infile = args.input # "/groups/hep/alonso/ForTroels/CellHack/AnalysisCode/run/MyElectrons_00/data-MyElectrons/mc16_13TeV.361106.PowhegPythia8EvtGen_AZNLOCTEQ6L1_Zee.merge.AOD.e3601_s3126_r9781_r9778.root" 


ofile = ROOT.TFile.Open(infile)
ofile.ls()

tree = ofile.Get("tree") 

print tree.GetEntries()

processed_electrons = 0 
realelectrons = 0
fakeelectrons = 0
otherelectrons = 0

types = []

histos = []
for i in range(0, min([ maxevents, tree.GetEntries() ])): 
	tree.GetEntry(i)
	#print tree.EventNumber
	for j in range(0,tree.El_pt.size()):

		processed_electrons +=1 

		if ( tree.El_pt[j] < args.minpt): 		continue
		if ( abs(tree.El_eta[j] ) > args.maxeta ): 	continue
		if ( abs(tree.El_eta[j] ) < args.mineta ): 	continue
		print tree.El_pt[j], "\t" , tree.El_eta[j] , "\t" , tree.El_type[j] ,"\t" , tree.El_origin[j], "\t" , tree.El_x_Cells[j].size()
		full_array= np.array( [tree.El_sampling_Cells[j], tree.El_energy_Cells[j] , tree.El_x_Cells[j], tree.El_y_Cells[j], tree.El_z_Cells[j], tree.El_phi_Cells[j], tree.El_eta_Cells[j], tree.El_dphi_Cells[j], tree.El_deta_Cells[j], tree.El_provenance_Cells[j]  ],dtype='float')
		print full_array.shape
		samples = np.unique(	full_array[0,:]	)
		print samples

		for sampling_value in samples:
			Mysampling = full_array [:,(full_array[ 0] == sampling_value) ]
			print "\t", sampling_value, "\t this layer has shape: " , Mysampling.shape
			#for k in range (0,Mysampling.shape[1]):
			#	print Mysampling[0, k], "\t", Mysampling[1, k], "\t",Mysampling[2, k], "\t",Mysampling[3, k], "\t",Mysampling[4, k], "\t",Mysampling[5, k], "\t",Mysampling[6, k], "\t"
			maxeta = np.max(Mysampling[6,:])
			mineta = np.min(Mysampling[6,:])

			maxphi = np.max(Mysampling[5,:])
			minphi = np.min(Mysampling[5,:])
		
			maxenergy = np.max(Mysampling[1,:])
			maxenergyvector= Mysampling[:,(Mysampling[ 1 ] == maxenergy)]
			maxenergyeta = maxenergyvector[6]
			maxenergyphi = maxenergyvector[5]
	
			deta	= np.unique( Mysampling[8, :])[0] 
			dphi	= np.unique( Mysampling[7, :])[0] 
	
			neta = 7
			nphi = 11

			if sampling_value == 0:
				neta = 7
				nphi = 2
			elif sampling_value == 1:
				neta = 56
				nphi = 2
			elif sampling_value == 2:
				neta = 7
				nphi = 11
			elif sampling_value == 3:
				neta = 4
				nphi = 11

			print "\t", tree.El_pt[j], "\t Elec eta and phi: " , tree.El_eta[j], "\t", tree.El_phi[j], "\tmin/max eta" ,mineta, " ", maxeta, "\tmin/max phi", minphi ," ",maxphi,"\tmax E", maxenergy, "\t eta/phi", maxenergyeta, " ",maxenergyphi, "\tdEta: ", deta, "\tdphi: " , dphi
			name  = "cluster_event_%i_El_%i_pT_%f_Eta_%f_Phi_%f_Layer_%i" %(tree.EventNumber, j, tree.El_pt[j], tree.El_eta[j], tree.El_phi[j], sampling_value)	
			print "\t", name
			histo = ROOT.TH2F(name, name, neta , mineta-0.5*deta, maxeta+0.5*deta, nphi, minphi-0.5*dphi, maxphi+0.5*dphi)
			name  = "cluster_event_%i_El_%i_pT_%f_Eta_%f_Phi_%f_Layer_%i_Clean" %(tree.EventNumber, j, tree.El_pt[j], tree.El_eta[j], tree.El_phi[j], sampling_value)	
			histoc = ROOT.TH2F(name, name, neta , mineta-0.5*deta, maxeta+0.5*deta, nphi , minphi-0.5*dphi, maxphi+0.5*dphi)

			for k in range (0,Mysampling.shape[1]):
				eta    = Mysampling[6, k]
				phi    = Mysampling[5, k]
				etabin =  	histo.GetXaxis().FindBin(eta)	
				phibin =  	histo.GetYaxis().FindBin(phi)	
				energy = 	Mysampling[1,k]
				if ( histo.GetBinContent( etabin, phibin) !=0.0):
					print "WARNING, bin with content already!! ", eta, " ", phi, " ",energy, "\t content inside: ", histo.GetBinContent( etabin, phibin) 
				energy = energy + histo.GetBinContent( etabin, phibin)
				histo.SetBinContent( etabin, phibin, energy)
			
				if ( int(Mysampling[9,k]) & 0x2000):	
					histoc.SetBinContent( etabin, phibin, energy)
				#print eta, "\t" , phi, "\t" , Mysampling[1,k],"\t",energy,"\tdeta: ", Mysampling[8, k] , " dphi: ",Mysampling[7, k]

			if tree.El_type[j] == 2: ## http://acode-browser.usatlas.bnl.gov/lxr/source/athena/PhysicsAnalysis/MCTruthClassifier/MCTruthClassifier/MCTruthClassifierDefs.h 
				## IsoElectron
				realelectrons +=1
			elif tree.El_type[j] == 17 :
				## Hadron
				fakeelectrons +=1
			else:
				print tree.El_type[j]
				types.append(tree.El_type[j])
				otherelectrons +=1
			histos.append( histo )
			histos.append( histoc)


print "Processed electrons: ", processed_electrons
print "fake ones:           ", fakeelectrons
print "real ones: 	    ", realelectrons
print "unknown ones: 	    ", otherelectrons 
print " unique type: " , np.unique( types)
atypes = np.array(types)
for i in np.unique(types):
	print "type ", i ,"\t", len ( atypes [(atypes[ : ] == i)])

outfile = ROOT.TFile( "out.root", "RECREATE")
for i in histos:
	i.Write()

outfile.Write()
outfile.Close()

