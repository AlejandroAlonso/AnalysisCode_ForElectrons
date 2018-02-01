#ifndef MyAnalysis_MyTagAndProbeAnalysis_H
#define MyAnalysis_MyTagAndProbeAnalysis_H

#include <EventLoop/Algorithm.h>
#include "GoodRunsLists/GoodRunsListSelectionTool.h"
#include "JetSelectorTools/JetCleaningTool.h"
#include "JetResolution/JERTool.h"
#include "MuonMomentumCorrections/MuonCalibrationAndSmearingTool.h"
#include "PATInterfaces/SystematicRegistry.h"
#include "TrigConfxAOD/xAODConfigTool.h"
#include "TrigDecisionTool/TrigDecisionTool.h"
#include <TH1.h>
#include <TTree.h>
#include "IsolationSelection/IsolationSelectionTool.h"
#include "xAODEgamma/ElectronContainer.h"
#include "xAODMissingET/MissingETContainer.h"
#include "xAODMissingET/MissingETAuxContainer.h"
#include "xAODMissingET/MissingETAssociationMap.h"
#include "ElectronPhotonShowerShapeFudgeTool/ElectronPhotonShowerShapeFudgeTool.h"
#include "ElectronPhotonShowerShapeFudgeTool/TElectronMCShifterTool.h"
#include "xAODCaloEvent/CaloCluster.h"




//#include "ElectronPhotonSelectorTools/AsgElectronLikelihoodTool.h"

#include "TriggerMatchingTool/MatchingTool.h"

class MyTagAndProbeAnalysis : public EL::Algorithm
{
  // put your configuration variables here as public variables.
  // that way they can be set directly from CINT and python.
public:
  // float cutValue;
  std::string outputName;


  //AsgElectronLikelihoodTool* m_MediumLH ;

  // variables that don't get filled at submission time should be
  // protected from being send from the submission node to the worker
  // node (done by the //!)


public:
  // Tree *myTree; //!
  // TH1 *myHist; //!
  int m_eventCounter; //!
  GoodRunsListSelectionTool *m_grl; //!
  int m_numCleanEvents; //!
  JetCleaningTool *m_jetCleaning; //!  
  JERTool *m_JERTool; //! 
  CP::MuonCalibrationAndSmearingTool *m_muonCalibrationAndSmearingTool; //! 
  std::vector<CP::SystematicSet> m_sysList; //!
  Trig::TrigDecisionTool *m_trigDecisionTool; //!
  TrigConf::xAODConfigTool *m_trigConfigTool; //!
  TH1 *h_jetPt; //!
  ElectronPhotonShowerShapeFudgeTool* m_MCShifterTool ; //! 

  Trig::MatchingTool *m_tmt; //!

  CP::IsolationSelectionTool *m_isolationSelectionTool_loose = nullptr; //!

  // defining the output file name and tree that we will put in the output ntuple, also the one branch that will be in that tree 
  TTree *tree; //!
  	
  int EventNumber; //!
  bool OneElectronCase; //!
  bool isMC; //!
  int mc_channel_number; //!
  
  bool isSignal;

  int runNumber; //!
  int actualInteractionsPerCrossing; //!
  int averageInteractionsPerCrossing; //!



    // Tag
  float tag_pt_calo; //!
  float tag_et_calo; //!
  float tag_pt_track; //!

  float tag_eta; //!
  float tag_charge; //!
  float tag_phi; //!
    
    
  float tag_weta2; //!
  float tag_Reta; //!
  float tag_Rphi; //!
  float tag_Eratio; //!
  float tag_f1; //!
  float tag_f3; //!
  float tag_Rhad; //!
  float tag_Rhad1; //!
  float tag_deltaEta1; //!
  float tag_deltaPhiRescaled2; //!
  float tag_d0; //!
  float tag_sigmad0; //!
  float tag_eProbHT; //!
  float tag_qOverP; //!
  float tag_parameterPX; //!
  float tag_parameterPY; //!
  float tag_parameterPZ; //!
  float tag_dPOverP; //!
  float tag_LHValue; //!

