#include <EventLoop/Job.h>
#include <EventLoop/StatusCode.h>
#include <EventLoop/Worker.h>
#include <MyAnalysis/MyTagAndProbeAnalysis.h>
#include "xAODRootAccess/Init.h"
#include "xAODRootAccess/TEvent.h"
#include <AsgTools/MessageCheck.h>
#include "xAODEventInfo/EventInfo.h"
#include <TSystem.h>
#include "xAODJet/JetContainer.h"
#include <TSystem.h> 
#include "xAODEgamma/ElectronContainerFwd.h"

#include "xAODEgamma/PhotonContainer.h"
#include "PATInterfaces/CorrectionCode.h" 
#include "xAODCore/ShallowAuxContainer.h"
#include "xAODCore/ShallowCopy.h"
#include "PATInterfaces/SystematicVariation.h" 
#include "PATInterfaces/SystematicsUtil.h"
#include <TFile.h>
#include "EventLoop/OutputStream.h"
#include "xAODJet/JetAuxContainer.h"
#include "xAODCore/AuxContainerBase.h"
#include "xAODCore/ShallowCopy.h"
#include "AsgTools/MsgStream.h"
#include "AsgTools/MsgStreamMacros.h"
#include <math.h>
#include "xAODTracking/VertexContainer.h"
#include "xAODTracking/Vertex.h"

#include "xAODTracking/TrackParticleAuxContainer.h"
#include "xAODTracking/TrackingPrimitives.h"
#include "xAODTracking/TrackParticle.h"
#include "xAODTracking/TrackParticleContainer.h"

//CaloCluster include
#include  "xAODCaloEvent/CaloCluster.h" 
#include  "xAODCaloEvent/CaloClusterContainer.h" 

#ifndef ROOT_TVector3
#include "TVector3.h"
#endif

#include "xAODMissingET/MissingETContainer.h"
#include "xAODMissingET/MissingETAuxContainer.h"
#include "xAODMissingET/MissingETAssociationMap.h"
//#include "xAODTruth/TruthParticle.h"
//#include "xAODTruth/TruthParticleContainer.h"


// Run by:
// -------
// root -l '$ROOTCOREDIR/scripts/load_packages.C' 'ATestRun.cxx ()'


namespace helper {
  void PtSort(xAOD::IParticleContainer* c) {
    if (c->empty()) return;
    
    std::sort(c->begin(), c->end(), [](const xAOD::IParticle* a,
                                       const xAOD::IParticle* b) -> bool { return a->pt() > b->pt(); }  // C++11 lambda function
              );
  }
}




// this is needed to distribute the algorithm to the workers
ClassImp(MyTagAndProbeAnalysis)

std::vector< const xAOD::Electron* > MyTagAndProbeAnalysis::MyCutTag( xAOD::ElectronContainer* electrons, const xAOD::JetContainer* jets  ) {
    std::vector< const xAOD::Electron* > electrons_out;
    bool NoCrack = true ;
    for ( const auto& el : *electrons ) {
        Hist_Tag->Fill(4) ;
        if ( !(el->pt() > 24500.0 && el->auxdata< char >("LHTight")) ) continue;
        Hist_Tag->Fill(5) ;
        
        if ( !(m_isolationSelectionTool_loose->accept( *(el) ) ) ) continue;
        Hist_Tag->Fill(6) ;

        if (NoCrack) {
	    float eta_tag = fabs(el->eta());
            if (eta_tag < 1.52 && 1.37 < eta_tag) continue;
        }
        Hist_Tag->Fill(7) ;

        std::vector<const xAOD::IParticle*> myParticles;
        myParticles.push_back( el );
        if ( !(m_tmt->match(myParticles,"HLT_e26_lhtight_nod0_ivarloose", 0.07)) ) continue;
        Hist_Tag->Fill(8) ;

	// Check Oject Quality:
        if ( ! el->isGoodOQ(xAOD::EgammaParameters::BADCLUSELECTRON) ) continue;
        Hist_Tag->Fill(9) ;

	// Check that the electron is not close to a b-jet:
	double dRbjet = 999.9;
	for ( const auto& jet : *jets ) {
	  double dR = 0.5;


	  /*
TrigDecisionTool         INFO    decision not set on first (?) assert. deciding how to unpack
TrigDecisionTool         INFO    SG contains xAOD decision, use DecisionUnpackerStandalone
FeatureAccessImpl::getTypelessBits WARNING Retrieving a container that has TrigPassBits attached to it
FeatureAccessImpl::getTypelessBits WARNING But it's not possible to use TrigPassBits in standalone mode
FeatureAccessImpl::getTypelessBits WARNING So, keep in mind that some of the returned objects didn't actually pass the required chain
terminate called after throwing an instance of 'SG::ExcBadAuxVar'
  what():  SG::ExcBadAuxVar: Attempt to retrieve nonexistent aux data item `::MV1_discriminant' (886).
	  */



	  // TODO: Get this working:
	  // double btag = jet->btagging()->MV1_discriminant(); 
	  double btag = 0.0;
	  // std::cout << "  B-tagging results:   dR = " << dR << "   btag = " << btag << std::endl;
	  
	  if (dR < 0.3 && btag > 0.5) continue;
	}	
        Hist_Tag->Fill(10) ;

        electrons_out.push_back( el );
    }

    return electrons_out;
}



std::vector< const xAOD::Electron* > MyTagAndProbeAnalysis::MyCutProbe( xAOD::ElectronContainer* electrons ) {
    std::vector< const xAOD::Electron* > electrons_out;

    for ( const auto& el : *electrons ) {
        Hist_Probe->Fill(4) ;
        
        if ( !(el->pt() > 14500.0) ) continue;
        
        Hist_Probe->Fill(5) ;
        
	// Check Oject Quality:
        if ( ! el->isGoodOQ(xAOD::EgammaParameters::BADCLUSELECTRON) ) continue;
        Hist_Probe->Fill(6) ;

        electrons_out.push_back( el );
        CutProbeCandidates++ ;
    }

    return electrons_out;
}



std::vector< const xAOD::Electron* > MyTagAndProbeAnalysis::MyCutBackground( xAOD::ElectronContainer* electrons,  const xAOD::MissingET* met_obj) {
    std::vector< const xAOD::Electron* > electrons_out;

    for ( const auto& el : *electrons ) {
        // numbr of tracks considered
        Hist_Bkg->Fill(5);

        // Eta cut:
        if ( (fabs(el->eta()) > 2.47) ) continue;
        Hist_Bkg->Fill(6);

        // Pt cut:
        if ( (el->pt() < 14500.0) ) continue;
        Hist_Bkg->Fill(7);

        // Object quality:
        if( ! el->isGoodOQ(xAOD::EgammaParameters::BADCLUSELECTRON) ) continue;
        Hist_Bkg->Fill(8);

        // Elektroweak veto (W's)
        float MET_phi   = met_obj->phi();
        float MET       = met_obj->met();
        float mTrans=0 ; //missing transverse mass
        mTrans = sqrt(2.0 * MET * el->pt() * (1.0 - cos( TVector2::Phi_mpi_pi( el->phi() - MET_phi ) ) ) ) ;
        if (mTrans > 40000.0) continue ;
        Hist_Bkg->Fill(9);

        // Z mass cut:
        bool fake_e = true ;    // This is "good" as we want background!

	for ( const auto& e_other : *electrons ) {
            if ( !(el == e_other) ) {
                if ( e_other->auxdata< char >("LHMedium") ) {
                    float invariant_m ;
                    invariant_m = (el->p4()+e_other->p4()).M() ;
                    if ( (91188.0 - 20000.0) < invariant_m && invariant_m < (91188.0 + 20000.0))
		        {fake_e = false; break;}
                }   
            }
        }

        if ( !fake_e ) continue;
        Hist_Bkg->Fill(10);
        
        electrons_out.push_back( el );
        CutProbeCandidates++ ;
    }

    return electrons_out;
}


std::vector< std::pair<const xAOD::Electron*,const xAOD::Electron*> > MyTagAndProbeAnalysis::MyCutZ( std::vector< const xAOD::Electron* >& electrons_probe , std::vector< const xAOD::Electron* >& electrons_tag ) {
    std::vector< std::pair<const xAOD::Electron*,const xAOD::Electron*> > electrons_out;
    CutZ0++ ;

    double mZrange = 25000.0;

    for ( unsigned int i=0 ; i < electrons_tag.size() ; ++i ) {
        double tempbest = 0;
        int jbest = 0;
        for ( unsigned int j=0 ; j < electrons_probe.size() ; ++j ) {
            
            Hist_Z->Fill(0) ;
            double temp = (electrons_tag[i]->p4() + electrons_probe[j]->p4()).M() ;
            if ( electrons_tag[i] == electrons_probe[j] ) continue ; //Avoid pairing electrons with themselves

            if (electrons_tag[i]->charge() == electrons_probe[j]->charge()) continue; // if same charge continue
            Hist_Z->Fill(1) ;
            
            if ( (91188.0 - mZrange) < temp && temp < (91188.0 + mZrange) ) {    
                
                if (tempbest == 0) {
                    tempbest = temp ;
                    // std::cout << "Zmass first go " << fabs(tempbest - 91188.) << std::endl;
                    jbest = j;
                    CutZCCCandidates++ ;
                }
                else{
                    if ( fabs(temp - 91188.0) < fabs(tempbest - 91188.0) ) {
                        tempbest = temp;
                        // std::cout << "Zmass " << fabs(tempbest - 91188.) << std::endl;
                        jbest = j;
                        
                    }
                }

            }

	    // Final selection requiring Z-mass within 10 GeV of nominal:
            if ( (91188.0 - 10000.0) < temp && temp < (91188.0 + 10000.0) ) {
                NZCandidates++ ;
                CutZCCCandidates++ ;
                Hist_Z->Fill(2) ;
            }
        }
        if (tempbest != 0) {
            electrons_out.push_back({electrons_tag[i], electrons_probe[jbest]}) ;
        }
    }


    CutZ1++ ;
    return electrons_out;
}



