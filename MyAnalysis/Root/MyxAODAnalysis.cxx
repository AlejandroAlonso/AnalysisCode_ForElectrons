#include <AsgTools/MessageCheck.h>
#include <EventLoop/Job.h>
#include <EventLoop/StatusCode.h>
#include <EventLoop/Worker.h>
#include <MyAnalysis/MyxAODAnalysis.h>
#include <xAODEventInfo/EventInfo.h>
#include <TFile.h>



#include <xAODEgamma/EgammaTruthxAODHelpers.h>
#include <xAODEgamma/ElectronContainer.h>
#include <xAODEgamma/Electron.h>
#include <xAODEgamma/Photon.h>


// this is needed to distribute the algorithm to the workers
ClassImp(MyxAODAnalysis)



MyxAODAnalysis :: MyxAODAnalysis ()
{
  // Here you put any code for the base initialization of variables,
  // e.g. initialize all pointers to 0.  Note that you should only put
  // the most basic initialization here, since this method will be
  // called on both the submission and the worker node.  Most of your
  // initialization code will go into histInitialize() and
  // initialize().
}



EL::StatusCode MyxAODAnalysis :: setupJob (EL::Job& job)
{
  // Here you put code that sets up the job on the submission object
  // so that it is ready to work with your algorithm, e.g. you can
  // request the D3PDReader service or add output files.  Any code you
  // put here could instead also go into the submission script.  The
  // sole advantage of putting it here is that it gets automatically
  // activated/deactivated when you add/remove the algorithm from your
  // job, which may or may not be of value to you.
  job.useXAOD ();

  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyxAODAnalysis :: histInitialize ()
{
  // Here you do everything that needs to be done at the very
  // beginning on each worker node, e.g. create histograms and output
  // trees.  This method gets called before any input files are
  // connected.

  TFile *outputFile = wk()->getOutputFile (m_outputName);
  m_tree = new TTree ("tree", "tree");
  m_tree->SetDirectory (outputFile);
  m_tree->Branch ("EventNumber"		, &m_EventNumber);
  m_tree->Branch ("El_pt"		, &m_El_pt			);
  m_tree->Branch ("El_et"		, &m_El_e			);
  m_tree->Branch ("El_eta"		, &m_El_eta			);
  m_tree->Branch ("El_phi"		, &m_El_phi			);
  m_tree->Branch ("El_type"		, &m_El_type			);
  m_tree->Branch ("El_origin"		, &m_El_origin			);

  m_tree->Branch("El_truthPdgId"	,&m_El_truthPdgId	);
  m_tree->Branch("El_LHLoose"		,&m_El_LHLoose		);
  m_tree->Branch("El_LHMedium"		,&m_El_LHMedium		);
  m_tree->Branch("El_LHTight"		,&m_El_LHTight		);
  m_tree->Branch("El_LHValue"		,&m_El_LHValue		);
  m_tree->Branch("El_Loose"		,&m_El_Loose		);
  m_tree->Branch("El_Medium"		,&m_El_Medium		);
  m_tree->Branch("El_Tight"		,&m_El_Tight		);

  m_tree->Branch ("El_energy_Cells"	, &m_El_energy_Cells 		);
  m_tree->Branch ("El_gain_Cells"	, &m_El_gain_Cells 		);
  m_tree->Branch ("El_provenance_Cells"	, &m_El_provenance_Cells 	);
  m_tree->Branch ("El_sampling_Cells"	, &m_El_sampling_Cells 		);
  m_tree->Branch ("El_time_Cells"	, &m_El_time_Cells 		);
  m_tree->Branch ("El_x_Cells"		, &m_El_x_Cells 		);
  m_tree->Branch ("El_dx_Cells"		, &m_El_dx_Cells 		);
  m_tree->Branch ("El_y_Cells"		, &m_El_y_Cells 		);
  m_tree->Branch ("El_dy_Cells"		, &m_El_dy_Cells 		);
  m_tree->Branch ("El_z_Cells"		, &m_El_z_Cells 		);
  m_tree->Branch ("El_dz_Cells"		, &m_El_dz_Cells 		);
  m_tree->Branch ("El_eta_Cells"	, &m_El_eta_Cells 		);
  m_tree->Branch ("El_deta_Cells"	, &m_El_deta_Cells 		);
  m_tree->Branch ("El_etasize_Cells"	, &m_El_etasize_Cells 		);
  m_tree->Branch ("El_phi_Cells"	, &m_El_phi_Cells 		);
  m_tree->Branch ("El_dphi_Cells"	, &m_El_dphi_Cells 		);
  m_tree->Branch ("El_phisize_Cells"	, &m_El_phisize_Cells 		);



  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyxAODAnalysis :: fileExecute ()
{
  // Here you do everything that needs to be done exactly once for every
  // single file, e.g. collect a list of all lumi-blocks processed
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyxAODAnalysis :: changeInput (bool /*firstFile*/)
{
  // Here you do everything you need to do when we change input files,
  // e.g. resetting branch addresses on trees.  If you are using
  // D3PDReader or a similar service this method is not needed.
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyxAODAnalysis :: initialize ()
{
  // Here you do everything that you need to do after the first input
  // file has been connected and before the first event is processed,
  // e.g. create additional histograms based on which variables are
  // available in the input files.  You can also create all of your
  // histograms and trees in here, but be aware that this method
  // doesn't get called if no events are processed.  So any objects
  // you create here won't be available in the output if you have no
  // input events.
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyxAODAnalysis :: execute ()
{
  // Here you do everything that needs to be done on every single
  // events, e.g. read input variables, apply cuts, and fill
  // histograms and trees.  This is where most of your actual analysis
  // code will go.

  ANA_CHECK_SET_TYPE (EL::StatusCode);

  // retrieve the eventInfo object from the event store
  const xAOD::EventInfo *eventInfo = nullptr;
  ANA_CHECK (evtStore()->retrieve (eventInfo, "EventInfo"));
  
  // print out run and event number from retrieved object
//  ANA_MSG_INFO ("in execute, runNumber = " << eventInfo->runNumber() << ", eventNumber = " << eventInfo->eventNumber());
  

  const xAOD::ElectronContainer   *Electrons= nullptr;
  ANA_CHECK (evtStore()->retrieve (Electrons , "Electrons"));


//  ANA_MSG_INFO ("in execute, Number of Electrons: " << Electrons->size());

  m_EventNumber = eventInfo->eventNumber();
  m_El_pt		.clear();  
  m_El_e		.clear();  
  m_El_eta		.clear(); 
  m_El_phi		.clear(); 
  m_El_type		.clear(); 
  m_El_origin		.clear(); 
  m_El_truthPdgId	.clear(); 
  
  m_El_LHLoose		.clear(); 
  m_El_LHMedium		.clear(); 
  m_El_LHTight		.clear(); 
  m_El_LHValue		.clear(); 

  m_El_Loose		.clear(); 
  m_El_Medium		.clear(); 
  m_El_Tight		.clear(); 

  m_El_energy_Cells 	.clear(); 
  m_El_gain_Cells 	.clear(); 
  m_El_provenance_Cells .clear(); 
  m_El_sampling_Cells 	.clear(); 
  m_El_time_Cells 	.clear(); 
  m_El_x_Cells 		.clear(); 
  m_El_dx_Cells 	.clear(); 
  m_El_y_Cells 		.clear(); 
  m_El_dy_Cells 	.clear(); 
  m_El_z_Cells 		.clear(); 
  m_El_dz_Cells 	.clear(); 
  m_El_eta_Cells 	.clear(); 
  m_El_deta_Cells 	.clear(); 
  m_El_etasize_Cells 	.clear(); 
  m_El_phi_Cells 	.clear(); 
  m_El_dphi_Cells 	.clear(); 
  m_El_phisize_Cells 	.clear(); 

  // Info we need to dump into a flat ntuple:
  for ( auto const El : *Electrons){
   	  //ANA_MSG_INFO ("Elec : " << El->pt()); 
	
	  m_El_pt.push_back( El->pt() );
	  m_El_e.push_back( El->e() );
	  m_El_eta.push_back( El->eta() );
	  m_El_phi.push_back( El->phi() );

          m_El_type.push_back(		El ->auxdata< int > ("truthType")	);
	  m_El_origin.push_back(	El ->auxdata< int > ("truthOrigin")	);

  	  m_El_truthPdgId	.push_back( 	El ->auxdata< int > ("truthPdgId")		); 
  	  m_El_LHLoose		.push_back( 	El ->auxdata< char > ("LHLoose")		); 
  	  m_El_LHMedium		.push_back( 	El ->auxdata< char > ("LHMedium")		); 
  	  m_El_LHTight		.push_back( 	El ->auxdata< char > ("LHTight")		); 
  	  m_El_LHValue		.push_back( 	El ->auxdata< float > ("LHValue")		); 
  	  m_El_Loose		.push_back( 	El ->auxdata< char > ("Loose")		); 
  	  m_El_Medium		.push_back( 	El ->auxdata< char > ("Medium")		); 
  	  m_El_Tight		.push_back( 	El ->auxdata< char > ("Tight")		); 
	
          std::vector<float> 	energy_Cells = El ->auxdata<std::vector< float >>( "energy_7x11" ); 
          std::vector<int> 	gain_Cells = El ->auxdata<std::vector< int >>( "gain_7x11" ); 
          std::vector<int> 	provenance_Cells = El ->auxdata<std::vector< int >>( "provenance_7x11" ); 
          std::vector<int> 	sampling_Cells = El ->auxdata<std::vector< int >>( "sampling_7x11" ); 

          std::vector<float> 	time_Cells = El ->auxdata<std::vector< float >>( "time_7x11" ); 
          std::vector<float> 	x_Cells = El ->auxdata<std::vector< float >>( "x_7x11" ); 
          std::vector<float> 	dx_Cells = El ->auxdata<std::vector< float >>( "dx_7x11" ); 
          std::vector<float> 	y_Cells = El ->auxdata<std::vector< float >>( "y_7x11" ); 
          std::vector<float> 	dy_Cells = El ->auxdata<std::vector< float >>( "dy_7x11" ); 
          std::vector<float> 	z_Cells = El ->auxdata<std::vector< float >>( "z_7x11" ); 
          std::vector<float> 	dz_Cells = El ->auxdata<std::vector< float >>( "dz_7x11" ); 
          std::vector<float> 	eta_Cells = El ->auxdata<std::vector< float >>( "eta_7x11" ); 
          std::vector<float> 	deta_Cells = El ->auxdata<std::vector< float >>( "deta_7x11" ); 
          std::vector<float> 	etasize_Cells = El ->auxdata<std::vector< float >>( "etasize_7x11" ); 
          std::vector<float> 	phi_Cells = El ->auxdata<std::vector< float >>( "phi_7x11" ); 
          std::vector<float> 	dphi_Cells = El ->auxdata<std::vector< float >>( "dphi_7x11" ); 
          std::vector<float> 	phisize_Cells = El ->auxdata<std::vector< float >>( "phisize_7x11" ); 
  	  m_El_energy_Cells 	.push_back(energy_Cells 	); 
   	  m_El_gain_Cells 	.push_back(gain_Cells 	); 
  	  m_El_provenance_Cells .push_back(provenance_Cells ); 
  	  m_El_sampling_Cells 	.push_back(sampling_Cells 	); 
  	  m_El_time_Cells 	.push_back(time_Cells 	); 
  	  m_El_x_Cells 		.push_back(x_Cells 	); 
  	  m_El_dx_Cells 	.push_back(dx_Cells 	); 
  	  m_El_y_Cells 		.push_back(y_Cells 	); 
  	  m_El_dy_Cells 	.push_back(dy_Cells 	); 
    	  m_El_z_Cells 		.push_back(z_Cells 	); 
  	  m_El_dz_Cells 	.push_back(dz_Cells 	); 
  	  m_El_eta_Cells 	.push_back(eta_Cells 	); 
 	  m_El_deta_Cells 	.push_back(deta_Cells 	); 
  	  m_El_etasize_Cells 	.push_back(etasize_Cells 	); 
  	  m_El_phi_Cells 	.push_back(phi_Cells 	); 
  	  m_El_dphi_Cells 	.push_back(dphi_Cells 	); 
  	  m_El_phisize_Cells 	.push_back(phisize_Cells 	); 

  } 

  m_tree->Fill();


  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyxAODAnalysis :: postExecute ()
{
  // Here you do everything that needs to be done after the main event
  // processing.  This is typically very rare, particularly in user
  // code.  It is mainly used in implementing the NTupleSvc.
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyxAODAnalysis :: finalize ()
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
  return EL::StatusCode::SUCCESS;
}



EL::StatusCode MyxAODAnalysis :: histFinalize ()
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