  float tag_etcone20; //!
  float tag_etcone30; //!
  float tag_etcone40; //!
  float tag_etcone20ptCorrection; //!
  float tag_etcone30ptCorrection; //!
  float tag_etcone40ptCorrection; //!
  float tag_ptcone20; //!
  float tag_ptcone30; //!
  float tag_ptcone40; //!
  float tag_TRTTrackOccupancy; //!

  int tag_numberOfInnermostPixelHits; //!
  int tag_numberOfPixelHits; //!
  int tag_numberOfSCTHits; //!
  int tag_numberOfTRTHits; //!


  int tag_TruthType; //!

  int tag_vertex; //! 

  std::vector<float>tag_energy_Cells ;//! 
  std::vector<int>   tag_gain_Cells ;//! 
  std::vector<int>   tag_provenance_Cells ;//! 
  std::vector<int>   tag_sampling_Cells ;//! 

  std::vector<float> tag_time_Cells ;//! 
  std::vector<float> tag_x_Cells ;//! 
  std::vector<float> tag_dx_Cells ;//! 
  std::vector<float> tag_y_Cells ;//! 
  std::vector<float> tag_dy_Cells ;//! 
  std::vector<float> tag_z_Cells ;//! 
  std::vector<float> tag_dz_Cells ;//! 
  std::vector<float> tag_eta_Cells ;//! 
  std::vector<float> tag_deta_Cells ;//! 
  std::vector<float> tag_etasize_Cells ;//! 
  std::vector<float> tag_phi_Cells ;//! 
  std::vector<float> tag_dphi_Cells ;//! 
  std::vector<float> tag_phisize_Cells ;//! 
  

  // Probe or background
  float p_pt_calo; //!
  float p_et_calo; //!
  float p_pt_track; //!

  float p_eta; //!
  float p_charge; //!
  float p_phi; //!

  float ethad1; //!
  float p_weta2; //!
  float p_Reta; //!
  float p_Rphi; //!
  float p_Eratio; //!
  float p_f1; //!
  float p_f3; //!
  float p_Rhad; //!
  float p_Rhad1; //!
  float p_deltaEta1; //!    
  float p_deltaPhiRescaled2; //!    
  float p_d0; //!
  float p_sigmad0; //!
  float p_eProbHT; //!
  float p_qOverP; //!
  float p_parameterPX; //!
  float p_parameterPY; //!
  float p_parameterPZ; //!
  float p_dPOverP; //!
  float p_LHValue; //!

  float p_etcone20; //!
  float p_etcone30; //!
  float p_etcone40; //!
  float p_etcone20ptCorrection; //!
  float p_etcone30ptCorrection; //!
  float p_etcone40ptCorrection; //!
  float p_ptcone20; //!
  float p_ptcone30; //!
  float p_ptcone40; //!
  float p_ptPU30;   //!

  int p_numberOfInnermostPixelHits; //!
  int p_numberOfPixelHits; //!
  int p_numberOfSCTHits; //!
  int p_numberOfTRTHits; //!

  float p_TRTTrackOccupancy; //!
  float p_numberOfTRTXenonHits; //!

  int p_TruthType; //!   

  int p_vertex; //! 
  
  // Z particle for tag and probe
  float Z_m; //!
  float Z_m_all; //!
  float Z_eta; //!
  float Z_pt; //!
  float Z_phi; //!



  int CUT0; //!
  int CUT1; //!
  int CUT2; //!
  int CUT3; //!
  int CUT4; //!
  int CUT5; //!
  int CUT6; //!
  int CUT7; //!
  int CUTPsuodo; //!

  int CutTagCandidates ; //!
  int CutProbeCandidates ; //!
  int CutZCCCandidates ; //!
  int CutZCFCandidates ; //!
  int CutZGoodCandidates ; //!
  int ZDoublepair ; //!
  int NZCandidates ; //!

  int CutTag0; //!
  int CutTag1; //!
  int CutTag2; //!
  int CutTag3; //!
  int CutTag4; //!

  int CutProbe0; //!
  int CutProbe1; //!
  int CutProbe2; //!
  int CutProbe3; //!
  int CutProbe4; //!

  int CutZ0; //!
  int CutZ1; //!

  int nOfNaN; //!
  int nOfEvents; //!

  int cutBeforeVertex; //!
  int cutAfterVertex; //!

  int nZgreaterthan2; //!

  int nTracks; //!