void MyTagAndProbeAnalysis::FillnTuple(const xAOD::Electron* el_tag , const xAOD::Electron* el_p) {

    if (el_tag != 0) {
        const xAOD::TrackParticle* t = el_tag->trackParticle();

        // At the moment you use events without vertex as well for probe particle
        if ( !(t->vertex()) )  {
            tag_vertex = 0;
        } else {
            tag_vertex = 1;
        }

        // TAG particle
        tag_pt_calo=         el_tag->pt();
        tag_eta =            el_tag->eta();
        tag_et_calo =        (el_tag->e()) / cosh(tag_eta) ;
        
        tag_phi =            el_tag->phi();
        tag_charge =         el_tag->charge();
        tag_weta2 =          el_tag->auxdata< float >("weta2");
        tag_Reta =           el_tag->auxdata< float >("Reta");
        tag_Rphi =           el_tag->auxdata< float >("Rphi");
        tag_Eratio =         el_tag->auxdata< float >("Eratio");
        tag_f1 =             el_tag->auxdata< float >("f1");
        tag_f3 =             el_tag->auxdata< float >("f3");
        tag_Rhad =           el_tag->auxdata< float >("Rhad");
        tag_Rhad1 =          el_tag->auxdata< float >("Rhad1");
        tag_deltaEta1 =      el_tag->auxdata< float >("deltaEta1");

        tag_TRTTrackOccupancy =  t->auxdata< float >("TRTTrackOccupancy") ;

        if (tag_deltaEta1 < -1.0) tag_deltaEta1 = -0.1 ;
        tag_deltaPhiRescaled2 = el_tag->auxdata< float >("deltaPhiRescaled2");

        UChar_t temp_Char;
        t->summaryValue(temp_Char, (xAOD::SummaryType)53 ); // type 53 = numberOfInnermostPixelHits
        tag_numberOfInnermostPixelHits = (int) temp_Char ;
        t->summaryValue(temp_Char, (xAOD::SummaryType)2 ); // type 2 = numberOfPixelHits
        tag_numberOfPixelHits = (int) temp_Char ;
        t->summaryValue(temp_Char, (xAOD::SummaryType)3 ); // type 3 = numberOfSCTHits
        tag_numberOfSCTHits = (int) temp_Char ;
        t->summaryValue(      temp_Char     , (xAOD::SummaryType)5 );
        tag_numberOfTRTHits = (int) temp_Char;
        
        tag_d0 =             t->d0();
        tag_sigmad0 =        (t->definingParametersCovMatrix())(0,0);
        tag_sigmad0 =        sqrt(tag_sigmad0);
        tag_LHValue =        el_tag->auxdata< float >("LHValue");
        tag_qOverP =         t->qOverP();
        unsigned int index;
        
        if ( t->indexOfParameterAtPosition(index, xAOD::LastMeasurement) ) {
            double refittedTrack_LMqoverp = double(tag_charge) / sqrt(std::pow(t->parameterPX(index), 2) +
								      std::pow(t->parameterPY(index), 2) +
								      std::pow(t->parameterPZ(index), 2));
            tag_dPOverP = 1. - tag_qOverP/(refittedTrack_LMqoverp);      
        }
        

        // Iso variables
        float temp_pt_track = t->pt();
        tag_etcone20 =              el_tag->auxdata< float >("etcone20"); tag_etcone20 = tag_etcone20 / tag_et_calo;
        tag_etcone30 =              el_tag->auxdata< float >("etcone30"); tag_etcone30 = tag_etcone30 / tag_et_calo;
        tag_etcone40 =              el_tag->auxdata< float >("etcone40"); tag_etcone40 = tag_etcone40 / tag_et_calo;
        tag_etcone20ptCorrection =  el_tag->auxdata< float >("etcone20ptCorrection");
	tag_etcone20ptCorrection = tag_etcone20ptCorrection / tag_et_calo;
        tag_etcone30ptCorrection =  el_tag->auxdata< float >("etcone30ptCorrection");
	tag_etcone30ptCorrection = tag_etcone30ptCorrection / tag_et_calo;
        tag_etcone40ptCorrection =  el_tag->auxdata< float >("etcone40ptCorrection");
	tag_etcone40ptCorrection = tag_etcone40ptCorrection / tag_et_calo;
        tag_ptcone20 =              el_tag->auxdata< float >("ptcone20"); tag_ptcone20 = tag_ptcone20 / temp_pt_track;
        tag_ptcone30 =              el_tag->auxdata< float >("ptcone30"); tag_ptcone30 = tag_ptcone30 / temp_pt_track;
        tag_ptcone40 =              el_tag->auxdata< float >("ptcone40"); tag_ptcone40 = tag_ptcone40 / temp_pt_track;
        tag_pt_track = t->pt();

    	tag_energy_Cells 	.clear(); 
    	tag_gain_Cells 	.clear(); 
    	tag_provenance_Cells .clear(); 
    	tag_sampling_Cells 	.clear(); 
    	tag_time_Cells 	.clear(); 
    	tag_x_Cells 		.clear(); 
   	tag_dx_Cells 	.clear(); 
   	tag_y_Cells 		.clear(); 
    	tag_dy_Cells 	.clear(); 
    	tag_z_Cells 		.clear(); 
    	tag_dz_Cells 	.clear(); 
    	tag_eta_Cells 	.clear(); 
    	tag_deta_Cells 	.clear(); 
    	tag_etasize_Cells 	.clear(); 
    	tag_phi_Cells 	.clear(); 
    	tag_dphi_Cells 	.clear(); 
    	tag_phisize_Cells 	.clear(); 


    	tag_energy_Cells 	     	= el_tag ->auxdata<std::vector< float >>	( "energy_7x11" ); 
    	tag_gain_Cells 	     	= el_tag ->auxdata<std::vector< int >>	( "gain_7x11" ); 
    	tag_provenance_Cells      	= el_tag ->auxdata<std::vector< int >>	( "provenance_7x11" ); 
    	tag_sampling_Cells 		= el_tag ->auxdata<std::vector< int >>	( "sampling_7x11" ); 
    	tag_time_Cells 	     	= el_tag ->auxdata<std::vector< float >>	( "time_7x11" ); 
    	tag_x_Cells 			= el_tag ->auxdata<std::vector< float >>	( "x_7x11" ); 
    	tag_dx_Cells 	     	= el_tag ->auxdata<std::vector< float >>	( "dx_7x11" ); 
    	tag_y_Cells 	     		= el_tag ->auxdata<std::vector< float >>	( "y_7x11" ); 
    	tag_dy_Cells 	     	= el_tag ->auxdata<std::vector< float >>	( "dy_7x11" ); 
    	tag_z_Cells    		= el_tag ->auxdata<std::vector< float >>	( "z_7x11" ); 
    	tag_dz_Cells 	     	= el_tag ->auxdata<std::vector< float >>	( "dz_7x11" ); 
    	tag_eta_Cells 	     	= el_tag ->auxdata<std::vector< float >>	( "eta_7x11" ); 
    	tag_deta_Cells 	     	= el_tag ->auxdata<std::vector< float >>	( "deta_7x11" ); 
    	tag_etasize_Cells 	     	= el_tag ->auxdata<std::vector< float >>	( "etasize_7x11" ); 
    	tag_phi_Cells 	     	= el_tag ->auxdata<std::vector< float >>	( "phi_7x11" ); 
    	tag_dphi_Cells 	     	= el_tag ->auxdata<std::vector< float >>	( "dphi_7x11" ); 
    	tag_phisize_Cells 	     	= el_tag ->auxdata<std::vector< float >>	( "phisize_7x11" ); 



        TLorentzVector Z =          (el_tag->p4() + el_p->p4());
        Z_m   =                     Z.M();
        Z_eta =                     Z.Eta();
        Z_pt  =                     Z.Pt();
        Z_phi =                     Z.Phi();

        bool transTRTPID = true;
        if (transTRTPID == true){
            //Transform the TRT PID output for use in the LH tool.
            t->summaryValue(tag_eProbHT, (xAOD::SummaryType)48 ); // type 48 = eProbabilityHT 
            double tau = 15.0;
            double fEpsilon = 1.0e-30;  // to avoid zero division
            double pid_tmp = tag_eProbHT;
            if (pid_tmp >= 1.0) pid_tmp = 1.0 - 1.0e-15;  //this number comes from TMVA
            else if (pid_tmp <= fEpsilon) pid_tmp = fEpsilon;
            tag_eProbHT = - log(1.0/pid_tmp - 1.0)*(1./double(tau));
            
        }
        else {
            t->summaryValue(tag_eProbHT, (xAOD::SummaryType)48 ); // type 48 = eProbabilityHT 
        } 

	// Get the truth ID and kinematics, if MC:
        if (isMC){
            tag_TruthType =      el_tag->auxdata< int >("truthType");
        }
    }

    if (!isSignal) Z_m = 0.0;

    // Probe particle
    p_pt_calo=      el_p->pt();   
    p_eta =         el_p->eta();                                                   
    p_et_calo=      (el_p->e()) / cosh(p_eta) ;                                     
    
    p_phi =         el_p->phi();   
    p_charge =      el_p->charge();
    p_weta2 =       el_p->auxdata< float >("weta2");                                
    p_Reta =        el_p->auxdata< float >("Reta");                                 
    p_Rphi =        el_p->auxdata< float >("Rphi");                                 
    p_Eratio =      el_p->auxdata< float >("Eratio");                               
    p_f1 =          el_p->auxdata< float >("f1");
    p_f3 =          el_p->auxdata< float >("f3");
    p_Rhad =        el_p->auxdata< float >("Rhad");
    p_Rhad1 =       el_p->auxdata< float >("Rhad1");
    p_deltaEta1 =   el_p->auxdata< float >("deltaEta1");

    if (p_deltaEta1 < -1.0) p_deltaEta1 = -0.1 ;
    p_deltaPhiRescaled2 =       el_p->auxdata< float >("deltaPhiRescaled2");
    p_LHValue = (fabs(p_eta) < 2.47) ? el_p->auxdata< float >("LHValue") : -1.0;


    const xAOD::TrackParticle* tt = el_p->trackParticle();
    if (tt) {
      // Check if the vertex exists or not
      if ( !(tt->vertex()) ) {
	p_vertex = 0;
      }
      else {
	p_vertex = 1;
      }
      
      p_TRTTrackOccupancy =  tt->auxdata< float >("TRTTrackOccupancy") ;
      UChar_t tempp_numberOfTRTXenonHits =  tt->auxdata< UChar_t >("numberOfTRTXenonHits") ;
      p_numberOfTRTXenonHits = float(tempp_numberOfTRTXenonHits) ;
      
      UChar_t temp_Char;
      tt->summaryValue(     temp_Char      , (xAOD::SummaryType)53 );
      p_numberOfInnermostPixelHits = temp_Char;
      tt->summaryValue(       temp_Char    , (xAOD::SummaryType)2 );
      p_numberOfPixelHits = temp_Char;
      tt->summaryValue(      temp_Char     , (xAOD::SummaryType)3 );
      p_numberOfSCTHits = temp_Char;
      tt->summaryValue(      temp_Char     , (xAOD::SummaryType)5 );
      p_numberOfTRTHits = temp_Char;
      
      
      p_d0 =          tt->d0();
      p_sigmad0 =     (tt->definingParametersCovMatrix())(0,0);
      p_sigmad0 =     sqrt(p_sigmad0);
      p_qOverP =      tt->qOverP();
      
      unsigned int index;
      if( tt->indexOfParameterAtPosition(index, xAOD::LastMeasurement) ) {
	double refittedTrack_LMqoverp = double(p_charge) / sqrt(std::pow(tt->parameterPX(index), 2) +
								std::pow(tt->parameterPY(index), 2) +
								std::pow(tt->parameterPZ(index), 2));
	p_dPOverP = 1.0 - p_qOverP/(refittedTrack_LMqoverp);      
      }
      
      if (p_dPOverP < -4.0) p_dPOverP = -4.0 ; 
      
      // Iso variables
      float temp_pt_track = tt->pt();
      p_etcone20 =              el_p->auxdata< float >("etcone20"); p_etcone20 = p_etcone20 / p_et_calo;
      p_etcone30 =              el_p->auxdata< float >("etcone30"); p_etcone30 = p_etcone30 / p_et_calo;
      p_etcone40 =              el_p->auxdata< float >("etcone40"); p_etcone40 = p_etcone40 / p_et_calo;
      p_etcone20ptCorrection =  el_p->auxdata< float >("etcone20ptCorrection"); p_etcone20ptCorrection = p_etcone20ptCorrection / p_et_calo;
      p_etcone30ptCorrection =  el_p->auxdata< float >("etcone30ptCorrection"); p_etcone30ptCorrection = p_etcone30ptCorrection / p_et_calo;
      p_etcone40ptCorrection =  el_p->auxdata< float >("etcone40ptCorrection"); p_etcone40ptCorrection = p_etcone40ptCorrection / p_et_calo;
      p_ptcone20 =              el_p->auxdata< float >("ptcone20"); p_ptcone20 = p_ptcone20 / temp_pt_track;
      p_ptcone30 =              el_p->auxdata< float >("ptcone30"); p_ptcone30 = p_ptcone30 / temp_pt_track;
      p_ptcone40 =              el_p->auxdata< float >("ptcone40"); p_ptcone40 = p_ptcone40 / temp_pt_track;
      
      if (p_ptcone40 > 25.0) p_ptcone40 = 25.0;
      if (p_ptcone30 > 16.0) p_ptcone30 = 16.0;
      if (p_ptcone20 > 15.0) p_ptcone20 = 15.0;
      
      p_pt_track = tt->pt();
      
      bool transTRTPID = true;
      if (transTRTPID == true){
	double tau = 15.0;
	double fEpsilon = 1.0e-30;  // to avoid zero division
	//Transform the TRT PID output for use in the LH tool.
	tt->summaryValue(p_eProbHT, (xAOD::SummaryType)48 ); // type 48 = eProbabilityHT 
	double pid_tmp = p_eProbHT;
	if (pid_tmp >= 1.0) pid_tmp = 1.0 - 1.0e-15;  //this number comes from TMVA
	else if (pid_tmp <= fEpsilon) pid_tmp = fEpsilon;
	p_eProbHT = - log(1.0/pid_tmp - 1.0)*(1./double(tau));
      }
      else {
	tt->summaryValue(p_eProbHT, (xAOD::SummaryType)48 ); // type 48 = eProbabilityHT 
      }
    }

    // -------------------------------------------------------------------------------------------------
    // For naming, the long "ElectronsAuxDyn_" used for the probe was renamed "pX_":

    pX_E7x7_Lr2 = el_p->auxdata< float >("E7x7_Lr2");
    pX_E7x7_Lr3 = el_p->auxdata< float >("E7x7_Lr3");
    pX_E_Lr0_HiG = el_p->auxdata< float >("E_Lr0_HiG");
    pX_E_Lr0_LowG = el_p->auxdata< float >("E_Lr0_LowG");
    pX_E_Lr0_MedG = el_p->auxdata< float >("E_Lr0_MedG");
    pX_E_Lr1_HiG = el_p->auxdata< float >("E_Lr1_HiG");
    pX_E_Lr1_LowG = el_p->auxdata< float >("E_Lr1_LowG");
    pX_E_Lr1_MedG = el_p->auxdata< float >("E_Lr1_MedG");
    pX_E_Lr2_HiG = el_p->auxdata< float >("E_Lr2_HiG");
    pX_E_Lr2_LowG = el_p->auxdata< float >("E_Lr2_LowG");
    // vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *ElectronsAuxDyn_trackParticleLinks;
    pX_E_Lr2_MedG = el_p->auxdata< float >("E_Lr2_MedG");
    pX_E_Lr3_HiG = el_p->auxdata< float >("E_Lr3_HiG");
    pX_E_Lr3_LowG = el_p->auxdata< float >("E_Lr3_LowG");
    pX_E_Lr3_MedG = el_p->auxdata< float >("E_Lr3_MedG");
    // vector<vector<float> > *ElectronsAuxDyn_EgammaCovarianceMatrix;
    pX_Eratio = el_p->auxdata< float >("Eratio");
    pX_LHLoose = el_p->auxdata< char >("LHLoose");
    pX_LHMedium = el_p->auxdata< char >("LHMedium");
    pX_pt = el_p->auxdata< float >("pt");
    pX_LHTight = el_p->auxdata< char >("LHTight");
    pX_eta = el_p->auxdata< float >("eta");
    pX_LHValue = el_p->auxdata< float >("LHValue");
    pX_phi = el_p->auxdata< float >("phi");
    pX_Loose = el_p->auxdata< char >("Loose");
    pX_m = el_p->auxdata< float >("m");
    pX_Medium = el_p->auxdata< char >("Medium");
    pX_MultiLepton = el_p->auxdata< char >("MultiLepton");
    pX_OQ = el_p->auxdata< unsigned int >("OQ");
/*
    pX_PromptLeptonIso_DRlj = el_p->auxdata< float >("PromptLeptonIso_DRlj");
    pX_PromptLeptonIso_EtTopoCone30Rel = el_p->auxdata< float >("PromptLeptonIso_EtTopoCone30Rel");
    pX_PromptLeptonIso_LepJetPtFrac = el_p->auxdata< float >("PromptLeptonIso_LepJetPtFrac");
    pX_PromptLeptonIso_PtVarCone30Rel = el_p->auxdata< float >("PromptLeptonIso_PtVarCone30Rel");
    pX_PromptLeptonIso_TagWeight = el_p->auxdata< float >("PromptLeptonIso_TagWeight");
    pX_PromptLeptonIso_TrackJetNTrack = el_p->auxdata< short >("PromptLeptonIso_TrackJetNTrack");
    pX_PromptLeptonIso_ip2 = el_p->auxdata< float >("PromptLeptonIso_ip2");
    pX_PromptLeptonIso_ip3 = el_p->auxdata< float >("PromptLeptonIso_ip3");
    pX_PromptLeptonIso_sv1_jf_ntrkv = el_p->auxdata< short >("PromptLeptonIso_sv1_jf_ntrkv");
    pX_PromptLeptonNoIso_DRlj = el_p->auxdata< float >("PromptLeptonNoIso_DRlj");
    pX_PromptLeptonNoIso_LepJetPtFrac = el_p->auxdata< float >("PromptLeptonNoIso_LepJetPtFrac");
    pX_PromptLeptonNoIso_TagWeight = el_p->auxdata< float >("PromptLeptonNoIso_TagWeight");
    pX_PromptLeptonNoIso_TrackJetNTrack = el_p->auxdata< short >("PromptLeptonNoIso_TrackJetNTrack");
    pX_PromptLeptonNoIso_ip2 = el_p->auxdata< float >("PromptLeptonNoIso_ip2");
    pX_PromptLeptonNoIso_ip3 = el_p->auxdata< float >("PromptLeptonNoIso_ip3");
    pX_PromptLeptonNoIso_sv1_jf_ntrkv = el_p->auxdata< short >("PromptLeptonNoIso_sv1_jf_ntrkv");
    pX_PromptLepton_DRlj = el_p->auxdata< float >("PromptLepton_DRlj");
    pX_PromptLepton_EtTopoCone20Rel = el_p->auxdata< float >("PromptLepton_EtTopoCone20Rel");
    pX_PromptLepton_TagWeight = el_p->auxdata< float >("PromptLepton_TagWeight");
    pX_PromptLepton_TrackJetNTrack = el_p->auxdata< short >("PromptLepton_TrackJetNTrack");
    pX_PromptLepton_ip2 = el_p->auxdata< float >("PromptLepton_ip2");
    pX_PromptLepton_ip2_cu = el_p->auxdata< float >("PromptLepton_ip2_cu");
    pX_PromptLepton_ip3 = el_p->auxdata< float >("PromptLepton_ip3");
    pX_PromptLepton_ip3_cu = el_p->auxdata< float >("PromptLepton_ip3_cu");
    pX_PromptLepton_jf_ntrkv = el_p->auxdata< short >("PromptLepton_jf_ntrkv");
    pX_PromptLepton_sv1_ntkv = el_p->auxdata< short >("PromptLepton_sv1_ntkv");
*/ 
    pX_Reta = el_p->auxdata< float >("Reta");
    pX_Rhad = el_p->auxdata< float >("Rhad");
    pX_Rhad1 = el_p->auxdata< float >("Rhad1");
    pX_Rphi = el_p->auxdata< float >("Rphi");
    pX_Tight = el_p->auxdata< char >("Tight");
    // Int_t           ElectronsAuxDyn_ambiguityLink_;
    // UInt_t          ElectronsAuxDyn_ambiguityLink_m_persKey[kMaxElectronsAuxDyn_ambiguityLink];   //[ElectronsAuxDyn.ambiguityLink_]
    // UInt_t          ElectronsAuxDyn_ambiguityLink_m_persIndex[kMaxElectronsAuxDyn_ambiguityLink];   //[ElectronsAuxDyn.ambiguityLink_]
    pX_ambiguityType = el_p->auxdata< unsigned char >("ambiguityType");
    pX_asy1 = el_p->auxdata< float >("asy1");
    pX_author = el_p->auxdata< unsigned short >("author");
    pX_barys1 = el_p->auxdata< float >("barys1");
    // vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *ElectronsAuxDyn_caloClusterLinks;
    // vector<vector<ElementLink<DataVector<xAOD::CaloRings_v1> > > > *ElectronsAuxDyn_caloRingsLinks; 
    pX_charge = el_p->auxdata< float >("charge");
    pX_core57cellsEnergyCorrection = el_p->auxdata< float >("core57cellsEnergyCorrection");
    pX_deltaEta0 = el_p->auxdata< float >("deltaEta0");
    pX_deltaEta1 = el_p->auxdata< float >("deltaEta1");
    pX_deltaEta2 = el_p->auxdata< float >("deltaEta2");
    pX_deltaEta3 = el_p->auxdata< float >("deltaEta3");
    pX_deltaPhi0 = el_p->auxdata< float >("deltaPhi0");
    pX_deltaPhi1 = el_p->auxdata< float >("deltaPhi1");
    pX_deltaPhi2 = el_p->auxdata< float >("deltaPhi2");
    pX_deltaPhi3 = el_p->auxdata< float >("deltaPhi3");
    pX_deltaPhiFromLastMeasurement = el_p->auxdata< float >("deltaPhiFromLastMeasurement");
    pX_deltaPhiRescaled0 = el_p->auxdata< float >("deltaPhiRescaled0");
    pX_deltaPhiRescaled1 = el_p->auxdata< float >("deltaPhiRescaled1");
    pX_deltaPhiRescaled2 = el_p->auxdata< float >("deltaPhiRescaled2");
    pX_deltaPhiRescaled3 = el_p->auxdata< float >("deltaPhiRescaled3");
    pX_e1152 = el_p->auxdata< float >("e1152");
    pX_e132 = el_p->auxdata< float >("e132");
    pX_e235 = el_p->auxdata< float >("e235");
    pX_e255 = el_p->auxdata< float >("e255");
    pX_e2ts1 = el_p->auxdata< float >("e2ts1");
    pX_ecore = el_p->auxdata< float >("ecore");
    pX_emins1 = el_p->auxdata< float >("emins1");
    pX_etcone20 = el_p->auxdata< float >("etcone20");
    pX_etcone20ptCorrection = el_p->auxdata< float >("etcone20ptCorrection");
    pX_etcone30 = el_p->auxdata< float >("etcone30");
    pX_etcone30ptCorrection = el_p->auxdata< float >("etcone30ptCorrection");
    pX_etcone40 = el_p->auxdata< float >("etcone40");
    pX_etcone40ptCorrection = el_p->auxdata< float >("etcone40ptCorrection");
    pX_etconeCorrBitset = el_p->auxdata< unsigned int >("etconeCorrBitset");
    pX_ethad = el_p->auxdata< float >("ethad");
    pX_ethad1 = el_p->auxdata< float >("ethad1");
    pX_f1 = el_p->auxdata< float >("f1");
    pX_f1core = el_p->auxdata< float >("f1core");
    pX_f3 = el_p->auxdata< float >("f3");
    pX_f3core = el_p->auxdata< float >("f3core");
    pX_maxEcell_energy = el_p->auxdata< float >("maxEcell_energy");
    pX_maxEcell_gain = el_p->auxdata< int >("maxEcell_gain");
    //pX_maxEcell_onlId = el_p->auxdata< unsigned long >("maxEcell_onlId");
    pX_maxEcell_time = el_p->auxdata< float >("maxEcell_time");
    pX_maxEcell_x = el_p->auxdata< float >("maxEcell_x");
    pX_maxEcell_y = el_p->auxdata< float >("maxEcell_y");
    pX_maxEcell_z = el_p->auxdata< float >("maxEcell_z");
    pX_nCells_Lr0_HiG = el_p->auxdata< unsigned char >("nCells_Lr0_HiG");
    pX_nCells_Lr0_LowG = el_p->auxdata< unsigned char >("nCells_Lr0_LowG");
    pX_nCells_Lr0_MedG = el_p->auxdata< unsigned char >("nCells_Lr0_MedG");
    pX_nCells_Lr1_HiG = el_p->auxdata< unsigned char >("nCells_Lr1_HiG");
    pX_nCells_Lr1_LowG = el_p->auxdata< unsigned char >("nCells_Lr1_LowG");
    pX_nCells_Lr1_MedG = el_p->auxdata< unsigned char >("nCells_Lr1_MedG");
    pX_nCells_Lr2_HiG = el_p->auxdata< unsigned char >("nCells_Lr2_HiG");
    pX_nCells_Lr2_LowG = el_p->auxdata< unsigned char >("nCells_Lr2_LowG");
    pX_nCells_Lr2_MedG = el_p->auxdata< unsigned char >("nCells_Lr2_MedG");
    pX_nCells_Lr3_HiG = el_p->auxdata< unsigned char >("nCells_Lr3_HiG");
    pX_nCells_Lr3_LowG = el_p->auxdata< unsigned char >("nCells_Lr3_LowG");
    pX_nCells_Lr3_MedG = el_p->auxdata< unsigned char >("nCells_Lr3_MedG");
    pX_neflowisol20 = el_p->auxdata< float >("neflowisol20");
    pX_neflowisol20ptCorrection = el_p->auxdata< float >("neflowisol20ptCorrection");
    pX_neflowisol30 = el_p->auxdata< float >("neflowisol30");
    pX_neflowisol30ptCorrection = el_p->auxdata< float >("neflowisol30ptCorrection");
    pX_neflowisol40 = el_p->auxdata< float >("neflowisol40");
    pX_neflowisol40ptCorrection = el_p->auxdata< float >("neflowisol40ptCorrection");
    pX_neflowisolCorrBitset = el_p->auxdata< unsigned int >("neflowisolCorrBitset");
    pX_neflowisolcoreConeEnergyCorrection = el_p->auxdata< float >("neflowisolcoreConeEnergyCorrection");
    pX_pos = el_p->auxdata< float >("pos");
    pX_pos7 = el_p->auxdata< float >("pos7");
    pX_poscs1 = el_p->auxdata< float >("poscs1");
    pX_poscs2 = el_p->auxdata< float >("poscs2");
    pX_ptcone20 = el_p->auxdata< float >("ptcone20");
    pX_ptcone30 = el_p->auxdata< float >("ptcone30");
    pX_ptcone40 = el_p->auxdata< float >("ptcone40");
    pX_ptconeCorrBitset = el_p->auxdata< unsigned int >("ptconeCorrBitset");
    pX_ptconecoreTrackPtrCorrection = el_p->auxdata< float >("ptconecoreTrackPtrCorrection");
    pX_ptvarcone20 = el_p->auxdata< float >("ptvarcone20");
    pX_ptvarcone30 = el_p->auxdata< float >("ptvarcone30");
    pX_ptvarcone40 = el_p->auxdata< float >("ptvarcone40");
    pX_r33over37allcalo = el_p->auxdata< float >("r33over37allcalo");
    pX_topoetcone20 = el_p->auxdata< float >("topoetcone20");
    pX_topoetcone20ptCorrection = el_p->auxdata< float >("topoetcone20ptCorrection");
    pX_topoetcone30 = el_p->auxdata< float >("topoetcone30");
    pX_topoetcone30ptCorrection = el_p->auxdata< float >("topoetcone30ptCorrection");
    pX_topoetcone40 = el_p->auxdata< float >("topoetcone40");
    pX_topoetcone40ptCorrection = el_p->auxdata< float >("topoetcone40ptCorrection");
    pX_topoetconeCorrBitset = el_p->auxdata< unsigned int >("topoetconeCorrBitset");
    pX_topoetconecoreConeEnergyCorrection = el_p->auxdata< float >("topoetconecoreConeEnergyCorrection");
    pX_topoetconecoreConeSCEnergyCorrection = el_p->auxdata< float >("topoetconecoreConeSCEnergyCorrection");
    pX_weta1 = el_p->auxdata< float >("weta1");
    pX_widths1 = el_p->auxdata< float >("widths1");
    pX_widths2 = el_p->auxdata< float >("widths2");
    pX_wtots1 = el_p->auxdata< float >("wtots1");
    pX_e233 = el_p->auxdata< float >("e233");
    pX_e237 = el_p->auxdata< float >("e237");
    pX_e277 = el_p->auxdata< float >("e277");
    pX_e2tsts1 = el_p->auxdata< float >("e2tsts1");
    pX_ehad1 = el_p->auxdata< float >("ehad1");
    pX_emaxs1 = el_p->auxdata< float >("emaxs1");
    pX_fracs1 = el_p->auxdata< float >("fracs1");
    pX_weta2 = el_p->auxdata< float >("weta2");
    pX_DFCommonElectronsIsEMLoose = el_p->auxdata< char >("DFCommonElectronsIsEMLoose");
    pX_DFCommonElectronsIsEMLooseIsEMValue = el_p->auxdata< unsigned int >("DFCommonElectronsIsEMLooseIsEMValue");
    pX_DFCommonElectronsIsEMMedium = el_p->auxdata< char >("DFCommonElectronsIsEMMedium");
    pX_DFCommonElectronsIsEMMediumIsEMValue = el_p->auxdata< unsigned int >("DFCommonElectronsIsEMMediumIsEMValue");
    pX_DFCommonElectronsIsEMTight = el_p->auxdata< char >("DFCommonElectronsIsEMTight");
    pX_DFCommonElectronsIsEMTightIsEMValue = el_p->auxdata< unsigned int >("DFCommonElectronsIsEMTightIsEMValue");
    pX_DFCommonElectronsLHLoose = el_p->auxdata< char >("DFCommonElectronsLHLoose");
    pX_DFCommonElectronsLHMedium = el_p->auxdata< char >("DFCommonElectronsLHMedium");
    pX_DFCommonElectronsLHTight = el_p->auxdata< char >("DFCommonElectronsLHTight");
    pX_DFCommonElectronsLHVeryLoose = el_p->auxdata< char >("DFCommonElectronsLHVeryLoose");
    pX_DFCommonElectronsML = el_p->auxdata< char >("DFCommonElectronsML");
    pX_DeltaE = el_p->auxdata< float >("DeltaE");
    pX_E3x5_Lr0 = el_p->auxdata< float >("E3x5_Lr0");
    pX_E3x5_Lr1 = el_p->auxdata< float >("E3x5_Lr1");
    pX_E3x5_Lr2 = el_p->auxdata< float >("E3x5_Lr2");
    pX_E3x5_Lr3 = el_p->auxdata< float >("E3x5_Lr3");
    pX_E5x7_Lr0 = el_p->auxdata< float >("E5x7_Lr0");
    pX_E5x7_Lr1 = el_p->auxdata< float >("E5x7_Lr1");
    pX_E5x7_Lr2 = el_p->auxdata< float >("E5x7_Lr2");
    pX_E5x7_Lr3 = el_p->auxdata< float >("E5x7_Lr3");
    pX_E7x11_Lr0 = el_p->auxdata< float >("E7x11_Lr0");
    pX_E7x11_Lr1 = el_p->auxdata< float >("E7x11_Lr1");
    pX_E7x11_Lr2 = el_p->auxdata< float >("E7x11_Lr2");
    pX_E7x11_Lr3 = el_p->auxdata< float >("E7x11_Lr3");
    pX_E7x7_Lr0 = el_p->auxdata< float >("E7x7_Lr0");
    pX_E7x7_Lr1 = el_p->auxdata< float >("E7x7_Lr1");

    pX_energy_Cells 	.clear(); 
    pX_gain_Cells 	.clear(); 
    pX_provenance_Cells .clear(); 
    pX_sampling_Cells 	.clear(); 
    pX_time_Cells 	.clear(); 
    pX_x_Cells 		.clear(); 
    pX_dx_Cells 	.clear(); 
    pX_y_Cells 		.clear(); 
    pX_dy_Cells 	.clear(); 
    pX_z_Cells 		.clear(); 
    pX_dz_Cells 	.clear(); 
    pX_eta_Cells 	.clear(); 
    pX_deta_Cells 	.clear(); 
    pX_etasize_Cells 	.clear(); 
    pX_phi_Cells 	.clear(); 
    pX_dphi_Cells 	.clear(); 
    pX_phisize_Cells 	.clear(); 


    pX_energy_Cells 	     	= el_p ->auxdata<std::vector< float >>	( "energy_7x11" ); 
    pX_gain_Cells 	     	= el_p ->auxdata<std::vector< int >>	( "gain_7x11" ); 
    pX_provenance_Cells      	= el_p ->auxdata<std::vector< int >>	( "provenance_7x11" ); 
    pX_sampling_Cells 		= el_p ->auxdata<std::vector< int >>	( "sampling_7x11" ); 
    pX_time_Cells 	     	= el_p ->auxdata<std::vector< float >>	( "time_7x11" ); 
    pX_x_Cells 			= el_p ->auxdata<std::vector< float >>	( "x_7x11" ); 
    pX_dx_Cells 	     	= el_p ->auxdata<std::vector< float >>	( "dx_7x11" ); 
    pX_y_Cells 	     		= el_p ->auxdata<std::vector< float >>	( "y_7x11" ); 
    pX_dy_Cells 	     	= el_p ->auxdata<std::vector< float >>	( "dy_7x11" ); 
    pX_z_Cells    		= el_p ->auxdata<std::vector< float >>	( "z_7x11" ); 
    pX_dz_Cells 	     	= el_p ->auxdata<std::vector< float >>	( "dz_7x11" ); 
    pX_eta_Cells 	     	= el_p ->auxdata<std::vector< float >>	( "eta_7x11" ); 
    pX_deta_Cells 	     	= el_p ->auxdata<std::vector< float >>	( "deta_7x11" ); 
    pX_etasize_Cells 	     	= el_p ->auxdata<std::vector< float >>	( "etasize_7x11" ); 
    pX_phi_Cells 	     	= el_p ->auxdata<std::vector< float >>	( "phi_7x11" ); 
    pX_dphi_Cells 	     	= el_p ->auxdata<std::vector< float >>	( "dphi_7x11" ); 
    pX_phisize_Cells 	     	= el_p ->auxdata<std::vector< float >>	( "phisize_7x11" ); 


    /*
    pX_E3x5_Lr0 = el_p->auxdata< float >("E3x5_Lr0");
    pX_E3x5_Lr1 = el_p->auxdata< float >("E3x5_Lr1");
    pX_E3x5_Lr2 = el_p->auxdata< float >("E3x5_Lr2");
    pX_E3x5_Lr3 = el_p->auxdata< float >("E3x5_Lr3");
    pX_E5x7_Lr0 = el_p->auxdata< float >("E5x7_Lr0");
    pX_E5x7_Lr1 = el_p->auxdata< float >("E5x7_Lr1");
    pX_E5x7_Lr2 = el_p->auxdata< float >("E5x7_Lr2");
    pX_E5x7_Lr3 = el_p->auxdata< float >("E5x7_Lr3");
    pX_E7x11_Lr0 = el_p->auxdata< float >("E7x11_Lr0");
    pX_E7x11_Lr1 = el_p->auxdata< float >("E7x11_Lr1");
    pX_E7x11_Lr2 = el_p->auxdata< float >("E7x11_Lr2");
    pX_E7x11_Lr3 = el_p->auxdata< float >("E7x11_Lr3");
    pX_E7x7_Lr0 = el_p->auxdata< float >("E7x7_Lr0");
    pX_E7x7_Lr1 = el_p->auxdata< float >("E7x7_Lr1");
    pX_E7x7_Lr2 = el_p->auxdata< float >("E7x7_Lr2");
    pX_E7x7_Lr3 = el_p->auxdata< float >("E7x7_Lr3");
    pX_E_Lr0_HiG = el_p->auxdata< float >("E_Lr0_HiG");
    pX_E_Lr0_LowG = el_p->auxdata< float >("E_Lr0_LowG");
    pX_E_Lr0_MedG = el_p->auxdata< float >("E_Lr0_MedG");
    pX_E_Lr1_HiG = el_p->auxdata< float >("E_Lr1_HiG");
    pX_E_Lr1_LowG = el_p->auxdata< float >("E_Lr1_LowG");
    pX_E_Lr1_MedG = el_p->auxdata< float >("E_Lr1_MedG");
    pX_E_Lr2_HiG = el_p->auxdata< float >("E_Lr2_HiG");
    pX_E_Lr2_LowG = el_p->auxdata< float >("E_Lr2_LowG");
    pX_E_Lr2_MedG = el_p->auxdata< float >("E_Lr2_MedG");
    pX_E_Lr3_HiG = el_p->auxdata< float >("E_Lr3_HiG");
    pX_E_Lr3_LowG = el_p->auxdata< float >("E_Lr3_LowG");
    pX_pt = el_p->auxdata< float >("pt");
    pX_E_Lr3_MedG = el_p->auxdata< float >("E_Lr3_MedG");
    pX_eta = el_p->auxdata< float >("eta");
    pX_phi = el_p->auxdata< float >("phi");
    pX_Eratio = el_p->auxdata< float >("Eratio");
    pX_m = el_p->auxdata< float >("m");
    pX_LHLoose = el_p->auxdata< char >("LHLoose");
    pX_LHMedium = el_p->auxdata< char >("LHMedium");
    pX_LHTight = el_p->auxdata< char >("LHTight");
    pX_LHValue = el_p->auxdata< float >("LHValue");
    pX_Loose = el_p->auxdata< char >("Loose");
    pX_Medium = el_p->auxdata< char >("Medium");
    pX_MultiLepton = el_p->auxdata< char >("MultiLepton");
    pX_OQ = el_p->auxdata< unsigned int >("OQ");
    pX_PromptLepton_DRlj = el_p->auxdata< float >("PromptLepton_DRlj");
    pX_PromptLepton_EtTopoCone20Rel = el_p->auxdata< float >("PromptLepton_EtTopoCone20Rel");
    pX_PromptLepton_TagWeight = el_p->auxdata< float >("PromptLepton_TagWeight");
    pX_PromptLepton_TrackJetNTrack = el_p->auxdata< short >("PromptLepton_TrackJetNTrack");
    pX_PromptLepton_ip2 = el_p->auxdata< float >("PromptLepton_ip2");
    pX_PromptLepton_ip2_cu = el_p->auxdata< float >("PromptLepton_ip2_cu");
    pX_PromptLepton_ip3 = el_p->auxdata< float >("PromptLepton_ip3");
    pX_PromptLepton_ip3_cu = el_p->auxdata< float >("PromptLepton_ip3_cu");
    pX_PromptLepton_jf_ntrkv = el_p->auxdata< short >("PromptLepton_jf_ntrkv");
    pX_PromptLepton_sv1_ntkv = el_p->auxdata< short >("PromptLepton_sv1_ntkv");
    pX_Reta = el_p->auxdata< float >("Reta");
    pX_Rhad = el_p->auxdata< float >("Rhad");
    pX_Rhad1 = el_p->auxdata< float >("Rhad1");
    pX_Rphi = el_p->auxdata< float >("Rphi");
    pX_Tight = el_p->auxdata< char >("Tight");
    pX_asy1 = el_p->auxdata< float >("asy1");
    pX_author = el_p->auxdata< unsigned short >("author");
    pX_barys1 = el_p->auxdata< float >("barys1");
    pX_charge = el_p->auxdata< float >("charge");
    pX_core57cellsEnergyCorrection = el_p->auxdata< float >("core57cellsEnergyCorrection");
    pX_deltaEta0 = el_p->auxdata< float >("deltaEta0");
    pX_deltaEta1 = el_p->auxdata< float >("deltaEta1");
    pX_deltaEta2 = el_p->auxdata< float >("deltaEta2");
    pX_deltaEta3 = el_p->auxdata< float >("deltaEta3");
    pX_deltaPhi0 = el_p->auxdata< float >("deltaPhi0");
    pX_deltaPhi1 = el_p->auxdata< float >("deltaPhi1");
    pX_deltaPhi2 = el_p->auxdata< float >("deltaPhi2");
    pX_deltaPhi3 = el_p->auxdata< float >("deltaPhi3");
    pX_deltaPhiFromLastMeasurement = el_p->auxdata< float >("deltaPhiFromLastMeasurement");
    pX_deltaPhiRescaled0 = el_p->auxdata< float >("deltaPhiRescaled0");
    pX_deltaPhiRescaled1 = el_p->auxdata< float >("deltaPhiRescaled1");
    pX_deltaPhiRescaled2 = el_p->auxdata< float >("deltaPhiRescaled2");
    pX_deltaPhiRescaled3 = el_p->auxdata< float >("deltaPhiRescaled3");
    pX_e011 = el_p->auxdata< float >("e011");
    pX_e033 = el_p->auxdata< float >("e033");
    pX_e1152 = el_p->auxdata< float >("e1152");
    pX_e132 = el_p->auxdata< float >("e132");
    pX_e233 = el_p->auxdata< float >("e233");
    pX_e235 = el_p->auxdata< float >("e235");
    pX_e237 = el_p->auxdata< float >("e237");
    pX_e255 = el_p->auxdata< float >("e255");
    pX_e277 = el_p->auxdata< float >("e277");
    pX_e2ts1 = el_p->auxdata< float >("e2ts1");
    pX_e2tsts1 = el_p->auxdata< float >("e2tsts1");
    pX_e333 = el_p->auxdata< float >("e333");
    pX_e335 = el_p->auxdata< float >("e335");
    pX_e337 = el_p->auxdata< float >("e337");
    pX_e377 = el_p->auxdata< float >("e377");
    pX_ecore = el_p->auxdata< float >("ecore");
    pX_ehad1 = el_p->auxdata< float >("ehad1");
    pX_emaxs1 = el_p->auxdata< float >("emaxs1");
    pX_emins1 = el_p->auxdata< float >("emins1");
    pX_etcone20 = el_p->auxdata< float >("etcone20");
    pX_etcone20ptCorrection = el_p->auxdata< float >("etcone20ptCorrection");
    pX_etcone30 = el_p->auxdata< float >("etcone30");
    pX_etcone30ptCorrection = el_p->auxdata< float >("etcone30ptCorrection");
    pX_etcone40 = el_p->auxdata< float >("etcone40");
    pX_etcone40ptCorrection = el_p->auxdata< float >("etcone40ptCorrection");
    pX_etconeCorrBitset = el_p->auxdata< unsigned int >("etconeCorrBitset");
    pX_ethad = el_p->auxdata< float >("ethad");
    pX_ethad1 = el_p->auxdata< float >("ethad1");
    pX_f1 = el_p->auxdata< float >("f1");
    pX_f1core = el_p->auxdata< float >("f1core");
    pX_f3 = el_p->auxdata< float >("f3");
    pX_f3core = el_p->auxdata< float >("f3core");
    pX_fracs1 = el_p->auxdata< float >("fracs1");
    pX_isEMLHLoose = el_p->auxdata< unsigned int >("isEMLHLoose");
    pX_isEMLHMedium = el_p->auxdata< unsigned int >("isEMLHMedium");
    pX_isEMLHTight = el_p->auxdata< unsigned int >("isEMLHTight");
    pX_isEMLoose = el_p->auxdata< unsigned int >("isEMLoose");
    pX_isEMMedium = el_p->auxdata< unsigned int >("isEMMedium");
    pX_isEMMultiLepton = el_p->auxdata< unsigned int >("isEMMultiLepton");
    pX_isEMTight = el_p->auxdata< unsigned int >("isEMTight");
    pX_maxEcell_energy = el_p->auxdata< float >("maxEcell_energy");
    pX_maxEcell_gain = el_p->auxdata< int >("maxEcell_gain");
    // pX_maxEcell_onlId = el_p->auxdata< unsigned long >("maxEcell_onlId");
    pX_maxEcell_time = el_p->auxdata< float >("maxEcell_time");
    pX_maxEcell_x = el_p->auxdata< float >("maxEcell_x");
    pX_maxEcell_y = el_p->auxdata< float >("maxEcell_y");
    pX_maxEcell_z = el_p->auxdata< float >("maxEcell_z");
    pX_nCells_Lr0_HiG = el_p->auxdata< unsigned char >("nCells_Lr0_HiG");
    pX_nCells_Lr0_LowG = el_p->auxdata< unsigned char >("nCells_Lr0_LowG");
    pX_nCells_Lr0_MedG = el_p->auxdata< unsigned char >("nCells_Lr0_MedG");
    pX_nCells_Lr1_HiG = el_p->auxdata< unsigned char >("nCells_Lr1_HiG");
    pX_nCells_Lr1_LowG = el_p->auxdata< unsigned char >("nCells_Lr1_LowG");
    pX_nCells_Lr1_MedG = el_p->auxdata< unsigned char >("nCells_Lr1_MedG");
    pX_nCells_Lr2_HiG = el_p->auxdata< unsigned char >("nCells_Lr2_HiG");
    pX_nCells_Lr2_LowG = el_p->auxdata< unsigned char >("nCells_Lr2_LowG");
    pX_nCells_Lr2_MedG = el_p->auxdata< unsigned char >("nCells_Lr2_MedG");
    pX_nCells_Lr3_HiG = el_p->auxdata< unsigned char >("nCells_Lr3_HiG");
    pX_nCells_Lr3_LowG = el_p->auxdata< unsigned char >("nCells_Lr3_LowG");
    pX_nCells_Lr3_MedG = el_p->auxdata< unsigned char >("nCells_Lr3_MedG");
    pX_neflowisol20 = el_p->auxdata< float >("neflowisol20");
    pX_neflowisol20ptCorrection = el_p->auxdata< float >("neflowisol20ptCorrection");
    pX_neflowisol30 = el_p->auxdata< float >("neflowisol30");
    pX_neflowisol30ptCorrection = el_p->auxdata< float >("neflowisol30ptCorrection");
    pX_neflowisol40 = el_p->auxdata< float >("neflowisol40");
    pX_neflowisol40ptCorrection = el_p->auxdata< float >("neflowisol40ptCorrection");
    pX_neflowisolCorrBitset = el_p->auxdata< unsigned int >("neflowisolCorrBitset");
    pX_neflowisolcoreConeEnergyCorrection = el_p->auxdata< float >("neflowisolcoreConeEnergyCorrection");
    pX_pos = el_p->auxdata< float >("pos");
    pX_pos7 = el_p->auxdata< float >("pos7");
    pX_poscs1 = el_p->auxdata< float >("poscs1");
    pX_poscs2 = el_p->auxdata< float >("poscs2");
    pX_ptcone20 = el_p->auxdata< float >("ptcone20");
    pX_ptcone30 = el_p->auxdata< float >("ptcone30");
    pX_ptcone40 = el_p->auxdata< float >("ptcone40");
    pX_ptconeCorrBitset = el_p->auxdata< unsigned int >("ptconeCorrBitset");
    pX_ptconecoreTrackPtrCorrection = el_p->auxdata< float >("ptconecoreTrackPtrCorrection");
    pX_ptvarcone20 = el_p->auxdata< float >("ptvarcone20");
    pX_ptvarcone30 = el_p->auxdata< float >("ptvarcone30");
    pX_ptvarcone40 = el_p->auxdata< float >("ptvarcone40");
    pX_r33over37allcalo = el_p->auxdata< float >("r33over37allcalo");
    pX_topoetcone20 = el_p->auxdata< float >("topoetcone20");
    pX_topoetcone20ptCorrection = el_p->auxdata< float >("topoetcone20ptCorrection");
    pX_topoetcone30 = el_p->auxdata< float >("topoetcone30");
    pX_topoetcone30ptCorrection = el_p->auxdata< float >("topoetcone30ptCorrection");
    pX_topoetcone40 = el_p->auxdata< float >("topoetcone40");
    pX_topoetcone40ptCorrection = el_p->auxdata< float >("topoetcone40ptCorrection");
    pX_topoetconeCorrBitset = el_p->auxdata< unsigned int >("topoetconeCorrBitset");
    pX_topoetconecoreConeEnergyCorrection = el_p->auxdata< float >("topoetconecoreConeEnergyCorrection");
    pX_weta1 = el_p->auxdata< float >("weta1");
    pX_weta2 = el_p->auxdata< float >("weta2");
    pX_widths1 = el_p->auxdata< float >("widths1");
    pX_widths2 = el_p->auxdata< float >("widths2");
    pX_wtots1 = el_p->auxdata< float >("wtots1");
    pX_DFCommonElectronsIsEMLoose = el_p->auxdata< char >("DFCommonElectronsIsEMLoose");
    pX_DFCommonElectronsIsEMLooseIsEMValue = el_p->auxdata< unsigned int >("DFCommonElectronsIsEMLooseIsEMValue");
    pX_DFCommonElectronsIsEMMedium = el_p->auxdata< char >("DFCommonElectronsIsEMMedium");
    pX_DFCommonElectronsIsEMMediumIsEMValue = el_p->auxdata< unsigned int >("DFCommonElectronsIsEMMediumIsEMValue");
    pX_DFCommonElectronsIsEMTight = el_p->auxdata< char >("DFCommonElectronsIsEMTight");
    pX_DFCommonElectronsIsEMTightIsEMValue = el_p->auxdata< unsigned int >("DFCommonElectronsIsEMTightIsEMValue");
    pX_DFCommonElectronsLHLoose = el_p->auxdata< char >("DFCommonElectronsLHLoose");
    pX_DFCommonElectronsLHMedium = el_p->auxdata< char >("DFCommonElectronsLHMedium");
    pX_DFCommonElectronsLHTight = el_p->auxdata< char >("DFCommonElectronsLHTight");
    pX_DFCommonElectronsLHVeryLoose = el_p->auxdata< char >("DFCommonElectronsLHVeryLoose");
    pX_DFCommonElectronsML = el_p->auxdata< char >("DFCommonElectronsML");
    pX_DeltaE = el_p->auxdata< float >("DeltaE");
    */

    /*
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *pX_trackParticleLinks;
   vector<vector<float> > *pX_EgammaCovarianceMatrix;
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *pX_caloClusterLinks;
    */

    
    if (isMC){
      p_TruthType =   el_p->auxdata< int >("truthType");
      mc_channel_number =         eventInfo->mcChannelNumber();
    } 
}

               
            