  const xAOD::EventInfo* eventInfo = 0;


  // Added variables:
  float pX_E7x7_Lr2; //!
  float pX_E7x7_Lr3; //!
  float pX_E_Lr0_HiG; //!
  float pX_E_Lr0_LowG; //!
  float pX_E_Lr0_MedG; //!
  float pX_E_Lr1_HiG; //!
  float pX_E_Lr1_LowG; //!
  float pX_E_Lr1_MedG; //!
  float pX_E_Lr2_HiG; //!
  float pX_E_Lr2_LowG; //!
  // vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *ElectronsAuxDyn_trackParticleLinks;
  float pX_E_Lr2_MedG; //!
  float pX_E_Lr3_HiG; //!
  float pX_E_Lr3_LowG; //!
  float pX_E_Lr3_MedG; //!
  // vector<vector<float> > *ElectronsAuxDyn_EgammaCovarianceMatrix;
  float pX_Eratio; //!
  char pX_LHLoose; //!
  char pX_LHMedium; //!
  float pX_pt; //!
  char pX_LHTight; //!
  float pX_eta; //!
  float pX_LHValue; //!
  float pX_phi; //!
  char pX_Loose; //!
  float pX_m; //!
  char pX_Medium; //!
  char pX_MultiLepton; //!
  unsigned int pX_OQ; //!
  float pX_PromptLeptonIso_DRlj; //!
  float pX_PromptLeptonIso_EtTopoCone30Rel; //!
  float pX_PromptLeptonIso_LepJetPtFrac; //!
  float pX_PromptLeptonIso_PtVarCone30Rel; //!
  float pX_PromptLeptonIso_TagWeight; //!
  short pX_PromptLeptonIso_TrackJetNTrack; //!
  float pX_PromptLeptonIso_ip2; //!
  float pX_PromptLeptonIso_ip3; //!
  short pX_PromptLeptonIso_sv1_jf_ntrkv; //!
  float pX_PromptLeptonNoIso_DRlj; //!
  float pX_PromptLeptonNoIso_LepJetPtFrac; //!
  float pX_PromptLeptonNoIso_TagWeight; //!
  short pX_PromptLeptonNoIso_TrackJetNTrack; //!
  float pX_PromptLeptonNoIso_ip2; //!
  float pX_PromptLeptonNoIso_ip3; //!
  short pX_PromptLeptonNoIso_sv1_jf_ntrkv; //!
  float pX_PromptLepton_DRlj; //!
  float pX_PromptLepton_EtTopoCone20Rel; //!
  float pX_PromptLepton_TagWeight; //!
  short pX_PromptLepton_TrackJetNTrack; //!
  float pX_PromptLepton_ip2; //!
  float pX_PromptLepton_ip2_cu; //!
  float pX_PromptLepton_ip3; //!
  float pX_PromptLepton_ip3_cu; //!
  short pX_PromptLepton_jf_ntrkv; //!
  short pX_PromptLepton_sv1_ntkv; //!
  float pX_Reta; //!
  float pX_Rhad; //!
  float pX_Rhad1; //!
  float pX_Rphi; //!
  char pX_Tight; //!
  // Int_t           ElectronsAuxDyn_ambiguityLink_;
  // UInt_t          ElectronsAuxDyn_ambiguityLink_m_persKey[kMaxElectronsAuxDyn_ambiguityLink];   //[ElectronsAuxDyn.ambiguityLink_]
  // UInt_t          ElectronsAuxDyn_ambiguityLink_m_persIndex[kMaxElectronsAuxDyn_ambiguityLink];   //[ElectronsAuxDyn.ambiguityLink_]
  unsigned char pX_ambiguityType; //!
  float pX_asy1; //!
  unsigned short pX_author; //!
  float pX_barys1; //!
  // vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *ElectronsAuxDyn_caloClusterLinks;
  // vector<vector<ElementLink<DataVector<xAOD::CaloRings_v1> > > > *ElectronsAuxDyn_caloRingsLinks;
  float pX_charge; //!
  float pX_core57cellsEnergyCorrection; //!
  float pX_deltaEta0; //!
  float pX_deltaEta1; //!
  float pX_deltaEta2; //!
  float pX_deltaEta3; //!
  float pX_deltaPhi0; //!
  float pX_deltaPhi1; //!
  float pX_deltaPhi2; //!
  float pX_deltaPhi3; //!
  float pX_deltaPhiFromLastMeasurement; //!
  float pX_deltaPhiRescaled0; //!
  float pX_deltaPhiRescaled1; //!
  float pX_deltaPhiRescaled2; //!
  float pX_deltaPhiRescaled3; //!
  float pX_e1152; //!
  float pX_e132; //!
  float pX_e235; //!
  float pX_e255; //!
  float pX_e2ts1; //!
  float pX_ecore; //!
  float pX_emins1; //!
  float pX_etcone20; //!
  float pX_etcone20ptCorrection; //!
  float pX_etcone30; //!
  float pX_etcone30ptCorrection; //!
  float pX_etcone40; //!
  float pX_etcone40ptCorrection; //!
  unsigned int pX_etconeCorrBitset; //!
  float pX_ethad; //!
  float pX_ethad1; //!
  float pX_f1; //!
  float pX_f1core; //!
  float pX_f3; //!
  float pX_f3core; //!
  float pX_maxEcell_energy; //!
  int pX_maxEcell_gain; //!
  //unsigned long pX_maxEcell_onlId; //!
  float pX_maxEcell_time; //!
  float pX_maxEcell_x; //!
  float pX_maxEcell_y; //!
  float pX_maxEcell_z; //!
  unsigned char pX_nCells_Lr0_HiG; //!
  unsigned char pX_nCells_Lr0_LowG; //!
  unsigned char pX_nCells_Lr0_MedG; //!
  unsigned char pX_nCells_Lr1_HiG; //!
  unsigned char pX_nCells_Lr1_LowG; //!
  unsigned char pX_nCells_Lr1_MedG; //!
  unsigned char pX_nCells_Lr2_HiG; //!
  unsigned char pX_nCells_Lr2_LowG; //!
  unsigned char pX_nCells_Lr2_MedG; //!
  unsigned char pX_nCells_Lr3_HiG; //!
  unsigned char pX_nCells_Lr3_LowG; //!
  unsigned char pX_nCells_Lr3_MedG; //!
  float pX_neflowisol20; //!
  float pX_neflowisol20ptCorrection; //!
  float pX_neflowisol30; //!
  float pX_neflowisol30ptCorrection; //!
  float pX_neflowisol40; //!
  float pX_neflowisol40ptCorrection; //!
  unsigned int pX_neflowisolCorrBitset; //!
  float pX_neflowisolcoreConeEnergyCorrection; //!
  float pX_pos; //!
  float pX_pos7; //!
  float pX_poscs1; //!
  float pX_poscs2; //!
  float pX_ptcone20; //!
  float pX_ptcone30; //!
  float pX_ptcone40; //!
  unsigned int pX_ptconeCorrBitset; //!
  float pX_ptconecoreTrackPtrCorrection; //!
  float pX_ptvarcone20; //!
  float pX_ptvarcone30; //!
  float pX_ptvarcone40; //!
  float pX_r33over37allcalo; //!
  float pX_topoetcone20; //!
  float pX_topoetcone20ptCorrection; //!
  float pX_topoetcone30; //!
  float pX_topoetcone30ptCorrection; //!
  float pX_topoetcone40; //!
  float pX_topoetcone40ptCorrection; //!
  unsigned int pX_topoetconeCorrBitset; //!
  float pX_topoetconecoreConeEnergyCorrection; //!
  float pX_topoetconecoreConeSCEnergyCorrection; //!
  float pX_weta1; //!
  float pX_widths1; //!
  float pX_widths2; //!
  float pX_wtots1; //!
  float pX_e233; //!
  float pX_e237; //!
  float pX_e277; //!
  float pX_e2tsts1; //!
  float pX_ehad1; //!
  float pX_emaxs1; //!
  float pX_fracs1; //!
  float pX_weta2; //!
  char pX_DFCommonElectronsIsEMLoose; //!
  unsigned int pX_DFCommonElectronsIsEMLooseIsEMValue; //!
  char pX_DFCommonElectronsIsEMMedium; //!
  unsigned int pX_DFCommonElectronsIsEMMediumIsEMValue; //!
  char pX_DFCommonElectronsIsEMTight; //!
  unsigned int pX_DFCommonElectronsIsEMTightIsEMValue; //!
  char pX_DFCommonElectronsLHLoose; //!
  char pX_DFCommonElectronsLHMedium; //!
  char pX_DFCommonElectronsLHTight; //!
  char pX_DFCommonElectronsLHVeryLoose; //!
  char pX_DFCommonElectronsML; //!
  float pX_DeltaE; //!
  float pX_E3x5_Lr0; //!
  float pX_E3x5_Lr1; //!
  float pX_E3x5_Lr2; //!
  float pX_E3x5_Lr3; //!
  float pX_E5x7_Lr0; //!
  float pX_E5x7_Lr1; //!
  float pX_E5x7_Lr2; //!
  float pX_E5x7_Lr3; //!
  float pX_E7x11_Lr0; //!
  float pX_E7x11_Lr1; //!
  float pX_E7x11_Lr2; //!
  float pX_E7x11_Lr3; //!
  float pX_E7x7_Lr0; //!
  float pX_E7x7_Lr1; //!

  std::vector<float> pX_energy_Cells ;//! 
  std::vector<int>   pX_gain_Cells ;//! 
  std::vector<int>   pX_provenance_Cells ;//! 
  std::vector<int>   pX_sampling_Cells ;//! 

  std::vector<float> pX_time_Cells ;//! 
  std::vector<float> pX_x_Cells ;//! 
  std::vector<float> pX_dx_Cells ;//! 
  std::vector<float> pX_y_Cells ;//! 
  std::vector<float> pX_dy_Cells ;//! 
  std::vector<float> pX_z_Cells ;//! 
  std::vector<float> pX_dz_Cells ;//! 
  std::vector<float> pX_eta_Cells ;//! 
  std::vector<float> pX_deta_Cells ;//! 
  std::vector<float> pX_etasize_Cells ;//! 
  std::vector<float> pX_phi_Cells ;//! 
  std::vector<float> pX_dphi_Cells ;//! 
  std::vector<float> pX_phisize_Cells ;//! 

  TH1F* Hist_Probe ; //!
  TH1F* Hist_Tag ; //!
  TH1F* Hist_Bkg ; //!
  TH1F* Hist_Z ; //!

  TH1F* Hist_ZmassAll ; //!
  TH1F* Hist_ZmassSel ; //!

  TH1F* Hist_CutTagCandidates ; //!
  TH1F* Hist_CutProbeCandidates ; //!
  TH1F* Hist_CutZCCCandidates ; //!
  TH1F* Hist_CutZCFCandidates ; //!
  TH1F* Hist_CutZGoodCandidates ; //!
  TH1F* Hist_ZDoublePair ; //!
  TH1F* Hist_nZ ; //!