MyTagAndProbeAnalysis :: MyTagAndProbeAnalysis ()
{
  // Here you put any code for the base initialization of variables,
  // e.g. initialize all pointers to 0.  Note that you should only put
  // the most basic initialization here, since this method will be
  // called on both the submission and the worker node.  Most of your
  // initialization code will go into histInitialize() and
  // initialize().
}



EL::StatusCode MyTagAndProbeAnalysis :: setupJob (EL::Job& job)
{
  // Here you put code that sets up the job on the submission object
  // so that it is ready to work with your algorithm, e.g. you can
  // request the D3PDReader service or add output files.  Any code you
  // put here could instead also go into the submission script.  The
  // sole advantage of putting it here is that it gets automatically
  // activated/deactivated when you add/remove the algorithm from your
  // job, which may or may not be of value to you.

	// let's initialize the algorithm to use the xAODRootAccess package
	job.useXAOD ();
    //job.options()->setString ( EL::Job::optXaodAccessMode , EL::Job::optXaodAccessMode_athena );
	ANA_CHECK_SET_TYPE (EL::StatusCode); // set type of return code you are expecting (add to top of each function once)
  	ANA_CHECK(xAOD::Init());

	// tell EventLoop about our output xAOD:
	EL::OutputStream out ("outputLabel", "xAOD");
	job.outputAdd (out);

  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyTagAndProbeAnalysis :: histInitialize ()
{
  // Here you do everything that needs to be done at the very
  // beginning on each worker node, e.g. create histograms and output
  // trees.  This method gets called before any input files are
  // connected.

  // get the output file, create a new TTree and connect it to that output
  // define what braches will go in that tree
  ANA_CHECK_SET_TYPE (EL::StatusCode); // set type of return code you are expecting (add to top of each function once)

  TFile *outputFile = wk()->getOutputFile (outputName);
  
  tree = new TTree ("tree", "tree");
  tree->SetDirectory (outputFile);

  tree->Branch( "runNumber", &runNumber);
  tree->Branch( "EventNumber", &EventNumber);
  tree->Branch( "actualInteractionsPerCrossing", &actualInteractionsPerCrossing);
  tree->Branch( "averageInteractionsPerCrossing", &averageInteractionsPerCrossing);
  
  tree->Branch( "mc_channel_number" , &mc_channel_number );
  tree->Branch( "isMC" , &isMC );
  tree->Branch( "isSignal" , &isSignal );
    
  tree->Branch( "Z_m" , &Z_m );
    
  // Calo variables
  tree->Branch( "p_Rhad1" , &p_Rhad1 ); 
  tree->Branch( "p_Rhad" , &p_Rhad );
  tree->Branch( "p_f3" , &p_f3 );
  tree->Branch( "p_weta2" , &p_weta2 );
  tree->Branch( "p_Rphi" , &p_Rphi );
  tree->Branch( "p_Reta" , &p_Reta );
  tree->Branch( "p_Eratio" , &p_Eratio );
  tree->Branch( "p_f1" , &p_f1 );

  // ID variables
  tree->Branch( "p_TRTPID" , &p_eProbHT );

  // Track/Match
  tree->Branch( "p_numberOfInnermostPixelHits" , &p_numberOfInnermostPixelHits );
  tree->Branch( "p_numberOfPixelHits" , &p_numberOfPixelHits ); 
  tree->Branch( "p_numberOfSCTHits" , &p_numberOfSCTHits );
  tree->Branch( "p_numberOfTRTHits" , &p_numberOfTRTHits );
  tree->Branch( "p_TRTTrackOccupancy" , &p_TRTTrackOccupancy );
  tree->Branch( "p_numberOfTRTXenonHits" , &p_numberOfTRTXenonHits );

  tree->Branch( "p_d0" , &p_d0 );
  tree->Branch( "p_sigmad0" , &p_sigmad0 );
  tree->Branch( "p_dPOverP" , &p_dPOverP );
  tree->Branch( "p_deltaEta1" , &p_deltaEta1 );
  tree->Branch( "p_deltaPhiRescaled2" , &p_deltaPhiRescaled2 ); 

  //ISO variables
  tree->Branch( "p_etcone20", &p_etcone20 );
  tree->Branch( "p_etcone30", &p_etcone30 );
  tree->Branch( "p_etcone40", &p_etcone40 );
  tree->Branch( "p_etcone20ptCorrection", &p_etcone20ptCorrection );
  tree->Branch( "p_etcone30ptCorrection", &p_etcone30ptCorrection );
  tree->Branch( "p_etcone40ptCorrection", &p_etcone40ptCorrection );
  tree->Branch( "p_ptcone20", &p_ptcone20 );
  tree->Branch( "p_ptcone30", &p_ptcone30 );
  tree->Branch( "p_ptcone40", &p_ptcone40 );
  tree->Branch( "p_ptPU30", &p_ptPU30 );
  tree->Branch( "p_vertex", &p_vertex );


  // Additional variables:
  tree->Branch("pX_E7x7_Lr2", &pX_E7x7_Lr2);
  tree->Branch("pX_E7x7_Lr3", &pX_E7x7_Lr3);
  tree->Branch("pX_E_Lr0_HiG", &pX_E_Lr0_HiG);
  tree->Branch("pX_E_Lr0_LowG", &pX_E_Lr0_LowG);
  tree->Branch("pX_E_Lr0_MedG", &pX_E_Lr0_MedG);
  tree->Branch("pX_E_Lr1_HiG", &pX_E_Lr1_HiG);
  tree->Branch("pX_E_Lr1_LowG", &pX_E_Lr1_LowG);
  tree->Branch("pX_E_Lr1_MedG", &pX_E_Lr1_MedG);
  tree->Branch("pX_E_Lr2_HiG", &pX_E_Lr2_HiG);
  tree->Branch("pX_E_Lr2_LowG", &pX_E_Lr2_LowG);
  tree->Branch("pX_E_Lr2_MedG", &pX_E_Lr2_MedG);
  tree->Branch("pX_E_Lr3_HiG", &pX_E_Lr3_HiG);
  tree->Branch("pX_E_Lr3_LowG", &pX_E_Lr3_LowG);
  tree->Branch("pX_E_Lr3_MedG", &pX_E_Lr3_MedG);
  tree->Branch("pX_Eratio", &pX_Eratio);
  tree->Branch("pX_LHLoose", &pX_LHLoose);
  tree->Branch("pX_LHMedium", &pX_LHMedium);
  tree->Branch("pX_pt", &pX_pt);
  tree->Branch("pX_LHTight", &pX_LHTight);
  tree->Branch("pX_eta", &pX_eta);
  tree->Branch("pX_LHValue", &pX_LHValue);
  tree->Branch("pX_phi", &pX_phi);
  tree->Branch("pX_Loose", &pX_Loose);
  tree->Branch("pX_m", &pX_m);
  tree->Branch("pX_Medium", &pX_Medium);
  tree->Branch("pX_MultiLepton", &pX_MultiLepton);
  tree->Branch("pX_OQ", &pX_OQ);
  tree->Branch("pX_PromptLeptonIso_DRlj", &pX_PromptLeptonIso_DRlj);
  tree->Branch("pX_PromptLeptonIso_EtTopoCone30Rel", &pX_PromptLeptonIso_EtTopoCone30Rel);
  tree->Branch("pX_PromptLeptonIso_LepJetPtFrac", &pX_PromptLeptonIso_LepJetPtFrac);
  tree->Branch("pX_PromptLeptonIso_PtVarCone30Rel", &pX_PromptLeptonIso_PtVarCone30Rel);
  tree->Branch("pX_PromptLeptonIso_TagWeight", &pX_PromptLeptonIso_TagWeight);
  tree->Branch("pX_PromptLeptonIso_TrackJetNTrack", &pX_PromptLeptonIso_TrackJetNTrack);
  tree->Branch("pX_PromptLeptonIso_ip2", &pX_PromptLeptonIso_ip2);
  tree->Branch("pX_PromptLeptonIso_ip3", &pX_PromptLeptonIso_ip3);
  tree->Branch("pX_PromptLeptonIso_sv1_jf_ntrkv", &pX_PromptLeptonIso_sv1_jf_ntrkv);
  tree->Branch("pX_PromptLeptonNoIso_DRlj", &pX_PromptLeptonNoIso_DRlj);
  tree->Branch("pX_PromptLeptonNoIso_LepJetPtFrac", &pX_PromptLeptonNoIso_LepJetPtFrac);
  tree->Branch("pX_PromptLeptonNoIso_TagWeight", &pX_PromptLeptonNoIso_TagWeight);
  tree->Branch("pX_PromptLeptonNoIso_TrackJetNTrack", &pX_PromptLeptonNoIso_TrackJetNTrack);
  tree->Branch("pX_PromptLeptonNoIso_ip2", &pX_PromptLeptonNoIso_ip2);
  tree->Branch("pX_PromptLeptonNoIso_ip3", &pX_PromptLeptonNoIso_ip3);
  tree->Branch("pX_PromptLeptonNoIso_sv1_jf_ntrkv", &pX_PromptLeptonNoIso_sv1_jf_ntrkv);
  tree->Branch("pX_PromptLepton_DRlj", &pX_PromptLepton_DRlj);
  tree->Branch("pX_PromptLepton_EtTopoCone20Rel", &pX_PromptLepton_EtTopoCone20Rel);
  tree->Branch("pX_PromptLepton_TagWeight", &pX_PromptLepton_TagWeight);
  tree->Branch("pX_PromptLepton_TrackJetNTrack", &pX_PromptLepton_TrackJetNTrack);
  tree->Branch("pX_PromptLepton_ip2", &pX_PromptLepton_ip2);
  tree->Branch("pX_PromptLepton_ip2_cu", &pX_PromptLepton_ip2_cu);
  tree->Branch("pX_PromptLepton_ip3", &pX_PromptLepton_ip3);
  tree->Branch("pX_PromptLepton_ip3_cu", &pX_PromptLepton_ip3_cu);
  tree->Branch("pX_PromptLepton_jf_ntrkv", &pX_PromptLepton_jf_ntrkv);
  tree->Branch("pX_PromptLepton_sv1_ntkv", &pX_PromptLepton_sv1_ntkv);
  tree->Branch("pX_Reta", &pX_Reta);
  tree->Branch("pX_Rhad", &pX_Rhad);
  tree->Branch("pX_Rhad1", &pX_Rhad1);
  tree->Branch("pX_Rphi", &pX_Rphi);
  tree->Branch("pX_Tight", &pX_Tight);
  tree->Branch("pX_ambiguityType", &pX_ambiguityType);
  tree->Branch("pX_asy1", &pX_asy1);
  tree->Branch("pX_author", &pX_author);
  tree->Branch("pX_barys1", &pX_barys1);
  tree->Branch("pX_charge", &pX_charge);
  tree->Branch("pX_core57cellsEnergyCorrection", &pX_core57cellsEnergyCorrection);
  tree->Branch("pX_deltaEta0", &pX_deltaEta0);
  tree->Branch("pX_deltaEta1", &pX_deltaEta1);
  tree->Branch("pX_deltaEta2", &pX_deltaEta2);
  tree->Branch("pX_deltaEta3", &pX_deltaEta3);
  tree->Branch("pX_deltaPhi0", &pX_deltaPhi0);
  tree->Branch("pX_deltaPhi1", &pX_deltaPhi1);
  tree->Branch("pX_deltaPhi2", &pX_deltaPhi2);
  tree->Branch("pX_deltaPhi3", &pX_deltaPhi3);
  tree->Branch("pX_deltaPhiFromLastMeasurement", &pX_deltaPhiFromLastMeasurement);
  tree->Branch("pX_deltaPhiRescaled0", &pX_deltaPhiRescaled0);
  tree->Branch("pX_deltaPhiRescaled1", &pX_deltaPhiRescaled1);
  tree->Branch("pX_deltaPhiRescaled2", &pX_deltaPhiRescaled2);
  tree->Branch("pX_deltaPhiRescaled3", &pX_deltaPhiRescaled3);
  tree->Branch("pX_e1152", &pX_e1152);
  tree->Branch("pX_e132", &pX_e132);
  tree->Branch("pX_e235", &pX_e235);
  tree->Branch("pX_e255", &pX_e255);
  tree->Branch("pX_e2ts1", &pX_e2ts1);
  tree->Branch("pX_ecore", &pX_ecore);
  tree->Branch("pX_emins1", &pX_emins1);
  tree->Branch("pX_etcone20", &pX_etcone20);
  tree->Branch("pX_etcone20ptCorrection", &pX_etcone20ptCorrection);
  tree->Branch("pX_etcone30", &pX_etcone30);
  tree->Branch("pX_etcone30ptCorrection", &pX_etcone30ptCorrection);
  tree->Branch("pX_etcone40", &pX_etcone40);
  tree->Branch("pX_etcone40ptCorrection", &pX_etcone40ptCorrection);
  tree->Branch("pX_etconeCorrBitset", &pX_etconeCorrBitset);
  tree->Branch("pX_ethad", &pX_ethad);
  tree->Branch("pX_ethad1", &pX_ethad1);
  tree->Branch("pX_f1", &pX_f1);
  tree->Branch("pX_f1core", &pX_f1core);
  tree->Branch("pX_f3", &pX_f3);
  tree->Branch("pX_f3core", &pX_f3core);
  tree->Branch("pX_maxEcell_energy", &pX_maxEcell_energy);
  tree->Branch("pX_maxEcell_gain", &pX_maxEcell_gain);
  //tree->Branch("pX_maxEcell_onlId", &pX_maxEcell_onlId);
  tree->Branch("pX_maxEcell_time", &pX_maxEcell_time);
  tree->Branch("pX_maxEcell_x", &pX_maxEcell_x);
  tree->Branch("pX_maxEcell_y", &pX_maxEcell_y);
  tree->Branch("pX_maxEcell_z", &pX_maxEcell_z);
  tree->Branch("pX_nCells_Lr0_HiG", &pX_nCells_Lr0_HiG);
  tree->Branch("pX_nCells_Lr0_LowG", &pX_nCells_Lr0_LowG);
  tree->Branch("pX_nCells_Lr0_MedG", &pX_nCells_Lr0_MedG);
  tree->Branch("pX_nCells_Lr1_HiG", &pX_nCells_Lr1_HiG);
  tree->Branch("pX_nCells_Lr1_LowG", &pX_nCells_Lr1_LowG);
  tree->Branch("pX_nCells_Lr1_MedG", &pX_nCells_Lr1_MedG);
  tree->Branch("pX_nCells_Lr2_HiG", &pX_nCells_Lr2_HiG);
  tree->Branch("pX_nCells_Lr2_LowG", &pX_nCells_Lr2_LowG);
  tree->Branch("pX_nCells_Lr2_MedG", &pX_nCells_Lr2_MedG);
  tree->Branch("pX_nCells_Lr3_HiG", &pX_nCells_Lr3_HiG);
  tree->Branch("pX_nCells_Lr3_LowG", &pX_nCells_Lr3_LowG);
  tree->Branch("pX_nCells_Lr3_MedG", &pX_nCells_Lr3_MedG);
  tree->Branch("pX_neflowisol20", &pX_neflowisol20);
  tree->Branch("pX_neflowisol20ptCorrection", &pX_neflowisol20ptCorrection);
  tree->Branch("pX_neflowisol30", &pX_neflowisol30);
  tree->Branch("pX_neflowisol30ptCorrection", &pX_neflowisol30ptCorrection);
  tree->Branch("pX_neflowisol40", &pX_neflowisol40);
  tree->Branch("pX_neflowisol40ptCorrection", &pX_neflowisol40ptCorrection);
  tree->Branch("pX_neflowisolCorrBitset", &pX_neflowisolCorrBitset);
  tree->Branch("pX_neflowisolcoreConeEnergyCorrection", &pX_neflowisolcoreConeEnergyCorrection);
  tree->Branch("pX_pos", &pX_pos);
  tree->Branch("pX_pos7", &pX_pos7);
  tree->Branch("pX_poscs1", &pX_poscs1);
  tree->Branch("pX_poscs2", &pX_poscs2);
  tree->Branch("pX_ptcone20", &pX_ptcone20);
  tree->Branch("pX_ptcone30", &pX_ptcone30);
  tree->Branch("pX_ptcone40", &pX_ptcone40);
  tree->Branch("pX_ptconeCorrBitset", &pX_ptconeCorrBitset);
  tree->Branch("pX_ptconecoreTrackPtrCorrection", &pX_ptconecoreTrackPtrCorrection);
  tree->Branch("pX_ptvarcone20", &pX_ptvarcone20);
  tree->Branch("pX_ptvarcone30", &pX_ptvarcone30);
  tree->Branch("pX_ptvarcone40", &pX_ptvarcone40);
  tree->Branch("pX_r33over37allcalo", &pX_r33over37allcalo);
  tree->Branch("pX_topoetcone20", &pX_topoetcone20);
  tree->Branch("pX_topoetcone20ptCorrection", &pX_topoetcone20ptCorrection);
  tree->Branch("pX_topoetcone30", &pX_topoetcone30);
  tree->Branch("pX_topoetcone30ptCorrection", &pX_topoetcone30ptCorrection);
  tree->Branch("pX_topoetcone40", &pX_topoetcone40);
  tree->Branch("pX_topoetcone40ptCorrection", &pX_topoetcone40ptCorrection);
  tree->Branch("pX_topoetconeCorrBitset", &pX_topoetconeCorrBitset);
  tree->Branch("pX_topoetconecoreConeEnergyCorrection", &pX_topoetconecoreConeEnergyCorrection);
  tree->Branch("pX_topoetconecoreConeSCEnergyCorrection", &pX_topoetconecoreConeSCEnergyCorrection);
  tree->Branch("pX_weta1", &pX_weta1);
  tree->Branch("pX_widths1", &pX_widths1);
  tree->Branch("pX_widths2", &pX_widths2);
  tree->Branch("pX_wtots1", &pX_wtots1);
  tree->Branch("pX_e233", &pX_e233);
  tree->Branch("pX_e237", &pX_e237);
  tree->Branch("pX_e277", &pX_e277);
  tree->Branch("pX_e2tsts1", &pX_e2tsts1);
  tree->Branch("pX_ehad1", &pX_ehad1);
  tree->Branch("pX_emaxs1", &pX_emaxs1);
  tree->Branch("pX_fracs1", &pX_fracs1);
  tree->Branch("pX_weta2", &pX_weta2);
  tree->Branch("pX_DFCommonElectronsIsEMLoose", &pX_DFCommonElectronsIsEMLoose);
  tree->Branch("pX_DFCommonElectronsIsEMLooseIsEMValue", &pX_DFCommonElectronsIsEMLooseIsEMValue);
  tree->Branch("pX_DFCommonElectronsIsEMMedium", &pX_DFCommonElectronsIsEMMedium);
  tree->Branch("pX_DFCommonElectronsIsEMMediumIsEMValue", &pX_DFCommonElectronsIsEMMediumIsEMValue);
  tree->Branch("pX_DFCommonElectronsIsEMTight", &pX_DFCommonElectronsIsEMTight);
  tree->Branch("pX_DFCommonElectronsIsEMTightIsEMValue", &pX_DFCommonElectronsIsEMTightIsEMValue);
  tree->Branch("pX_DFCommonElectronsLHLoose", &pX_DFCommonElectronsLHLoose);
  tree->Branch("pX_DFCommonElectronsLHMedium", &pX_DFCommonElectronsLHMedium);
  tree->Branch("pX_DFCommonElectronsLHTight", &pX_DFCommonElectronsLHTight);
  tree->Branch("pX_DFCommonElectronsLHVeryLoose", &pX_DFCommonElectronsLHVeryLoose);
  tree->Branch("pX_DFCommonElectronsML", &pX_DFCommonElectronsML);
  tree->Branch("pX_DeltaE", &pX_DeltaE);
  tree->Branch("pX_E3x5_Lr0", &pX_E3x5_Lr0);
  tree->Branch("pX_E3x5_Lr1", &pX_E3x5_Lr1);
  tree->Branch("pX_E3x5_Lr2", &pX_E3x5_Lr2);
  tree->Branch("pX_E3x5_Lr3", &pX_E3x5_Lr3);
  tree->Branch("pX_E5x7_Lr0", &pX_E5x7_Lr0);
  tree->Branch("pX_E5x7_Lr1", &pX_E5x7_Lr1);
  tree->Branch("pX_E5x7_Lr2", &pX_E5x7_Lr2);
  tree->Branch("pX_E5x7_Lr3", &pX_E5x7_Lr3);
  tree->Branch("pX_E7x11_Lr0", &pX_E7x11_Lr0);
  tree->Branch("pX_E7x11_Lr1", &pX_E7x11_Lr1);
  tree->Branch("pX_E7x11_Lr2", &pX_E7x11_Lr2);
  tree->Branch("pX_E7x11_Lr3", &pX_E7x11_Lr3);
  tree->Branch("pX_E7x7_Lr0", &pX_E7x7_Lr0);
  tree->Branch("pX_E7x7_Lr1", &pX_E7x7_Lr1);

  tree->Branch ("pX_energy_Cells"	, &pX_energy_Cells 		);
  tree->Branch ("pX_gain_Cells"	, &pX_gain_Cells 		);
  tree->Branch ("pX_provenance_Cells"	, &pX_provenance_Cells 	);
  tree->Branch ("pX_sampling_Cells"	, &pX_sampling_Cells 		);
  tree->Branch ("pX_time_Cells"	, &pX_time_Cells 		);
  tree->Branch ("pX_x_Cells"		, &pX_x_Cells 		);
  tree->Branch ("pX_dx_Cells"		, &pX_dx_Cells 		);
  tree->Branch ("pX_y_Cells"		, &pX_y_Cells 		);
  tree->Branch ("pX_dy_Cells"		, &pX_dy_Cells 		);
  tree->Branch ("pX_z_Cells"		, &pX_z_Cells 		);
  tree->Branch ("pX_dz_Cells"		, &pX_dz_Cells 		);
  tree->Branch ("pX_eta_Cells"	, &pX_eta_Cells 		);
  tree->Branch ("pX_deta_Cells"	, &pX_deta_Cells 		);
  tree->Branch ("pX_etasize_Cells"	, &pX_etasize_Cells 		);
  tree->Branch ("pX_phi_Cells"	, &pX_phi_Cells 		);
  tree->Branch ("pX_dphi_Cells"	, &pX_dphi_Cells 		);
  tree->Branch ("pX_phisize_Cells"	, &pX_phisize_Cells 		);


  /*
  tree->Branch("pX_E3x5_Lr0", &pX_E3x5_Lr0);
  tree->Branch("pX_E3x5_Lr1", &pX_E3x5_Lr1);
  tree->Branch("pX_E3x5_Lr2", &pX_E3x5_Lr2);
  tree->Branch("pX_E3x5_Lr3", &pX_E3x5_Lr3);
  tree->Branch("pX_E5x7_Lr0", &pX_E5x7_Lr0);
  tree->Branch("pX_E5x7_Lr1", &pX_E5x7_Lr1);
  tree->Branch("pX_E5x7_Lr2", &pX_E5x7_Lr2);
  tree->Branch("pX_E5x7_Lr3", &pX_E5x7_Lr3);
  tree->Branch("pX_E7x11_Lr0", &pX_E7x11_Lr0);
  tree->Branch("pX_E7x11_Lr1", &pX_E7x11_Lr1);
  tree->Branch("pX_E7x11_Lr2", &pX_E7x11_Lr2);
  tree->Branch("pX_E7x11_Lr3", &pX_E7x11_Lr3);
  tree->Branch("pX_E7x7_Lr0", &pX_E7x7_Lr0);
  tree->Branch("pX_E7x7_Lr1", &pX_E7x7_Lr1);
  tree->Branch("pX_E7x7_Lr2", &pX_E7x7_Lr2);
  tree->Branch("pX_E7x7_Lr3", &pX_E7x7_Lr3);
  tree->Branch("pX_E_Lr0_HiG", &pX_E_Lr0_HiG);
  tree->Branch("pX_E_Lr0_LowG", &pX_E_Lr0_LowG);
  tree->Branch("pX_E_Lr0_MedG", &pX_E_Lr0_MedG);
  tree->Branch("pX_E_Lr1_HiG", &pX_E_Lr1_HiG);
  tree->Branch("pX_E_Lr1_LowG", &pX_E_Lr1_LowG);
  tree->Branch("pX_E_Lr1_MedG", &pX_E_Lr1_MedG);
  tree->Branch("pX_E_Lr2_HiG", &pX_E_Lr2_HiG);
  tree->Branch("pX_E_Lr2_LowG", &pX_E_Lr2_LowG);
  tree->Branch("pX_E_Lr2_MedG", &pX_E_Lr2_MedG);
  tree->Branch("pX_E_Lr3_HiG", &pX_E_Lr3_HiG);
  tree->Branch("pX_E_Lr3_LowG", &pX_E_Lr3_LowG);
  tree->Branch("pX_pt", &pX_pt);
  tree->Branch("pX_E_Lr3_MedG", &pX_E_Lr3_MedG);
  tree->Branch("pX_eta", &pX_eta);
  tree->Branch("pX_phi", &pX_phi);
  tree->Branch("pX_Eratio", &pX_Eratio);
  tree->Branch("pX_LHLoose", &pX_LHLoose);
  tree->Branch("pX_LHMedium", &pX_LHMedium);
  tree->Branch("pX_LHTight", &pX_LHTight);
  tree->Branch("pX_LHValue", &pX_LHValue);
  tree->Branch("pX_Loose", &pX_Loose);
  tree->Branch("pX_Medium", &pX_Medium);
  tree->Branch("pX_MultiLepton", &pX_MultiLepton);
  tree->Branch("pX_OQ", &pX_OQ);
  tree->Branch("pX_PromptLepton_DRlj", &pX_PromptLepton_DRlj);
  tree->Branch("pX_PromptLepton_EtTopoCone20Rel", &pX_PromptLepton_EtTopoCone20Rel);
  tree->Branch("pX_PromptLepton_TagWeight", &pX_PromptLepton_TagWeight);
  tree->Branch("pX_PromptLepton_TrackJetNTrack", &pX_PromptLepton_TrackJetNTrack);
  tree->Branch("pX_PromptLepton_ip2", &pX_PromptLepton_ip2);
  tree->Branch("pX_PromptLepton_ip2_cu", &pX_PromptLepton_ip2_cu);
  tree->Branch("pX_PromptLepton_ip3", &pX_PromptLepton_ip3);
  tree->Branch("pX_PromptLepton_ip3_cu", &pX_PromptLepton_ip3_cu);
  tree->Branch("pX_PromptLepton_jf_ntrkv", &pX_PromptLepton_jf_ntrkv);
  tree->Branch("pX_PromptLepton_sv1_ntkv", &pX_PromptLepton_sv1_ntkv);
  tree->Branch("pX_Reta", &pX_Reta);
  tree->Branch("pX_Rhad", &pX_Rhad);
  tree->Branch("pX_Rhad1", &pX_Rhad1);
  tree->Branch("pX_Rphi", &pX_Rphi);
  tree->Branch("pX_Tight", &pX_Tight);
  tree->Branch("pX_asy1", &pX_asy1);
  tree->Branch("pX_author", &pX_author);
  tree->Branch("pX_barys1", &pX_barys1);
  tree->Branch("pX_charge", &pX_charge);
  tree->Branch("pX_core57cellsEnergyCorrection", &pX_core57cellsEnergyCorrection);
  tree->Branch("pX_deltaEta0", &pX_deltaEta0);
  tree->Branch("pX_deltaEta1", &pX_deltaEta1);
  tree->Branch("pX_deltaEta2", &pX_deltaEta2);
  tree->Branch("pX_deltaEta3", &pX_deltaEta3);
  tree->Branch("pX_deltaPhi0", &pX_deltaPhi0);
  tree->Branch("pX_deltaPhi1", &pX_deltaPhi1);
  tree->Branch("pX_deltaPhi2", &pX_deltaPhi2);
  tree->Branch("pX_deltaPhi3", &pX_deltaPhi3);
  tree->Branch("pX_deltaPhiFromLastMeasurement", &pX_deltaPhiFromLastMeasurement);
  tree->Branch("pX_deltaPhiRescaled0", &pX_deltaPhiRescaled0);
  tree->Branch("pX_deltaPhiRescaled1", &pX_deltaPhiRescaled1);
  tree->Branch("pX_deltaPhiRescaled2", &pX_deltaPhiRescaled2);
  tree->Branch("pX_deltaPhiRescaled3", &pX_deltaPhiRescaled3);
  tree->Branch("pX_e011", &pX_e011);
  tree->Branch("pX_e033", &pX_e033);
  tree->Branch("pX_e1152", &pX_e1152);
  tree->Branch("pX_e132", &pX_e132);
  tree->Branch("pX_e233", &pX_e233);
  tree->Branch("pX_e235", &pX_e235);
  tree->Branch("pX_e237", &pX_e237);
  tree->Branch("pX_e255", &pX_e255);
  tree->Branch("pX_e277", &pX_e277);
  tree->Branch("pX_e2ts1", &pX_e2ts1);
  tree->Branch("pX_e2tsts1", &pX_e2tsts1);
  tree->Branch("pX_e333", &pX_e333);
  tree->Branch("pX_e335", &pX_e335);
  tree->Branch("pX_e337", &pX_e337);
  tree->Branch("pX_e377", &pX_e377);
  tree->Branch("pX_ecore", &pX_ecore);
  tree->Branch("pX_ehad1", &pX_ehad1);
  tree->Branch("pX_emaxs1", &pX_emaxs1);
  tree->Branch("pX_emins1", &pX_emins1);
  tree->Branch("pX_etcone20", &pX_etcone20);
  tree->Branch("pX_etcone20ptCorrection", &pX_etcone20ptCorrection);
  tree->Branch("pX_etcone30", &pX_etcone30);
  tree->Branch("pX_etcone30ptCorrection", &pX_etcone30ptCorrection);
  tree->Branch("pX_etcone40", &pX_etcone40);
  tree->Branch("pX_etcone40ptCorrection", &pX_etcone40ptCorrection);
  tree->Branch("pX_etconeCorrBitset", &pX_etconeCorrBitset);
  tree->Branch("pX_ethad", &pX_ethad);
  tree->Branch("pX_ethad1", &pX_ethad1);
  tree->Branch("pX_f1", &pX_f1);
  tree->Branch("pX_f1core", &pX_f1core);
  tree->Branch("pX_f3", &pX_f3);
  tree->Branch("pX_f3core", &pX_f3core);
  tree->Branch("pX_fracs1", &pX_fracs1);
  tree->Branch("pX_isEMLHLoose", &pX_isEMLHLoose);
  tree->Branch("pX_isEMLHMedium", &pX_isEMLHMedium);
  tree->Branch("pX_isEMLHTight", &pX_isEMLHTight);
  tree->Branch("pX_isEMLoose", &pX_isEMLoose);
  tree->Branch("pX_isEMMedium", &pX_isEMMedium);
  tree->Branch("pX_isEMMultiLepton", &pX_isEMMultiLepton);
  tree->Branch("pX_isEMTight", &pX_isEMTight);
  tree->Branch("pX_maxEcell_energy", &pX_maxEcell_energy);
  tree->Branch("pX_maxEcell_gain", &pX_maxEcell_gain);
  // tree->Branch("pX_maxEcell_onlId", &pX_maxEcell_onlId);
  tree->Branch("pX_maxEcell_time", &pX_maxEcell_time);
  tree->Branch("pX_maxEcell_x", &pX_maxEcell_x);
  tree->Branch("pX_maxEcell_y", &pX_maxEcell_y);
  tree->Branch("pX_maxEcell_z", &pX_maxEcell_z);
  tree->Branch("pX_nCells_Lr0_HiG", &pX_nCells_Lr0_HiG);
  tree->Branch("pX_nCells_Lr0_LowG", &pX_nCells_Lr0_LowG);
  tree->Branch("pX_nCells_Lr0_MedG", &pX_nCells_Lr0_MedG);
  tree->Branch("pX_nCells_Lr1_HiG", &pX_nCells_Lr1_HiG);
  tree->Branch("pX_nCells_Lr1_LowG", &pX_nCells_Lr1_LowG);
  tree->Branch("pX_nCells_Lr1_MedG", &pX_nCells_Lr1_MedG);
  tree->Branch("pX_nCells_Lr2_HiG", &pX_nCells_Lr2_HiG);
  tree->Branch("pX_nCells_Lr2_LowG", &pX_nCells_Lr2_LowG);
  tree->Branch("pX_nCells_Lr2_MedG", &pX_nCells_Lr2_MedG);
  tree->Branch("pX_nCells_Lr3_HiG", &pX_nCells_Lr3_HiG);
  tree->Branch("pX_nCells_Lr3_LowG", &pX_nCells_Lr3_LowG);
  tree->Branch("pX_nCells_Lr3_MedG", &pX_nCells_Lr3_MedG);
  tree->Branch("pX_neflowisol20", &pX_neflowisol20);
  tree->Branch("pX_neflowisol20ptCorrection", &pX_neflowisol20ptCorrection);
  tree->Branch("pX_neflowisol30", &pX_neflowisol30);
  tree->Branch("pX_neflowisol30ptCorrection", &pX_neflowisol30ptCorrection);
  tree->Branch("pX_neflowisol40", &pX_neflowisol40);
  tree->Branch("pX_neflowisol40ptCorrection", &pX_neflowisol40ptCorrection);
  tree->Branch("pX_neflowisolCorrBitset", &pX_neflowisolCorrBitset);
  tree->Branch("pX_neflowisolcoreConeEnergyCorrection", &pX_neflowisolcoreConeEnergyCorrection);
  tree->Branch("pX_pos", &pX_pos);
  tree->Branch("pX_pos7", &pX_pos7);
  tree->Branch("pX_poscs1", &pX_poscs1);
  tree->Branch("pX_poscs2", &pX_poscs2);
  tree->Branch("pX_ptcone20", &pX_ptcone20);
  tree->Branch("pX_ptcone30", &pX_ptcone30);
  tree->Branch("pX_ptcone40", &pX_ptcone40);
  tree->Branch("pX_ptconeCorrBitset", &pX_ptconeCorrBitset);
  tree->Branch("pX_ptconecoreTrackPtrCorrection", &pX_ptconecoreTrackPtrCorrection);
  tree->Branch("pX_ptvarcone20", &pX_ptvarcone20);
  tree->Branch("pX_ptvarcone30", &pX_ptvarcone30);
  tree->Branch("pX_ptvarcone40", &pX_ptvarcone40);
  tree->Branch("pX_r33over37allcalo", &pX_r33over37allcalo);
  tree->Branch("pX_topoetcone20", &pX_topoetcone20);
  tree->Branch("pX_topoetcone20ptCorrection", &pX_topoetcone20ptCorrection);
  tree->Branch("pX_topoetcone30", &pX_topoetcone30);
  tree->Branch("pX_topoetcone30ptCorrection", &pX_topoetcone30ptCorrection);
  tree->Branch("pX_topoetcone40", &pX_topoetcone40);
  tree->Branch("pX_topoetcone40ptCorrection", &pX_topoetcone40ptCorrection);
  tree->Branch("pX_topoetconeCorrBitset", &pX_topoetconeCorrBitset);
  tree->Branch("pX_topoetconecoreConeEnergyCorrection", &pX_topoetconecoreConeEnergyCorrection);
  tree->Branch("pX_weta1", &pX_weta1);
  tree->Branch("pX_weta2", &pX_weta2);
  tree->Branch("pX_widths1", &pX_widths1);
  tree->Branch("pX_widths2", &pX_widths2);
  tree->Branch("pX_wtots1", &pX_wtots1);
  tree->Branch("pX_DFCommonElectronsIsEMLoose", &pX_DFCommonElectronsIsEMLoose);
  tree->Branch("pX_DFCommonElectronsIsEMLooseIsEMValue", &pX_DFCommonElectronsIsEMLooseIsEMValue);
  tree->Branch("pX_DFCommonElectronsIsEMMedium", &pX_DFCommonElectronsIsEMMedium);
  tree->Branch("pX_DFCommonElectronsIsEMMediumIsEMValue", &pX_DFCommonElectronsIsEMMediumIsEMValue);
  tree->Branch("pX_DFCommonElectronsIsEMTight", &pX_DFCommonElectronsIsEMTight);
  tree->Branch("pX_DFCommonElectronsIsEMTightIsEMValue", &pX_DFCommonElectronsIsEMTightIsEMValue);
  tree->Branch("pX_DFCommonElectronsLHLoose", &pX_DFCommonElectronsLHLoose);
  tree->Branch("pX_DFCommonElectronsLHMedium", &pX_DFCommonElectronsLHMedium);
  tree->Branch("pX_DFCommonElectronsLHTight", &pX_DFCommonElectronsLHTight);
  tree->Branch("pX_DFCommonElectronsLHVeryLoose", &pX_DFCommonElectronsLHVeryLoose);
  tree->Branch("pX_DFCommonElectronsML", &pX_DFCommonElectronsML);
  tree->Branch("pX_DeltaE", &pX_DeltaE);
  */


  // The rest
  // Energy
  tree->Branch( "p_pt_calo", &p_pt_calo);
  tree->Branch( "p_et_calo", &p_et_calo);
  tree->Branch( "p_pt_track", &p_pt_track);
  
  tree->Branch( "p_eta", &p_eta );
  tree->Branch( "p_phi", &p_phi );
  tree->Branch( "p_charge", &p_charge );    
  
  tree->Branch( "p_qOverP" , &p_qOverP );
  tree->Branch( "p_LHValue" , &p_LHValue );
  tree->Branch( "p_TruthType" , &p_TruthType );
    
  if (isSignal){
    // Calo variables
    tree->Branch( "tag_Rhad1" , &tag_Rhad1 ); 
    tree->Branch( "tag_Rhad" , &tag_Rhad );
    tree->Branch( "tag_f3" , &tag_f3 );
    tree->Branch( "tag_weta2" , &tag_weta2 );
    tree->Branch( "tag_Rphi" , &tag_Rphi );
    tree->Branch( "tag_Reta" , &tag_Reta );
    tree->Branch( "tag_Eratio" , &tag_Eratio );
    tree->Branch( "tag_f1" , &tag_f1 );

    // ID variables
    tree->Branch( "tag_TRTPID" , &tag_eProbHT );
    
    // Track/Match
    tree->Branch( "tag_numberOfInnermostPixelHits" , &tag_numberOfInnermostPixelHits );
    tree->Branch( "tag_numberOfPixelHits" , &tag_numberOfPixelHits ); 
    tree->Branch( "tag_numberOfSCTHits" , &tag_numberOfSCTHits );
    tree->Branch( "tag_numberOfTRTHits" , &tag_numberOfTRTHits );
    tree->Branch( "tag_TRTTrackOccupancy" , &tag_TRTTrackOccupancy );
    tree->Branch( "tag_d0" , &tag_d0 );
    tree->Branch( "tag_sigmad0" , &tag_sigmad0 );
    tree->Branch( "tag_dPOverP" , &tag_dPOverP );
    tree->Branch( "tag_deltaEta1" , &tag_deltaEta1 );
    tree->Branch( "tag_deltaPhiRescaled2" , &tag_deltaPhiRescaled2 ); 

    //ISO variables
    tree->Branch( "tag_etcone20", &tag_etcone20 );
    tree->Branch( "tag_etcone30", &tag_etcone30 );
    tree->Branch( "tag_etcone40", &tag_etcone40 );
    tree->Branch( "tag_etcone20ptCorrection", &tag_etcone20ptCorrection );
    tree->Branch( "tag_etcone30ptCorrection", &tag_etcone30ptCorrection );
    tree->Branch( "tag_etcone40ptCorrection", &tag_etcone40ptCorrection );
    tree->Branch( "tag_ptcone20", &tag_ptcone20 );
    tree->Branch( "tag_ptcone30", &tag_ptcone30 );
    tree->Branch( "tag_ptcone40", &tag_ptcone40 );
    tree->Branch( "tag_vertex", &tag_vertex );


    // The rest
    tree->Branch( "tag_pt_calo", &tag_pt_calo);
    tree->Branch( "tag_et_calo", &tag_et_calo);
    tree->Branch( "tag_pt_track", &tag_pt_track);
    
    tree->Branch( "tag_eta", &tag_eta );
    tree->Branch( "tag_phi", &tag_phi );
    tree->Branch( "tag_charge", &tag_charge );    
    
    tree->Branch( "tag_qOverP" , &tag_qOverP );
    tree->Branch( "tag_LHValue" , &tag_LHValue );
    tree->Branch( "tag_TruthType" , &tag_TruthType );
   

    tree->Branch ("tag_energy_Cells"	, &tag_energy_Cells 		);
    tree->Branch ("tag_gain_Cells"	, &tag_gain_Cells 		);
    tree->Branch ("tag_provenance_Cells"	, &tag_provenance_Cells 	);
    tree->Branch ("tag_sampling_Cells"	, &tag_sampling_Cells 		);
    tree->Branch ("tag_time_Cells"	, &tag_time_Cells 		);
    tree->Branch ("tag_x_Cells"		, &tag_x_Cells 		);
    tree->Branch ("tag_dx_Cells"		, &tag_dx_Cells 		);
    tree->Branch ("tag_y_Cells"		, &tag_y_Cells 		);
    tree->Branch ("tag_dy_Cells"		, &tag_dy_Cells 		);
    tree->Branch ("tag_z_Cells"		, &tag_z_Cells 		);
    tree->Branch ("tag_dz_Cells"		, &tag_dz_Cells 		);
    tree->Branch ("tag_eta_Cells"	, &tag_eta_Cells 		);
    tree->Branch ("tag_deta_Cells"	, &tag_deta_Cells 		);
    tree->Branch ("tag_etasize_Cells"	, &tag_etasize_Cells 		);
    tree->Branch ("tag_phi_Cells"	, &tag_phi_Cells 		);
    tree->Branch ("tag_dphi_Cells"	, &tag_dphi_Cells 		);
    tree->Branch ("tag_phisize_Cells"	, &tag_phisize_Cells 		);
 

 
    // Z stuff
    tree->Branch( "Z_m_all" , &Z_m_all );
    tree->Branch( "Z_pt" , &Z_pt );
    tree->Branch( "Z_eta" , &Z_eta );
    tree->Branch( "Z_phi" , &Z_phi );
  }

  Hist_Probe = new TH1F("Hist_Probe" , "Hist_Probe" , 11 , -0.5 , 10.5) ;
  Hist_Tag = new TH1F("Hist_Tag" , "Hist_Tag" , 11 , -0.5 , 10.5) ;
  Hist_Bkg = new TH1F("Hist_Bkg" , "Hist_Bkg" , 11 , -0.5 , 10.5) ;
  Hist_Z = new TH1F("Hist_Z" , "Hist_Z" , 11 , -0.5 , 10.5) ;

  // Z mass for all and selected candidate pairs:
  Hist_ZmassAll = new TH1F("Hist_ZmassAll" , "Hist_ZmassAll" , 2000, 0.0, 200.0) ;
  Hist_ZmassSel = new TH1F("Hist_ZmassSel" , "Hist_ZmassSel" , 2000, 0.0, 200.0) ;

  Hist_Bkg->GetXaxis()->SetBinLabel(1 , "Event candidates" ) ;
  Hist_Bkg->GetXaxis()->SetBinLabel(2 , "LAr Cut" ) ;
  Hist_Bkg->GetXaxis()->SetBinLabel(3 , "GRL Cut" ) ;
  Hist_Bkg->GetXaxis()->SetBinLabel(4 , "Nvtx > 0" ) ;
  Hist_Bkg->GetXaxis()->SetBinLabel(5 , "MET < 25 GeV" ) ;
  Hist_Bkg->GetXaxis()->SetBinLabel(6 , "Particle candidates" ) ;
  Hist_Bkg->GetXaxis()->SetBinLabel(7 , "Eta < 2.47" ) ;
  Hist_Bkg->GetXaxis()->SetBinLabel(8 , "Pt > 14.5 GeV" ) ;
  Hist_Bkg->GetXaxis()->SetBinLabel(9 , "Object quality" ) ;
  Hist_Bkg->GetXaxis()->SetBinLabel(10 , "W veto (mT < 40 GeV)" ) ;
  Hist_Bkg->GetXaxis()->SetBinLabel(11 , "Z veto (+- 20 GeV)" ) ;
  
  Hist_Probe->GetXaxis()->SetBinLabel(1 , "Event candidates" ) ;
  Hist_Probe->GetXaxis()->SetBinLabel(2 , "LAr Cut" ) ;
  Hist_Probe->GetXaxis()->SetBinLabel(3 , "GRL Cut" ) ;
  Hist_Probe->GetXaxis()->SetBinLabel(4 , "Nvtx > 0" ) ;
  Hist_Probe->GetXaxis()->SetBinLabel(5 , "Particle candidates" ) ;
  Hist_Probe->GetXaxis()->SetBinLabel(6 , "pt > 14.5 GeV" ) ;
  
  Hist_Tag->GetXaxis()->SetBinLabel(1 , "Event candidates" ) ;
  Hist_Tag->GetXaxis()->SetBinLabel(2 , "LAr Cut" ) ;
  Hist_Tag->GetXaxis()->SetBinLabel(3 , "GRL Cut" ) ;
  Hist_Tag->GetXaxis()->SetBinLabel(4 , "Nvtx > 0" ) ;
  Hist_Tag->GetXaxis()->SetBinLabel(5 , "Particle candidates" ) ;
  Hist_Tag->GetXaxis()->SetBinLabel(6 , "pt < 24.5 GeV && LHTight" ) ;
  Hist_Tag->GetXaxis()->SetBinLabel(7 , "Iso selection tool" ) ;
  Hist_Tag->GetXaxis()->SetBinLabel(8 , "No Crack (1.37 - 1.52)" ) ;
  Hist_Tag->GetXaxis()->SetBinLabel(9 , "HLT_e26_lhtight_nod0_ivarloose , 0.07" ) ;
  
  Hist_Z->GetXaxis()->SetBinLabel(1 , "Z candidates" ) ;
  Hist_Z->GetXaxis()->SetBinLabel(2 , "Opposite charge" ) ;
  Hist_Z->GetXaxis()->SetBinLabel(3 , "Zm +- 10 GeV" ) ;
  Hist_Z->GetXaxis()->SetBinLabel(4 , "Z candidates with T&P <-> P&T" ) ;
  Hist_Z->GetXaxis()->SetBinLabel(5 , "Only one Z candidate without T&P <-> P&T" ) ;
  Hist_Z->GetXaxis()->SetBinLabel(6 , "Check sum of 2 previous" ) ;
  

  Hist_CutTagCandidates = new TH1F("Hist_CutTagCandidates" , "Hist_CutTagCandidates" , 10 , -0.5 , 9.5) ;
  Hist_CutProbeCandidates = new TH1F("Hist_CutProbeCandidates" , "Hist_CutProbeCandidates" , 10 , -0.5 , 9.5); 
  Hist_CutZCCCandidates = new TH1F("Hist_CutZCCCandidates" , "Hist_CutZCCCandidates" , 10 , -0.5 , 9.5); 
  Hist_CutZCFCandidates = new TH1F("Hist_CutZCFCandidates" , "Hist_CutZCFCandidates" , 10 , -0.5 , 9.5); 
  Hist_CutZGoodCandidates = new TH1F("Hist_CutZGoodCandidates" , "Hist_CutZGoodCandidates" , 10 , -0.5 , 9.5); 
  Hist_ZDoublePair = new TH1F("Hist_ZDoublePair" , "Hist_ZDoublePair" , 5 , -0.5 , 4.5); 
  Hist_nZ = new TH1F("Hist_nZ", "Hist_nZ", 37 , -0.5 , 36.5);

  wk()->addOutput (Hist_Probe);
  wk()->addOutput (Hist_Tag);
  wk()->addOutput (Hist_Bkg);
  wk()->addOutput (Hist_Z);

  wk()->addOutput (Hist_ZmassAll);
  wk()->addOutput (Hist_ZmassSel);
  
  wk()->addOutput (Hist_CutTagCandidates);
  wk()->addOutput (Hist_CutProbeCandidates);
  wk()->addOutput (Hist_CutZCCCandidates);
  wk()->addOutput (Hist_CutZCFCandidates);
  wk()->addOutput (Hist_CutZGoodCandidates);
  wk()->addOutput (Hist_ZDoublePair);
  wk()->addOutput (Hist_nZ);
  
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyTagAndProbeAnalysis :: fileExecute ()
{
  // Here you do everything that needs to be done exactly once for every
  // single file, e.g. collect a list of all lumi-blocks processed
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyTagAndProbeAnalysis :: changeInput (bool firstFile)
{
  // Here you do everything you need to do when we change input files,
  // e.g. resetting branch addresses on trees.  If you are using
  // D3PDReader or a similar service this method is not needed.
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyTagAndProbeAnalysis :: initialize ()
{
    // Here you do everything that you need to do after the first input
    // file has been connected and before the first event is processed,
    // e.g. create additional histograms based on which variables are
    // available in the input files.  You can also create all of your
    // histograms and trees in here, but be aware that this method
    // doesn't get called if no events are processed.  So any objects
    // you create here won't be available in the output if you have no
    // input events.
    ANA_CHECK_SET_TYPE (EL::StatusCode); // set type of return code you are expecting (add to top of each function once)

    xAOD::TEvent* event = wk()->xaodEvent();

    // as a check, let's see the number of events in our xAOD
    Info("initialize()", "Number of events = %lli", event->getEntries() ); // print long long int
	
    m_eventCounter = 0;
    m_numCleanEvents = 0;

    // Initialize and configure trigger tools
    m_trigConfigTool = new TrigConf::xAODConfigTool("xAODConfigTool"); // gives us access to the meta-data
    ANA_CHECK( m_trigConfigTool->initialize() );
    ToolHandle< TrigConf::ITrigConfigTool > trigConfigHandle( m_trigConfigTool );
    m_trigDecisionTool = new Trig::TrigDecisionTool("TrigDecisionTool");
    ANA_CHECK(m_trigDecisionTool->setProperty( "ConfigTool", trigConfigHandle ) ); // connect the TrigDecisionTool to the ConfigTool
    ANA_CHECK(m_trigDecisionTool->setProperty( "TrigDecisionKey", "xTrigDecision" ) );
    ANA_CHECK(m_trigDecisionTool->initialize() );
    
    //m_MediumLH = new AsgElectronLikelihoodTool ("MediumLH");
    // select the working point
    //CHECK(m_MediumLH->setProperty("WorkingPoint", "MediumLHElectron"));
    //CHECK(m_MediumLH->initialize());

    m_isolationSelectionTool_loose = new CP::IsolationSelectionTool( "isolationselectiontool" ) ;
    ANA_CHECK(m_isolationSelectionTool_loose->setProperty("ElectronWP", "Loose"));
    ANA_CHECK(m_isolationSelectionTool_loose->initialize());

    //(m_tmt.setTypeAndName("Trig::MatchingTool/MatchingTool"));
    m_tmt = new Trig::MatchingTool( "MatchingTool" ) ;
    ANA_CHECK(m_tmt->initialize()); //important to retrieve here, because TrigDecisionTool must be initialized before event loop
    

    // output xAOD
    TFile *file = wk()->getOutputFile (outputName);
    ANA_CHECK(event->writeTo(file));

    const std::string path = std::string( gSystem->ExpandPathName( "$UserAnalysis_DIR" ) ) + "/../data/";
    const std::string grl_path = "data16_13TeV.periodAllYear_DetStatus-v89-pro21-01_DQDefects-00-02-04_PHYS_StandardGRL_All_Good_25ns.xml";
    //const std::string grl_path = "data16_13TeV.periodAllYear_DetStatus-v83-pro20-15_DQDefects-00-02-04_PHYS_StandardGRL_All_Good_25ns.xml";
    std::vector< std::string > grlvec = { path + grl_path };
    
    // GRL
    m_grl = new GoodRunsListSelectionTool("GoodRunsListSelectionTool");
    m_grl->setProperty( "PassThrough" , false); // if true (default) will ignore result of GRL and will just pass all events
    m_grl->setProperty( "GoodRunsListVec" , grlvec );
    //m_grl->msg().setLevel( MSG::WARNING );
    m_grl->initialize( );


    m_MCShifterTool = new ElectronPhotonShowerShapeFudgeTool("MCShifterTool");
    m_MCShifterTool->setProperty("ConfigFile","ElectronPhotonShowerShapeFudgeTool/May2016_ShiftsForMCBasedLHTuneUsing20pt7.conf").ignore(); // 
    m_MCShifterTool->setProperty("Preselection",0).ignore(); // 
    m_MCShifterTool->initialize().ignore();


  Info("initialize()", "All Setup"); // print long long int
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyTagAndProbeAnalysis :: execute ()
{
    // Here you do everything that needs to be done on every single
    // events, e.g. read input variables, apply cuts, and fill
    // histograms and trees.  This is where most of your actual analysis
    // code will go.

    // std::cout << "  --------------------------------   Starting execute   -----------------------------------" << std::endl;

    CutZCCCandidates    = 0 ;
    CutZGoodCandidates  = 0 ;
    NZCandidates        = 0 ;
    nOfEvents           = 0 ;
    nOfNaN              = 0 ;


    ANA_CHECK_SET_TYPE (EL::StatusCode); // set type of return code you are expecting (add to top of each function once)

    xAOD::TEvent* event = wk()->xaodEvent();

    // print every 1000 events, so we know where we are:
    // if( (m_eventCounter % 1000) ==0 ) Info("execute()", "Event number = %i", m_eventCounter );

    //----------------------------
    // Event information
    //--------------------------- 
    
    ANA_CHECK(event->retrieve( eventInfo, "EventInfo"));  
  
    isMC = eventInfo->eventType( xAOD::EventInfo::IS_SIMULATION );
	
    // fill the branches of our trees
    EventNumber                     = eventInfo->eventNumber();
    runNumber                       = eventInfo->runNumber();
    actualInteractionsPerCrossing   = eventInfo->actualInteractionsPerCrossing();
    averageInteractionsPerCrossing  = eventInfo->averageInteractionsPerCrossing();



    // -------------------- Electrons container -----------------------

    const xAOD::ElectronContainer* electrons_org = 0;
    ANA_CHECK(event->retrieve( electrons_org, "Electrons" ));

    if (electrons_org->size() == 0) return EL::StatusCode::SUCCESS;

    // create a shallow copy of the electrons container
    std::pair< xAOD::ElectronContainer*, xAOD::ShallowAuxContainer* > electrons_shallowCopy = xAOD::shallowCopyContainer( *electrons_org );
    xAOD::ElectronContainer* electrons = electrons_shallowCopy.first;
    std::unique_ptr< xAOD::ElectronContainer > electrons_p(electrons_shallowCopy.first);
    std::unique_ptr< xAOD::ShallowAuxContainer > electrons_p2(electrons_shallowCopy.second);

    if (isMC) {
        for ( const auto& el : *electrons ) {
            m_MCShifterTool->applyCorrection(*el) ;
        }
    }


    // ------------------- Photons container -----------------------

    const xAOD::PhotonContainer* photons_org = 0;
    ANA_CHECK(event->retrieve( photons_org, "Photons" ));

    // create a shallow copy of the photons container
    std::pair< xAOD::PhotonContainer*, xAOD::ShallowAuxContainer* > photons_shallowCopy = xAOD::shallowCopyContainer( *photons_org );
    xAOD::PhotonContainer* photons = photons_shallowCopy.first;
    std::unique_ptr< xAOD::PhotonContainer > photons_p(photons_shallowCopy.first);
    std::unique_ptr< xAOD::ShallowAuxContainer > photons_p2(photons_shallowCopy.second);


    // ------------------- Track container -----------------------

    const xAOD::TrackParticleContainer* tracks_org = 0;
    ANA_CHECK(event->retrieve( tracks_org, "GSFTrackParticles" ));

    // create a shallow copy of the photons container
    std::pair< xAOD::TrackParticleContainer*, xAOD::ShallowAuxContainer* > tracks_shallowCopy = xAOD::shallowCopyContainer( *tracks_org );
    xAOD::TrackParticleContainer* tracks = tracks_shallowCopy.first;
    std::unique_ptr< xAOD::TrackParticleContainer > tracks_p(tracks_shallowCopy.first);
    std::unique_ptr< xAOD::ShallowAuxContainer > tracks_p2(tracks_shallowCopy.second);


    // -------------------- Truth Particle container ---------------
    //const xAOD::TruthParticleContainer* truth_org = 0;
    //ANA_CHECK(event->retrieve( truth_org, "TruthParticles" ));


    // -------------------- MET container ---------------
    const xAOD::MissingETContainer* METContainer = 0;
    ANA_CHECK(event->retrieve(METContainer, "MET_Reference_AntiKt4EMTopo"));
    const xAOD::MissingET* met_obj = (*METContainer)["FinalClus"];


    // ------------------- Jet container (for b-tag) -----------------------

    const xAOD::JetContainer* jets_org = 0;
    ANA_CHECK(event->retrieve( jets_org, "AntiKt4EMTopoJets" ));

    // create a shallow copy of the photons container
    std::pair< xAOD::JetContainer*, xAOD::ShallowAuxContainer* > jets_shallowCopy = xAOD::shallowCopyContainer( *jets_org );
    xAOD::JetContainer* jets = jets_shallowCopy.first;
    std::unique_ptr< xAOD::JetContainer > jets_p(jets_shallowCopy.first);
    std::unique_ptr< xAOD::ShallowAuxContainer > jets_p2(jets_shallowCopy.second);




    // ------------- Sort containers according to pt ----------------
    helper::PtSort(electrons);
    helper::PtSort(photons);

    // Before cut 
    if (isSignal) {
        Hist_Probe->Fill(0) ;
        Hist_Tag->Fill(0) ;
    } else Hist_Bkg->Fill(0) ;
    

    // LAr Error
    //------------------------------------------------------------
    // Apply event cleaning to remove events due to 
    // problematic regions of the detector or incomplete events.
    // Apply to data.
    //------------------------------------------------------------
    if ( (eventInfo->errorState(xAOD::EventInfo::LAr)==xAOD::EventInfo::Error ) ||
	 (eventInfo->errorState(xAOD::EventInfo::Tile)==xAOD::EventInfo::Error ) ||
	 (eventInfo->errorState(xAOD::EventInfo::SCT)==xAOD::EventInfo::Error ) ||
	 (eventInfo->isEventFlagBitSet(xAOD::EventInfo::Core, 18)) ) 
        return EL::StatusCode::SUCCESS;

    if (isSignal) {
        Hist_Probe->Fill(1) ;
        Hist_Tag->Fill(1) ;
    } else Hist_Bkg->Fill(1) ;

    if (!isMC) {
        //GRL
        if (!m_grl->passRunLB( *(eventInfo) )) 
            return EL::StatusCode::SUCCESS;
        if (isSignal) {
            Hist_Probe->Fill(2) ;
            Hist_Tag->Fill(2) ;
        } else Hist_Bkg->Fill(2) ;
    }

    const xAOD::VertexContainer* PVs;
    ANA_CHECK( event->retrieve( PVs , "PrimaryVertices" ) );
    if ( !(PVs->size() > 0) )
        return EL::StatusCode::SUCCESS;
    if (isSignal) {
        Hist_Probe->Fill(3) ;
        Hist_Tag->Fill(3) ;
    } else Hist_Bkg->Fill(3) ;


    //MET cut
    if ( !isSignal) {
        if (met_obj->met() > 25000.0) {
            return EL::StatusCode::SUCCESS;
        }
        Hist_Bkg->Fill(4) ;
    }



    // -------------  Here is the actual Tag-and-Probe selection  ----------------
    if (isSignal) {

        // Tag electrons:
        std::vector< const xAOD::Electron* > electrons_tag = MyCutTag(electrons, jets) ;
	Hist_CutTagCandidates->Fill(CutTagCandidates) ;
            
	// Probe electrons:
	std::vector< const xAOD::Electron* > electrons_probe = MyCutProbe(electrons) ;

	// Combination of tag and probe electrons:
	bool Z_pair_made = 0;       
	double Z_p;
	std::vector< std::pair<const xAOD::Electron*,const xAOD::Electron*> > Z_pairs ;

	if (electrons_tag.size() > 0 && electrons_probe.size() > 0) {
	  Z_pairs = MyTagAndProbeAnalysis::MyCutZ( electrons_probe , electrons_tag ) ;
	}

	// Histograms of number of candidates!
	Hist_nZ->Fill(int(Z_pairs.size()));
	if (Z_pairs.size() > 2) std::cout << "  The number of Z-pairs was greater than two: " << Z_pairs.size() << std::endl ;


	// Check the different cases of number of Z-pair candidates:
	bool Z_ok = false ;
	double dmZfinal = 10000.0;

	if (Z_pairs.size() == 1 ) {
	    Z_p = (Z_pairs[0].first->p4() + Z_pairs[0].second->p4() ).M() ;
	    Z_ok = true ;
	    Hist_Z->Fill(4) ; // Should be outside the if
	    if ( fabs(Z_p - 91188.0 ) < dmZfinal ) {
	        CutZCCCandidates = 1;
	    }
	}

	if (Z_pairs.size() == 2) {
	    if ( (Z_pairs[0].first == Z_pairs[1].second) && (Z_pairs[0].second == Z_pairs[1].first) ) {
	        Z_ok = true ;
		Z_p = (Z_pairs[0].first->p4() + Z_pairs[0].second->p4() ).M() ;
		Hist_Z->Fill(3) ; //Should be outside
		if ( fabs(Z_p - 91188.0 ) < dmZfinal ) {
		    CutZCCCandidates = 1;
		    ZDoublepair++ ;
		}
	    }
	}
            
	// NOTE: This approach does not include those with probe-tag + tag-probe pairs!!!!!
	int countZ = 0 ;
	if (Z_pairs.size() > 2 ) {
	    for ( const auto& Z_count : Z_pairs ) {
	        Z_p = (Z_count.first->p4() + Z_count.second->p4() ).M() ;
		if ( fabs(Z_p -  91188.0) < dmZfinal ) {
		    countZ++ ;
		}
	    }
	}


	if ( countZ ==1) {
	    Z_ok = true ;
	}


	std::vector< std::pair<const xAOD::Electron*,const xAOD::Electron*> > Z_pairs_final ;
	Z_pairs_final = Z_pairs ;

	if ( Z_ok ) { //CutZCCCandidates == 1
	  
	    Hist_Z->Fill(5) ; // just 1 pair of Z (might be a double pair)
                
	    for ( const auto& Z : Z_pairs_final) {
                    
	        FillnTuple(Z.first , Z.second ) ;
                    
		nOfEvents++ ;

		const xAOD::TrackParticle* tt = Z.second->trackParticle();
		//const xAOD::Vertex* tag_vertex = t->vertex();
		if ( tt ) {
		    const xAOD::Vertex* p_vertexx = tt->vertex();
                        
		    cutBeforeVertex++;
		    if ( p_vertexx ) {
		        cutAfterVertex++;
			p_ptPU30 = 0.0 ;

			for ( const auto& trk : *tracks ) {
		            if ( !(trk == Z.second->trackParticle()) ) {
			        if ( !( (trk->vertex()) == p_vertexx) ) {
			            float DeltaRCalc;
				    float etatemp = trk->eta() ;
				    float phitemp = trk->phi() ;
				    
				    float dPHI ;
				    float dETA = fabs(etatemp - p_eta); 
				    
				    if ( fabs(p_phi - phitemp - 2.0*3.14159265359) < fabs(p_phi - phitemp) ) {
				        dPHI = fabs(p_phi - phitemp - 2.0*3.14159265359) ;
				    } else {
				        dPHI = fabs(p_phi - phitemp);
				    }
				  
				    DeltaRCalc = sqrt( dETA*dETA + dPHI*dPHI ) ;
				  
				    if (DeltaRCalc < 0.3) {
				        p_ptPU30 = p_ptPU30 + trk->pt() ;
					//printf("DeltaRCalc %f. \n" ,  DeltaRCalc ) ;
					//printf("pt %f. \n" ,  el->pt() ) ;
				    }
				}
			    }
			}
		    // if ( !(p_ptPU30) == 0 ) ; //printf("p_ptPU30 %f. \n" ,  p_ptPU30 ) ;
		    }
		    p_ptPU30 = p_ptPU30 / tt->pt() ;
		} else {
		    for ( const auto& trk : *tracks ) {
		        if ( !(trk == Z.second->trackParticle()) ) {
			    float DeltaRCalc;
			    float etatemp = trk->eta() ;
			    float phitemp = trk->phi() ;
				    
			    float dPHI ;
			    float dETA = fabs(etatemp - p_eta); 
				    
			    if ( fabs(p_phi - phitemp - 2.0*3.14159265359) < fabs(p_phi - phitemp) ) {
			        dPHI = fabs(p_phi - phitemp - 2.0*3.14159265359) ;
			    } else {
			        dPHI = fabs(p_phi - phitemp);
			    }
				  
			    DeltaRCalc = sqrt( dETA*dETA + dPHI*dPHI ) ;
				  
			    if (DeltaRCalc < 0.3) {
			        p_ptPU30 = p_ptPU30 + trk->pt() ;
				//printf("DeltaRCalc %f. \n" ,  DeltaRCalc ) ;
				//printf("pt %f. \n" ,  el->pt() ) ;
			    }
			}
		    }
		    p_ptPU30 = p_ptPU30 / p_pt_calo ;
		    // p_ptPU30 = -1.0 ;
		}
		
		//FillnTuple(el_tag , el_p) ;
		if (electrons->size()>1) {
		    Z_m_all = ((*electrons)[0]->p4() + (*electrons)[1]->p4()).M();
		}

		tree->Fill();
	    }
	}

    } else {
	// What to do for BACKGROUND:

        // BG selection
      if (electrons->size() > 0) {

	    std::vector< const xAOD::Electron* > el_p;
            el_p = MyTagAndProbeAnalysis::MyCutBackground( electrons , met_obj ) ;

	    // std::cout << "  Background:  Number of electron candidates: " << int(el_p.size()) << std::endl;
	    // std::cout << "               Number of track candidates: " << int(tracks->size()) << std::endl;
            
            int NonElCount = 0;
            for ( unsigned int i=0 ; i < el_p.size() ; ++i ) {
		if (el_p[NonElCount]->pt() > 14500. ){
		    // std::cout << "      Eta: " << el_p[NonElCount]->eta() << std::endl;
		    NonElCount = i;
                        
		    FillnTuple(0 , el_p[NonElCount]);
		    nOfEvents++ ;
                        
		    const xAOD::TrackParticle* tt = el_p[NonElCount]->trackParticle();
		    //const xAOD::Vertex* tag_vertex = t->vertex();
		    if ( tt ) {
		        const xAOD::Vertex* p_vertexx = tt->vertex();
                        
			cutBeforeVertex++;
			if ( (p_vertexx) ) {
			    cutAfterVertex++;
			    p_ptPU30 = 0.0 ;
			    for ( const auto& trk : *tracks ) {
			        if ( !(trk == el_p[NonElCount]->trackParticle()) ) {
				    if ( !( (trk->vertex()) == p_vertexx) ) {
				        float DeltaRCalc;
					float etatemp = trk->eta() ;
					float phitemp = trk->phi() ;
					
					float dPHI ;
					float dETA = fabs(etatemp - p_eta); 
					
					if ( fabs(p_phi - phitemp - 2.0*3.14159265359) < fabs(p_phi - phitemp) ) {
				            dPHI = fabs(p_phi - phitemp - 2.0*3.14159265359) ;
					} else {
				            dPHI = fabs(p_phi - phitemp);
					}

					DeltaRCalc = sqrt( dETA*dETA + dPHI*dPHI ) ;
				      
					if (DeltaRCalc<0.3) {
				            p_ptPU30 = p_ptPU30 + trk->pt() ;
					}
				    }
				}
			    }
			}
			p_ptPU30 = p_ptPU30 / tt->pt() ;
			// if (p_ptPU30 > 30.0) p_ptPU30 = 30.0;
		    } else {

		        for ( const auto& trk : *tracks ) {
			    float DeltaRCalc;
			    float etatemp = trk->eta() ;
			    float phitemp = trk->phi() ;
				    
			    float dPHI ;
			    float dETA = fabs(etatemp - p_eta); 
				    
			    if ( fabs(p_phi - phitemp - 2.0*3.14159265359) < fabs(p_phi - phitemp) ) {
			        dPHI = fabs(p_phi - phitemp - 2.0*3.14159265359) ;
			    } else {
			        dPHI = fabs(p_phi - phitemp);
			    }
				  
			    DeltaRCalc = sqrt( dETA*dETA + dPHI*dPHI ) ;
				  
			    if (DeltaRCalc < 0.3) {
			        p_ptPU30 = p_ptPU30 + trk->pt() ;
				//printf("DeltaRCalc %f. \n" ,  DeltaRCalc ) ;
				//printf("pt %f. \n" ,  el->pt() ) ;
			    }
			}
		    }
		    p_ptPU30 = p_ptPU30 / p_pt_calo ;
		    // p_ptPU30 = -1.0 ;

		    tree->Fill();
		}
	    }
	}
    }

    return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyTagAndProbeAnalysis :: postExecute ()
{
  // Here you do everything that needs to be done after the main event
  // processing.  This is typically very rare, particularly in user
  // code.  It is mainly used in implementing the NTupleSvc.
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyTagAndProbeAnalysis :: finalize ()
{
  // This method is the mirror image of initialize(), meaning it gets
  // called after the last event has been processed on the worker node
  // and allows you to finish up any objects you created in
  // initialize() before they are written to disk.  This is actually
  // fairly rare, since this happens separately for each worker node.
  // Most of the time you want to do your post-processing on the
  // submission node after all your histogram outputs have been
  // merged.  This is different from histFinalize() in that it only
  // gets called on worker nodes that processed input events.
    ANA_CHECK_SET_TYPE (EL::StatusCode); // set type of return code you are expecting (add to top of each function once)

    xAOD::TEvent* event = wk()->xaodEvent();

    // finalize and close our output xAOD file:
    TFile *file = wk()->getOutputFile (outputName);
    ANA_CHECK(event->finishWritingTo( file ));
    
    return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyTagAndProbeAnalysis :: histFinalize ()
{
  // This method is the mirror image of histInitialize(), meaning it
  // gets called after the last event has been processed on the worker
  // node and allows you to finish up any objects you created in
  // histInitialize() before they are written to disk.  This is
  // actually fairly rare, since this happens separately for each
  // worker node.  Most of the time you want to do your
  // post-processing on the submission node after all your histogram
  // outputs have been merged.  This is different from finalize() in
  // that it gets called on all worker nodes regardless of whether
  // they processed input events.


  return EL::StatusCode::SUCCESS;
}