  // this is a standard constructor
  MyTagAndProbeAnalysis ();

  // these are the functions inherited from Algorithm
  virtual EL::StatusCode setupJob (EL::Job& job);
  virtual EL::StatusCode fileExecute ();
  virtual EL::StatusCode histInitialize ();
  virtual EL::StatusCode changeInput (bool firstFile);
  virtual EL::StatusCode initialize ();
  virtual EL::StatusCode execute ();
  virtual EL::StatusCode postExecute ();
  virtual EL::StatusCode finalize ();
  virtual EL::StatusCode histFinalize ();
  void FillnTuple(const xAOD::Electron* el_tag , const xAOD::Electron* el_p) ;

  std::vector< const xAOD::Electron* > MyCutTag( xAOD::ElectronContainer* electrons, const xAOD::JetContainer* jet_obj ) ;
  std::vector< const xAOD::Electron* > MyCutProbe( xAOD::ElectronContainer* electrons ) ;
  std::vector< const xAOD::Electron* > MyCutBackground( xAOD::ElectronContainer* electrons , const xAOD::MissingET* met_obj) ;
  std::vector< std::pair<const xAOD::Electron*,const xAOD::Electron*> > MyCutZ( std::vector< const xAOD::Electron* >& electrons_probe , std::vector< const xAOD::Electron* >& electrons_tag) ;

  // this is needed to distribute the algorithm to the workers
  ClassDef(MyTagAndProbeAnalysis, 1);
};

#endif
