//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Dec 21 18:18:23 2017 by ROOT version 6.08/06
// from TTree CollectionTree/CollectionTree
// found on file: /groups/hep/alonso/ForTroels/CellHack/MyDADO/mc16_13TeV.361106.PowhegPythia8EvtGen_AZNLOCTEQ6L1_Zee.merge.AOD.e3601_s3126_r9781_r9778/DAOD_EGAM1.DAODSmall.root
//////////////////////////////////////////////////////////

#ifndef CollectionTree_h
#define CollectionTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "versions/TrigConfKeys_v1.h"
#include "versions/EventAuxInfo_v1.h"
#include "versions/TrigDecisionAuxInfo_v1.h"
#include "versions/EventInfo_v1.h"
#include "versions/TrigNavigationAuxInfo_v1.h"
#include "versions/TrigDecision_v1.h"
#include "versions/MissingETAuxAssociationMap_v2.h"
#include "versions/MissingETAssociationMap_v1.h"
#include "versions/RoiDescriptorStore_v1.h"
#include "versions/TrigNavigation_v1.h"
#include "versions/RoiDescriptorStoreAuxInfo_v1.h"
#include "versions/EventShapeAuxInfo_v1.h"
#include "versions/EventShape_v1.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "versions/MissingETContainer_v1.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AuxContainerBase.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "versions/JetAuxContainer_v1.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "ElementLinkBase.h"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class CollectionTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxEventInfoAux = 1;
   const Int_t kMaxxTrigDecisionAux = 1;
   const Int_t kMaxTrigNavigationAux = 1;
   const Int_t kMaxMETAssoc_AntiKt4EMTopoAux = 1;
   const Int_t kMaxHLT_xAOD__RoiDescriptorStore_initialRoIAux = 1;
   const Int_t kMaxKt4EMTopoOriginEventShapeAux = 1;
   const Int_t kMaxNeutralParticleFlowIsoCentralEventShapeAux = 1;
   const Int_t kMaxNeutralParticleFlowIsoForwardEventShapeAux = 1;
   const Int_t kMaxParticleFlowIsoCentralEventShapeAux = 1;
   const Int_t kMaxParticleFlowIsoForwardEventShapeAux = 1;
   const Int_t kMaxTopoClusterIsoCentralEventShapeAux = 1;
   const Int_t kMaxTopoClusterIsoForwardEventShapeAux = 1;
   const Int_t kMaxBTagging_AntiKt4EMTopoAux = 1;
   const Int_t kMaxCaloCalTopoClustersAux = 1;
   const Int_t kMaxCombinedMuonTrackParticlesAux = 1;
   const Int_t kMaxElectronsAux = 1;
   const Int_t kMaxExtrapolatedMuonTrackParticlesAux = 1;
   const Int_t kMaxGSFConversionVerticesAux = 1;
   const Int_t kMaxGSFTrackParticlesAux = 1;
   const Int_t kMaxHLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAux = 1;
   const Int_t kMaxHLT_xAOD__ElectronContainer_egamma_ElectronsAux = 1;
   const Int_t kMaxHLT_xAOD__PhotonContainer_egamma_PhotonsAux = 1;
   const Int_t kMaxHLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAux = 1;
   const Int_t kMaxHLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAux = 1;
   const Int_t kMaxHLT_xAOD__TrigElectronContainer_L2ElectronFexAux = 1;
   const Int_t kMaxHLT_xAOD__TrigPassBitsContainer_passbitsAux = 1;
   const Int_t kMaxHLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAux = 1;
   const Int_t kMaxHLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAux = 1;
   const Int_t kMaxInDetForwardTrackParticlesAux = 1;
   const Int_t kMaxInDetTrackParticlesAux = 1;
   const Int_t kMaxLVL1EmTauRoIsAux = 1;
   const Int_t kMaxMET_Core_AntiKt4EMTopoAux = 1;
   const Int_t kMaxMET_Reference_AntiKt4EMTopoAux = 1;
   const Int_t kMaxMET_TrackAux = 1;
   const Int_t kMaxMET_TruthAux = 1;
   const Int_t kMaxMuonSegmentsAux = 1;
   const Int_t kMaxMuonSpectrometerTrackParticlesAux = 1;
   const Int_t kMaxMuonTruthParticlesAux = 1;
   const Int_t kMaxMuonsAux = 1;
   const Int_t kMaxNewSwElectronsAux = 1;
   const Int_t kMaxPhotonsAux = 1;
   const Int_t kMaxPrimaryVerticesAux = 1;
   const Int_t kMaxTauJetsAux = 1;
   const Int_t kMaxTauTracksAux = 1;
   const Int_t kMaxTruthEventsAux = 1;
   const Int_t kMaxTruthParticlesAux = 1;
   const Int_t kMaxTruthVerticesAux = 1;
   const Int_t kMaxegammaClustersAux = 1;
   const Int_t kMaxegammaTruthParticlesAux = 1;
   const Int_t kMaxAntiKt4EMTopoJetsAux = 1;
   const Int_t kMaxAntiKt4PV0TrackJetsAux = 1;
   const Int_t kMaxAntiKt4TruthJetsAux = 1;
   const Int_t kMaxAntiKt4EMTopoJetsAuxDyn_btaggingLink = 43;
   const Int_t kMaxAntiKt4PV0TrackJetsAuxDyn_btaggingLink = 40;
   const Int_t kMaxCombinedMuonTrackParticlesAuxDyn_truthParticleLink = 4;
   const Int_t kMaxElectronsAuxDyn_truthParticleLink = 32;
   const Int_t kMaxElectronsAuxDyn_firstEgMotherTruthParticleLink = 32;
   const Int_t kMaxElectronsAuxDyn_lastEgMotherTruthParticleLink = 32;
   const Int_t kMaxElectronsAuxDyn_NewSwClusterLink = 32;
   const Int_t kMaxElectronsAuxDyn_ambiguityLink = 32;
   const Int_t kMaxEventInfoAuxDyn_subEventLink = 1;
   const Int_t kMaxExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink = 4;
   const Int_t kMaxGSFTrackParticlesAuxDyn_trackLink = 73;
   const Int_t kMaxGSFTrackParticlesAuxDyn_truthParticleLink = 73;
   const Int_t kMaxGSFTrackParticlesAuxDyn_originalTrackParticle = 73;
   const Int_t kMaxGSFTrackParticlesAuxDyn_vertexLink = 73;
   const Int_t kMaxHLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink = 304;
   const Int_t kMaxHLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink = 1592;
   const Int_t kMaxHLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink = 1592;
   const Int_t kMaxHLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink = 158;
   const Int_t kMaxHLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink = 26;
   const Int_t kMaxInDetTrackParticlesAuxDyn_truthParticleLink = 2285;
   const Int_t kMaxInDetTrackParticlesAuxDyn_vertexLink = 2285;
   const Int_t kMaxMuonSegmentsAuxDyn_truthSegmentLink = 81;
   const Int_t kMaxMuonSegmentsAuxDyn_muonSegment = 81;
   const Int_t kMaxMuonSpectrometerTrackParticlesAuxDyn_vertexLink = 8;
   const Int_t kMaxMuonSpectrometerTrackParticlesAuxDyn_truthParticleLink = 8;
   const Int_t kMaxMuonsAuxDyn_truthParticleLink = 11;
   const Int_t kMaxNewSwElectronsAuxDyn_NewSwClusterLink = 32;
   const Int_t kMaxNewSwElectronsAuxDyn_ambiguityLink = 32;
   const Int_t kMaxNewSwElectronsAuxDyn_truthParticleLink = 32;
   const Int_t kMaxNewSwElectronsAuxDyn_firstEgMotherTruthParticleLink = 32;
   const Int_t kMaxNewSwElectronsAuxDyn_lastEgMotherTruthParticleLink = 32;
   const Int_t kMaxPhotonsAuxDyn_truthParticleLink = 89;
   const Int_t kMaxPhotonsAuxDyn_ambiguityLink = 89;
   const Int_t kMaxTauJetsAuxDyn_jetLink = 21;
   const Int_t kMaxTauJetsAuxDyn_vertexLink = 21;
   const Int_t kMaxTauJetsAuxDyn_electronLink = 21;
   const Int_t kMaxTauJetsAuxDyn_secondaryVertexLink = 21;
   const Int_t kMaxTruthEventsAuxDyn_signalProcessVertexLink = 1;
   const Int_t kMaxTruthEventsAuxDyn_beamParticle1Link = 1;
   const Int_t kMaxTruthEventsAuxDyn_beamParticle2Link = 1;
   const Int_t kMaxTruthParticlesAuxDyn_prodVtxLink = 3308;
   const Int_t kMaxTruthParticlesAuxDyn_decayVtxLink = 3308;
   const Int_t kMaxegammaClustersAuxDyn_CellLink = 114;
   const Int_t kMaxegammaTruthParticlesAuxDyn_prodVtxLink = 6;
   const Int_t kMaxegammaTruthParticlesAuxDyn_decayVtxLink = 6;
   const Int_t kMaxegammaTruthParticlesAuxDyn_recoElectronLink = 6;
   const Int_t kMaxegammaTruthParticlesAuxDyn_recoPhotonLink = 6;
   const Int_t kMaxegammaTruthParticlesAuxDyn_truthParticleLink = 6;
   const Int_t kMaxMuonsAuxDyn_inDetTrackParticleLink = 11;
   const Int_t kMaxMuonsAuxDyn_muonSpectrometerTrackParticleLink = 11;
   const Int_t kMaxMuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink = 11;
   const Int_t kMaxMuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink = 11;
   const Int_t kMaxMuonsAuxDyn_combinedTrackParticleLink = 11;
   const Int_t kMaxMuonsAuxDyn_clusterLink = 11;
   const Int_t kMaxCombinedMuonTrackParticlesAuxDyn_vertexLink = 4;
   const Int_t kMaxExtrapolatedMuonTrackParticlesAuxDyn_vertexLink = 4;

   // Declaration of leaf types
   PileUpEventInfo_p5 *McEventInfo;
   CaloCompactCellContainer *AODCellContainer;
   xAOD::TrigConfKeys_v1 *TrigConfKeys;
 //xAOD::EventAuxInfo_v1 *EventInfoAux_;
   xAOD::EventAuxInfo_v1 *EventInfoAux_xAOD__AuxInfoBase;
   UInt_t          EventInfoAux_runNumber;
   ULong64_t       EventInfoAux_eventNumber;
   UInt_t          EventInfoAux_lumiBlock;
   UInt_t          EventInfoAux_timeStamp;
   UInt_t          EventInfoAux_timeStampNSOffset;
   UInt_t          EventInfoAux_bcid;
   UInt_t          EventInfoAux_detectorMask0;
   UInt_t          EventInfoAux_detectorMask1;
   UInt_t          EventInfoAux_detectorMask2;
   UInt_t          EventInfoAux_detectorMask3;
   vector<pair<string,string> > EventInfoAux_detDescrTags;
   UInt_t          EventInfoAux_eventTypeBitmask;
   UInt_t          EventInfoAux_statusElement;
   UInt_t          EventInfoAux_extendedLevel1ID;
   UShort_t        EventInfoAux_level1TriggerType;
   vector<string>  EventInfoAux_streamTagNames;
   vector<string>  EventInfoAux_streamTagTypes;
   vector<char>    EventInfoAux_streamTagObeysLumiblock;
   Float_t         EventInfoAux_actualInteractionsPerCrossing;
   Float_t         EventInfoAux_averageInteractionsPerCrossing;
   UInt_t          EventInfoAux_pixelFlags;
   UInt_t          EventInfoAux_sctFlags;
   UInt_t          EventInfoAux_trtFlags;
   UInt_t          EventInfoAux_larFlags;
   UInt_t          EventInfoAux_tileFlags;
   UInt_t          EventInfoAux_muonFlags;
   UInt_t          EventInfoAux_forwardDetFlags;
   UInt_t          EventInfoAux_coreFlags;
   UInt_t          EventInfoAux_backgroundFlags;
   UInt_t          EventInfoAux_lumiFlags;
   Float_t         EventInfoAux_beamPosX;
   Float_t         EventInfoAux_beamPosY;
   Float_t         EventInfoAux_beamPosZ;
   Float_t         EventInfoAux_beamPosSigmaX;
   Float_t         EventInfoAux_beamPosSigmaY;
   Float_t         EventInfoAux_beamPosSigmaZ;
   Float_t         EventInfoAux_beamPosSigmaXY;
   Float_t         EventInfoAux_beamTiltXZ;
   Float_t         EventInfoAux_beamTiltYZ;
   UInt_t          EventInfoAux_beamStatus;
 //xAOD::TrigDecisionAuxInfo_v1 *xTrigDecisionAux_;
   xAOD::TrigDecisionAuxInfo_v1 *xTrigDecisionAux_xAOD__AuxInfoBase;
   UInt_t          xTrigDecisionAux_smk;
   Char_t          xTrigDecisionAux_bgCode;
   vector<unsigned int> xTrigDecisionAux_tav;
   vector<unsigned int> xTrigDecisionAux_tap;
   vector<unsigned int> xTrigDecisionAux_tbp;
   UInt_t          xTrigDecisionAux_lvl2ErrorBits;
   UInt_t          xTrigDecisionAux_efErrorBits;
   Bool_t          xTrigDecisionAux_lvl2Truncated;
   Bool_t          xTrigDecisionAux_efTruncated;
   vector<unsigned int> xTrigDecisionAux_lvl2PassedPhysics;
   vector<unsigned int> xTrigDecisionAux_efPassedPhysics;
   vector<unsigned int> xTrigDecisionAux_lvl2PassedRaw;
   vector<unsigned int> xTrigDecisionAux_efPassedRaw;
   vector<unsigned int> xTrigDecisionAux_lvl2PassedThrough;
   vector<unsigned int> xTrigDecisionAux_efPassedThrough;
   vector<unsigned int> xTrigDecisionAux_lvl2Prescaled;
   vector<unsigned int> xTrigDecisionAux_efPrescaled;
   vector<unsigned int> xTrigDecisionAux_lvl2Resurrected;
   vector<unsigned int> xTrigDecisionAux_efResurrected;
   xAOD::EventInfo_v1 *EventInfo;
 //xAOD::TrigNavigationAuxInfo_v1 *TrigNavigationAux_;
   xAOD::TrigNavigationAuxInfo_v1 *TrigNavigationAux_xAOD__AuxInfoBase;
   vector<unsigned int> TrigNavigationAux_serialized;
   xAOD::TrigDecision_v1 *xTrigDecision;
 //xAOD::MissingETAuxAssociationMap_v2 *METAssoc_AntiKt4EMTopoAux_;
   xAOD::MissingETAuxAssociationMap_v2 *METAssoc_AntiKt4EMTopoAux_xAOD__AuxContainerBase;
   vector<ElementLink<DataVector<xAOD::Jet_v1> > > METAssoc_AntiKt4EMTopoAux_jetLink;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > METAssoc_AntiKt4EMTopoAux_objectLinks;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_calpx;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_calpy;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_calpz;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_cale;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_calsumpt;
   vector<vector<ULong64_t> > METAssoc_AntiKt4EMTopoAux_calkey;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_trkpx;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_trkpy;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_trkpz;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_trke;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_trksumpt;
   vector<vector<ULong64_t> > METAssoc_AntiKt4EMTopoAux_trkkey;
   vector<double>  METAssoc_AntiKt4EMTopoAux_jettrkpx;
   vector<double>  METAssoc_AntiKt4EMTopoAux_jettrkpy;
   vector<double>  METAssoc_AntiKt4EMTopoAux_jettrkpz;
   vector<double>  METAssoc_AntiKt4EMTopoAux_jettrke;
   vector<double>  METAssoc_AntiKt4EMTopoAux_jettrksumpt;
   vector<vector<vector<unsigned long> > > METAssoc_AntiKt4EMTopoAux_overlapIndices;
   vector<vector<vector<unsigned char> > > METAssoc_AntiKt4EMTopoAux_overlapTypes;
   vector<char>    METAssoc_AntiKt4EMTopoAux_isMisc;
   xAOD::MissingETAssociationMap_v1 *METAssoc_AntiKt4EMTopo;
   xAOD::RoiDescriptorStore_v1 *HLT_xAOD__RoiDescriptorStore_initialRoI;
   xAOD::TrigNavigation_v1 *TrigNavigation;
 //xAOD::RoiDescriptorStoreAuxInfo_v1 *HLT_xAOD__RoiDescriptorStore_initialRoIAux_;
   xAOD::RoiDescriptorStoreAuxInfo_v1 *HLT_xAOD__RoiDescriptorStore_initialRoIAux_xAOD__AuxInfoBase;
   vector<vector<unsigned int> > HLT_xAOD__RoiDescriptorStore_initialRoIAux_serialised;
 //xAOD::EventShapeAuxInfo_v1 *Kt4EMTopoOriginEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *Kt4EMTopoOriginEventShapeAux_xAOD__AuxInfoBase;
 //xAOD::EventShapeAuxInfo_v1 *NeutralParticleFlowIsoCentralEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *NeutralParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase;
 //xAOD::EventShapeAuxInfo_v1 *NeutralParticleFlowIsoForwardEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *NeutralParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase;
 //xAOD::EventShapeAuxInfo_v1 *ParticleFlowIsoCentralEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *ParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase;
 //xAOD::EventShapeAuxInfo_v1 *ParticleFlowIsoForwardEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *ParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase;
 //xAOD::EventShapeAuxInfo_v1 *TopoClusterIsoCentralEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *TopoClusterIsoCentralEventShapeAux_xAOD__AuxInfoBase;
 //xAOD::EventShapeAuxInfo_v1 *TopoClusterIsoForwardEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *TopoClusterIsoForwardEventShapeAux_xAOD__AuxInfoBase;
   xAOD::EventShape_v1 *Kt4EMTopoOriginEventShape;
   xAOD::EventShape_v1 *NeutralParticleFlowIsoCentralEventShape;
   xAOD::EventShape_v1 *NeutralParticleFlowIsoForwardEventShape;
   xAOD::EventShape_v1 *ParticleFlowIsoCentralEventShape;
   xAOD::EventShape_v1 *ParticleFlowIsoForwardEventShape;
   xAOD::EventShape_v1 *TopoClusterIsoCentralEventShape;
   xAOD::EventShape_v1 *TopoClusterIsoForwardEventShape;
   DataVector<xAOD::EmTauRoI_v2> *LVL1EmTauRoIs;
   DataVector<xAOD::Electron_v1> *Electrons;
   DataVector<xAOD::Electron_v1> *HLT_xAOD__ElectronContainer_egamma_Electrons;
   DataVector<xAOD::Electron_v1> *NewSwElectrons;
   DataVector<xAOD::Vertex_v1> *GSFConversionVertices;
   DataVector<xAOD::Vertex_v1> *PrimaryVertices;
   TrigRoiDescriptorCollection_p3 *HLT_TrigRoiDescriptorCollection_initialRoI;
   xAOD::MissingETContainer_v1 *MET_Core_AntiKt4EMTopo;
   xAOD::MissingETContainer_v1 *MET_Reference_AntiKt4EMTopo;
   xAOD::MissingETContainer_v1 *MET_Track;
   xAOD::MissingETContainer_v1 *MET_Truth;
   DataVector<xAOD::Photon_v1> *HLT_xAOD__PhotonContainer_egamma_Photons;
   DataVector<xAOD::Photon_v1> *Photons;
   DataVector<xAOD::TrigRNNOutput_v2> *HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFex;
   DataVector<xAOD::TrigPassBits_v1> *HLT_xAOD__TrigPassBitsContainer_passbits;
   DataVector<xAOD::TrigElectron_v1> *HLT_xAOD__TrigElectronContainer_L2ElectronFex;
   DataVector<xAOD::MuonSegment_v1> *MuonSegments;
   CaloClusterCellLinkContainer_p1 *egammaClusters_links;
   DataVector<xAOD::TauJet_v3> *TauJets;
   DataVector<xAOD::Muon_v1> *Muons;
   DataVector<xAOD::TruthEvent_v1> *TruthEvents;
   DataVector<xAOD::CaloCluster_v1> *CaloCalTopoClusters;
   DataVector<xAOD::CaloCluster_v1> *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFex;
   DataVector<xAOD::CaloCluster_v1> *egammaClusters;
   xAOD::AuxContainerBase *BTagging_AntiKt4EMTopoAux_;
   xAOD::AuxContainerBase *CaloCalTopoClustersAux_;
   xAOD::AuxContainerBase *CombinedMuonTrackParticlesAux_;
   xAOD::AuxContainerBase *ElectronsAux_;
   xAOD::AuxContainerBase *ExtrapolatedMuonTrackParticlesAux_;
   xAOD::AuxContainerBase *GSFConversionVerticesAux_;
   xAOD::AuxContainerBase *GSFTrackParticlesAux_;
   xAOD::AuxContainerBase *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAux_;
   xAOD::AuxContainerBase *HLT_xAOD__ElectronContainer_egamma_ElectronsAux_;
   xAOD::AuxContainerBase *HLT_xAOD__PhotonContainer_egamma_PhotonsAux_;
   xAOD::AuxContainerBase *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAux_;
   xAOD::AuxContainerBase *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAux_;
   xAOD::AuxContainerBase *HLT_xAOD__TrigElectronContainer_L2ElectronFexAux_;
   xAOD::AuxContainerBase *HLT_xAOD__TrigPassBitsContainer_passbitsAux_;
   xAOD::AuxContainerBase *HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAux_;
   xAOD::AuxContainerBase *HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAux_;
   xAOD::AuxContainerBase *InDetForwardTrackParticlesAux_;
   xAOD::AuxContainerBase *InDetTrackParticlesAux_;
   xAOD::AuxContainerBase *LVL1EmTauRoIsAux_;
   xAOD::AuxContainerBase *MET_Core_AntiKt4EMTopoAux_;
   xAOD::AuxContainerBase *MET_Reference_AntiKt4EMTopoAux_;
   xAOD::AuxContainerBase *MET_TrackAux_;
   xAOD::AuxContainerBase *MET_TruthAux_;
   xAOD::AuxContainerBase *MuonSegmentsAux_;
   xAOD::AuxContainerBase *MuonSpectrometerTrackParticlesAux_;
   xAOD::AuxContainerBase *MuonTruthParticlesAux_;
   xAOD::AuxContainerBase *MuonsAux_;
   xAOD::AuxContainerBase *NewSwElectronsAux_;
   xAOD::AuxContainerBase *PhotonsAux_;
   xAOD::AuxContainerBase *PrimaryVerticesAux_;
   xAOD::AuxContainerBase *TauJetsAux_;
   xAOD::AuxContainerBase *TauTracksAux_;
   xAOD::AuxContainerBase *TruthEventsAux_;
   xAOD::AuxContainerBase *TruthParticlesAux_;
   xAOD::AuxContainerBase *TruthVerticesAux_;
   xAOD::AuxContainerBase *egammaClustersAux_;
   xAOD::AuxContainerBase *egammaTruthParticlesAux_;
   DataVector<xAOD::TruthParticle_v1> *MuonTruthParticles;
   DataVector<xAOD::TruthParticle_v1> *TruthParticles;
   DataVector<xAOD::TruthParticle_v1> *egammaTruthParticles;
   DataVector<xAOD::TruthVertex_v1> *TruthVertices;
   DataVector<xAOD::Jet_v1> *AntiKt4EMTopoJets;
   DataVector<xAOD::Jet_v1> *AntiKt4LCTopoJets;
   DataVector<xAOD::Jet_v1> *AntiKt4PV0TrackJets;
   DataVector<xAOD::Jet_v1> *AntiKt4TruthJets;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKt4EMTopo;
   DataVector<xAOD::TrigEMCluster_v1> *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgamma;
   DataVector<xAOD::TrackParticle_v1> *CombinedMuonTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *ExtrapolatedMuonTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *GSFTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrig;
   DataVector<xAOD::TrackParticle_v1> *InDetForwardTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *InDetTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *MuonSpectrometerTrackParticles;
 //xAOD::JetAuxContainer_v1 *AntiKt4EMTopoJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4EMTopoJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4EMTopoJetsAux_pt;
   vector<float>   AntiKt4EMTopoJetsAux_eta;
   vector<float>   AntiKt4EMTopoJetsAux_phi;
   vector<float>   AntiKt4EMTopoJetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4EMTopoJetsAux_constituentLinks;
   vector<vector<float> > AntiKt4EMTopoJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt4PV0TrackJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4PV0TrackJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4PV0TrackJetsAux_pt;
   vector<float>   AntiKt4PV0TrackJetsAux_eta;
   vector<float>   AntiKt4PV0TrackJetsAux_phi;
   vector<float>   AntiKt4PV0TrackJetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4PV0TrackJetsAux_constituentLinks;
   vector<vector<float> > AntiKt4PV0TrackJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt4TruthJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4TruthJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4TruthJetsAux_pt;
   vector<float>   AntiKt4TruthJetsAux_eta;
   vector<float>   AntiKt4TruthJetsAux_phi;
   vector<float>   AntiKt4TruthJetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4TruthJetsAux_constituentLinks;
   vector<vector<float> > AntiKt4TruthJetsAux_constituentWeights;
   DataVector<xAOD::TrigRingerRings_v2> *HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgamma;
   DataVector<xAOD::TauTrack_v1> *TauTracks;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_ConeExclCHadronsFinal;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_DetectorEta;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_HECFrac;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_EMFrac;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_HECQuality;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_FracSamplingMax;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Width;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<char>    *AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<char>    *AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_TightBad;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JVFCorr;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Jvt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JvtRpt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_LArQuality;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_NegativeE;
   vector<vector<int> > *AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000;
   Int_t           AntiKt4EMTopoJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKt4EMTopoJetsAuxDyn_btaggingLink];   //[AntiKt4EMTopoJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKt4EMTopoJetsAuxDyn_btaggingLink];   //[AntiKt4EMTopoJetsAuxDyn.btaggingLink_]
   vector<vector<int> > *AntiKt4EMTopoJetsAuxDyn_NumTrkPt500;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_GhostTrack;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_AverageLArQF;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_ConeExclBHadronsFinal;
   Int_t           AntiKt4PV0TrackJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKt4PV0TrackJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKt4PV0TrackJetsAuxDyn_btaggingLink];   //[AntiKt4PV0TrackJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKt4PV0TrackJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKt4PV0TrackJetsAuxDyn_btaggingLink];   //[AntiKt4PV0TrackJetsAuxDyn.btaggingLink_]
   vector<float>   *AntiKt4TruthJetsAuxDyn_ActiveArea;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ActiveArea4vec_m;
   vector<int>     *AntiKt4TruthJetsAuxDyn_PartonTruthLabelID;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ActiveArea4vec_pt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_ConeExclCHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_ConeExclTausFinal;
   vector<float>   *AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B;
   vector<int>     *AntiKt4TruthJetsAuxDyn_ConeTruthLabelID;
   vector<float>   *AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C;
   vector<int>     *AntiKt4TruthJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Width;
   vector<float>   *AntiKt4TruthJetsAuxDyn_WidthPhi;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostBHadronsFinal;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalPt;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostBHadronsInitial;
   vector<int>     *AntiKt4TruthJetsAuxDyn_InputType;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialCount;
   vector<int>     *AntiKt4TruthJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialPt;
   vector<float>   *AntiKt4TruthJetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostBQuarksFinal;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostCHadronsFinal;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostCHadronsInitial;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostCQuarksFinal;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostHBosons;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostHBosonsCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostHBosonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostPartons;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostPartonsCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostPartonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostTQuarksFinal;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostTausFinal;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostTausFinalCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostTausFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostWBosons;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostWBosonsCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostWBosonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostZBosons;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostZBosonsCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostZBosonsPt;
   vector<int>     *AntiKt4TruthJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<int>     *AntiKt4TruthJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetGhostArea;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_DL1_pb;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_DL1_pc;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_DL1_pu;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pb;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_MV2c100_discriminant;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pc;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_MV2c10_discriminant;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pu;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_MV2c10mu_discriminant;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pb;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_MV2c10rnn_discriminant;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pc;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_MV2cl100_discriminant;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pu;
   vector<vector<float> > *CaloCalTopoClustersAuxDyn_e_sampl;
   vector<float>   *CaloCalTopoClustersAuxDyn_time;
   vector<unsigned int> *CaloCalTopoClustersAuxDyn_clusterSize;
   vector<float>   *CaloCalTopoClustersAuxDyn_eta0;
   vector<float>   *CaloCalTopoClustersAuxDyn_phi0;
   vector<float>   *CaloCalTopoClustersAuxDyn_rawE;
   vector<float>   *CaloCalTopoClustersAuxDyn_rawEta;
   vector<float>   *CaloCalTopoClustersAuxDyn_rawPhi;
   vector<float>   *CaloCalTopoClustersAuxDyn_rawM;
   vector<float>   *CaloCalTopoClustersAuxDyn_altE;
   vector<float>   *CaloCalTopoClustersAuxDyn_AVG_LAR_Q;
   vector<float>   *CaloCalTopoClustersAuxDyn_altEta;
   vector<float>   *CaloCalTopoClustersAuxDyn_AVG_TILE_Q;
   vector<float>   *CaloCalTopoClustersAuxDyn_altPhi;
   vector<float>   *CaloCalTopoClustersAuxDyn_BADLARQ_FRAC;
   vector<float>   *CaloCalTopoClustersAuxDyn_altM;
   vector<float>   *CaloCalTopoClustersAuxDyn_CENTER_LAMBDA;
   vector<float>   *CaloCalTopoClustersAuxDyn_calE;
   vector<float>   *CaloCalTopoClustersAuxDyn_CENTER_MAG;
   vector<float>   *CaloCalTopoClustersAuxDyn_calEta;
   vector<float>   *CaloCalTopoClustersAuxDyn_EM_PROBABILITY;
   vector<float>   *CaloCalTopoClustersAuxDyn_calPhi;
   vector<float>   *CaloCalTopoClustersAuxDyn_calM;
   vector<float>   *CaloCalTopoClustersAuxDyn_ENG_BAD_CELLS;
   vector<vector<xAOD::CaloClusterBadChannelData_v1> > *CaloCalTopoClustersAuxDyn_BadChannelList;
   vector<float>   *CaloCalTopoClustersAuxDyn_ENG_FRAC_MAX;
   vector<float>   *CaloCalTopoClustersAuxDyn_ENG_POS;
   vector<float>   *CaloCalTopoClustersAuxDyn_FIRST_ENG_DENS;
   vector<float>   *CaloCalTopoClustersAuxDyn_ISOLATION;
   vector<float>   *CaloCalTopoClustersAuxDyn_N_BAD_CELLS;
   vector<float>   *CaloCalTopoClustersAuxDyn_SECOND_LAMBDA;
   vector<float>   *CaloCalTopoClustersAuxDyn_SECOND_R;
   vector<vector<vector<unsigned int> > > *CombinedMuonTrackParticlesAuxDyn_alignEffectChId;
   Int_t           CombinedMuonTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxCombinedMuonTrackParticlesAuxDyn_truthParticleLink];   //[CombinedMuonTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxCombinedMuonTrackParticlesAuxDyn_truthParticleLink];   //[CombinedMuonTrackParticlesAuxDyn.truthParticleLink_]
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans;
   vector<float>   *ElectronsAuxDyn_e233;
   vector<float>   *ElectronsAuxDyn_e235;
   vector<float>   *ElectronsAuxDyn_e237;
   vector<float>   *ElectronsAuxDyn_e255;
   vector<float>   *ElectronsAuxDyn_e2ts1;
   vector<float>   *ElectronsAuxDyn_e2tsts1;
   vector<float>   *ElectronsAuxDyn_ecore;
   vector<float>   *ElectronsAuxDyn_ehad1;
   vector<float>   *ElectronsAuxDyn_emaxs1;
   vector<float>   *ElectronsAuxDyn_emins1;
   vector<float>   *ElectronsAuxDyn_etcone20ptCorrection;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *ElectronsAuxDyn_trackParticleLinks;
   vector<float>   *ElectronsAuxDyn_etcone30ptCorrection;
   vector<float>   *ElectronsAuxDyn_etcone40ptCorrection;
   vector<float>   *ElectronsAuxDyn_ethad;
   vector<float>   *ElectronsAuxDyn_ethad1;
   vector<float>   *ElectronsAuxDyn_neflowisol20ptCorrection;
   vector<float>   *ElectronsAuxDyn_neflowisol30ptCorrection;
   vector<float>   *ElectronsAuxDyn_neflowisol40ptCorrection;
   vector<float>   *ElectronsAuxDyn_pos;
   vector<float>   *ElectronsAuxDyn_pt;
   vector<float>   *ElectronsAuxDyn_pos7;
   vector<float>   *ElectronsAuxDyn_eta;
   vector<float>   *ElectronsAuxDyn_poscs1;
   vector<float>   *ElectronsAuxDyn_phi;
   vector<float>   *ElectronsAuxDyn_poscs2;
   vector<float>   *ElectronsAuxDyn_m;
   vector<float>   *ElectronsAuxDyn_r33over37allcalo;
   vector<float>   *ElectronsAuxDyn_topoetcone20ptCorrection;
   vector<float>   *ElectronsAuxDyn_topoetcone30ptCorrection;
   vector<float>   *ElectronsAuxDyn_topoetcone40ptCorrection;
   vector<float>   *ElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection;
   vector<float>   *ElectronsAuxDyn_widths1;
   vector<float>   *ElectronsAuxDyn_widths2;
   vector<int>     *ElectronsAuxDyn_truthOrigin;
   Int_t           ElectronsAuxDyn_truthParticleLink_;
   UInt_t          ElectronsAuxDyn_truthParticleLink_m_persKey[kMaxElectronsAuxDyn_truthParticleLink];   //[ElectronsAuxDyn.truthParticleLink_]
   UInt_t          ElectronsAuxDyn_truthParticleLink_m_persIndex[kMaxElectronsAuxDyn_truthParticleLink];   //[ElectronsAuxDyn.truthParticleLink_]
   vector<int>     *ElectronsAuxDyn_truthType;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHVeryLoose;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHLoose;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHMedium;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHTight;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsIsEMLoose;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsIsEMLooseIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsIsEMMedium;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsIsEMMediumIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsIsEMTight;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsIsEMTightIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsML;
   vector<int>     *ElectronsAuxDyn_truthPdgId;
   vector<int>     *ElectronsAuxDyn_firstEgMotherTruthType;
   vector<int>     *ElectronsAuxDyn_firstEgMotherTruthOrigin;
   Int_t           ElectronsAuxDyn_firstEgMotherTruthParticleLink_;
   UInt_t          ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey[kMaxElectronsAuxDyn_firstEgMotherTruthParticleLink];   //[ElectronsAuxDyn.firstEgMotherTruthParticleLink_]
   UInt_t          ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex[kMaxElectronsAuxDyn_firstEgMotherTruthParticleLink];   //[ElectronsAuxDyn.firstEgMotherTruthParticleLink_]
   vector<int>     *ElectronsAuxDyn_firstEgMotherPdgId;
   vector<int>     *ElectronsAuxDyn_lastEgMotherTruthType;
   vector<int>     *ElectronsAuxDyn_lastEgMotherTruthOrigin;
   Int_t           ElectronsAuxDyn_lastEgMotherTruthParticleLink_;
   UInt_t          ElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persKey[kMaxElectronsAuxDyn_lastEgMotherTruthParticleLink];   //[ElectronsAuxDyn.lastEgMotherTruthParticleLink_]
   UInt_t          ElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persIndex[kMaxElectronsAuxDyn_lastEgMotherTruthParticleLink];   //[ElectronsAuxDyn.lastEgMotherTruthParticleLink_]
   vector<int>     *ElectronsAuxDyn_lastEgMotherPdgId;
   vector<float>   *ElectronsAuxDyn_E_Lr0_HiG;
   vector<float>   *ElectronsAuxDyn_E_Lr1_HiG;
   vector<float>   *ElectronsAuxDyn_E_Lr2_HiG;
   vector<float>   *ElectronsAuxDyn_E_Lr3_HiG;
   vector<float>   *ElectronsAuxDyn_E_Lr0_MedG;
   vector<float>   *ElectronsAuxDyn_E_Lr1_MedG;
   vector<float>   *ElectronsAuxDyn_E_Lr2_MedG;
   vector<float>   *ElectronsAuxDyn_E_Lr3_MedG;
   vector<float>   *ElectronsAuxDyn_E_Lr0_LowG;
   vector<float>   *ElectronsAuxDyn_E_Lr1_LowG;
   vector<float>   *ElectronsAuxDyn_E_Lr2_LowG;
   vector<float>   *ElectronsAuxDyn_E_Lr3_LowG;
   vector<unsigned char> *ElectronsAuxDyn_nCells_Lr0_HiG;
   vector<unsigned char> *ElectronsAuxDyn_nCells_Lr1_HiG;
   vector<unsigned char> *ElectronsAuxDyn_nCells_Lr2_HiG;
   vector<unsigned char> *ElectronsAuxDyn_nCells_Lr3_HiG;
   vector<unsigned char> *ElectronsAuxDyn_nCells_Lr0_MedG;
   vector<unsigned char> *ElectronsAuxDyn_nCells_Lr1_MedG;
   vector<unsigned char> *ElectronsAuxDyn_nCells_Lr2_MedG;
   vector<unsigned char> *ElectronsAuxDyn_nCells_Lr3_MedG;
   vector<unsigned char> *ElectronsAuxDyn_nCells_Lr0_LowG;
   vector<unsigned char> *ElectronsAuxDyn_nCells_Lr1_LowG;
   vector<unsigned char> *ElectronsAuxDyn_nCells_Lr2_LowG;
   vector<unsigned char> *ElectronsAuxDyn_nCells_Lr3_LowG;
   vector<float>   *ElectronsAuxDyn_maxEcell_time;
   vector<float>   *ElectronsAuxDyn_maxEcell_energy;
   vector<int>     *ElectronsAuxDyn_maxEcell_gain;
   vector<unsigned long> *ElectronsAuxDyn_maxEcell_onlId;
   vector<float>   *ElectronsAuxDyn_maxEcell_x;
   vector<float>   *ElectronsAuxDyn_maxEcell_y;
   vector<float>   *ElectronsAuxDyn_maxEcell_z;
   vector<int>     *ElectronsAuxDyn_7x11ClusterExist;
   Int_t           ElectronsAuxDyn_NewSwClusterLink_;
   UInt_t          ElectronsAuxDyn_NewSwClusterLink_m_persKey[kMaxElectronsAuxDyn_NewSwClusterLink];   //[ElectronsAuxDyn.NewSwClusterLink_]
   UInt_t          ElectronsAuxDyn_NewSwClusterLink_m_persIndex[kMaxElectronsAuxDyn_NewSwClusterLink];   //[ElectronsAuxDyn.NewSwClusterLink_]
   vector<float>   *ElectronsAuxDyn_EG_e011;
   vector<float>   *ElectronsAuxDyn_EG_e033;
   vector<float>   *ElectronsAuxDyn_EG_e132;
   vector<float>   *ElectronsAuxDyn_EG_e1152;
   vector<float>   *ElectronsAuxDyn_EG_ethad1;
   vector<float>   *ElectronsAuxDyn_EG_ethad;
   vector<float>   *ElectronsAuxDyn_EG_ehad1;
   vector<float>   *ElectronsAuxDyn_EG_f1;
   vector<float>   *ElectronsAuxDyn_EG_f3;
   vector<float>   *ElectronsAuxDyn_EG_f1core;
   vector<float>   *ElectronsAuxDyn_EG_f3core;
   vector<float>   *ElectronsAuxDyn_EG_e233;
   vector<float>   *ElectronsAuxDyn_EG_e235;
   vector<float>   *ElectronsAuxDyn_EG_e255;
   vector<float>   *ElectronsAuxDyn_EG_e237;
   vector<float>   *ElectronsAuxDyn_EG_e277;
   vector<float>   *ElectronsAuxDyn_EG_e333;
   vector<float>   *ElectronsAuxDyn_EG_e335;
   vector<float>   *ElectronsAuxDyn_EG_e337;
   vector<float>   *ElectronsAuxDyn_EG_e377;
   vector<float>   *ElectronsAuxDyn_EG_weta1;
   vector<float>   *ElectronsAuxDyn_EG_weta2;
   vector<float>   *ElectronsAuxDyn_EG_e2ts1;
   vector<float>   *ElectronsAuxDyn_EG_e2tsts1;
   vector<float>   *ElectronsAuxDyn_EG_fracs1;
   vector<float>   *ElectronsAuxDyn_EG_widths1;
   vector<float>   *ElectronsAuxDyn_EG_widths2;
   vector<float>   *ElectronsAuxDyn_EG_poscs1;
   vector<float>   *ElectronsAuxDyn_EG_poscs2;
   vector<float>   *ElectronsAuxDyn_EG_asy1;
   vector<float>   *ElectronsAuxDyn_EG_pos;
   vector<float>   *ElectronsAuxDyn_EG_pos7;
   vector<float>   *ElectronsAuxDyn_EG_barys1;
   vector<float>   *ElectronsAuxDyn_EG_wtots1;
   vector<float>   *ElectronsAuxDyn_EG_emins1;
   vector<float>   *ElectronsAuxDyn_EG_emaxs1;
   vector<float>   *ElectronsAuxDyn_EG_r33over37allcalo;
   vector<float>   *ElectronsAuxDyn_EG_ecore;
   vector<float>   *ElectronsAuxDyn_EG_Reta;
   vector<float>   *ElectronsAuxDyn_EG_Rphi;
   vector<float>   *ElectronsAuxDyn_EG_Eratio;
   vector<unsigned short> *ElectronsAuxDyn_author;
   vector<float>   *ElectronsAuxDyn_EG_Rhad;
   vector<float>   *ElectronsAuxDyn_EG_Rhad1;
   vector<float>   *ElectronsAuxDyn_EG_DeltaE;
   vector<float>   *ElectronsAuxDyn_E3x5_Lr0;
   vector<float>   *ElectronsAuxDyn_E3x5_Lr1;
   vector<float>   *ElectronsAuxDyn_E3x5_Lr2;
   vector<float>   *ElectronsAuxDyn_E3x5_Lr3;
   vector<float>   *ElectronsAuxDyn_E5x7_Lr0;
   vector<float>   *ElectronsAuxDyn_E5x7_Lr1;
   vector<float>   *ElectronsAuxDyn_E5x7_Lr2;
   vector<float>   *ElectronsAuxDyn_E5x7_Lr3;
   vector<float>   *ElectronsAuxDyn_E7x7_Lr0;
   vector<float>   *ElectronsAuxDyn_E7x7_Lr1;
   vector<float>   *ElectronsAuxDyn_E7x7_Lr2;
   vector<float>   *ElectronsAuxDyn_E7x7_Lr3;
   vector<float>   *ElectronsAuxDyn_E7x11_Lr0;
   vector<float>   *ElectronsAuxDyn_E7x11_Lr1;
   vector<float>   *ElectronsAuxDyn_E7x11_Lr2;
   vector<float>   *ElectronsAuxDyn_E7x11_Lr3;
   vector<float>   *ElectronsAuxDyn_Energy7x11_Lr0;
   vector<float>   *ElectronsAuxDyn_Energy7x11_Lr1;
   vector<float>   *ElectronsAuxDyn_Energy7x11_Lr2;
   vector<float>   *ElectronsAuxDyn_Energy7x11_Lr3;
   vector<vector<float> > *ElectronsAuxDyn_time_7x11;
   vector<vector<float> > *ElectronsAuxDyn_energy_7x11;
   vector<vector<int> > *ElectronsAuxDyn_gain_7x11;
   vector<vector<int> > *ElectronsAuxDyn_provenance_7x11;
   vector<vector<float> > *ElectronsAuxDyn_x_7x11;
   vector<vector<float> > *ElectronsAuxDyn_dx_7x11;
   vector<vector<float> > *ElectronsAuxDyn_y_7x11;
   vector<vector<float> > *ElectronsAuxDyn_dy_7x11;
   vector<vector<float> > *ElectronsAuxDyn_z_7x11;
   vector<vector<float> > *ElectronsAuxDyn_dz_7x11;
   vector<vector<float> > *ElectronsAuxDyn_eta_7x11;
   vector<vector<float> > *ElectronsAuxDyn_deta_7x11;
   vector<vector<float> > *ElectronsAuxDyn_etasize_7x11;
   vector<vector<float> > *ElectronsAuxDyn_phi_7x11;
   vector<vector<float> > *ElectronsAuxDyn_dphi_7x11;
   vector<vector<float> > *ElectronsAuxDyn_phisize_7x11;
   vector<vector<int> > *ElectronsAuxDyn_sampling_7x11;
   vector<float>   *ElectronsAuxDyn_charge;
   vector<float>   *ElectronsAuxDyn_etcone20;
   vector<float>   *ElectronsAuxDyn_etcone30;
   vector<float>   *ElectronsAuxDyn_etcone40;
   vector<float>   *ElectronsAuxDyn_ptcone20;
   vector<float>   *ElectronsAuxDyn_ptcone30;
   vector<float>   *ElectronsAuxDyn_ptcone40;
   vector<float>   *ElectronsAuxDyn_ptvarcone20;
   vector<float>   *ElectronsAuxDyn_ptvarcone40;
   vector<short>   *ElectronsAuxDyn_PromptLeptonInput_TrackJetNTrack;
   vector<short>   *ElectronsAuxDyn_PromptLeptonInput_sv1_jf_ntrkv;
   vector<float>   *ElectronsAuxDyn_PromptLeptonInput_ip2;
   vector<float>   *ElectronsAuxDyn_PromptLeptonInput_ip3;
   vector<float>   *ElectronsAuxDyn_PromptLeptonInput_LepJetPtFrac;
   vector<float>   *ElectronsAuxDyn_PromptLeptonInput_DRlj;
   vector<float>   *ElectronsAuxDyn_PromptLeptonInput_TopoEtCone30Rel;
   vector<float>   *ElectronsAuxDyn_PromptLeptonInput_PtVarCone30Rel;
   vector<float>   *ElectronsAuxDyn_PromptLeptonIso;
   vector<float>   *ElectronsAuxDyn_topoetcone20;
   vector<float>   *ElectronsAuxDyn_topoetcone30;
   vector<float>   *ElectronsAuxDyn_ptvarcone30;
   vector<float>   *ElectronsAuxDyn_PromptLeptonInput_rnnip;
   vector<float>   *ElectronsAuxDyn_PromptLeptonInput_DL1mu;
   vector<float>   *ElectronsAuxDyn_PromptLeptonInput_PtRel;
   vector<float>   *ElectronsAuxDyn_PromptLeptonInput_PtFrac;
   vector<float>   *ElectronsAuxDyn_PromptLeptonVeto;
   vector<unsigned int> *ElectronsAuxDyn_etconeCorrBitset;
   vector<char>    *ElectronsAuxDyn_DFCommonJets_passOR;
   vector<char>    *ElectronsAuxDyn_selected;
   vector<float>   *ElectronsAuxDyn_neflowisol20;
   vector<float>   *ElectronsAuxDyn_neflowisol30;
   vector<float>   *ElectronsAuxDyn_neflowisol40;
   vector<unsigned int> *ElectronsAuxDyn_neflowisolCorrBitset;
   vector<float>   *ElectronsAuxDyn_neflowisolcoreConeEnergyCorrection;
   vector<unsigned int> *ElectronsAuxDyn_ptconeCorrBitset;
   vector<float>   *ElectronsAuxDyn_ptconecoreTrackPtrCorrection;
   vector<float>   *ElectronsAuxDyn_topoetcone40;
   vector<unsigned int> *ElectronsAuxDyn_topoetconeCorrBitset;
   vector<float>   *ElectronsAuxDyn_topoetconecoreConeEnergyCorrection;
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *ElectronsAuxDyn_caloClusterLinks;
   vector<unsigned int> *ElectronsAuxDyn_OQ;
   vector<float>   *ElectronsAuxDyn_f1;
   vector<float>   *ElectronsAuxDyn_f3;
   vector<float>   *ElectronsAuxDyn_f1core;
   vector<float>   *ElectronsAuxDyn_f3core;
   vector<float>   *ElectronsAuxDyn_weta1;
   vector<float>   *ElectronsAuxDyn_weta2;
   vector<float>   *ElectronsAuxDyn_fracs1;
   vector<float>   *ElectronsAuxDyn_wtots1;
   vector<float>   *ElectronsAuxDyn_e277;
   vector<float>   *ElectronsAuxDyn_Reta;
   vector<float>   *ElectronsAuxDyn_Rphi;
   vector<float>   *ElectronsAuxDyn_Eratio;
   vector<float>   *ElectronsAuxDyn_Rhad;
   vector<float>   *ElectronsAuxDyn_Rhad1;
   vector<float>   *ElectronsAuxDyn_DeltaE;
   vector<float>   *ElectronsAuxDyn_deltaEta0;
   vector<float>   *ElectronsAuxDyn_deltaEta1;
   vector<float>   *ElectronsAuxDyn_deltaEta2;
   vector<float>   *ElectronsAuxDyn_deltaEta3;
   vector<float>   *ElectronsAuxDyn_deltaPhi0;
   vector<float>   *ElectronsAuxDyn_deltaPhi1;
   vector<float>   *ElectronsAuxDyn_deltaPhi2;
   vector<float>   *ElectronsAuxDyn_deltaPhi3;
   vector<float>   *ElectronsAuxDyn_deltaPhiRescaled0;
   vector<float>   *ElectronsAuxDyn_deltaPhiRescaled1;
   vector<float>   *ElectronsAuxDyn_deltaPhiRescaled2;
   vector<float>   *ElectronsAuxDyn_deltaPhiRescaled3;
   vector<float>   *ElectronsAuxDyn_deltaPhiFromLastMeasurement;
   vector<vector<float> > *ElectronsAuxDyn_EgammaCovarianceMatrix;
   vector<char>    *ElectronsAuxDyn_LHLoose;
   vector<char>    *ElectronsAuxDyn_LHMedium;
   vector<char>    *ElectronsAuxDyn_LHTight;
   vector<float>   *ElectronsAuxDyn_LHValue;
   vector<char>    *ElectronsAuxDyn_Loose;
   vector<char>    *ElectronsAuxDyn_Medium;
   vector<char>    *ElectronsAuxDyn_MultiLepton;
   vector<char>    *ElectronsAuxDyn_Tight;
   Int_t           ElectronsAuxDyn_ambiguityLink_;
   UInt_t          ElectronsAuxDyn_ambiguityLink_m_persKey[kMaxElectronsAuxDyn_ambiguityLink];   //[ElectronsAuxDyn.ambiguityLink_]
   UInt_t          ElectronsAuxDyn_ambiguityLink_m_persIndex[kMaxElectronsAuxDyn_ambiguityLink];   //[ElectronsAuxDyn.ambiguityLink_]
   vector<unsigned char> *ElectronsAuxDyn_ambiguityType;
   vector<float>   *ElectronsAuxDyn_asy1;
   vector<float>   *ElectronsAuxDyn_barys1;
   vector<vector<ElementLink<DataVector<xAOD::CaloRings_v1> > > > *ElectronsAuxDyn_caloRingsLinks;
   vector<float>   *ElectronsAuxDyn_core57cellsEnergyCorrection;
   vector<float>   *ElectronsAuxDyn_e1152;
   vector<float>   *ElectronsAuxDyn_e132;
   ULong64_t       EventInfoAuxDyn_mcEventNumber;
   vector<float>   *EventInfoAuxDyn_mcEventWeights;
   vector<set<unsigned int> > *EventInfoAuxDyn_streamTagRobs;
   vector<set<unsigned int> > *EventInfoAuxDyn_streamTagDets;
   vector<short>   *EventInfoAuxDyn_subEventTime;
   vector<unsigned short> *EventInfoAuxDyn_subEventIndex;
   Char_t          EventInfoAuxDyn_DFCommonJets_eventClean_LooseBad;
   Char_t          EventInfoAuxDyn_DFCommonJets_isBadBatman;
   Int_t           EventInfoAuxDyn_subEventLink_;
   UInt_t          EventInfoAuxDyn_subEventLink_m_persKey[kMaxEventInfoAuxDyn_subEventLink];   //[EventInfoAuxDyn.subEventLink_]
   UInt_t          EventInfoAuxDyn_subEventLink_m_persIndex[kMaxEventInfoAuxDyn_subEventLink];   //[EventInfoAuxDyn.subEventLink_]
   vector<unsigned short> *EventInfoAuxDyn_subEventType;
   UInt_t          EventInfoAuxDyn_mcChannelNumber;
   vector<vector<vector<unsigned int> > > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId;
   Int_t           ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink_]
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans;
   vector<float>   *GSFConversionVerticesAuxDyn_px;
   vector<float>   *GSFConversionVerticesAuxDyn_py;
   vector<float>   *GSFConversionVerticesAuxDyn_pz;
   vector<float>   *GSFConversionVerticesAuxDyn_x;
   vector<float>   *GSFConversionVerticesAuxDyn_y;
   vector<float>   *GSFConversionVerticesAuxDyn_z;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *GSFConversionVerticesAuxDyn_trackParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::NeutralParticle_v1> > > > *GSFConversionVerticesAuxDyn_neutralParticleLinks;
   vector<float>   *GSFConversionVerticesAuxDyn_etaAtCalo;
   vector<float>   *GSFConversionVerticesAuxDyn_minRfirstHit;
   vector<float>   *GSFConversionVerticesAuxDyn_phiAtCalo;
   vector<float>   *GSFConversionVerticesAuxDyn_pt1;
   vector<float>   *GSFConversionVerticesAuxDyn_pt2;
   vector<vector<float> > *GSFTrackParticlesAuxDyn_parameterPX;
   vector<vector<float> > *GSFTrackParticlesAuxDyn_parameterPY;
   vector<vector<float> > *GSFTrackParticlesAuxDyn_parameterPZ;
   vector<vector<unsigned char> > *GSFTrackParticlesAuxDyn_parameterPosition;
   vector<vector<float> > *GSFTrackParticlesAuxDyn_parameterX;
   vector<vector<float> > *GSFTrackParticlesAuxDyn_parameterY;
   vector<vector<float> > *GSFTrackParticlesAuxDyn_parameterZ;
   Int_t           GSFTrackParticlesAuxDyn_trackLink_;
   UInt_t          GSFTrackParticlesAuxDyn_trackLink_m_persKey[kMaxGSFTrackParticlesAuxDyn_trackLink];   //[GSFTrackParticlesAuxDyn.trackLink_]
   UInt_t          GSFTrackParticlesAuxDyn_trackLink_m_persIndex[kMaxGSFTrackParticlesAuxDyn_trackLink];   //[GSFTrackParticlesAuxDyn.trackLink_]
   vector<vector<float> > *GSFTrackParticlesAuxDyn_trackParameterCovarianceMatrices;
   vector<int>     *GSFTrackParticlesAuxDyn_truthOrigin;
   Int_t           GSFTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxGSFTrackParticlesAuxDyn_truthParticleLink];   //[GSFTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxGSFTrackParticlesAuxDyn_truthParticleLink];   //[GSFTrackParticlesAuxDyn.truthParticleLink_]
   vector<int>     *GSFTrackParticlesAuxDyn_truthType;
   vector<float>   *GSFTrackParticlesAuxDyn_phi;
   vector<float>   *GSFTrackParticlesAuxDyn_d0;
   vector<float>   *GSFTrackParticlesAuxDyn_z0;
   vector<float>   *GSFTrackParticlesAuxDyn_theta;
   vector<float>   *GSFTrackParticlesAuxDyn_qOverP;
   vector<vector<float> > *GSFTrackParticlesAuxDyn_definingParametersCovMatrix;
   vector<float>   *GSFTrackParticlesAuxDyn_vx;
   vector<float>   *GSFTrackParticlesAuxDyn_vy;
   vector<float>   *GSFTrackParticlesAuxDyn_vz;
   vector<float>   *GSFTrackParticlesAuxDyn_radiusOfFirstHit;
   vector<unsigned long> *GSFTrackParticlesAuxDyn_identifierOfFirstHit;
   vector<float>   *GSFTrackParticlesAuxDyn_beamlineTiltX;
   vector<float>   *GSFTrackParticlesAuxDyn_beamlineTiltY;
   vector<unsigned int> *GSFTrackParticlesAuxDyn_hitPattern;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfUsedHitsdEdx;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfIBLOverflowsdEdx;
   vector<float>   *GSFTrackParticlesAuxDyn_QoverPLM;
   vector<float>   *GSFTrackParticlesAuxDyn_chiSquared;
   Int_t           GSFTrackParticlesAuxDyn_originalTrackParticle_;
   UInt_t          GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey[kMaxGSFTrackParticlesAuxDyn_originalTrackParticle];   //[GSFTrackParticlesAuxDyn.originalTrackParticle_]
   UInt_t          GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex[kMaxGSFTrackParticlesAuxDyn_originalTrackParticle];   //[GSFTrackParticlesAuxDyn.originalTrackParticle_]
   vector<float>   *GSFTrackParticlesAuxDyn_numberDoF;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_trackFitter;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_particleHypothesis;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_trackProperties;
   vector<unsigned long> *GSFTrackParticlesAuxDyn_patternRecoInfo;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfContribPixelLayers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;
   Int_t           GSFTrackParticlesAuxDyn_vertexLink_;
   UInt_t          GSFTrackParticlesAuxDyn_vertexLink_m_persKey[kMaxGSFTrackParticlesAuxDyn_vertexLink];   //[GSFTrackParticlesAuxDyn.vertexLink_]
   UInt_t          GSFTrackParticlesAuxDyn_vertexLink_m_persIndex[kMaxGSFTrackParticlesAuxDyn_vertexLink];   //[GSFTrackParticlesAuxDyn.vertexLink_]
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerSharedHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerSplitHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerSharedHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerSplitHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelOutliers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelSharedHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelSplitHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfGangedPixels;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfGangedFlaggedFakes;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelSpoiltHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfDBMHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTHits;
   vector<float>   *GSFTrackParticlesAuxDyn_truthMatchProbability;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTOutliers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTHoles;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTDoubleHoles;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTSharedHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_TRTdEdxUsedHits;
   vector<float>   *GSFTrackParticlesAuxDyn_TRTTrackOccupancy;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTSpoiltHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfTRTHits;
   vector<float>   *GSFTrackParticlesAuxDyn_TRTdEdx;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfTRTOutliers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfTRTHoles;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdHitsTotal;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdOutliers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfTRTDeadStraws;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfTRTTubeHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfTRTXenonHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfTRTSharedHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPhiLayers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPhiHoleLayers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfTriggerEtaLayers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfTriggerEtaHoleLayers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfOutliersOnTrack;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_standardDeviationOfChi2OS;
   vector<float>   *GSFTrackParticlesAuxDyn_eProbabilityComb;
   vector<float>   *GSFTrackParticlesAuxDyn_eProbabilityHT;
   vector<float>   *GSFTrackParticlesAuxDyn_pixeldEdx;
   vector<vector<float> > *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_e_sampl;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_time;
   vector<unsigned int> *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_clusterSize;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_eta0;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_phi0;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawE;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawEta;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawPhi;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawM;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altE;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altEta;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altPhi;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altM;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calE;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calEta;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calPhi;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calM;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETA1CALOFRAME;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETA2CALOFRAME;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETACALOFRAME;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHI1CALOFRAME;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHI2CALOFRAME;
   vector<float>   *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHICALOFRAME;
   vector<vector<float> > *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_eta_sampl;
   vector<vector<float> > *HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_phi_sampl;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f3core;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_weta1;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_weta2;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_fracs1;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_wtots1;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_e277;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone20;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Reta;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone30;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rphi;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone40;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Eratio;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone20;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rhad;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone30;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rhad1;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone40;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone20;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_trackParticleLinks;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_DeltaE;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone20;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone30;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta0;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone40;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone30;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta1;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta2;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta3;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi0;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi1;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi2;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_pt;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi3;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_eta;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled0;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_phi;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled1;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_m;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled2;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled3;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiFromLastMeasurement;
   vector<char>    *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHLoose;
   vector<char>    *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHMedium;
   vector<char>    *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHTight;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHValue;
   vector<char>    *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Loose;
   vector<unsigned short> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_author;
   vector<char>    *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Medium;
   vector<char>    *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Tight;
   vector<char>    *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_VLoose;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMVLoose;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLoose;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMMedium;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMTight;
   vector<char>    *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHVLoose;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHVLoose;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHLoose;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_charge;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHMedium;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHTight;
   vector<char>    *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloVLoose;
   vector<char>    *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloLoose;
   vector<char>    *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloMedium;
   vector<char>    *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloTight;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloVLoose;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloLoose;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloMedium;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloTight;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloValue;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone40;
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_caloClusterLinks;
   vector<unsigned int> *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_OQ;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f1;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f3;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f1core;
   vector<unsigned short> *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_author;
   vector<char>    *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Loose;
   vector<char>    *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Medium;
   vector<char>    *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Tight;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone40;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_pt;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_eta;
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_caloClusterLinks;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone20;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_phi;
   vector<unsigned int> *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_OQ;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone30;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_m;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f1;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone30;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f3;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f1core;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f3core;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_weta1;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_weta2;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone20;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_fracs1;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone30;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone40;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_wtots1;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone20;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_e277;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone30;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Reta;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone40;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rphi;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone20;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Eratio;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_vertexLinks;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone40;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rhad;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaEta1;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rhad1;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaEta2;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_DeltaE;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaPhi1;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaPhi2;
   vector<unsigned int> *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMLoose;
   vector<unsigned int> *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMMedium;
   vector<unsigned int> *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMTight;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_phi;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_d0;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_z0;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_theta;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_qOverP;
   vector<vector<float> > *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_definingParametersCovMatrix;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vx;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vy;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vz;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_radiusOfFirstHit;
   vector<unsigned long> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_identifierOfFirstHit;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_beamlineTiltX;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_beamlineTiltY;
   vector<unsigned int> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_hitPattern;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfUsedHitsdEdx;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfIBLOverflowsdEdx;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_chiSquared;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberDoF;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_trackFitter;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_particleHypothesis;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_trackProperties;
   vector<unsigned long> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_patternRecoInfo;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfContribPixelLayers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerHits;
   Int_t           HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink_;
   UInt_t          HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink_m_persKey[kMaxHLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink];   //[HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.vertexLink_]
   UInt_t          HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink_m_persIndex[kMaxHLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink];   //[HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.vertexLink_]
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerOutliers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerSharedHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerSplitHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_expectInnermostPixelLayerHit;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerOutliers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerSharedHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerSplitHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_expectNextToInnermostPixelLayerHit;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelOutliers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSharedHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSplitHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfGangedPixels;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfGangedFlaggedFakes;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSpoiltHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfDBMHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTOutliers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTHoles;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTDoubleHoles;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTSharedHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTDeadSensors;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_TRTTrackOccupancy;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTSpoiltHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTOutliers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHoles;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdHitsTotal;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdOutliers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTDeadStraws;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTTubeHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTXenonHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTSharedHits;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPrecisionHoleLayers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPhiLayers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPhiHoleLayers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTriggerEtaLayers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTriggerEtaHoleLayers;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfOutliersOnTrack;
   vector<unsigned char> *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_standardDeviationOfChi2OS;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_eProbabilityComb;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_eProbabilityHT;
   vector<float>   *HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_pixeldEdx;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_et;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEta;
   vector<int>     *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_nCells;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawPhi;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEnergy;
   vector<vector<float> > *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEnergySample;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEt;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e233;
   vector<long>    *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_RoIword;
   vector<unsigned int> *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_clusterQuality;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e237;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_energy;
   vector<vector<float> > *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_energySample;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e2tsts1;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_eta1;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_eta;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_weta2;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_wstot;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_phi;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_fracs1;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_ehad1;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_emaxs1;
   vector<float>   *HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e277;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_rcore;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_eratio;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etHad;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etHad1;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f0;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_charge;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f2;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trkEtaAtCalo;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trkPhiAtCalo;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etOverPt;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_caloEta;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_caloPhi;
   Int_t           HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink_;
   UInt_t          HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink_m_persKey[kMaxHLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink];   //[HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.emClusterLink_]
   UInt_t          HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink_m_persIndex[kMaxHLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink];   //[HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.emClusterLink_]
   Int_t           HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink_;
   UInt_t          HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink_m_persKey[kMaxHLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink];   //[HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.trackParticleLink_]
   UInt_t          HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink_m_persIndex[kMaxHLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink];   //[HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.trackParticleLink_]
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f1;
   vector<unsigned int> *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_roiWord;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f3;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_pt;
   vector<float>   *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_zvtx;
   vector<int>     *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_nTRTHits;
   vector<int>     *HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_nTRTHiThresholdHits;
   vector<unsigned int> *HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_size;
   vector<vector<unsigned int> > *HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_passBits;
   vector<unsigned int> *HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_containerKey;
   vector<unsigned int> *HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_containerClid;
   vector<vector<float> > *HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_rnnDecision;
   Int_t           HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink_;
   UInt_t          HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink_m_persKey[kMaxHLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink];   //[HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn.ringerLink_]
   UInt_t          HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink_m_persIndex[kMaxHLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink];   //[HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn.ringerLink_]
   Int_t           HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink_;
   UInt_t          HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink_m_persKey[kMaxHLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink];   //[HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn.emClusterLink_]
   UInt_t          HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink_m_persIndex[kMaxHLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink];   //[HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn.emClusterLink_]
   vector<vector<float> > *HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_rings;
   vector<float>   *InDetForwardTrackParticlesAuxDyn_vz;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfPixelHits;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfSCTHoles;
   vector<float>   *InDetForwardTrackParticlesAuxDyn_d0;
   vector<float>   *InDetForwardTrackParticlesAuxDyn_z0;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<float>   *InDetForwardTrackParticlesAuxDyn_theta;
   vector<float>   *InDetForwardTrackParticlesAuxDyn_phi;
   vector<float>   *InDetForwardTrackParticlesAuxDyn_qOverP;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfTRTHits;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfTRTOutliers;
   vector<vector<float> > *InDetForwardTrackParticlesAuxDyn_definingParametersCovMatrix;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPhiLayers;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers;
   vector<float>   *InDetTrackParticlesAuxDyn_chiSquared;
   vector<float>   *InDetTrackParticlesAuxDyn_numberDoF;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_expectInnermostPixelLayerHit;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPixelHits;
   vector<float>   *InDetTrackParticlesAuxDyn_phi;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPixelSharedHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfSCTHoles;
   Int_t           InDetTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxInDetTrackParticlesAuxDyn_truthParticleLink];   //[InDetTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxInDetTrackParticlesAuxDyn_truthParticleLink];   //[InDetTrackParticlesAuxDyn.truthParticleLink_]
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfSCTSharedHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<float>   *InDetTrackParticlesAuxDyn_d0;
   vector<float>   *InDetTrackParticlesAuxDyn_z0;
   vector<float>   *InDetTrackParticlesAuxDyn_theta;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfTRTHits;
   vector<float>   *InDetTrackParticlesAuxDyn_qOverP;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfTRTOutliers;
   vector<vector<float> > *InDetTrackParticlesAuxDyn_definingParametersCovMatrix;
   vector<float>   *InDetTrackParticlesAuxDyn_vz;
   Int_t           InDetTrackParticlesAuxDyn_vertexLink_;
   UInt_t          InDetTrackParticlesAuxDyn_vertexLink_m_persKey[kMaxInDetTrackParticlesAuxDyn_vertexLink];   //[InDetTrackParticlesAuxDyn.vertexLink_]
   UInt_t          InDetTrackParticlesAuxDyn_vertexLink_m_persIndex[kMaxInDetTrackParticlesAuxDyn_vertexLink];   //[InDetTrackParticlesAuxDyn.vertexLink_]
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPrecisionLayers;
   vector<float>   *InDetTrackParticlesAuxDyn_truthMatchProbability;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;
   Float_t         Kt4EMTopoOriginEventShapeAuxDyn_Density;
   vector<unsigned int> *LVL1EmTauRoIsAuxDyn_roiWord;
   vector<float>   *LVL1EmTauRoIsAuxDyn_etScale;
   vector<unsigned int> *LVL1EmTauRoIsAuxDyn_thrPattern;
   vector<vector<string> > *LVL1EmTauRoIsAuxDyn_thrNames;
   vector<vector<float> > *LVL1EmTauRoIsAuxDyn_thrValues;
   vector<float>   *LVL1EmTauRoIsAuxDyn_core;
   vector<float>   *LVL1EmTauRoIsAuxDyn_emClus;
   vector<float>   *LVL1EmTauRoIsAuxDyn_eta;
   vector<float>   *LVL1EmTauRoIsAuxDyn_tauClus;
   vector<float>   *LVL1EmTauRoIsAuxDyn_phi;
   vector<float>   *LVL1EmTauRoIsAuxDyn_emIsol;
   vector<float>   *LVL1EmTauRoIsAuxDyn_hadIsol;
   vector<float>   *LVL1EmTauRoIsAuxDyn_hadCore;
   vector<string>  *MET_Core_AntiKt4EMTopoAuxDyn_name;
   vector<double>  *MET_Core_AntiKt4EMTopoAuxDyn_mpx;
   vector<double>  *MET_Core_AntiKt4EMTopoAuxDyn_mpy;
   vector<double>  *MET_Core_AntiKt4EMTopoAuxDyn_sumet;
   vector<ULong64_t> *MET_Core_AntiKt4EMTopoAuxDyn_source;
   vector<string>  *MET_Reference_AntiKt4EMTopoAuxDyn_name;
   vector<double>  *MET_Reference_AntiKt4EMTopoAuxDyn_mpx;
   vector<double>  *MET_Reference_AntiKt4EMTopoAuxDyn_mpy;
   vector<double>  *MET_Reference_AntiKt4EMTopoAuxDyn_sumet;
   vector<ULong64_t> *MET_Reference_AntiKt4EMTopoAuxDyn_source;
   vector<string>  *MET_TrackAuxDyn_name;
   vector<double>  *MET_TrackAuxDyn_mpx;
   vector<double>  *MET_TrackAuxDyn_mpy;
   vector<string>  *MET_TruthAuxDyn_name;
   vector<double>  *MET_TruthAuxDyn_mpx;
   vector<double>  *MET_TruthAuxDyn_mpy;
   vector<double>  *MET_TruthAuxDyn_sumet;
   vector<ULong64_t> *MET_TruthAuxDyn_source;
   Int_t           MuonSegmentsAuxDyn_truthSegmentLink_;
   UInt_t          MuonSegmentsAuxDyn_truthSegmentLink_m_persKey[kMaxMuonSegmentsAuxDyn_truthSegmentLink];   //[MuonSegmentsAuxDyn.truthSegmentLink_]
   UInt_t          MuonSegmentsAuxDyn_truthSegmentLink_m_persIndex[kMaxMuonSegmentsAuxDyn_truthSegmentLink];   //[MuonSegmentsAuxDyn.truthSegmentLink_]
   vector<float>   *MuonSegmentsAuxDyn_px;
   vector<float>   *MuonSegmentsAuxDyn_py;
   vector<float>   *MuonSegmentsAuxDyn_pz;
   vector<float>   *MuonSegmentsAuxDyn_x;
   vector<float>   *MuonSegmentsAuxDyn_y;
   vector<float>   *MuonSegmentsAuxDyn_z;
   vector<float>   *MuonSegmentsAuxDyn_chiSquared;
   vector<float>   *MuonSegmentsAuxDyn_numberDoF;
   vector<float>   *MuonSegmentsAuxDyn_t0error;
   vector<int>     *MuonSegmentsAuxDyn_sector;
   vector<int>     *MuonSegmentsAuxDyn_chamberIndex;
   vector<int>     *MuonSegmentsAuxDyn_etaIndex;
   vector<float>   *MuonSegmentsAuxDyn_t0;
   vector<int>     *MuonSegmentsAuxDyn_technology;
   vector<int>     *MuonSegmentsAuxDyn_nPrecisionHits;
   vector<int>     *MuonSegmentsAuxDyn_nPhiLayers;
   vector<int>     *MuonSegmentsAuxDyn_nTrigEtaLayers;
   vector<float>   *MuonSegmentsAuxDyn_clusterTime;
   vector<float>   *MuonSegmentsAuxDyn_clusterTimeError;
   vector<int>     *MuonSegmentsAuxDyn_clusterTimeValid;
   Int_t           MuonSegmentsAuxDyn_muonSegment_;
   UInt_t          MuonSegmentsAuxDyn_muonSegment_m_persKey[kMaxMuonSegmentsAuxDyn_muonSegment];   //[MuonSegmentsAuxDyn.muonSegment_]
   UInt_t          MuonSegmentsAuxDyn_muonSegment_m_persIndex[kMaxMuonSegmentsAuxDyn_muonSegment];   //[MuonSegmentsAuxDyn.muonSegment_]
   Int_t           MuonSpectrometerTrackParticlesAuxDyn_vertexLink_;
   UInt_t          MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persKey[kMaxMuonSpectrometerTrackParticlesAuxDyn_vertexLink];   //[MuonSpectrometerTrackParticlesAuxDyn.vertexLink_]
   UInt_t          MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persIndex[kMaxMuonSpectrometerTrackParticlesAuxDyn_vertexLink];   //[MuonSpectrometerTrackParticlesAuxDyn.vertexLink_]
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_d0;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_z0;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_theta;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_qOverP;
   vector<vector<float> > *MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrix;
   Int_t           MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxMuonSpectrometerTrackParticlesAuxDyn_truthParticleLink];   //[MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxMuonSpectrometerTrackParticlesAuxDyn_truthParticleLink];   //[MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink_]
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_vz;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_phi;
   vector<int>     *MuonTruthParticlesAuxDyn_truthOrigin;
   vector<int>     *MuonTruthParticlesAuxDyn_truthType;
   vector<unsigned char> *MuonsAuxDyn_outerOutBoundsPrecisionHits;
   vector<float>   *MuonsAuxDyn_topoetcone20;
   vector<float>   *MuonsAuxDyn_topoetcone30;
   vector<unsigned char> *MuonsAuxDyn_extendedClosePrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_extendedOutBoundsPrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_innerClosePrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_innerOutBoundsPrecisionHits;
   vector<float>   *MuonsAuxDyn_topoetcone40;
   vector<unsigned char> *MuonsAuxDyn_isEndcapGoodLayers;
   vector<unsigned char> *MuonsAuxDyn_isSmallGoodSectors;
   vector<unsigned char> *MuonsAuxDyn_middleClosePrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_middleOutBoundsPrecisionHits;
   vector<int>     *MuonsAuxDyn_truthOrigin;
   Int_t           MuonsAuxDyn_truthParticleLink_;
   UInt_t          MuonsAuxDyn_truthParticleLink_m_persKey[kMaxMuonsAuxDyn_truthParticleLink];   //[MuonsAuxDyn.truthParticleLink_]
   UInt_t          MuonsAuxDyn_truthParticleLink_m_persIndex[kMaxMuonsAuxDyn_truthParticleLink];   //[MuonsAuxDyn.truthParticleLink_]
   vector<int>     *MuonsAuxDyn_truthType;
   vector<float>   *MuonsAuxDyn_InnerDetectorPt;
   vector<unsigned char> *MuonsAuxDyn_numberOfGoodPrecisionLayers;
   vector<float>   *MuonsAuxDyn_MuonSpectrometerPt;
   vector<unsigned char> *MuonsAuxDyn_outerClosePrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits;
   Float_t         NeutralParticleFlowIsoCentralEventShapeAuxDyn_Density;
   Float_t         NeutralParticleFlowIsoCentralEventShapeAuxDyn_DensitySigma;
   Float_t         NeutralParticleFlowIsoCentralEventShapeAuxDyn_DensityArea;
   Float_t         NeutralParticleFlowIsoForwardEventShapeAuxDyn_Density;
   Float_t         NeutralParticleFlowIsoForwardEventShapeAuxDyn_DensitySigma;
   Float_t         NeutralParticleFlowIsoForwardEventShapeAuxDyn_DensityArea;
   vector<int>     *NewSwElectronsAuxDyn_7x11ClusterExist;
   vector<float>   *NewSwElectronsAuxDyn_deltaPhiRescaled0;
   Int_t           NewSwElectronsAuxDyn_NewSwClusterLink_;
   UInt_t          NewSwElectronsAuxDyn_NewSwClusterLink_m_persKey[kMaxNewSwElectronsAuxDyn_NewSwClusterLink];   //[NewSwElectronsAuxDyn.NewSwClusterLink_]
   UInt_t          NewSwElectronsAuxDyn_NewSwClusterLink_m_persIndex[kMaxNewSwElectronsAuxDyn_NewSwClusterLink];   //[NewSwElectronsAuxDyn.NewSwClusterLink_]
   vector<float>   *NewSwElectronsAuxDyn_deltaPhiRescaled1;
   vector<float>   *NewSwElectronsAuxDyn_e011;
   vector<float>   *NewSwElectronsAuxDyn_deltaPhiRescaled2;
   vector<float>   *NewSwElectronsAuxDyn_e033;
   vector<float>   *NewSwElectronsAuxDyn_deltaPhiRescaled3;
   vector<float>   *NewSwElectronsAuxDyn_e333;
   vector<float>   *NewSwElectronsAuxDyn_deltaPhiFromLastMeasurement;
   vector<float>   *NewSwElectronsAuxDyn_e335;
   vector<vector<float> > *NewSwElectronsAuxDyn_EgammaCovarianceMatrix;
   vector<float>   *NewSwElectronsAuxDyn_e337;
   vector<char>    *NewSwElectronsAuxDyn_LHLoose;
   vector<float>   *NewSwElectronsAuxDyn_e377;
   vector<char>    *NewSwElectronsAuxDyn_LHMedium;
   vector<char>    *NewSwElectronsAuxDyn_LHTight;
   vector<float>   *NewSwElectronsAuxDyn_LHValue;
   vector<char>    *NewSwElectronsAuxDyn_Loose;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *NewSwElectronsAuxDyn_trackParticleLinks;
   vector<char>    *NewSwElectronsAuxDyn_Medium;
   vector<char>    *NewSwElectronsAuxDyn_MultiLepton;
   vector<char>    *NewSwElectronsAuxDyn_Tight;
   Int_t           NewSwElectronsAuxDyn_ambiguityLink_;
   UInt_t          NewSwElectronsAuxDyn_ambiguityLink_m_persKey[kMaxNewSwElectronsAuxDyn_ambiguityLink];   //[NewSwElectronsAuxDyn.ambiguityLink_]
   UInt_t          NewSwElectronsAuxDyn_ambiguityLink_m_persIndex[kMaxNewSwElectronsAuxDyn_ambiguityLink];   //[NewSwElectronsAuxDyn.ambiguityLink_]
   vector<unsigned char> *NewSwElectronsAuxDyn_ambiguityType;
   vector<unsigned short> *NewSwElectronsAuxDyn_author;
   vector<float>   *NewSwElectronsAuxDyn_asy1;
   vector<float>   *NewSwElectronsAuxDyn_barys1;
   vector<vector<ElementLink<DataVector<xAOD::CaloRings_v1> > > > *NewSwElectronsAuxDyn_caloRingsLinks;
   vector<float>   *NewSwElectronsAuxDyn_pt;
   vector<float>   *NewSwElectronsAuxDyn_core57cellsEnergyCorrection;
   vector<float>   *NewSwElectronsAuxDyn_eta;
   vector<float>   *NewSwElectronsAuxDyn_e1152;
   vector<float>   *NewSwElectronsAuxDyn_phi;
   vector<float>   *NewSwElectronsAuxDyn_e132;
   vector<float>   *NewSwElectronsAuxDyn_m;
   vector<float>   *NewSwElectronsAuxDyn_e233;
   vector<float>   *NewSwElectronsAuxDyn_e235;
   vector<float>   *NewSwElectronsAuxDyn_e237;
   vector<float>   *NewSwElectronsAuxDyn_e255;
   vector<float>   *NewSwElectronsAuxDyn_e2ts1;
   vector<float>   *NewSwElectronsAuxDyn_e2tsts1;
   vector<float>   *NewSwElectronsAuxDyn_ecore;
   vector<float>   *NewSwElectronsAuxDyn_ehad1;
   vector<float>   *NewSwElectronsAuxDyn_emaxs1;
   vector<float>   *NewSwElectronsAuxDyn_emins1;
   vector<float>   *NewSwElectronsAuxDyn_etcone20ptCorrection;
   vector<float>   *NewSwElectronsAuxDyn_etcone30ptCorrection;
   vector<float>   *NewSwElectronsAuxDyn_etcone40ptCorrection;
   vector<float>   *NewSwElectronsAuxDyn_ethad;
   vector<float>   *NewSwElectronsAuxDyn_ethad1;
   vector<float>   *NewSwElectronsAuxDyn_neflowisol20ptCorrection;
   vector<float>   *NewSwElectronsAuxDyn_neflowisol30ptCorrection;
   vector<float>   *NewSwElectronsAuxDyn_neflowisol40ptCorrection;
   vector<float>   *NewSwElectronsAuxDyn_pos;
   vector<float>   *NewSwElectronsAuxDyn_pos7;
   vector<float>   *NewSwElectronsAuxDyn_poscs1;
   vector<float>   *NewSwElectronsAuxDyn_poscs2;
   vector<float>   *NewSwElectronsAuxDyn_r33over37allcalo;
   vector<float>   *NewSwElectronsAuxDyn_topoetcone20ptCorrection;
   vector<float>   *NewSwElectronsAuxDyn_topoetcone30ptCorrection;
   vector<float>   *NewSwElectronsAuxDyn_topoetcone40ptCorrection;
   vector<float>   *NewSwElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection;
   vector<float>   *NewSwElectronsAuxDyn_widths1;
   vector<float>   *NewSwElectronsAuxDyn_widths2;
   vector<float>   *NewSwElectronsAuxDyn_charge;
   vector<float>   *NewSwElectronsAuxDyn_etcone20;
   vector<float>   *NewSwElectronsAuxDyn_etcone30;
   vector<float>   *NewSwElectronsAuxDyn_etcone40;
   vector<float>   *NewSwElectronsAuxDyn_ptcone20;
   vector<float>   *NewSwElectronsAuxDyn_ptcone30;
   vector<float>   *NewSwElectronsAuxDyn_ptcone40;
   vector<float>   *NewSwElectronsAuxDyn_ptvarcone20;
   vector<float>   *NewSwElectronsAuxDyn_ptvarcone40;
   vector<float>   *NewSwElectronsAuxDyn_topoetcone20;
   vector<int>     *NewSwElectronsAuxDyn_truthOrigin;
   vector<float>   *NewSwElectronsAuxDyn_topoetcone30;
   Int_t           NewSwElectronsAuxDyn_truthParticleLink_;
   UInt_t          NewSwElectronsAuxDyn_truthParticleLink_m_persKey[kMaxNewSwElectronsAuxDyn_truthParticleLink];   //[NewSwElectronsAuxDyn.truthParticleLink_]
   UInt_t          NewSwElectronsAuxDyn_truthParticleLink_m_persIndex[kMaxNewSwElectronsAuxDyn_truthParticleLink];   //[NewSwElectronsAuxDyn.truthParticleLink_]
   vector<float>   *NewSwElectronsAuxDyn_ptvarcone30;
   vector<int>     *NewSwElectronsAuxDyn_truthType;
   vector<unsigned int> *NewSwElectronsAuxDyn_etconeCorrBitset;
   vector<char>    *NewSwElectronsAuxDyn_DFCommonElectronsLHVeryLoose;
   vector<char>    *NewSwElectronsAuxDyn_DFCommonElectronsLHLoose;
   vector<char>    *NewSwElectronsAuxDyn_DFCommonElectronsLHMedium;
   vector<char>    *NewSwElectronsAuxDyn_DFCommonElectronsLHTight;
   vector<char>    *NewSwElectronsAuxDyn_DFCommonElectronsIsEMLoose;
   vector<unsigned int> *NewSwElectronsAuxDyn_DFCommonElectronsIsEMLooseIsEMValue;
   vector<char>    *NewSwElectronsAuxDyn_DFCommonElectronsIsEMMedium;
   vector<unsigned int> *NewSwElectronsAuxDyn_DFCommonElectronsIsEMMediumIsEMValue;
   vector<float>   *NewSwElectronsAuxDyn_neflowisol20;
   vector<char>    *NewSwElectronsAuxDyn_DFCommonElectronsIsEMTight;
   vector<float>   *NewSwElectronsAuxDyn_neflowisol30;
   vector<unsigned int> *NewSwElectronsAuxDyn_DFCommonElectronsIsEMTightIsEMValue;
   vector<float>   *NewSwElectronsAuxDyn_neflowisol40;
   vector<unsigned int> *NewSwElectronsAuxDyn_neflowisolCorrBitset;
   vector<float>   *NewSwElectronsAuxDyn_neflowisolcoreConeEnergyCorrection;
   vector<char>    *NewSwElectronsAuxDyn_DFCommonElectronsML;
   vector<int>     *NewSwElectronsAuxDyn_truthPdgId;
   vector<int>     *NewSwElectronsAuxDyn_firstEgMotherTruthType;
   vector<int>     *NewSwElectronsAuxDyn_firstEgMotherTruthOrigin;
   Int_t           NewSwElectronsAuxDyn_firstEgMotherTruthParticleLink_;
   UInt_t          NewSwElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey[kMaxNewSwElectronsAuxDyn_firstEgMotherTruthParticleLink];   //[NewSwElectronsAuxDyn.firstEgMotherTruthParticleLink_]
   UInt_t          NewSwElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex[kMaxNewSwElectronsAuxDyn_firstEgMotherTruthParticleLink];   //[NewSwElectronsAuxDyn.firstEgMotherTruthParticleLink_]
   vector<int>     *NewSwElectronsAuxDyn_firstEgMotherPdgId;
   vector<unsigned int> *NewSwElectronsAuxDyn_ptconeCorrBitset;
   vector<int>     *NewSwElectronsAuxDyn_lastEgMotherTruthType;
   vector<float>   *NewSwElectronsAuxDyn_ptconecoreTrackPtrCorrection;
   vector<int>     *NewSwElectronsAuxDyn_lastEgMotherTruthOrigin;
   Int_t           NewSwElectronsAuxDyn_lastEgMotherTruthParticleLink_;
   UInt_t          NewSwElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persKey[kMaxNewSwElectronsAuxDyn_lastEgMotherTruthParticleLink];   //[NewSwElectronsAuxDyn.lastEgMotherTruthParticleLink_]
   UInt_t          NewSwElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persIndex[kMaxNewSwElectronsAuxDyn_lastEgMotherTruthParticleLink];   //[NewSwElectronsAuxDyn.lastEgMotherTruthParticleLink_]
   vector<int>     *NewSwElectronsAuxDyn_lastEgMotherPdgId;
   vector<float>   *NewSwElectronsAuxDyn_E_Lr0_HiG;
   vector<float>   *NewSwElectronsAuxDyn_E_Lr1_HiG;
   vector<float>   *NewSwElectronsAuxDyn_topoetcone40;
   vector<float>   *NewSwElectronsAuxDyn_E_Lr2_HiG;
   vector<unsigned int> *NewSwElectronsAuxDyn_topoetconeCorrBitset;
   vector<float>   *NewSwElectronsAuxDyn_E_Lr3_HiG;
   vector<float>   *NewSwElectronsAuxDyn_topoetconecoreConeEnergyCorrection;
   vector<float>   *NewSwElectronsAuxDyn_E_Lr0_MedG;
   vector<float>   *NewSwElectronsAuxDyn_E_Lr1_MedG;
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *NewSwElectronsAuxDyn_caloClusterLinks;
   vector<float>   *NewSwElectronsAuxDyn_E_Lr2_MedG;
   vector<unsigned int> *NewSwElectronsAuxDyn_OQ;
   vector<float>   *NewSwElectronsAuxDyn_E_Lr3_MedG;
   vector<float>   *NewSwElectronsAuxDyn_f1;
   vector<float>   *NewSwElectronsAuxDyn_E_Lr0_LowG;
   vector<float>   *NewSwElectronsAuxDyn_f3;
   vector<float>   *NewSwElectronsAuxDyn_E_Lr1_LowG;
   vector<float>   *NewSwElectronsAuxDyn_f1core;
   vector<float>   *NewSwElectronsAuxDyn_E_Lr2_LowG;
   vector<float>   *NewSwElectronsAuxDyn_f3core;
   vector<float>   *NewSwElectronsAuxDyn_E_Lr3_LowG;
   vector<float>   *NewSwElectronsAuxDyn_weta1;
   vector<unsigned char> *NewSwElectronsAuxDyn_nCells_Lr0_HiG;
   vector<float>   *NewSwElectronsAuxDyn_weta2;
   vector<unsigned char> *NewSwElectronsAuxDyn_nCells_Lr1_HiG;
   vector<float>   *NewSwElectronsAuxDyn_fracs1;
   vector<unsigned char> *NewSwElectronsAuxDyn_nCells_Lr2_HiG;
   vector<float>   *NewSwElectronsAuxDyn_wtots1;
   vector<unsigned char> *NewSwElectronsAuxDyn_nCells_Lr3_HiG;
   vector<float>   *NewSwElectronsAuxDyn_e277;
   vector<unsigned char> *NewSwElectronsAuxDyn_nCells_Lr0_MedG;
   vector<float>   *NewSwElectronsAuxDyn_Reta;
   vector<unsigned char> *NewSwElectronsAuxDyn_nCells_Lr1_MedG;
   vector<float>   *NewSwElectronsAuxDyn_Rphi;
   vector<unsigned char> *NewSwElectronsAuxDyn_nCells_Lr2_MedG;
   vector<float>   *NewSwElectronsAuxDyn_Eratio;
   vector<unsigned char> *NewSwElectronsAuxDyn_nCells_Lr3_MedG;
   vector<float>   *NewSwElectronsAuxDyn_Rhad;
   vector<unsigned char> *NewSwElectronsAuxDyn_nCells_Lr0_LowG;
   vector<float>   *NewSwElectronsAuxDyn_Rhad1;
   vector<unsigned char> *NewSwElectronsAuxDyn_nCells_Lr1_LowG;
   vector<float>   *NewSwElectronsAuxDyn_DeltaE;
   vector<unsigned char> *NewSwElectronsAuxDyn_nCells_Lr2_LowG;
   vector<float>   *NewSwElectronsAuxDyn_deltaEta0;
   vector<unsigned char> *NewSwElectronsAuxDyn_nCells_Lr3_LowG;
   vector<float>   *NewSwElectronsAuxDyn_deltaEta1;
   vector<float>   *NewSwElectronsAuxDyn_maxEcell_time;
   vector<float>   *NewSwElectronsAuxDyn_deltaEta2;
   vector<float>   *NewSwElectronsAuxDyn_maxEcell_energy;
   vector<float>   *NewSwElectronsAuxDyn_deltaEta3;
   vector<int>     *NewSwElectronsAuxDyn_maxEcell_gain;
   vector<float>   *NewSwElectronsAuxDyn_deltaPhi0;
   vector<unsigned long> *NewSwElectronsAuxDyn_maxEcell_onlId;
   vector<float>   *NewSwElectronsAuxDyn_deltaPhi1;
   vector<float>   *NewSwElectronsAuxDyn_maxEcell_x;
   vector<float>   *NewSwElectronsAuxDyn_deltaPhi2;
   vector<float>   *NewSwElectronsAuxDyn_maxEcell_y;
   vector<float>   *NewSwElectronsAuxDyn_deltaPhi3;
   vector<float>   *NewSwElectronsAuxDyn_maxEcell_z;
   Float_t         ParticleFlowIsoCentralEventShapeAuxDyn_Density;
   Float_t         ParticleFlowIsoCentralEventShapeAuxDyn_DensitySigma;
   Float_t         ParticleFlowIsoCentralEventShapeAuxDyn_DensityArea;
   Float_t         ParticleFlowIsoForwardEventShapeAuxDyn_Density;
   Float_t         ParticleFlowIsoForwardEventShapeAuxDyn_DensitySigma;
   Float_t         ParticleFlowIsoForwardEventShapeAuxDyn_DensityArea;
   vector<float>   *PhotonsAuxDyn_E3x5_Lr0;
   vector<char>    *PhotonsAuxDyn_DFCommonPhotonsIsEMLoose;
   vector<float>   *PhotonsAuxDyn_weta1;
   vector<float>   *PhotonsAuxDyn_E3x5_Lr1;
   vector<float>   *PhotonsAuxDyn_weta2;
   vector<float>   *PhotonsAuxDyn_E3x5_Lr2;
   vector<char>    *PhotonsAuxDyn_DFCommonPhotonsIsEMTight;
   vector<float>   *PhotonsAuxDyn_fracs1;
   vector<float>   *PhotonsAuxDyn_E3x5_Lr3;
   vector<float>   *PhotonsAuxDyn_wtots1;
   vector<float>   *PhotonsAuxDyn_E5x7_Lr0;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *PhotonsAuxDyn_vertexLinks;
   vector<float>   *PhotonsAuxDyn_e277;
   vector<float>   *PhotonsAuxDyn_E5x7_Lr1;
   vector<float>   *PhotonsAuxDyn_Reta;
   vector<float>   *PhotonsAuxDyn_E5x7_Lr2;
   vector<float>   *PhotonsAuxDyn_Rphi;
   vector<float>   *PhotonsAuxDyn_E5x7_Lr3;
   vector<float>   *PhotonsAuxDyn_ptcone20;
   vector<float>   *PhotonsAuxDyn_Eratio;
   vector<float>   *PhotonsAuxDyn_E7x7_Lr0;
   vector<float>   *PhotonsAuxDyn_ptcone30;
   vector<float>   *PhotonsAuxDyn_Rhad;
   vector<float>   *PhotonsAuxDyn_E7x7_Lr1;
   vector<float>   *PhotonsAuxDyn_topoetcone20;
   vector<float>   *PhotonsAuxDyn_ptcone40;
   vector<float>   *PhotonsAuxDyn_Rhad1;
   vector<float>   *PhotonsAuxDyn_E7x7_Lr2;
   vector<float>   *PhotonsAuxDyn_topoetcone30;
   vector<float>   *PhotonsAuxDyn_ptvarcone20;
   vector<float>   *PhotonsAuxDyn_E7x7_Lr3;
   vector<float>   *PhotonsAuxDyn_DeltaE;
   vector<float>   *PhotonsAuxDyn_ptvarcone40;
   vector<float>   *PhotonsAuxDyn_ptvarcone30;
   vector<float>   *PhotonsAuxDyn_E7x11_Lr0;
   vector<float>   *PhotonsAuxDyn_E7x11_Lr1;
   vector<float>   *PhotonsAuxDyn_E_Lr0_HiG;
   vector<float>   *PhotonsAuxDyn_E7x11_Lr2;
   vector<float>   *PhotonsAuxDyn_E_Lr1_HiG;
   vector<float>   *PhotonsAuxDyn_E7x11_Lr3;
   vector<int>     *PhotonsAuxDyn_truthOrigin;
   vector<float>   *PhotonsAuxDyn_E_Lr2_HiG;
   Int_t           PhotonsAuxDyn_truthParticleLink_;
   UInt_t          PhotonsAuxDyn_truthParticleLink_m_persKey[kMaxPhotonsAuxDyn_truthParticleLink];   //[PhotonsAuxDyn.truthParticleLink_]
   UInt_t          PhotonsAuxDyn_truthParticleLink_m_persIndex[kMaxPhotonsAuxDyn_truthParticleLink];   //[PhotonsAuxDyn.truthParticleLink_]
   vector<float>   *PhotonsAuxDyn_E_Lr3_HiG;
   vector<int>     *PhotonsAuxDyn_truthType;
   vector<float>   *PhotonsAuxDyn_pt;
   vector<float>   *PhotonsAuxDyn_E_Lr0_MedG;
   vector<float>   *PhotonsAuxDyn_eta;
   vector<float>   *PhotonsAuxDyn_E_Lr1_MedG;
   vector<float>   *PhotonsAuxDyn_phi;
   vector<float>   *PhotonsAuxDyn_E_Lr2_MedG;
   vector<float>   *PhotonsAuxDyn_m;
   vector<float>   *PhotonsAuxDyn_E_Lr3_MedG;
   vector<float>   *PhotonsAuxDyn_E_Lr0_LowG;
   vector<float>   *PhotonsAuxDyn_E_Lr1_LowG;
   vector<float>   *PhotonsAuxDyn_E_Lr2_LowG;
   vector<float>   *PhotonsAuxDyn_E_Lr3_LowG;
   vector<unsigned char> *PhotonsAuxDyn_nCells_Lr0_HiG;
   vector<unsigned char> *PhotonsAuxDyn_nCells_Lr1_HiG;
   vector<unsigned char> *PhotonsAuxDyn_nCells_Lr2_HiG;
   vector<unsigned char> *PhotonsAuxDyn_nCells_Lr3_HiG;
   vector<unsigned char> *PhotonsAuxDyn_nCells_Lr0_MedG;
   vector<unsigned short> *PhotonsAuxDyn_author;
   vector<char>    *PhotonsAuxDyn_Loose;
   vector<unsigned char> *PhotonsAuxDyn_nCells_Lr1_MedG;
   vector<unsigned char> *PhotonsAuxDyn_nCells_Lr2_MedG;
   vector<unsigned char> *PhotonsAuxDyn_nCells_Lr3_MedG;
   vector<char>    *PhotonsAuxDyn_Tight;
   vector<unsigned char> *PhotonsAuxDyn_nCells_Lr0_LowG;
   Int_t           PhotonsAuxDyn_ambiguityLink_;
   UInt_t          PhotonsAuxDyn_ambiguityLink_m_persKey[kMaxPhotonsAuxDyn_ambiguityLink];   //[PhotonsAuxDyn.ambiguityLink_]
   UInt_t          PhotonsAuxDyn_ambiguityLink_m_persIndex[kMaxPhotonsAuxDyn_ambiguityLink];   //[PhotonsAuxDyn.ambiguityLink_]
   vector<unsigned char> *PhotonsAuxDyn_nCells_Lr1_LowG;
   vector<unsigned char> *PhotonsAuxDyn_nCells_Lr2_LowG;
   vector<unsigned char> *PhotonsAuxDyn_nCells_Lr3_LowG;
   vector<float>   *PhotonsAuxDyn_e233;
   vector<float>   *PhotonsAuxDyn_e237;
   vector<float>   *PhotonsAuxDyn_e2tsts1;
   vector<float>   *PhotonsAuxDyn_emaxs1;
   vector<float>   *PhotonsAuxDyn_emins1;
   vector<float>   *PhotonsAuxDyn_etcone20ptCorrection;
   vector<float>   *PhotonsAuxDyn_etcone30ptCorrection;
   vector<float>   *PhotonsAuxDyn_etcone40ptCorrection;
   vector<float>   *PhotonsAuxDyn_ethad;
   vector<float>   *PhotonsAuxDyn_ethad1;
   vector<float>   *PhotonsAuxDyn_topoetcone20ptCorrection;
   vector<float>   *PhotonsAuxDyn_topoetcone30ptCorrection;
   vector<float>   *PhotonsAuxDyn_topoetcone40ptCorrection;
   vector<float>   *PhotonsAuxDyn_topoetcone40;
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *PhotonsAuxDyn_caloClusterLinks;
   vector<unsigned int> *PhotonsAuxDyn_OQ;
   vector<float>   *PhotonsAuxDyn_f1;
   vector<float>   *PhotonsAuxDyn_f3;
   vector<short>   *PrimaryVerticesAuxDyn_vertexType;
   vector<float>   *PrimaryVerticesAuxDyn_sumPt2;
   vector<vector<ElementLink<DataVector<xAOD::NeutralParticle_v1> > > > *PrimaryVerticesAuxDyn_neutralParticleLinks;
   vector<float>   *PrimaryVerticesAuxDyn_x;
   vector<float>   *PrimaryVerticesAuxDyn_y;
   vector<float>   *PrimaryVerticesAuxDyn_z;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *PrimaryVerticesAuxDyn_trackParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_shotPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_chargedPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_neutralPFOLinks;
   vector<float>   *TauJetsAuxDyn_eta_combined;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_pi0PFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_protoChargedPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_protoNeutralPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_protoPi0PFOLinks;
   vector<float>   *TauJetsAuxDyn_m_combined;
   vector<float>   *TauJetsAuxDyn_phi_combined;
   vector<float>   *TauJetsAuxDyn_pt_combined;
   vector<float>   *TauJetsAuxDyn_ptFinalCalib;
   vector<float>   *TauJetsAuxDyn_etaFinalCalib;
   vector<float>   *TauJetsAuxDyn_phiFinalCalib;
   vector<float>   *TauJetsAuxDyn_mFinalCalib;
   vector<float>   *TauJetsAuxDyn_pt;
   vector<float>   *TauJetsAuxDyn_eta;
   vector<float>   *TauJetsAuxDyn_BDTJetScore;
   vector<float>   *TauJetsAuxDyn_phi;
   vector<float>   *TauJetsAuxDyn_BDTEleScore;
   vector<float>   *TauJetsAuxDyn_m;
   vector<float>   *TauJetsAuxDyn_EleMatchLikelihoodScore;
   vector<float>   *TauJetsAuxDyn_charge;
   vector<float>   *TauJetsAuxDyn_BDTJetScoreSigTrans;
   vector<unsigned int> *TauJetsAuxDyn_isTauFlags;
   vector<float>   *TauJetsAuxDyn_BDTEleScoreSigTrans;
   vector<vector<ElementLink<DataVector<xAOD::TauTrack_v1> > > > *TauJetsAuxDyn_tauTrackLinks;
   Int_t           TauJetsAuxDyn_jetLink_;
   UInt_t          TauJetsAuxDyn_jetLink_m_persKey[kMaxTauJetsAuxDyn_jetLink];   //[TauJetsAuxDyn.jetLink_]
   UInt_t          TauJetsAuxDyn_jetLink_m_persIndex[kMaxTauJetsAuxDyn_jetLink];   //[TauJetsAuxDyn.jetLink_]
   Int_t           TauJetsAuxDyn_vertexLink_;
   UInt_t          TauJetsAuxDyn_vertexLink_m_persKey[kMaxTauJetsAuxDyn_vertexLink];   //[TauJetsAuxDyn.vertexLink_]
   UInt_t          TauJetsAuxDyn_vertexLink_m_persIndex[kMaxTauJetsAuxDyn_vertexLink];   //[TauJetsAuxDyn.vertexLink_]
   Int_t           TauJetsAuxDyn_electronLink_;
   UInt_t          TauJetsAuxDyn_electronLink_m_persKey[kMaxTauJetsAuxDyn_electronLink];   //[TauJetsAuxDyn.electronLink_]
   UInt_t          TauJetsAuxDyn_electronLink_m_persIndex[kMaxTauJetsAuxDyn_electronLink];   //[TauJetsAuxDyn.electronLink_]
   Int_t           TauJetsAuxDyn_secondaryVertexLink_;
   UInt_t          TauJetsAuxDyn_secondaryVertexLink_m_persKey[kMaxTauJetsAuxDyn_secondaryVertexLink];   //[TauJetsAuxDyn.secondaryVertexLink_]
   UInt_t          TauJetsAuxDyn_secondaryVertexLink_m_persIndex[kMaxTauJetsAuxDyn_secondaryVertexLink];   //[TauJetsAuxDyn.secondaryVertexLink_]
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_hadronicPFOLinks;
   vector<int>     *TauJetsAuxDyn_PanTau_DecayMode;
   vector<unsigned short> *TauTracksAuxDyn_flagSet;
   vector<vector<float> > *TauTracksAuxDyn_bdtScores;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *TauTracksAuxDyn_trackLinks;
   vector<float>   *TauTracksAuxDyn_pt;
   vector<float>   *TauTracksAuxDyn_eta;
   vector<float>   *TauTracksAuxDyn_phi;
   Float_t         TopoClusterIsoCentralEventShapeAuxDyn_Density;
   Float_t         TopoClusterIsoCentralEventShapeAuxDyn_DensitySigma;
   Float_t         TopoClusterIsoCentralEventShapeAuxDyn_DensityArea;
   Float_t         TopoClusterIsoForwardEventShapeAuxDyn_Density;
   Float_t         TopoClusterIsoForwardEventShapeAuxDyn_DensitySigma;
   Float_t         TopoClusterIsoForwardEventShapeAuxDyn_DensityArea;
   vector<float>   *TruthEventsAuxDyn_XF2;
   Int_t           TruthEventsAuxDyn_signalProcessVertexLink_;
   UInt_t          TruthEventsAuxDyn_signalProcessVertexLink_m_persKey[kMaxTruthEventsAuxDyn_signalProcessVertexLink];   //[TruthEventsAuxDyn.signalProcessVertexLink_]
   UInt_t          TruthEventsAuxDyn_signalProcessVertexLink_m_persIndex[kMaxTruthEventsAuxDyn_signalProcessVertexLink];   //[TruthEventsAuxDyn.signalProcessVertexLink_]
   Int_t           TruthEventsAuxDyn_beamParticle1Link_;
   UInt_t          TruthEventsAuxDyn_beamParticle1Link_m_persKey[kMaxTruthEventsAuxDyn_beamParticle1Link];   //[TruthEventsAuxDyn.beamParticle1Link_]
   UInt_t          TruthEventsAuxDyn_beamParticle1Link_m_persIndex[kMaxTruthEventsAuxDyn_beamParticle1Link];   //[TruthEventsAuxDyn.beamParticle1Link_]
   Int_t           TruthEventsAuxDyn_beamParticle2Link_;
   UInt_t          TruthEventsAuxDyn_beamParticle2Link_m_persKey[kMaxTruthEventsAuxDyn_beamParticle2Link];   //[TruthEventsAuxDyn.beamParticle2Link_]
   UInt_t          TruthEventsAuxDyn_beamParticle2Link_m_persIndex[kMaxTruthEventsAuxDyn_beamParticle2Link];   //[TruthEventsAuxDyn.beamParticle2Link_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthEventsAuxDyn_truthParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthVertex_v1> > > > *TruthEventsAuxDyn_truthVertexLinks;
   vector<vector<float> > *TruthEventsAuxDyn_weights;
   vector<float>   *TruthEventsAuxDyn_crossSection;
   vector<float>   *TruthEventsAuxDyn_crossSectionError;
   vector<int>     *TruthEventsAuxDyn_PDFID1;
   vector<int>     *TruthEventsAuxDyn_PDFID2;
   vector<int>     *TruthEventsAuxDyn_PDGID1;
   vector<int>     *TruthEventsAuxDyn_PDGID2;
   vector<float>   *TruthEventsAuxDyn_Q;
   vector<float>   *TruthEventsAuxDyn_X1;
   vector<float>   *TruthEventsAuxDyn_X2;
   vector<float>   *TruthEventsAuxDyn_XF1;
   vector<float>   *TruthParticlesAuxDyn_px;
   vector<float>   *TruthParticlesAuxDyn_polarizationPhi;
   vector<float>   *TruthParticlesAuxDyn_py;
   vector<float>   *TruthParticlesAuxDyn_polarizationTheta;
   Int_t           TruthParticlesAuxDyn_prodVtxLink_;
   UInt_t          TruthParticlesAuxDyn_prodVtxLink_m_persKey[kMaxTruthParticlesAuxDyn_prodVtxLink];   //[TruthParticlesAuxDyn.prodVtxLink_]
   UInt_t          TruthParticlesAuxDyn_prodVtxLink_m_persIndex[kMaxTruthParticlesAuxDyn_prodVtxLink];   //[TruthParticlesAuxDyn.prodVtxLink_]
   vector<float>   *TruthParticlesAuxDyn_pz;
   Int_t           TruthParticlesAuxDyn_decayVtxLink_;
   UInt_t          TruthParticlesAuxDyn_decayVtxLink_m_persKey[kMaxTruthParticlesAuxDyn_decayVtxLink];   //[TruthParticlesAuxDyn.decayVtxLink_]
   UInt_t          TruthParticlesAuxDyn_decayVtxLink_m_persIndex[kMaxTruthParticlesAuxDyn_decayVtxLink];   //[TruthParticlesAuxDyn.decayVtxLink_]
   vector<float>   *TruthParticlesAuxDyn_e;
   vector<float>   *TruthParticlesAuxDyn_prodR;
   vector<float>   *TruthParticlesAuxDyn_prodZ;
   vector<int>     *TruthParticlesAuxDyn_pdgId;
   vector<int>     *TruthParticlesAuxDyn_barcode;
   vector<float>   *TruthParticlesAuxDyn_z0st;
   vector<int>     *TruthParticlesAuxDyn_status;
   vector<float>   *TruthParticlesAuxDyn_d0;
   vector<float>   *TruthParticlesAuxDyn_z0;
   vector<float>   *TruthParticlesAuxDyn_theta;
   vector<float>   *TruthParticlesAuxDyn_phi;
   vector<float>   *TruthParticlesAuxDyn_m;
   vector<float>   *TruthParticlesAuxDyn_qOverP;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthVerticesAuxDyn_incomingParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthVerticesAuxDyn_outgoingParticleLinks;
   vector<int>     *TruthVerticesAuxDyn_id;
   vector<float>   *TruthVerticesAuxDyn_t;
   vector<float>   *TruthVerticesAuxDyn_x;
   vector<int>     *TruthVerticesAuxDyn_barcode;
   vector<float>   *TruthVerticesAuxDyn_y;
   vector<float>   *TruthVerticesAuxDyn_z;
   vector<vector<float> > *egammaClustersAuxDyn_e_sampl;
   vector<float>   *egammaClustersAuxDyn_time;
   vector<unsigned int> *egammaClustersAuxDyn_clusterSize;
   vector<float>   *egammaClustersAuxDyn_eta0;
   vector<float>   *egammaClustersAuxDyn_phi0;
   vector<float>   *egammaClustersAuxDyn_rawE;
   vector<float>   *egammaClustersAuxDyn_rawEta;
   vector<float>   *egammaClustersAuxDyn_rawPhi;
   vector<float>   *egammaClustersAuxDyn_rawM;
   vector<float>   *egammaClustersAuxDyn_altE;
   vector<float>   *egammaClustersAuxDyn_altEta;
   vector<float>   *egammaClustersAuxDyn_altPhi;
   vector<float>   *egammaClustersAuxDyn_altM;
   vector<float>   *egammaClustersAuxDyn_calE;
   vector<float>   *egammaClustersAuxDyn_calEta;
   vector<float>   *egammaClustersAuxDyn_calPhi;
   vector<float>   *egammaClustersAuxDyn_calM;
   vector<vector<xAOD::CaloClusterBadChannelData_v1> > *egammaClustersAuxDyn_BadChannelList;
   Int_t           egammaClustersAuxDyn_CellLink_;
   UInt_t          egammaClustersAuxDyn_CellLink_m_persKey[kMaxegammaClustersAuxDyn_CellLink];   //[egammaClustersAuxDyn.CellLink_]
   UInt_t          egammaClustersAuxDyn_CellLink_m_persIndex[kMaxegammaClustersAuxDyn_CellLink];   //[egammaClustersAuxDyn.CellLink_]
   vector<float>   *egammaClustersAuxDyn_ETA1CALOFRAME;
   vector<float>   *egammaClustersAuxDyn_ETA2CALOFRAME;
   vector<float>   *egammaClustersAuxDyn_ETACALOFRAME;
   vector<float>   *egammaClustersAuxDyn_PHI1CALOFRAME;
   vector<float>   *egammaClustersAuxDyn_PHI2CALOFRAME;
   vector<float>   *egammaClustersAuxDyn_PHICALOFRAME;
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *egammaClustersAuxDyn_constituentClusterLinks;
   vector<vector<float> > *egammaClustersAuxDyn_emax_sampl;
   vector<vector<float> > *egammaClustersAuxDyn_eta_sampl;
   vector<vector<float> > *egammaClustersAuxDyn_etamax_sampl;
   vector<vector<float> > *egammaClustersAuxDyn_phi_sampl;
   vector<vector<float> > *egammaClustersAuxDyn_phimax_sampl;
   vector<float>   *egammaTruthParticlesAuxDyn_px;
   vector<float>   *egammaTruthParticlesAuxDyn_py;
   Int_t           egammaTruthParticlesAuxDyn_prodVtxLink_;
   UInt_t          egammaTruthParticlesAuxDyn_prodVtxLink_m_persKey[kMaxegammaTruthParticlesAuxDyn_prodVtxLink];   //[egammaTruthParticlesAuxDyn.prodVtxLink_]
   UInt_t          egammaTruthParticlesAuxDyn_prodVtxLink_m_persIndex[kMaxegammaTruthParticlesAuxDyn_prodVtxLink];   //[egammaTruthParticlesAuxDyn.prodVtxLink_]
   vector<float>   *egammaTruthParticlesAuxDyn_pz;
   Int_t           egammaTruthParticlesAuxDyn_decayVtxLink_;
   UInt_t          egammaTruthParticlesAuxDyn_decayVtxLink_m_persKey[kMaxegammaTruthParticlesAuxDyn_decayVtxLink];   //[egammaTruthParticlesAuxDyn.decayVtxLink_]
   UInt_t          egammaTruthParticlesAuxDyn_decayVtxLink_m_persIndex[kMaxegammaTruthParticlesAuxDyn_decayVtxLink];   //[egammaTruthParticlesAuxDyn.decayVtxLink_]
   vector<float>   *egammaTruthParticlesAuxDyn_e;
   vector<int>     *egammaTruthParticlesAuxDyn_barcode;
   vector<int>     *egammaTruthParticlesAuxDyn_pdgId;
   vector<int>     *egammaTruthParticlesAuxDyn_status;
   Int_t           egammaTruthParticlesAuxDyn_recoElectronLink_;
   UInt_t          egammaTruthParticlesAuxDyn_recoElectronLink_m_persKey[kMaxegammaTruthParticlesAuxDyn_recoElectronLink];   //[egammaTruthParticlesAuxDyn.recoElectronLink_]
   UInt_t          egammaTruthParticlesAuxDyn_recoElectronLink_m_persIndex[kMaxegammaTruthParticlesAuxDyn_recoElectronLink];   //[egammaTruthParticlesAuxDyn.recoElectronLink_]
   Int_t           egammaTruthParticlesAuxDyn_recoPhotonLink_;
   UInt_t          egammaTruthParticlesAuxDyn_recoPhotonLink_m_persKey[kMaxegammaTruthParticlesAuxDyn_recoPhotonLink];   //[egammaTruthParticlesAuxDyn.recoPhotonLink_]
   UInt_t          egammaTruthParticlesAuxDyn_recoPhotonLink_m_persIndex[kMaxegammaTruthParticlesAuxDyn_recoPhotonLink];   //[egammaTruthParticlesAuxDyn.recoPhotonLink_]
   vector<float>   *egammaTruthParticlesAuxDyn_etcone20;
   vector<int>     *egammaTruthParticlesAuxDyn_truthOrigin;
   vector<float>   *egammaTruthParticlesAuxDyn_etcone30;
   Int_t           egammaTruthParticlesAuxDyn_truthParticleLink_;
   UInt_t          egammaTruthParticlesAuxDyn_truthParticleLink_m_persKey[kMaxegammaTruthParticlesAuxDyn_truthParticleLink];   //[egammaTruthParticlesAuxDyn.truthParticleLink_]
   UInt_t          egammaTruthParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxegammaTruthParticlesAuxDyn_truthParticleLink];   //[egammaTruthParticlesAuxDyn.truthParticleLink_]
   vector<float>   *egammaTruthParticlesAuxDyn_etcone40;
   vector<int>     *egammaTruthParticlesAuxDyn_truthType;
   vector<float>   *egammaTruthParticlesAuxDyn_ptcone20;
   vector<float>   *egammaTruthParticlesAuxDyn_m;
   vector<float>   *egammaTruthParticlesAuxDyn_ptcone30;
   vector<float>   *egammaTruthParticlesAuxDyn_ptcone40;
   vector<unsigned char> *MuonsAuxDyn_cscEtaHits;
   vector<unsigned char> *MuonsAuxDyn_cscUnspoiledEtaHits;
   vector<float>   *MuonsAuxDyn_etcone20;
   vector<float>   *MuonsAuxDyn_etcone30;
   vector<float>   *MuonsAuxDyn_etcone40;
   vector<float>   *MuonsAuxDyn_ptcone20;
   vector<float>   *MuonsAuxDyn_ptcone30;
   vector<float>   *MuonsAuxDyn_ptcone40;
   vector<float>   *MuonsAuxDyn_ptvarcone20;
   vector<float>   *MuonsAuxDyn_ptvarcone40;
   vector<float>   *MuonsAuxDyn_ptvarcone30;
   Int_t           MuonsAuxDyn_inDetTrackParticleLink_;
   UInt_t          MuonsAuxDyn_inDetTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_inDetTrackParticleLink];   //[MuonsAuxDyn.inDetTrackParticleLink_]
   UInt_t          MuonsAuxDyn_inDetTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_inDetTrackParticleLink];   //[MuonsAuxDyn.inDetTrackParticleLink_]
   Int_t           MuonsAuxDyn_muonSpectrometerTrackParticleLink_;
   UInt_t          MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_muonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.muonSpectrometerTrackParticleLink_]
   UInt_t          MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_muonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.muonSpectrometerTrackParticleLink_]
   vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > *MuonsAuxDyn_muonSegmentLinks;
   Int_t           MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_;
   UInt_t          MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink_]
   UInt_t          MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink_]
   Int_t           MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_;
   UInt_t          MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_]
   UInt_t          MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_]
   Int_t           MuonsAuxDyn_combinedTrackParticleLink_;
   UInt_t          MuonsAuxDyn_combinedTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_combinedTrackParticleLink];   //[MuonsAuxDyn.combinedTrackParticleLink_]
   UInt_t          MuonsAuxDyn_combinedTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_combinedTrackParticleLink];   //[MuonsAuxDyn.combinedTrackParticleLink_]
   vector<float>   *MuonsAuxDyn_pt;
   Int_t           MuonsAuxDyn_clusterLink_;
   UInt_t          MuonsAuxDyn_clusterLink_m_persKey[kMaxMuonsAuxDyn_clusterLink];   //[MuonsAuxDyn.clusterLink_]
   UInt_t          MuonsAuxDyn_clusterLink_m_persIndex[kMaxMuonsAuxDyn_clusterLink];   //[MuonsAuxDyn.clusterLink_]
   vector<float>   *MuonsAuxDyn_spectrometerFieldIntegral;
   vector<float>   *MuonsAuxDyn_eta;
   vector<float>   *MuonsAuxDyn_scatteringCurvatureSignificance;
   vector<float>   *MuonsAuxDyn_phi;
   vector<float>   *MuonsAuxDyn_scatteringNeighbourSignificance;
   vector<float>   *MuonsAuxDyn_momentumBalanceSignificance;
   vector<unsigned short> *MuonsAuxDyn_allAuthors;
   vector<unsigned short> *MuonsAuxDyn_author;
   vector<unsigned short> *MuonsAuxDyn_muonType;
   vector<unsigned char> *MuonsAuxDyn_quality;
   vector<unsigned char> *MuonsAuxDyn_energyLossType;
   vector<float>   *MuonsAuxDyn_CaloLRLikelihood;
   vector<float>   *MuonsAuxDyn_EnergyLoss;
   vector<unsigned char> *MuonsAuxDyn_innerSmallHits;
   vector<unsigned char> *MuonsAuxDyn_innerLargeHits;
   vector<unsigned char> *MuonsAuxDyn_middleSmallHits;
   vector<unsigned char> *MuonsAuxDyn_middleLargeHits;
   vector<unsigned char> *MuonsAuxDyn_outerSmallHits;
   vector<unsigned char> *MuonsAuxDyn_outerLargeHits;
   vector<unsigned char> *MuonsAuxDyn_extendedSmallHits;
   vector<unsigned char> *MuonsAuxDyn_extendedLargeHits;
   vector<unsigned char> *MuonsAuxDyn_innerSmallHoles;
   vector<int>     *MuonsAuxDyn_CaloMuonIDTag;
   vector<unsigned char> *MuonsAuxDyn_innerLargeHoles;
   vector<unsigned char> *MuonsAuxDyn_middleSmallHoles;
   vector<unsigned char> *MuonsAuxDyn_middleLargeHoles;
   vector<unsigned char> *MuonsAuxDyn_outerSmallHoles;
   vector<unsigned char> *MuonsAuxDyn_outerLargeHoles;
   vector<unsigned char> *MuonsAuxDyn_extendedSmallHoles;
   vector<unsigned char> *MuonsAuxDyn_extendedLargeHoles;
   vector<float>   *MuonsAuxDyn_charge;
   vector<unsigned char> *MuonsAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *MuonsAuxDyn_numberOfPrecisionHoleLayers;
   vector<char>    *MuonsAuxDyn_DFCommonGoodMuon;
   vector<char>    *MuonsAuxDyn_DFCommonMuonsPreselection;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_chiSquared;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_numberDoF;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_phi;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_d0;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_z0;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_theta;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_qOverP;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrix;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_vz;
   Int_t           CombinedMuonTrackParticlesAuxDyn_vertexLink_;
   UInt_t          CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persKey[kMaxCombinedMuonTrackParticlesAuxDyn_vertexLink];   //[CombinedMuonTrackParticlesAuxDyn.vertexLink_]
   UInt_t          CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex[kMaxCombinedMuonTrackParticlesAuxDyn_vertexLink];   //[CombinedMuonTrackParticlesAuxDyn.vertexLink_]
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_phi;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_d0;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_z0;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_theta;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_qOverP;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrix;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_vz;
   Int_t           ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_;
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persKey[kMaxExtrapolatedMuonTrackParticlesAuxDyn_vertexLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.vertexLink_]
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex[kMaxExtrapolatedMuonTrackParticlesAuxDyn_vertexLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.vertexLink_]
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;
   vector<float>   *MuonTruthParticlesAuxDyn_px;
   vector<float>   *MuonTruthParticlesAuxDyn_py;
   vector<float>   *MuonTruthParticlesAuxDyn_pz;
   vector<float>   *MuonTruthParticlesAuxDyn_e;
   vector<int>     *MuonTruthParticlesAuxDyn_pdgId;
   vector<int>     *MuonTruthParticlesAuxDyn_status;

   // List of branches
   TBranch        *b_McEventInfo;   //!
   TBranch        *b_AODCellContainer;   //!
   TBranch        *b_TrigConfKeys;   //!
   TBranch        *b_EventInfoAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_EventInfoAux_runNumber;   //!
   TBranch        *b_EventInfoAux_eventNumber;   //!
   TBranch        *b_EventInfoAux_lumiBlock;   //!
   TBranch        *b_EventInfoAux_timeStamp;   //!
   TBranch        *b_EventInfoAux_timeStampNSOffset;   //!
   TBranch        *b_EventInfoAux_bcid;   //!
   TBranch        *b_EventInfoAux_detectorMask0;   //!
   TBranch        *b_EventInfoAux_detectorMask1;   //!
   TBranch        *b_EventInfoAux_detectorMask2;   //!
   TBranch        *b_EventInfoAux_detectorMask3;   //!
   TBranch        *b_EventInfoAux_detDescrTags;   //!
   TBranch        *b_EventInfoAux_eventTypeBitmask;   //!
   TBranch        *b_EventInfoAux_statusElement;   //!
   TBranch        *b_EventInfoAux_extendedLevel1ID;   //!
   TBranch        *b_EventInfoAux_level1TriggerType;   //!
   TBranch        *b_EventInfoAux_streamTagNames;   //!
   TBranch        *b_EventInfoAux_streamTagTypes;   //!
   TBranch        *b_EventInfoAux_streamTagObeysLumiblock;   //!
   TBranch        *b_EventInfoAux_actualInteractionsPerCrossing;   //!
   TBranch        *b_EventInfoAux_averageInteractionsPerCrossing;   //!
   TBranch        *b_EventInfoAux_pixelFlags;   //!
   TBranch        *b_EventInfoAux_sctFlags;   //!
   TBranch        *b_EventInfoAux_trtFlags;   //!
   TBranch        *b_EventInfoAux_larFlags;   //!
   TBranch        *b_EventInfoAux_tileFlags;   //!
   TBranch        *b_EventInfoAux_muonFlags;   //!
   TBranch        *b_EventInfoAux_forwardDetFlags;   //!
   TBranch        *b_EventInfoAux_coreFlags;   //!
   TBranch        *b_EventInfoAux_backgroundFlags;   //!
   TBranch        *b_EventInfoAux_lumiFlags;   //!
   TBranch        *b_EventInfoAux_beamPosX;   //!
   TBranch        *b_EventInfoAux_beamPosY;   //!
   TBranch        *b_EventInfoAux_beamPosZ;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaX;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaY;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaZ;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaXY;   //!
   TBranch        *b_EventInfoAux_beamTiltXZ;   //!
   TBranch        *b_EventInfoAux_beamTiltYZ;   //!
   TBranch        *b_EventInfoAux_beamStatus;   //!
   TBranch        *b_xTrigDecisionAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_xTrigDecisionAux_smk;   //!
   TBranch        *b_xTrigDecisionAux_bgCode;   //!
   TBranch        *b_xTrigDecisionAux_tav;   //!
   TBranch        *b_xTrigDecisionAux_tap;   //!
   TBranch        *b_xTrigDecisionAux_tbp;   //!
   TBranch        *b_xTrigDecisionAux_lvl2ErrorBits;   //!
   TBranch        *b_xTrigDecisionAux_efErrorBits;   //!
   TBranch        *b_xTrigDecisionAux_lvl2Truncated;   //!
   TBranch        *b_xTrigDecisionAux_efTruncated;   //!
   TBranch        *b_xTrigDecisionAux_lvl2PassedPhysics;   //!
   TBranch        *b_xTrigDecisionAux_efPassedPhysics;   //!
   TBranch        *b_xTrigDecisionAux_lvl2PassedRaw;   //!
   TBranch        *b_xTrigDecisionAux_efPassedRaw;   //!
   TBranch        *b_xTrigDecisionAux_lvl2PassedThrough;   //!
   TBranch        *b_xTrigDecisionAux_efPassedThrough;   //!
   TBranch        *b_xTrigDecisionAux_lvl2Prescaled;   //!
   TBranch        *b_xTrigDecisionAux_efPrescaled;   //!
   TBranch        *b_xTrigDecisionAux_lvl2Resurrected;   //!
   TBranch        *b_xTrigDecisionAux_efResurrected;   //!
   TBranch        *b_EventInfo;   //!
   TBranch        *b_TrigNavigationAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_TrigNavigationAux_serialized;   //!
   TBranch        *b_xTrigDecision;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_jetLink;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_objectLinks;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_calpx;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_calpy;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_calpz;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_cale;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_calsumpt;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_calkey;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_trkpx;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_trkpy;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_trkpz;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_trke;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_trksumpt;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_trkkey;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_jettrkpx;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_jettrkpy;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_jettrkpz;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_jettrke;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_jettrksumpt;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_overlapIndices;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_overlapTypes;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_isMisc;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopo;   //!
   TBranch        *b_HLT_xAOD__RoiDescriptorStore_initialRoI;   //!
   TBranch        *b_TrigNavigation;   //!
   TBranch        *b_HLT_xAOD__RoiDescriptorStore_initialRoIAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_HLT_xAOD__RoiDescriptorStore_initialRoIAux_serialised;   //!
   TBranch        *b_Kt4EMTopoOriginEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_NeutralParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_NeutralParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_ParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_ParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_TopoClusterIsoCentralEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_TopoClusterIsoForwardEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_Kt4EMTopoOriginEventShape;   //!
   TBranch        *b_NeutralParticleFlowIsoCentralEventShape;   //!
   TBranch        *b_NeutralParticleFlowIsoForwardEventShape;   //!
   TBranch        *b_ParticleFlowIsoCentralEventShape;   //!
   TBranch        *b_ParticleFlowIsoForwardEventShape;   //!
   TBranch        *b_TopoClusterIsoCentralEventShape;   //!
   TBranch        *b_TopoClusterIsoForwardEventShape;   //!
   TBranch        *b_LVL1EmTauRoIs;   //!
   TBranch        *b_Electrons;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_Electrons;   //!
   TBranch        *b_NewSwElectrons;   //!
   TBranch        *b_GSFConversionVertices;   //!
   TBranch        *b_PrimaryVertices;   //!
   TBranch        *b_HLT_TrigRoiDescriptorCollection_initialRoI;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopo;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopo;   //!
   TBranch        *b_MET_Track;   //!
   TBranch        *b_MET_Truth;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_Photons;   //!
   TBranch        *b_Photons;   //!
   TBranch        *b_HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFex;   //!
   TBranch        *b_HLT_xAOD__TrigPassBitsContainer_passbits;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFex;   //!
   TBranch        *b_MuonSegments;   //!
   TBranch        *b_egammaClusters_links;   //!
   TBranch        *b_TauJets;   //!
   TBranch        *b_Muons;   //!
   TBranch        *b_TruthEvents;   //!
   TBranch        *b_CaloCalTopoClusters;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFex;   //!
   TBranch        *b_egammaClusters;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_;   //!
   TBranch        *b_CaloCalTopoClustersAux_;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_;   //!
   TBranch        *b_ElectronsAux_;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_;   //!
   TBranch        *b_GSFConversionVerticesAux_;   //!
   TBranch        *b_GSFTrackParticlesAux_;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAux_;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAux_;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAux_;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAux_;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAux_;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAux_;   //!
   TBranch        *b_HLT_xAOD__TrigPassBitsContainer_passbitsAux_;   //!
   TBranch        *b_HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAux_;   //!
   TBranch        *b_HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAux_;   //!
   TBranch        *b_InDetForwardTrackParticlesAux_;   //!
   TBranch        *b_InDetTrackParticlesAux_;   //!
   TBranch        *b_LVL1EmTauRoIsAux_;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAux_;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopoAux_;   //!
   TBranch        *b_MET_TrackAux_;   //!
   TBranch        *b_MET_TruthAux_;   //!
   TBranch        *b_MuonSegmentsAux_;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAux_;   //!
   TBranch        *b_MuonTruthParticlesAux_;   //!
   TBranch        *b_MuonsAux_;   //!
   TBranch        *b_NewSwElectronsAux_;   //!
   TBranch        *b_PhotonsAux_;   //!
   TBranch        *b_PrimaryVerticesAux_;   //!
   TBranch        *b_TauJetsAux_;   //!
   TBranch        *b_TauTracksAux_;   //!
   TBranch        *b_TruthEventsAux_;   //!
   TBranch        *b_TruthParticlesAux_;   //!
   TBranch        *b_TruthVerticesAux_;   //!
   TBranch        *b_egammaClustersAux_;   //!
   TBranch        *b_egammaTruthParticlesAux_;   //!
   TBranch        *b_MuonTruthParticles;   //!
   TBranch        *b_TruthParticles;   //!
   TBranch        *b_egammaTruthParticles;   //!
   TBranch        *b_TruthVertices;   //!
   TBranch        *b_AntiKt4EMTopoJets;   //!
   TBranch        *b_AntiKt4LCTopoJets;   //!
   TBranch        *b_AntiKt4PV0TrackJets;   //!
   TBranch        *b_AntiKt4TruthJets;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgamma;   //!
   TBranch        *b_CombinedMuonTrackParticles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticles;   //!
   TBranch        *b_GSFTrackParticles;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrig;   //!
   TBranch        *b_InDetForwardTrackParticles;   //!
   TBranch        *b_InDetTrackParticles;   //!
   TBranch        *b_MuonSpectrometerTrackParticles;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_eta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_phi;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_m;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_constituentLinks;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_constituentWeights;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAux_pt;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAux_eta;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAux_phi;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAux_m;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAux_constituentLinks;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAux_constituentWeights;   //!
   TBranch        *b_AntiKt4TruthJetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKt4TruthJetsAux_pt;   //!
   TBranch        *b_AntiKt4TruthJetsAux_eta;   //!
   TBranch        *b_AntiKt4TruthJetsAux_phi;   //!
   TBranch        *b_AntiKt4TruthJetsAux_m;   //!
   TBranch        *b_AntiKt4TruthJetsAux_constituentLinks;   //!
   TBranch        *b_AntiKt4TruthJetsAux_constituentWeights;   //!
   TBranch        *b_HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgamma;   //!
   TBranch        *b_TauTracks;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DetectorEta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HECFrac;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_EMFrac;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HECQuality;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMax;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_TightBad;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JVFCorr;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Jvt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JvtRpt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_LArQuality;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_NegativeE;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_AverageLArQF;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ActiveArea;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ConeExclTausFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_WidthPhi;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBHadronsFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBHadronsInitial;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCHadronsFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCHadronsInitial;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCQuarksFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostHBosons;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostHBosonsCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostHBosonsPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostPartons;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostPartonsCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostPartonsPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostTQuarksFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostTausFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostTausFinalCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostTausFinalPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostWBosons;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostWBosonsCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostWBosonsPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostZBosons;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostZBosonsCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostZBosonsPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_DL1_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_DL1_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_DL1_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_MV2c100_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_MV2c10_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_MV2c10mu_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_MV2c10rnn_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_MV2cl100_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pu;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_e_sampl;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_time;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_clusterSize;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_eta0;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_phi0;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_rawE;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_rawEta;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_rawPhi;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_rawM;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_altE;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_AVG_LAR_Q;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_altEta;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_AVG_TILE_Q;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_altPhi;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_BADLARQ_FRAC;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_altM;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_CENTER_LAMBDA;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_calE;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_CENTER_MAG;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_calEta;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_EM_PROBABILITY;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_calPhi;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_calM;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_ENG_BAD_CELLS;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_BadChannelList;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_ENG_FRAC_MAX;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_ENG_POS;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_FIRST_ENG_DENS;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_ISOLATION;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_N_BAD_CELLS;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_SECOND_LAMBDA;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_SECOND_R;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectChId;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans;   //!
   TBranch        *b_ElectronsAuxDyn_e233;   //!
   TBranch        *b_ElectronsAuxDyn_e235;   //!
   TBranch        *b_ElectronsAuxDyn_e237;   //!
   TBranch        *b_ElectronsAuxDyn_e255;   //!
   TBranch        *b_ElectronsAuxDyn_e2ts1;   //!
   TBranch        *b_ElectronsAuxDyn_e2tsts1;   //!
   TBranch        *b_ElectronsAuxDyn_ecore;   //!
   TBranch        *b_ElectronsAuxDyn_ehad1;   //!
   TBranch        *b_ElectronsAuxDyn_emaxs1;   //!
   TBranch        *b_ElectronsAuxDyn_emins1;   //!
   TBranch        *b_ElectronsAuxDyn_etcone20ptCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_trackParticleLinks;   //!
   TBranch        *b_ElectronsAuxDyn_etcone30ptCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_etcone40ptCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_ethad;   //!
   TBranch        *b_ElectronsAuxDyn_ethad1;   //!
   TBranch        *b_ElectronsAuxDyn_neflowisol20ptCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_neflowisol30ptCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_neflowisol40ptCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_pos;   //!
   TBranch        *b_ElectronsAuxDyn_pt;   //!
   TBranch        *b_ElectronsAuxDyn_pos7;   //!
   TBranch        *b_ElectronsAuxDyn_eta;   //!
   TBranch        *b_ElectronsAuxDyn_poscs1;   //!
   TBranch        *b_ElectronsAuxDyn_phi;   //!
   TBranch        *b_ElectronsAuxDyn_poscs2;   //!
   TBranch        *b_ElectronsAuxDyn_m;   //!
   TBranch        *b_ElectronsAuxDyn_r33over37allcalo;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone20ptCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone30ptCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone40ptCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_widths1;   //!
   TBranch        *b_ElectronsAuxDyn_widths2;   //!
   TBranch        *b_ElectronsAuxDyn_truthOrigin;   //!
   TBranch        *b_ElectronsAuxDyn_truthParticleLink_;   //!
   TBranch        *b_ElectronsAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_ElectronsAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_ElectronsAuxDyn_truthType;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHVeryLoose;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHLoose;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHMedium;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHTight;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsIsEMLoose;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsIsEMLooseIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsIsEMMedium;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsIsEMMediumIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsIsEMTight;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsIsEMTightIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsML;   //!
   TBranch        *b_ElectronsAuxDyn_truthPdgId;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthType;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthOrigin;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherPdgId;   //!
   TBranch        *b_ElectronsAuxDyn_lastEgMotherTruthType;   //!
   TBranch        *b_ElectronsAuxDyn_lastEgMotherTruthOrigin;   //!
   TBranch        *b_ElectronsAuxDyn_lastEgMotherTruthParticleLink_;   //!
   TBranch        *b_ElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persKey;   //!
   TBranch        *b_ElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persIndex;   //!
   TBranch        *b_ElectronsAuxDyn_lastEgMotherPdgId;   //!
   TBranch        *b_ElectronsAuxDyn_E_Lr0_HiG;   //!
   TBranch        *b_ElectronsAuxDyn_E_Lr1_HiG;   //!
   TBranch        *b_ElectronsAuxDyn_E_Lr2_HiG;   //!
   TBranch        *b_ElectronsAuxDyn_E_Lr3_HiG;   //!
   TBranch        *b_ElectronsAuxDyn_E_Lr0_MedG;   //!
   TBranch        *b_ElectronsAuxDyn_E_Lr1_MedG;   //!
   TBranch        *b_ElectronsAuxDyn_E_Lr2_MedG;   //!
   TBranch        *b_ElectronsAuxDyn_E_Lr3_MedG;   //!
   TBranch        *b_ElectronsAuxDyn_E_Lr0_LowG;   //!
   TBranch        *b_ElectronsAuxDyn_E_Lr1_LowG;   //!
   TBranch        *b_ElectronsAuxDyn_E_Lr2_LowG;   //!
   TBranch        *b_ElectronsAuxDyn_E_Lr3_LowG;   //!
   TBranch        *b_ElectronsAuxDyn_nCells_Lr0_HiG;   //!
   TBranch        *b_ElectronsAuxDyn_nCells_Lr1_HiG;   //!
   TBranch        *b_ElectronsAuxDyn_nCells_Lr2_HiG;   //!
   TBranch        *b_ElectronsAuxDyn_nCells_Lr3_HiG;   //!
   TBranch        *b_ElectronsAuxDyn_nCells_Lr0_MedG;   //!
   TBranch        *b_ElectronsAuxDyn_nCells_Lr1_MedG;   //!
   TBranch        *b_ElectronsAuxDyn_nCells_Lr2_MedG;   //!
   TBranch        *b_ElectronsAuxDyn_nCells_Lr3_MedG;   //!
   TBranch        *b_ElectronsAuxDyn_nCells_Lr0_LowG;   //!
   TBranch        *b_ElectronsAuxDyn_nCells_Lr1_LowG;   //!
   TBranch        *b_ElectronsAuxDyn_nCells_Lr2_LowG;   //!
   TBranch        *b_ElectronsAuxDyn_nCells_Lr3_LowG;   //!
   TBranch        *b_ElectronsAuxDyn_maxEcell_time;   //!
   TBranch        *b_ElectronsAuxDyn_maxEcell_energy;   //!
   TBranch        *b_ElectronsAuxDyn_maxEcell_gain;   //!
   TBranch        *b_ElectronsAuxDyn_maxEcell_onlId;   //!
   TBranch        *b_ElectronsAuxDyn_maxEcell_x;   //!
   TBranch        *b_ElectronsAuxDyn_maxEcell_y;   //!
   TBranch        *b_ElectronsAuxDyn_maxEcell_z;   //!
   TBranch        *b_ElectronsAuxDyn_7x11ClusterExist;   //!
   TBranch        *b_ElectronsAuxDyn_NewSwClusterLink_;   //!
   TBranch        *b_ElectronsAuxDyn_NewSwClusterLink_m_persKey;   //!
   TBranch        *b_ElectronsAuxDyn_NewSwClusterLink_m_persIndex;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e011;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e033;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e132;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e1152;   //!
   TBranch        *b_ElectronsAuxDyn_EG_ethad1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_ethad;   //!
   TBranch        *b_ElectronsAuxDyn_EG_ehad1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_f1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_f3;   //!
   TBranch        *b_ElectronsAuxDyn_EG_f1core;   //!
   TBranch        *b_ElectronsAuxDyn_EG_f3core;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e233;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e235;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e255;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e237;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e277;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e333;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e335;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e337;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e377;   //!
   TBranch        *b_ElectronsAuxDyn_EG_weta1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_weta2;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e2ts1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_e2tsts1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_fracs1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_widths1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_widths2;   //!
   TBranch        *b_ElectronsAuxDyn_EG_poscs1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_poscs2;   //!
   TBranch        *b_ElectronsAuxDyn_EG_asy1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_pos;   //!
   TBranch        *b_ElectronsAuxDyn_EG_pos7;   //!
   TBranch        *b_ElectronsAuxDyn_EG_barys1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_wtots1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_emins1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_emaxs1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_r33over37allcalo;   //!
   TBranch        *b_ElectronsAuxDyn_EG_ecore;   //!
   TBranch        *b_ElectronsAuxDyn_EG_Reta;   //!
   TBranch        *b_ElectronsAuxDyn_EG_Rphi;   //!
   TBranch        *b_ElectronsAuxDyn_EG_Eratio;   //!
   TBranch        *b_ElectronsAuxDyn_author;   //!
   TBranch        *b_ElectronsAuxDyn_EG_Rhad;   //!
   TBranch        *b_ElectronsAuxDyn_EG_Rhad1;   //!
   TBranch        *b_ElectronsAuxDyn_EG_DeltaE;   //!
   TBranch        *b_ElectronsAuxDyn_E3x5_Lr0;   //!
   TBranch        *b_ElectronsAuxDyn_E3x5_Lr1;   //!
   TBranch        *b_ElectronsAuxDyn_E3x5_Lr2;   //!
   TBranch        *b_ElectronsAuxDyn_E3x5_Lr3;   //!
   TBranch        *b_ElectronsAuxDyn_E5x7_Lr0;   //!
   TBranch        *b_ElectronsAuxDyn_E5x7_Lr1;   //!
   TBranch        *b_ElectronsAuxDyn_E5x7_Lr2;   //!
   TBranch        *b_ElectronsAuxDyn_E5x7_Lr3;   //!
   TBranch        *b_ElectronsAuxDyn_E7x7_Lr0;   //!
   TBranch        *b_ElectronsAuxDyn_E7x7_Lr1;   //!
   TBranch        *b_ElectronsAuxDyn_E7x7_Lr2;   //!
   TBranch        *b_ElectronsAuxDyn_E7x7_Lr3;   //!
   TBranch        *b_ElectronsAuxDyn_E7x11_Lr0;   //!
   TBranch        *b_ElectronsAuxDyn_E7x11_Lr1;   //!
   TBranch        *b_ElectronsAuxDyn_E7x11_Lr2;   //!
   TBranch        *b_ElectronsAuxDyn_E7x11_Lr3;   //!
   TBranch        *b_ElectronsAuxDyn_Energy7x11_Lr0;   //!
   TBranch        *b_ElectronsAuxDyn_Energy7x11_Lr1;   //!
   TBranch        *b_ElectronsAuxDyn_Energy7x11_Lr2;   //!
   TBranch        *b_ElectronsAuxDyn_Energy7x11_Lr3;   //!
   TBranch        *b_ElectronsAuxDyn_time_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_energy_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_gain_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_provenance_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_x_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_dx_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_y_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_dy_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_z_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_dz_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_eta_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_deta_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_etasize_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_phi_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_dphi_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_phisize_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_sampling_7x11;   //!
   TBranch        *b_ElectronsAuxDyn_charge;   //!
   TBranch        *b_ElectronsAuxDyn_etcone20;   //!
   TBranch        *b_ElectronsAuxDyn_etcone30;   //!
   TBranch        *b_ElectronsAuxDyn_etcone40;   //!
   TBranch        *b_ElectronsAuxDyn_ptcone20;   //!
   TBranch        *b_ElectronsAuxDyn_ptcone30;   //!
   TBranch        *b_ElectronsAuxDyn_ptcone40;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone20;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone40;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonInput_TrackJetNTrack;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonInput_sv1_jf_ntrkv;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonInput_ip2;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonInput_ip3;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonInput_LepJetPtFrac;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonInput_DRlj;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonInput_TopoEtCone30Rel;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonInput_PtVarCone30Rel;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonIso;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone20;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone30;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone30;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonInput_rnnip;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonInput_DL1mu;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonInput_PtRel;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonInput_PtFrac;   //!
   TBranch        *b_ElectronsAuxDyn_PromptLeptonVeto;   //!
   TBranch        *b_ElectronsAuxDyn_etconeCorrBitset;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonJets_passOR;   //!
   TBranch        *b_ElectronsAuxDyn_selected;   //!
   TBranch        *b_ElectronsAuxDyn_neflowisol20;   //!
   TBranch        *b_ElectronsAuxDyn_neflowisol30;   //!
   TBranch        *b_ElectronsAuxDyn_neflowisol40;   //!
   TBranch        *b_ElectronsAuxDyn_neflowisolCorrBitset;   //!
   TBranch        *b_ElectronsAuxDyn_neflowisolcoreConeEnergyCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_ptconeCorrBitset;   //!
   TBranch        *b_ElectronsAuxDyn_ptconecoreTrackPtrCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone40;   //!
   TBranch        *b_ElectronsAuxDyn_topoetconeCorrBitset;   //!
   TBranch        *b_ElectronsAuxDyn_topoetconecoreConeEnergyCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_caloClusterLinks;   //!
   TBranch        *b_ElectronsAuxDyn_OQ;   //!
   TBranch        *b_ElectronsAuxDyn_f1;   //!
   TBranch        *b_ElectronsAuxDyn_f3;   //!
   TBranch        *b_ElectronsAuxDyn_f1core;   //!
   TBranch        *b_ElectronsAuxDyn_f3core;   //!
   TBranch        *b_ElectronsAuxDyn_weta1;   //!
   TBranch        *b_ElectronsAuxDyn_weta2;   //!
   TBranch        *b_ElectronsAuxDyn_fracs1;   //!
   TBranch        *b_ElectronsAuxDyn_wtots1;   //!
   TBranch        *b_ElectronsAuxDyn_e277;   //!
   TBranch        *b_ElectronsAuxDyn_Reta;   //!
   TBranch        *b_ElectronsAuxDyn_Rphi;   //!
   TBranch        *b_ElectronsAuxDyn_Eratio;   //!
   TBranch        *b_ElectronsAuxDyn_Rhad;   //!
   TBranch        *b_ElectronsAuxDyn_Rhad1;   //!
   TBranch        *b_ElectronsAuxDyn_DeltaE;   //!
   TBranch        *b_ElectronsAuxDyn_deltaEta0;   //!
   TBranch        *b_ElectronsAuxDyn_deltaEta1;   //!
   TBranch        *b_ElectronsAuxDyn_deltaEta2;   //!
   TBranch        *b_ElectronsAuxDyn_deltaEta3;   //!
   TBranch        *b_ElectronsAuxDyn_deltaPhi0;   //!
   TBranch        *b_ElectronsAuxDyn_deltaPhi1;   //!
   TBranch        *b_ElectronsAuxDyn_deltaPhi2;   //!
   TBranch        *b_ElectronsAuxDyn_deltaPhi3;   //!
   TBranch        *b_ElectronsAuxDyn_deltaPhiRescaled0;   //!
   TBranch        *b_ElectronsAuxDyn_deltaPhiRescaled1;   //!
   TBranch        *b_ElectronsAuxDyn_deltaPhiRescaled2;   //!
   TBranch        *b_ElectronsAuxDyn_deltaPhiRescaled3;   //!
   TBranch        *b_ElectronsAuxDyn_deltaPhiFromLastMeasurement;   //!
   TBranch        *b_ElectronsAuxDyn_EgammaCovarianceMatrix;   //!
   TBranch        *b_ElectronsAuxDyn_LHLoose;   //!
   TBranch        *b_ElectronsAuxDyn_LHMedium;   //!
   TBranch        *b_ElectronsAuxDyn_LHTight;   //!
   TBranch        *b_ElectronsAuxDyn_LHValue;   //!
   TBranch        *b_ElectronsAuxDyn_Loose;   //!
   TBranch        *b_ElectronsAuxDyn_Medium;   //!
   TBranch        *b_ElectronsAuxDyn_MultiLepton;   //!
   TBranch        *b_ElectronsAuxDyn_Tight;   //!
   TBranch        *b_ElectronsAuxDyn_ambiguityLink_;   //!
   TBranch        *b_ElectronsAuxDyn_ambiguityLink_m_persKey;   //!
   TBranch        *b_ElectronsAuxDyn_ambiguityLink_m_persIndex;   //!
   TBranch        *b_ElectronsAuxDyn_ambiguityType;   //!
   TBranch        *b_ElectronsAuxDyn_asy1;   //!
   TBranch        *b_ElectronsAuxDyn_barys1;   //!
   TBranch        *b_ElectronsAuxDyn_caloRingsLinks;   //!
   TBranch        *b_ElectronsAuxDyn_core57cellsEnergyCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_e1152;   //!
   TBranch        *b_ElectronsAuxDyn_e132;   //!
   TBranch        *b_mcEventNumber;   //!
   TBranch        *b_EventInfoAuxDyn_mcEventWeights;   //!
   TBranch        *b_EventInfoAuxDyn_streamTagRobs;   //!
   TBranch        *b_EventInfoAuxDyn_streamTagDets;   //!
   TBranch        *b_EventInfoAuxDyn_subEventTime;   //!
   TBranch        *b_EventInfoAuxDyn_subEventIndex;   //!
   TBranch        *b_DFCommonJets_eventClean_LooseBad;   //!
   TBranch        *b_DFCommonJets_isBadBatman;   //!
   TBranch        *b_EventInfoAuxDyn_subEventLink_;   //!
   TBranch        *b_EventInfoAuxDyn_subEventLink_m_persKey;   //!
   TBranch        *b_EventInfoAuxDyn_subEventLink_m_persIndex;   //!
   TBranch        *b_EventInfoAuxDyn_subEventType;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_px;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_py;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_pz;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_x;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_y;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_z;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_trackParticleLinks;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_neutralParticleLinks;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_etaAtCalo;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_minRfirstHit;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_phiAtCalo;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_pt1;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_pt2;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_parameterPX;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_parameterPY;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_parameterPZ;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_parameterPosition;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_parameterX;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_parameterY;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_parameterZ;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_trackLink_;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_trackLink_m_persKey;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_trackLink_m_persIndex;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_trackParameterCovarianceMatrices;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthOrigin;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthType;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_vx;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_vy;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_radiusOfFirstHit;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_identifierOfFirstHit;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_beamlineTiltX;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_beamlineTiltY;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_hitPattern;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfUsedHitsdEdx;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfIBLOverflowsdEdx;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_QoverPLM;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_originalTrackParticle_;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberDoF;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_trackFitter;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_particleHypothesis;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_trackProperties;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_patternRecoInfo;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfContribPixelLayers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_vertexLink_;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerSharedHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerSplitHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerSharedHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerSplitHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelSharedHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelSplitHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfGangedPixels;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfGangedFlaggedFakes;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelSpoiltHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfDBMHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthMatchProbability;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTDoubleHoles;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTSharedHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_TRTdEdxUsedHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_TRTTrackOccupancy;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTSpoiltHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_TRTdEdx;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfTRTHoles;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdHitsTotal;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfTRTDeadStraws;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfTRTTubeHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfTRTXenonHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfTRTSharedHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPhiLayers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPhiHoleLayers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfTriggerEtaLayers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfTriggerEtaHoleLayers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfOutliersOnTrack;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_standardDeviationOfChi2OS;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_eProbabilityComb;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_eProbabilityHT;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_pixeldEdx;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_e_sampl;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_time;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_clusterSize;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_eta0;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_phi0;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawE;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawEta;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawPhi;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawM;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altE;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altEta;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altPhi;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altM;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calE;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calEta;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calPhi;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calM;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETA1CALOFRAME;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETA2CALOFRAME;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETACALOFRAME;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHI1CALOFRAME;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHI2CALOFRAME;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHICALOFRAME;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_eta_sampl;   //!
   TBranch        *b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_phi_sampl;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f3core;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_weta1;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_weta2;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_fracs1;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_wtots1;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_e277;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone20;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Reta;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone30;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rphi;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone40;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Eratio;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone20;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rhad;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone30;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rhad1;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone40;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone20;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_trackParticleLinks;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_DeltaE;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone20;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone30;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta0;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone40;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone30;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta1;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta2;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta3;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi0;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi1;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi2;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_pt;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi3;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_eta;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled0;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_phi;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled1;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_m;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled2;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled3;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiFromLastMeasurement;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHLoose;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHMedium;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHTight;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHValue;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Loose;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_author;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Medium;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Tight;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_VLoose;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMVLoose;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLoose;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMMedium;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMTight;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHVLoose;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHVLoose;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHLoose;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_charge;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHMedium;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHTight;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloVLoose;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloLoose;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloMedium;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloTight;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloVLoose;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloLoose;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloMedium;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloTight;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloValue;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone40;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_caloClusterLinks;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_OQ;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f1;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f3;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f1core;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_author;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Loose;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Medium;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Tight;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone40;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_pt;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_eta;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_caloClusterLinks;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone20;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_phi;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_OQ;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone30;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_m;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f1;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone30;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f3;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f1core;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f3core;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_weta1;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_weta2;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone20;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_fracs1;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone30;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone40;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_wtots1;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone20;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_e277;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone30;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Reta;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone40;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rphi;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone20;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Eratio;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_vertexLinks;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone40;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rhad;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaEta1;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rhad1;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaEta2;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_DeltaE;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaPhi1;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaPhi2;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMLoose;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMMedium;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMTight;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_phi;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_d0;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_z0;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_theta;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_qOverP;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vx;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vy;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vz;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_radiusOfFirstHit;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_identifierOfFirstHit;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_beamlineTiltX;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_beamlineTiltY;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_hitPattern;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfUsedHitsdEdx;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfIBLOverflowsdEdx;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_chiSquared;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberDoF;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_trackFitter;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_particleHypothesis;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_trackProperties;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_patternRecoInfo;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfContribPixelLayers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink_;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerOutliers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerSharedHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerSplitHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_expectInnermostPixelLayerHit;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerOutliers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerSharedHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerSplitHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_expectNextToInnermostPixelLayerHit;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelOutliers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSharedHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSplitHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfGangedPixels;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfGangedFlaggedFakes;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSpoiltHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfDBMHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTOutliers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTDoubleHoles;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTSharedHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_TRTTrackOccupancy;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTSpoiltHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHoles;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdHitsTotal;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdOutliers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTDeadStraws;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTTubeHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTXenonHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTSharedHits;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPhiLayers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPhiHoleLayers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTriggerEtaLayers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTriggerEtaHoleLayers;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfOutliersOnTrack;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_standardDeviationOfChi2OS;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_eProbabilityComb;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_eProbabilityHT;   //!
   TBranch        *b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_pixeldEdx;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_et;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEta;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_nCells;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawPhi;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEnergy;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEnergySample;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEt;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e233;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_RoIword;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_clusterQuality;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e237;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_energy;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_energySample;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e2tsts1;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_eta1;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_eta;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_weta2;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_wstot;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_phi;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_fracs1;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_ehad1;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_emaxs1;   //!
   TBranch        *b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e277;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_rcore;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_eratio;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etHad;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etHad1;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f0;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_charge;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f2;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trkEtaAtCalo;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trkPhiAtCalo;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etOverPt;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_caloEta;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_caloPhi;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink_;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink_m_persKey;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink_m_persIndex;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink_;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink_m_persKey;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink_m_persIndex;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f1;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_roiWord;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f3;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_pt;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_zvtx;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_nTRTHits;   //!
   TBranch        *b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_nTRTHiThresholdHits;   //!
   TBranch        *b_HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_size;   //!
   TBranch        *b_HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_passBits;   //!
   TBranch        *b_HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_containerKey;   //!
   TBranch        *b_HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_containerClid;   //!
   TBranch        *b_HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_rnnDecision;   //!
   TBranch        *b_HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink_;   //!
   TBranch        *b_HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink_m_persKey;   //!
   TBranch        *b_HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink_m_persIndex;   //!
   TBranch        *b_HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink_;   //!
   TBranch        *b_HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink_m_persKey;   //!
   TBranch        *b_HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink_m_persIndex;   //!
   TBranch        *b_HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_rings;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPhiLayers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberDoF;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_expectInnermostPixelLayerHit;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPixelSharedHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfSCTSharedHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_vertexLink_;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthMatchProbability;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_roiWord;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_etScale;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_thrPattern;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_thrNames;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_thrValues;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_core;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_emClus;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_eta;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_tauClus;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_phi;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_emIsol;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_hadIsol;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_hadCore;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_name;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_mpx;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_mpy;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_sumet;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_source;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopoAuxDyn_name;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopoAuxDyn_mpx;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopoAuxDyn_mpy;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopoAuxDyn_sumet;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopoAuxDyn_source;   //!
   TBranch        *b_MET_TrackAuxDyn_name;   //!
   TBranch        *b_MET_TrackAuxDyn_mpx;   //!
   TBranch        *b_MET_TrackAuxDyn_mpy;   //!
   TBranch        *b_MET_TruthAuxDyn_name;   //!
   TBranch        *b_MET_TruthAuxDyn_mpx;   //!
   TBranch        *b_MET_TruthAuxDyn_mpy;   //!
   TBranch        *b_MET_TruthAuxDyn_sumet;   //!
   TBranch        *b_MET_TruthAuxDyn_source;   //!
   TBranch        *b_MuonSegmentsAuxDyn_truthSegmentLink_;   //!
   TBranch        *b_MuonSegmentsAuxDyn_truthSegmentLink_m_persKey;   //!
   TBranch        *b_MuonSegmentsAuxDyn_truthSegmentLink_m_persIndex;   //!
   TBranch        *b_MuonSegmentsAuxDyn_px;   //!
   TBranch        *b_MuonSegmentsAuxDyn_py;   //!
   TBranch        *b_MuonSegmentsAuxDyn_pz;   //!
   TBranch        *b_MuonSegmentsAuxDyn_x;   //!
   TBranch        *b_MuonSegmentsAuxDyn_y;   //!
   TBranch        *b_MuonSegmentsAuxDyn_z;   //!
   TBranch        *b_MuonSegmentsAuxDyn_chiSquared;   //!
   TBranch        *b_MuonSegmentsAuxDyn_numberDoF;   //!
   TBranch        *b_MuonSegmentsAuxDyn_t0error;   //!
   TBranch        *b_MuonSegmentsAuxDyn_sector;   //!
   TBranch        *b_MuonSegmentsAuxDyn_chamberIndex;   //!
   TBranch        *b_MuonSegmentsAuxDyn_etaIndex;   //!
   TBranch        *b_MuonSegmentsAuxDyn_t0;   //!
   TBranch        *b_MuonSegmentsAuxDyn_technology;   //!
   TBranch        *b_MuonSegmentsAuxDyn_nPrecisionHits;   //!
   TBranch        *b_MuonSegmentsAuxDyn_nPhiLayers;   //!
   TBranch        *b_MuonSegmentsAuxDyn_nTrigEtaLayers;   //!
   TBranch        *b_MuonSegmentsAuxDyn_clusterTime;   //!
   TBranch        *b_MuonSegmentsAuxDyn_clusterTimeError;   //!
   TBranch        *b_MuonSegmentsAuxDyn_clusterTimeValid;   //!
   TBranch        *b_MuonSegmentsAuxDyn_muonSegment_;   //!
   TBranch        *b_MuonSegmentsAuxDyn_muonSegment_m_persKey;   //!
   TBranch        *b_MuonSegmentsAuxDyn_muonSegment_m_persIndex;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_vertexLink_;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_MuonTruthParticlesAuxDyn_truthOrigin;   //!
   TBranch        *b_MuonTruthParticlesAuxDyn_truthType;   //!
   TBranch        *b_MuonsAuxDyn_outerOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_topoetcone20;   //!
   TBranch        *b_MuonsAuxDyn_topoetcone30;   //!
   TBranch        *b_MuonsAuxDyn_extendedClosePrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_extendedOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_innerClosePrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_innerOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_topoetcone40;   //!
   TBranch        *b_MuonsAuxDyn_isEndcapGoodLayers;   //!
   TBranch        *b_MuonsAuxDyn_isSmallGoodSectors;   //!
   TBranch        *b_MuonsAuxDyn_middleClosePrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_middleOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_truthOrigin;   //!
   TBranch        *b_MuonsAuxDyn_truthParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_truthType;   //!
   TBranch        *b_MuonsAuxDyn_InnerDetectorPt;   //!
   TBranch        *b_MuonsAuxDyn_numberOfGoodPrecisionLayers;   //!
   TBranch        *b_MuonsAuxDyn_MuonSpectrometerPt;   //!
   TBranch        *b_MuonsAuxDyn_outerClosePrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_DensitySigma;   //!
   TBranch        *b_DensityArea;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_DensitySigma;   //!
   TBranch        *b_DensityArea;   //!
   TBranch        *b_NewSwElectronsAuxDyn_7x11ClusterExist;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaPhiRescaled0;   //!
   TBranch        *b_NewSwElectronsAuxDyn_NewSwClusterLink_;   //!
   TBranch        *b_NewSwElectronsAuxDyn_NewSwClusterLink_m_persKey;   //!
   TBranch        *b_NewSwElectronsAuxDyn_NewSwClusterLink_m_persIndex;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaPhiRescaled1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e011;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaPhiRescaled2;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e033;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaPhiRescaled3;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e333;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaPhiFromLastMeasurement;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e335;   //!
   TBranch        *b_NewSwElectronsAuxDyn_EgammaCovarianceMatrix;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e337;   //!
   TBranch        *b_NewSwElectronsAuxDyn_LHLoose;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e377;   //!
   TBranch        *b_NewSwElectronsAuxDyn_LHMedium;   //!
   TBranch        *b_NewSwElectronsAuxDyn_LHTight;   //!
   TBranch        *b_NewSwElectronsAuxDyn_LHValue;   //!
   TBranch        *b_NewSwElectronsAuxDyn_Loose;   //!
   TBranch        *b_NewSwElectronsAuxDyn_trackParticleLinks;   //!
   TBranch        *b_NewSwElectronsAuxDyn_Medium;   //!
   TBranch        *b_NewSwElectronsAuxDyn_MultiLepton;   //!
   TBranch        *b_NewSwElectronsAuxDyn_Tight;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ambiguityLink_;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ambiguityLink_m_persKey;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ambiguityLink_m_persIndex;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ambiguityType;   //!
   TBranch        *b_NewSwElectronsAuxDyn_author;   //!
   TBranch        *b_NewSwElectronsAuxDyn_asy1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_barys1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_caloRingsLinks;   //!
   TBranch        *b_NewSwElectronsAuxDyn_pt;   //!
   TBranch        *b_NewSwElectronsAuxDyn_core57cellsEnergyCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_eta;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e1152;   //!
   TBranch        *b_NewSwElectronsAuxDyn_phi;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e132;   //!
   TBranch        *b_NewSwElectronsAuxDyn_m;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e233;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e235;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e237;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e255;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e2ts1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e2tsts1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ecore;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ehad1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_emaxs1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_emins1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_etcone20ptCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_etcone30ptCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_etcone40ptCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ethad;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ethad1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_neflowisol20ptCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_neflowisol30ptCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_neflowisol40ptCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_pos;   //!
   TBranch        *b_NewSwElectronsAuxDyn_pos7;   //!
   TBranch        *b_NewSwElectronsAuxDyn_poscs1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_poscs2;   //!
   TBranch        *b_NewSwElectronsAuxDyn_r33over37allcalo;   //!
   TBranch        *b_NewSwElectronsAuxDyn_topoetcone20ptCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_topoetcone30ptCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_topoetcone40ptCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_widths1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_widths2;   //!
   TBranch        *b_NewSwElectronsAuxDyn_charge;   //!
   TBranch        *b_NewSwElectronsAuxDyn_etcone20;   //!
   TBranch        *b_NewSwElectronsAuxDyn_etcone30;   //!
   TBranch        *b_NewSwElectronsAuxDyn_etcone40;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ptcone20;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ptcone30;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ptcone40;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ptvarcone20;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ptvarcone40;   //!
   TBranch        *b_NewSwElectronsAuxDyn_topoetcone20;   //!
   TBranch        *b_NewSwElectronsAuxDyn_truthOrigin;   //!
   TBranch        *b_NewSwElectronsAuxDyn_topoetcone30;   //!
   TBranch        *b_NewSwElectronsAuxDyn_truthParticleLink_;   //!
   TBranch        *b_NewSwElectronsAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_NewSwElectronsAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ptvarcone30;   //!
   TBranch        *b_NewSwElectronsAuxDyn_truthType;   //!
   TBranch        *b_NewSwElectronsAuxDyn_etconeCorrBitset;   //!
   TBranch        *b_NewSwElectronsAuxDyn_DFCommonElectronsLHVeryLoose;   //!
   TBranch        *b_NewSwElectronsAuxDyn_DFCommonElectronsLHLoose;   //!
   TBranch        *b_NewSwElectronsAuxDyn_DFCommonElectronsLHMedium;   //!
   TBranch        *b_NewSwElectronsAuxDyn_DFCommonElectronsLHTight;   //!
   TBranch        *b_NewSwElectronsAuxDyn_DFCommonElectronsIsEMLoose;   //!
   TBranch        *b_NewSwElectronsAuxDyn_DFCommonElectronsIsEMLooseIsEMValue;   //!
   TBranch        *b_NewSwElectronsAuxDyn_DFCommonElectronsIsEMMedium;   //!
   TBranch        *b_NewSwElectronsAuxDyn_DFCommonElectronsIsEMMediumIsEMValue;   //!
   TBranch        *b_NewSwElectronsAuxDyn_neflowisol20;   //!
   TBranch        *b_NewSwElectronsAuxDyn_DFCommonElectronsIsEMTight;   //!
   TBranch        *b_NewSwElectronsAuxDyn_neflowisol30;   //!
   TBranch        *b_NewSwElectronsAuxDyn_DFCommonElectronsIsEMTightIsEMValue;   //!
   TBranch        *b_NewSwElectronsAuxDyn_neflowisol40;   //!
   TBranch        *b_NewSwElectronsAuxDyn_neflowisolCorrBitset;   //!
   TBranch        *b_NewSwElectronsAuxDyn_neflowisolcoreConeEnergyCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_DFCommonElectronsML;   //!
   TBranch        *b_NewSwElectronsAuxDyn_truthPdgId;   //!
   TBranch        *b_NewSwElectronsAuxDyn_firstEgMotherTruthType;   //!
   TBranch        *b_NewSwElectronsAuxDyn_firstEgMotherTruthOrigin;   //!
   TBranch        *b_NewSwElectronsAuxDyn_firstEgMotherTruthParticleLink_;   //!
   TBranch        *b_NewSwElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey;   //!
   TBranch        *b_NewSwElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex;   //!
   TBranch        *b_NewSwElectronsAuxDyn_firstEgMotherPdgId;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ptconeCorrBitset;   //!
   TBranch        *b_NewSwElectronsAuxDyn_lastEgMotherTruthType;   //!
   TBranch        *b_NewSwElectronsAuxDyn_ptconecoreTrackPtrCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_lastEgMotherTruthOrigin;   //!
   TBranch        *b_NewSwElectronsAuxDyn_lastEgMotherTruthParticleLink_;   //!
   TBranch        *b_NewSwElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persKey;   //!
   TBranch        *b_NewSwElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persIndex;   //!
   TBranch        *b_NewSwElectronsAuxDyn_lastEgMotherPdgId;   //!
   TBranch        *b_NewSwElectronsAuxDyn_E_Lr0_HiG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_E_Lr1_HiG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_topoetcone40;   //!
   TBranch        *b_NewSwElectronsAuxDyn_E_Lr2_HiG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_topoetconeCorrBitset;   //!
   TBranch        *b_NewSwElectronsAuxDyn_E_Lr3_HiG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_topoetconecoreConeEnergyCorrection;   //!
   TBranch        *b_NewSwElectronsAuxDyn_E_Lr0_MedG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_E_Lr1_MedG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_caloClusterLinks;   //!
   TBranch        *b_NewSwElectronsAuxDyn_E_Lr2_MedG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_OQ;   //!
   TBranch        *b_NewSwElectronsAuxDyn_E_Lr3_MedG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_f1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_E_Lr0_LowG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_f3;   //!
   TBranch        *b_NewSwElectronsAuxDyn_E_Lr1_LowG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_f1core;   //!
   TBranch        *b_NewSwElectronsAuxDyn_E_Lr2_LowG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_f3core;   //!
   TBranch        *b_NewSwElectronsAuxDyn_E_Lr3_LowG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_weta1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_nCells_Lr0_HiG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_weta2;   //!
   TBranch        *b_NewSwElectronsAuxDyn_nCells_Lr1_HiG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_fracs1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_nCells_Lr2_HiG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_wtots1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_nCells_Lr3_HiG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_e277;   //!
   TBranch        *b_NewSwElectronsAuxDyn_nCells_Lr0_MedG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_Reta;   //!
   TBranch        *b_NewSwElectronsAuxDyn_nCells_Lr1_MedG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_Rphi;   //!
   TBranch        *b_NewSwElectronsAuxDyn_nCells_Lr2_MedG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_Eratio;   //!
   TBranch        *b_NewSwElectronsAuxDyn_nCells_Lr3_MedG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_Rhad;   //!
   TBranch        *b_NewSwElectronsAuxDyn_nCells_Lr0_LowG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_Rhad1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_nCells_Lr1_LowG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_DeltaE;   //!
   TBranch        *b_NewSwElectronsAuxDyn_nCells_Lr2_LowG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaEta0;   //!
   TBranch        *b_NewSwElectronsAuxDyn_nCells_Lr3_LowG;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaEta1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_maxEcell_time;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaEta2;   //!
   TBranch        *b_NewSwElectronsAuxDyn_maxEcell_energy;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaEta3;   //!
   TBranch        *b_NewSwElectronsAuxDyn_maxEcell_gain;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaPhi0;   //!
   TBranch        *b_NewSwElectronsAuxDyn_maxEcell_onlId;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaPhi1;   //!
   TBranch        *b_NewSwElectronsAuxDyn_maxEcell_x;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaPhi2;   //!
   TBranch        *b_NewSwElectronsAuxDyn_maxEcell_y;   //!
   TBranch        *b_NewSwElectronsAuxDyn_deltaPhi3;   //!
   TBranch        *b_NewSwElectronsAuxDyn_maxEcell_z;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_DensitySigma;   //!
   TBranch        *b_DensityArea;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_DensitySigma;   //!
   TBranch        *b_DensityArea;   //!
   TBranch        *b_PhotonsAuxDyn_E3x5_Lr0;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsIsEMLoose;   //!
   TBranch        *b_PhotonsAuxDyn_weta1;   //!
   TBranch        *b_PhotonsAuxDyn_E3x5_Lr1;   //!
   TBranch        *b_PhotonsAuxDyn_weta2;   //!
   TBranch        *b_PhotonsAuxDyn_E3x5_Lr2;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsIsEMTight;   //!
   TBranch        *b_PhotonsAuxDyn_fracs1;   //!
   TBranch        *b_PhotonsAuxDyn_E3x5_Lr3;   //!
   TBranch        *b_PhotonsAuxDyn_wtots1;   //!
   TBranch        *b_PhotonsAuxDyn_E5x7_Lr0;   //!
   TBranch        *b_PhotonsAuxDyn_vertexLinks;   //!
   TBranch        *b_PhotonsAuxDyn_e277;   //!
   TBranch        *b_PhotonsAuxDyn_E5x7_Lr1;   //!
   TBranch        *b_PhotonsAuxDyn_Reta;   //!
   TBranch        *b_PhotonsAuxDyn_E5x7_Lr2;   //!
   TBranch        *b_PhotonsAuxDyn_Rphi;   //!
   TBranch        *b_PhotonsAuxDyn_E5x7_Lr3;   //!
   TBranch        *b_PhotonsAuxDyn_ptcone20;   //!
   TBranch        *b_PhotonsAuxDyn_Eratio;   //!
   TBranch        *b_PhotonsAuxDyn_E7x7_Lr0;   //!
   TBranch        *b_PhotonsAuxDyn_ptcone30;   //!
   TBranch        *b_PhotonsAuxDyn_Rhad;   //!
   TBranch        *b_PhotonsAuxDyn_E7x7_Lr1;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone20;   //!
   TBranch        *b_PhotonsAuxDyn_ptcone40;   //!
   TBranch        *b_PhotonsAuxDyn_Rhad1;   //!
   TBranch        *b_PhotonsAuxDyn_E7x7_Lr2;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone30;   //!
   TBranch        *b_PhotonsAuxDyn_ptvarcone20;   //!
   TBranch        *b_PhotonsAuxDyn_E7x7_Lr3;   //!
   TBranch        *b_PhotonsAuxDyn_DeltaE;   //!
   TBranch        *b_PhotonsAuxDyn_ptvarcone40;   //!
   TBranch        *b_PhotonsAuxDyn_ptvarcone30;   //!
   TBranch        *b_PhotonsAuxDyn_E7x11_Lr0;   //!
   TBranch        *b_PhotonsAuxDyn_E7x11_Lr1;   //!
   TBranch        *b_PhotonsAuxDyn_E_Lr0_HiG;   //!
   TBranch        *b_PhotonsAuxDyn_E7x11_Lr2;   //!
   TBranch        *b_PhotonsAuxDyn_E_Lr1_HiG;   //!
   TBranch        *b_PhotonsAuxDyn_E7x11_Lr3;   //!
   TBranch        *b_PhotonsAuxDyn_truthOrigin;   //!
   TBranch        *b_PhotonsAuxDyn_E_Lr2_HiG;   //!
   TBranch        *b_PhotonsAuxDyn_truthParticleLink_;   //!
   TBranch        *b_PhotonsAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_PhotonsAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_PhotonsAuxDyn_E_Lr3_HiG;   //!
   TBranch        *b_PhotonsAuxDyn_truthType;   //!
   TBranch        *b_PhotonsAuxDyn_pt;   //!
   TBranch        *b_PhotonsAuxDyn_E_Lr0_MedG;   //!
   TBranch        *b_PhotonsAuxDyn_eta;   //!
   TBranch        *b_PhotonsAuxDyn_E_Lr1_MedG;   //!
   TBranch        *b_PhotonsAuxDyn_phi;   //!
   TBranch        *b_PhotonsAuxDyn_E_Lr2_MedG;   //!
   TBranch        *b_PhotonsAuxDyn_m;   //!
   TBranch        *b_PhotonsAuxDyn_E_Lr3_MedG;   //!
   TBranch        *b_PhotonsAuxDyn_E_Lr0_LowG;   //!
   TBranch        *b_PhotonsAuxDyn_E_Lr1_LowG;   //!
   TBranch        *b_PhotonsAuxDyn_E_Lr2_LowG;   //!
   TBranch        *b_PhotonsAuxDyn_E_Lr3_LowG;   //!
   TBranch        *b_PhotonsAuxDyn_nCells_Lr0_HiG;   //!
   TBranch        *b_PhotonsAuxDyn_nCells_Lr1_HiG;   //!
   TBranch        *b_PhotonsAuxDyn_nCells_Lr2_HiG;   //!
   TBranch        *b_PhotonsAuxDyn_nCells_Lr3_HiG;   //!
   TBranch        *b_PhotonsAuxDyn_nCells_Lr0_MedG;   //!
   TBranch        *b_PhotonsAuxDyn_author;   //!
   TBranch        *b_PhotonsAuxDyn_Loose;   //!
   TBranch        *b_PhotonsAuxDyn_nCells_Lr1_MedG;   //!
   TBranch        *b_PhotonsAuxDyn_nCells_Lr2_MedG;   //!
   TBranch        *b_PhotonsAuxDyn_nCells_Lr3_MedG;   //!
   TBranch        *b_PhotonsAuxDyn_Tight;   //!
   TBranch        *b_PhotonsAuxDyn_nCells_Lr0_LowG;   //!
   TBranch        *b_PhotonsAuxDyn_ambiguityLink_;   //!
   TBranch        *b_PhotonsAuxDyn_ambiguityLink_m_persKey;   //!
   TBranch        *b_PhotonsAuxDyn_ambiguityLink_m_persIndex;   //!
   TBranch        *b_PhotonsAuxDyn_nCells_Lr1_LowG;   //!
   TBranch        *b_PhotonsAuxDyn_nCells_Lr2_LowG;   //!
   TBranch        *b_PhotonsAuxDyn_nCells_Lr3_LowG;   //!
   TBranch        *b_PhotonsAuxDyn_e233;   //!
   TBranch        *b_PhotonsAuxDyn_e237;   //!
   TBranch        *b_PhotonsAuxDyn_e2tsts1;   //!
   TBranch        *b_PhotonsAuxDyn_emaxs1;   //!
   TBranch        *b_PhotonsAuxDyn_emins1;   //!
   TBranch        *b_PhotonsAuxDyn_etcone20ptCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_etcone30ptCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_etcone40ptCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_ethad;   //!
   TBranch        *b_PhotonsAuxDyn_ethad1;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone20ptCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone30ptCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone40ptCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone40;   //!
   TBranch        *b_PhotonsAuxDyn_caloClusterLinks;   //!
   TBranch        *b_PhotonsAuxDyn_OQ;   //!
   TBranch        *b_PhotonsAuxDyn_f1;   //!
   TBranch        *b_PhotonsAuxDyn_f3;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_vertexType;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_sumPt2;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_neutralParticleLinks;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_x;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_y;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_z;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_trackParticleLinks;   //!
   TBranch        *b_TauJetsAuxDyn_shotPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_chargedPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_neutralPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_eta_combined;   //!
   TBranch        *b_TauJetsAuxDyn_pi0PFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_protoChargedPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_protoNeutralPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_protoPi0PFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_m_combined;   //!
   TBranch        *b_TauJetsAuxDyn_phi_combined;   //!
   TBranch        *b_TauJetsAuxDyn_pt_combined;   //!
   TBranch        *b_TauJetsAuxDyn_ptFinalCalib;   //!
   TBranch        *b_TauJetsAuxDyn_etaFinalCalib;   //!
   TBranch        *b_TauJetsAuxDyn_phiFinalCalib;   //!
   TBranch        *b_TauJetsAuxDyn_mFinalCalib;   //!
   TBranch        *b_TauJetsAuxDyn_pt;   //!
   TBranch        *b_TauJetsAuxDyn_eta;   //!
   TBranch        *b_TauJetsAuxDyn_BDTJetScore;   //!
   TBranch        *b_TauJetsAuxDyn_phi;   //!
   TBranch        *b_TauJetsAuxDyn_BDTEleScore;   //!
   TBranch        *b_TauJetsAuxDyn_m;   //!
   TBranch        *b_TauJetsAuxDyn_EleMatchLikelihoodScore;   //!
   TBranch        *b_TauJetsAuxDyn_charge;   //!
   TBranch        *b_TauJetsAuxDyn_BDTJetScoreSigTrans;   //!
   TBranch        *b_TauJetsAuxDyn_isTauFlags;   //!
   TBranch        *b_TauJetsAuxDyn_BDTEleScoreSigTrans;   //!
   TBranch        *b_TauJetsAuxDyn_tauTrackLinks;   //!
   TBranch        *b_TauJetsAuxDyn_jetLink_;   //!
   TBranch        *b_TauJetsAuxDyn_jetLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_jetLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_vertexLink_;   //!
   TBranch        *b_TauJetsAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_electronLink_;   //!
   TBranch        *b_TauJetsAuxDyn_electronLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_electronLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_secondaryVertexLink_;   //!
   TBranch        *b_TauJetsAuxDyn_secondaryVertexLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_secondaryVertexLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_hadronicPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_PanTau_DecayMode;   //!
   TBranch        *b_TauTracksAuxDyn_flagSet;   //!
   TBranch        *b_TauTracksAuxDyn_bdtScores;   //!
   TBranch        *b_TauTracksAuxDyn_trackLinks;   //!
   TBranch        *b_TauTracksAuxDyn_pt;   //!
   TBranch        *b_TauTracksAuxDyn_eta;   //!
   TBranch        *b_TauTracksAuxDyn_phi;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_DensitySigma;   //!
   TBranch        *b_DensityArea;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_DensitySigma;   //!
   TBranch        *b_DensityArea;   //!
   TBranch        *b_TruthEventsAuxDyn_XF2;   //!
   TBranch        *b_TruthEventsAuxDyn_signalProcessVertexLink_;   //!
   TBranch        *b_TruthEventsAuxDyn_signalProcessVertexLink_m_persKey;   //!
   TBranch        *b_TruthEventsAuxDyn_signalProcessVertexLink_m_persIndex;   //!
   TBranch        *b_TruthEventsAuxDyn_beamParticle1Link_;   //!
   TBranch        *b_TruthEventsAuxDyn_beamParticle1Link_m_persKey;   //!
   TBranch        *b_TruthEventsAuxDyn_beamParticle1Link_m_persIndex;   //!
   TBranch        *b_TruthEventsAuxDyn_beamParticle2Link_;   //!
   TBranch        *b_TruthEventsAuxDyn_beamParticle2Link_m_persKey;   //!
   TBranch        *b_TruthEventsAuxDyn_beamParticle2Link_m_persIndex;   //!
   TBranch        *b_TruthEventsAuxDyn_truthParticleLinks;   //!
   TBranch        *b_TruthEventsAuxDyn_truthVertexLinks;   //!
   TBranch        *b_TruthEventsAuxDyn_weights;   //!
   TBranch        *b_TruthEventsAuxDyn_crossSection;   //!
   TBranch        *b_TruthEventsAuxDyn_crossSectionError;   //!
   TBranch        *b_TruthEventsAuxDyn_PDFID1;   //!
   TBranch        *b_TruthEventsAuxDyn_PDFID2;   //!
   TBranch        *b_TruthEventsAuxDyn_PDGID1;   //!
   TBranch        *b_TruthEventsAuxDyn_PDGID2;   //!
   TBranch        *b_TruthEventsAuxDyn_Q;   //!
   TBranch        *b_TruthEventsAuxDyn_X1;   //!
   TBranch        *b_TruthEventsAuxDyn_X2;   //!
   TBranch        *b_TruthEventsAuxDyn_XF1;   //!
   TBranch        *b_TruthParticlesAuxDyn_px;   //!
   TBranch        *b_TruthParticlesAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthParticlesAuxDyn_py;   //!
   TBranch        *b_TruthParticlesAuxDyn_polarizationTheta;   //!
   TBranch        *b_TruthParticlesAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthParticlesAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthParticlesAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthParticlesAuxDyn_pz;   //!
   TBranch        *b_TruthParticlesAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthParticlesAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthParticlesAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthParticlesAuxDyn_e;   //!
   TBranch        *b_TruthParticlesAuxDyn_prodR;   //!
   TBranch        *b_TruthParticlesAuxDyn_prodZ;   //!
   TBranch        *b_TruthParticlesAuxDyn_pdgId;   //!
   TBranch        *b_TruthParticlesAuxDyn_barcode;   //!
   TBranch        *b_TruthParticlesAuxDyn_z0st;   //!
   TBranch        *b_TruthParticlesAuxDyn_status;   //!
   TBranch        *b_TruthParticlesAuxDyn_d0;   //!
   TBranch        *b_TruthParticlesAuxDyn_z0;   //!
   TBranch        *b_TruthParticlesAuxDyn_theta;   //!
   TBranch        *b_TruthParticlesAuxDyn_phi;   //!
   TBranch        *b_TruthParticlesAuxDyn_m;   //!
   TBranch        *b_TruthParticlesAuxDyn_qOverP;   //!
   TBranch        *b_TruthVerticesAuxDyn_incomingParticleLinks;   //!
   TBranch        *b_TruthVerticesAuxDyn_outgoingParticleLinks;   //!
   TBranch        *b_TruthVerticesAuxDyn_id;   //!
   TBranch        *b_TruthVerticesAuxDyn_t;   //!
   TBranch        *b_TruthVerticesAuxDyn_x;   //!
   TBranch        *b_TruthVerticesAuxDyn_barcode;   //!
   TBranch        *b_TruthVerticesAuxDyn_y;   //!
   TBranch        *b_TruthVerticesAuxDyn_z;   //!
   TBranch        *b_egammaClustersAuxDyn_e_sampl;   //!
   TBranch        *b_egammaClustersAuxDyn_time;   //!
   TBranch        *b_egammaClustersAuxDyn_clusterSize;   //!
   TBranch        *b_egammaClustersAuxDyn_eta0;   //!
   TBranch        *b_egammaClustersAuxDyn_phi0;   //!
   TBranch        *b_egammaClustersAuxDyn_rawE;   //!
   TBranch        *b_egammaClustersAuxDyn_rawEta;   //!
   TBranch        *b_egammaClustersAuxDyn_rawPhi;   //!
   TBranch        *b_egammaClustersAuxDyn_rawM;   //!
   TBranch        *b_egammaClustersAuxDyn_altE;   //!
   TBranch        *b_egammaClustersAuxDyn_altEta;   //!
   TBranch        *b_egammaClustersAuxDyn_altPhi;   //!
   TBranch        *b_egammaClustersAuxDyn_altM;   //!
   TBranch        *b_egammaClustersAuxDyn_calE;   //!
   TBranch        *b_egammaClustersAuxDyn_calEta;   //!
   TBranch        *b_egammaClustersAuxDyn_calPhi;   //!
   TBranch        *b_egammaClustersAuxDyn_calM;   //!
   TBranch        *b_egammaClustersAuxDyn_BadChannelList;   //!
   TBranch        *b_egammaClustersAuxDyn_CellLink_;   //!
   TBranch        *b_egammaClustersAuxDyn_CellLink_m_persKey;   //!
   TBranch        *b_egammaClustersAuxDyn_CellLink_m_persIndex;   //!
   TBranch        *b_egammaClustersAuxDyn_ETA1CALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_ETA2CALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_ETACALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_PHI1CALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_PHI2CALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_PHICALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_constituentClusterLinks;   //!
   TBranch        *b_egammaClustersAuxDyn_emax_sampl;   //!
   TBranch        *b_egammaClustersAuxDyn_eta_sampl;   //!
   TBranch        *b_egammaClustersAuxDyn_etamax_sampl;   //!
   TBranch        *b_egammaClustersAuxDyn_phi_sampl;   //!
   TBranch        *b_egammaClustersAuxDyn_phimax_sampl;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_px;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_py;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_prodVtxLink_;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_pz;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_decayVtxLink_;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_e;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_barcode;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_pdgId;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_status;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_recoElectronLink_;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_recoElectronLink_m_persKey;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_recoElectronLink_m_persIndex;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_recoPhotonLink_;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_recoPhotonLink_m_persKey;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_recoPhotonLink_m_persIndex;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_etcone20;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_truthOrigin;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_etcone30;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_etcone40;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_truthType;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_ptcone20;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_m;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_ptcone30;   //!
   TBranch        *b_egammaTruthParticlesAuxDyn_ptcone40;   //!
   TBranch        *b_MuonsAuxDyn_cscEtaHits;   //!
   TBranch        *b_MuonsAuxDyn_cscUnspoiledEtaHits;   //!
   TBranch        *b_MuonsAuxDyn_etcone20;   //!
   TBranch        *b_MuonsAuxDyn_etcone30;   //!
   TBranch        *b_MuonsAuxDyn_etcone40;   //!
   TBranch        *b_MuonsAuxDyn_ptcone20;   //!
   TBranch        *b_MuonsAuxDyn_ptcone30;   //!
   TBranch        *b_MuonsAuxDyn_ptcone40;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone20;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone40;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone30;   //!
   TBranch        *b_MuonsAuxDyn_inDetTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_inDetTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_inDetTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_muonSegmentLinks;   //!
   TBranch        *b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_combinedTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_combinedTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_combinedTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_pt;   //!
   TBranch        *b_MuonsAuxDyn_clusterLink_;   //!
   TBranch        *b_MuonsAuxDyn_clusterLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_clusterLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_spectrometerFieldIntegral;   //!
   TBranch        *b_MuonsAuxDyn_eta;   //!
   TBranch        *b_MuonsAuxDyn_scatteringCurvatureSignificance;   //!
   TBranch        *b_MuonsAuxDyn_phi;   //!
   TBranch        *b_MuonsAuxDyn_scatteringNeighbourSignificance;   //!
   TBranch        *b_MuonsAuxDyn_momentumBalanceSignificance;   //!
   TBranch        *b_MuonsAuxDyn_allAuthors;   //!
   TBranch        *b_MuonsAuxDyn_author;   //!
   TBranch        *b_MuonsAuxDyn_muonType;   //!
   TBranch        *b_MuonsAuxDyn_quality;   //!
   TBranch        *b_MuonsAuxDyn_energyLossType;   //!
   TBranch        *b_MuonsAuxDyn_CaloLRLikelihood;   //!
   TBranch        *b_MuonsAuxDyn_EnergyLoss;   //!
   TBranch        *b_MuonsAuxDyn_innerSmallHits;   //!
   TBranch        *b_MuonsAuxDyn_innerLargeHits;   //!
   TBranch        *b_MuonsAuxDyn_middleSmallHits;   //!
   TBranch        *b_MuonsAuxDyn_middleLargeHits;   //!
   TBranch        *b_MuonsAuxDyn_outerSmallHits;   //!
   TBranch        *b_MuonsAuxDyn_outerLargeHits;   //!
   TBranch        *b_MuonsAuxDyn_extendedSmallHits;   //!
   TBranch        *b_MuonsAuxDyn_extendedLargeHits;   //!
   TBranch        *b_MuonsAuxDyn_innerSmallHoles;   //!
   TBranch        *b_MuonsAuxDyn_CaloMuonIDTag;   //!
   TBranch        *b_MuonsAuxDyn_innerLargeHoles;   //!
   TBranch        *b_MuonsAuxDyn_middleSmallHoles;   //!
   TBranch        *b_MuonsAuxDyn_middleLargeHoles;   //!
   TBranch        *b_MuonsAuxDyn_outerSmallHoles;   //!
   TBranch        *b_MuonsAuxDyn_outerLargeHoles;   //!
   TBranch        *b_MuonsAuxDyn_extendedSmallHoles;   //!
   TBranch        *b_MuonsAuxDyn_extendedLargeHoles;   //!
   TBranch        *b_MuonsAuxDyn_charge;   //!
   TBranch        *b_MuonsAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_MuonsAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_MuonsAuxDyn_DFCommonGoodMuon;   //!
   TBranch        *b_MuonsAuxDyn_DFCommonMuonsPreselection;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberDoF;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_vertexLink_;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_MuonTruthParticlesAuxDyn_px;   //!
   TBranch        *b_MuonTruthParticlesAuxDyn_py;   //!
   TBranch        *b_MuonTruthParticlesAuxDyn_pz;   //!
   TBranch        *b_MuonTruthParticlesAuxDyn_e;   //!
   TBranch        *b_MuonTruthParticlesAuxDyn_pdgId;   //!
   TBranch        *b_MuonTruthParticlesAuxDyn_status;   //!

   CollectionTree(TTree *tree=0);
   virtual ~CollectionTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef CollectionTree_cxx
CollectionTree::CollectionTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/groups/hep/alonso/ForTroels/CellHack/MyDADO/mc16_13TeV.361106.PowhegPythia8EvtGen_AZNLOCTEQ6L1_Zee.merge.AOD.e3601_s3126_r9781_r9778/DAOD_EGAM1.DAODSmall.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/groups/hep/alonso/ForTroels/CellHack/MyDADO/mc16_13TeV.361106.PowhegPythia8EvtGen_AZNLOCTEQ6L1_Zee.merge.AOD.e3601_s3126_r9781_r9778/DAOD_EGAM1.DAODSmall.root");
      }
      f->GetObject("CollectionTree",tree);

   }
   Init(tree);
}

CollectionTree::~CollectionTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t CollectionTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t CollectionTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void CollectionTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   McEventInfo = 0;
   AODCellContainer = 0;
   TrigConfKeys = 0;
   EventInfoAux_xAOD__AuxInfoBase = 0;
   xTrigDecisionAux_xAOD__AuxInfoBase = 0;
   EventInfo = 0;
   TrigNavigationAux_xAOD__AuxInfoBase = 0;
   xTrigDecision = 0;
   METAssoc_AntiKt4EMTopoAux_xAOD__AuxContainerBase = 0;
   METAssoc_AntiKt4EMTopo = 0;
   HLT_xAOD__RoiDescriptorStore_initialRoI = 0;
   TrigNavigation = 0;
   HLT_xAOD__RoiDescriptorStore_initialRoIAux_xAOD__AuxInfoBase = 0;
   Kt4EMTopoOriginEventShapeAux_xAOD__AuxInfoBase = 0;
   NeutralParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase = 0;
   NeutralParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase = 0;
   ParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase = 0;
   ParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase = 0;
   TopoClusterIsoCentralEventShapeAux_xAOD__AuxInfoBase = 0;
   TopoClusterIsoForwardEventShapeAux_xAOD__AuxInfoBase = 0;
   Kt4EMTopoOriginEventShape = 0;
   NeutralParticleFlowIsoCentralEventShape = 0;
   NeutralParticleFlowIsoForwardEventShape = 0;
   ParticleFlowIsoCentralEventShape = 0;
   ParticleFlowIsoForwardEventShape = 0;
   TopoClusterIsoCentralEventShape = 0;
   TopoClusterIsoForwardEventShape = 0;
   LVL1EmTauRoIs = 0;
   Electrons = 0;
   HLT_xAOD__ElectronContainer_egamma_Electrons = 0;
   NewSwElectrons = 0;
   GSFConversionVertices = 0;
   PrimaryVertices = 0;
   HLT_TrigRoiDescriptorCollection_initialRoI = 0;
   MET_Core_AntiKt4EMTopo = 0;
   MET_Reference_AntiKt4EMTopo = 0;
   MET_Track = 0;
   MET_Truth = 0;
   HLT_xAOD__PhotonContainer_egamma_Photons = 0;
   Photons = 0;
   HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFex = 0;
   HLT_xAOD__TrigPassBitsContainer_passbits = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFex = 0;
   MuonSegments = 0;
   egammaClusters_links = 0;
   TauJets = 0;
   Muons = 0;
   TruthEvents = 0;
   CaloCalTopoClusters = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFex = 0;
   egammaClusters = 0;
   BTagging_AntiKt4EMTopoAux_ = 0;
   CaloCalTopoClustersAux_ = 0;
   CombinedMuonTrackParticlesAux_ = 0;
   ElectronsAux_ = 0;
   ExtrapolatedMuonTrackParticlesAux_ = 0;
   GSFConversionVerticesAux_ = 0;
   GSFTrackParticlesAux_ = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAux_ = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAux_ = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAux_ = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAux_ = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAux_ = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAux_ = 0;
   HLT_xAOD__TrigPassBitsContainer_passbitsAux_ = 0;
   HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAux_ = 0;
   HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAux_ = 0;
   InDetForwardTrackParticlesAux_ = 0;
   InDetTrackParticlesAux_ = 0;
   LVL1EmTauRoIsAux_ = 0;
   MET_Core_AntiKt4EMTopoAux_ = 0;
   MET_Reference_AntiKt4EMTopoAux_ = 0;
   MET_TrackAux_ = 0;
   MET_TruthAux_ = 0;
   MuonSegmentsAux_ = 0;
   MuonSpectrometerTrackParticlesAux_ = 0;
   MuonTruthParticlesAux_ = 0;
   MuonsAux_ = 0;
   NewSwElectronsAux_ = 0;
   PhotonsAux_ = 0;
   PrimaryVerticesAux_ = 0;
   TauJetsAux_ = 0;
   TauTracksAux_ = 0;
   TruthEventsAux_ = 0;
   TruthParticlesAux_ = 0;
   TruthVerticesAux_ = 0;
   egammaClustersAux_ = 0;
   egammaTruthParticlesAux_ = 0;
   MuonTruthParticles = 0;
   TruthParticles = 0;
   egammaTruthParticles = 0;
   TruthVertices = 0;
   AntiKt4EMTopoJets = 0;
   AntiKt4LCTopoJets = 0;
   AntiKt4PV0TrackJets = 0;
   AntiKt4TruthJets = 0;
   BTagging_AntiKt4EMTopo = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgamma = 0;
   CombinedMuonTrackParticles = 0;
   ExtrapolatedMuonTrackParticles = 0;
   GSFTrackParticles = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrig = 0;
   InDetForwardTrackParticles = 0;
   InDetTrackParticles = 0;
   MuonSpectrometerTrackParticles = 0;
   AntiKt4EMTopoJetsAux_xAOD__AuxContainerBase = 0;
   AntiKt4PV0TrackJetsAux_xAOD__AuxContainerBase = 0;
   AntiKt4TruthJetsAux_xAOD__AuxContainerBase = 0;
   HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgamma = 0;
   TauTracks = 0;
   AntiKt4EMTopoJetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000 = 0;
   AntiKt4EMTopoJetsAuxDyn_DetectorEta = 0;
   AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling = 0;
   AntiKt4EMTopoJetsAuxDyn_HECFrac = 0;
   AntiKt4EMTopoJetsAuxDyn_EMFrac = 0;
   AntiKt4EMTopoJetsAuxDyn_HECQuality = 0;
   AntiKt4EMTopoJetsAuxDyn_FracSamplingMax = 0;
   AntiKt4EMTopoJetsAuxDyn_Width = 0;
   AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad = 0;
   AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex = 0;
   AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_TightBad = 0;
   AntiKt4EMTopoJetsAuxDyn_JVFCorr = 0;
   AntiKt4EMTopoJetsAuxDyn_Jvt = 0;
   AntiKt4EMTopoJetsAuxDyn_JvtRpt = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4EMTopoJetsAuxDyn_LArQuality = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4EMTopoJetsAuxDyn_NegativeE = 0;
   AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000 = 0;
   AntiKt4EMTopoJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostTrack = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4EMTopoJetsAuxDyn_AverageLArQF = 0;
   AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500 = 0;
   AntiKt4EMTopoJetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKt4TruthJetsAuxDyn_ActiveArea = 0;
   AntiKt4TruthJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4TruthJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4TruthJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4TruthJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4TruthJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4TruthJetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKt4TruthJetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKt4TruthJetsAuxDyn_ConeExclTausFinal = 0;
   AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt4TruthJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt4TruthJetsAuxDyn_ConstituentScale = 0;
   AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt4TruthJetsAuxDyn_Width = 0;
   AntiKt4TruthJetsAuxDyn_WidthPhi = 0;
   AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4TruthJetsAuxDyn_GhostBHadronsFinal = 0;
   AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalPt = 0;
   AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4TruthJetsAuxDyn_GhostBHadronsInitial = 0;
   AntiKt4TruthJetsAuxDyn_InputType = 0;
   AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialCount = 0;
   AntiKt4TruthJetsAuxDyn_AlgorithmType = 0;
   AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialPt = 0;
   AntiKt4TruthJetsAuxDyn_SizeParameter = 0;
   AntiKt4TruthJetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostCHadronsFinal = 0;
   AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostCHadronsInitial = 0;
   AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostCQuarksFinal = 0;
   AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostHBosons = 0;
   AntiKt4TruthJetsAuxDyn_GhostHBosonsCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostHBosonsPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostPartons = 0;
   AntiKt4TruthJetsAuxDyn_GhostPartonsCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostPartonsPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostTQuarksFinal = 0;
   AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostTausFinal = 0;
   AntiKt4TruthJetsAuxDyn_GhostTausFinalCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostTausFinalPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostWBosons = 0;
   AntiKt4TruthJetsAuxDyn_GhostWBosonsCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostWBosonsPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostZBosons = 0;
   AntiKt4TruthJetsAuxDyn_GhostZBosonsCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostZBosonsPt = 0;
   AntiKt4TruthJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt4TruthJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4TruthJetsAuxDyn_JetGhostArea = 0;
   BTagging_AntiKt4EMTopoAuxDyn_DL1_pb = 0;
   BTagging_AntiKt4EMTopoAuxDyn_DL1_pc = 0;
   BTagging_AntiKt4EMTopoAuxDyn_DL1_pu = 0;
   BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pb = 0;
   BTagging_AntiKt4EMTopoAuxDyn_MV2c100_discriminant = 0;
   BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pc = 0;
   BTagging_AntiKt4EMTopoAuxDyn_MV2c10_discriminant = 0;
   BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pu = 0;
   BTagging_AntiKt4EMTopoAuxDyn_MV2c10mu_discriminant = 0;
   BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pb = 0;
   BTagging_AntiKt4EMTopoAuxDyn_MV2c10rnn_discriminant = 0;
   BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pc = 0;
   BTagging_AntiKt4EMTopoAuxDyn_MV2cl100_discriminant = 0;
   BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pu = 0;
   CaloCalTopoClustersAuxDyn_e_sampl = 0;
   CaloCalTopoClustersAuxDyn_time = 0;
   CaloCalTopoClustersAuxDyn_clusterSize = 0;
   CaloCalTopoClustersAuxDyn_eta0 = 0;
   CaloCalTopoClustersAuxDyn_phi0 = 0;
   CaloCalTopoClustersAuxDyn_rawE = 0;
   CaloCalTopoClustersAuxDyn_rawEta = 0;
   CaloCalTopoClustersAuxDyn_rawPhi = 0;
   CaloCalTopoClustersAuxDyn_rawM = 0;
   CaloCalTopoClustersAuxDyn_altE = 0;
   CaloCalTopoClustersAuxDyn_AVG_LAR_Q = 0;
   CaloCalTopoClustersAuxDyn_altEta = 0;
   CaloCalTopoClustersAuxDyn_AVG_TILE_Q = 0;
   CaloCalTopoClustersAuxDyn_altPhi = 0;
   CaloCalTopoClustersAuxDyn_BADLARQ_FRAC = 0;
   CaloCalTopoClustersAuxDyn_altM = 0;
   CaloCalTopoClustersAuxDyn_CENTER_LAMBDA = 0;
   CaloCalTopoClustersAuxDyn_calE = 0;
   CaloCalTopoClustersAuxDyn_CENTER_MAG = 0;
   CaloCalTopoClustersAuxDyn_calEta = 0;
   CaloCalTopoClustersAuxDyn_EM_PROBABILITY = 0;
   CaloCalTopoClustersAuxDyn_calPhi = 0;
   CaloCalTopoClustersAuxDyn_calM = 0;
   CaloCalTopoClustersAuxDyn_ENG_BAD_CELLS = 0;
   CaloCalTopoClustersAuxDyn_BadChannelList = 0;
   CaloCalTopoClustersAuxDyn_ENG_FRAC_MAX = 0;
   CaloCalTopoClustersAuxDyn_ENG_POS = 0;
   CaloCalTopoClustersAuxDyn_FIRST_ENG_DENS = 0;
   CaloCalTopoClustersAuxDyn_ISOLATION = 0;
   CaloCalTopoClustersAuxDyn_N_BAD_CELLS = 0;
   CaloCalTopoClustersAuxDyn_SECOND_LAMBDA = 0;
   CaloCalTopoClustersAuxDyn_SECOND_R = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectChId = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans = 0;
   ElectronsAuxDyn_e233 = 0;
   ElectronsAuxDyn_e235 = 0;
   ElectronsAuxDyn_e237 = 0;
   ElectronsAuxDyn_e255 = 0;
   ElectronsAuxDyn_e2ts1 = 0;
   ElectronsAuxDyn_e2tsts1 = 0;
   ElectronsAuxDyn_ecore = 0;
   ElectronsAuxDyn_ehad1 = 0;
   ElectronsAuxDyn_emaxs1 = 0;
   ElectronsAuxDyn_emins1 = 0;
   ElectronsAuxDyn_etcone20ptCorrection = 0;
   ElectronsAuxDyn_trackParticleLinks = 0;
   ElectronsAuxDyn_etcone30ptCorrection = 0;
   ElectronsAuxDyn_etcone40ptCorrection = 0;
   ElectronsAuxDyn_ethad = 0;
   ElectronsAuxDyn_ethad1 = 0;
   ElectronsAuxDyn_neflowisol20ptCorrection = 0;
   ElectronsAuxDyn_neflowisol30ptCorrection = 0;
   ElectronsAuxDyn_neflowisol40ptCorrection = 0;
   ElectronsAuxDyn_pos = 0;
   ElectronsAuxDyn_pt = 0;
   ElectronsAuxDyn_pos7 = 0;
   ElectronsAuxDyn_eta = 0;
   ElectronsAuxDyn_poscs1 = 0;
   ElectronsAuxDyn_phi = 0;
   ElectronsAuxDyn_poscs2 = 0;
   ElectronsAuxDyn_m = 0;
   ElectronsAuxDyn_r33over37allcalo = 0;
   ElectronsAuxDyn_topoetcone20ptCorrection = 0;
   ElectronsAuxDyn_topoetcone30ptCorrection = 0;
   ElectronsAuxDyn_topoetcone40ptCorrection = 0;
   ElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection = 0;
   ElectronsAuxDyn_widths1 = 0;
   ElectronsAuxDyn_widths2 = 0;
   ElectronsAuxDyn_truthOrigin = 0;
   ElectronsAuxDyn_truthType = 0;
   ElectronsAuxDyn_DFCommonElectronsLHVeryLoose = 0;
   ElectronsAuxDyn_DFCommonElectronsLHLoose = 0;
   ElectronsAuxDyn_DFCommonElectronsLHMedium = 0;
   ElectronsAuxDyn_DFCommonElectronsLHTight = 0;
   ElectronsAuxDyn_DFCommonElectronsIsEMLoose = 0;
   ElectronsAuxDyn_DFCommonElectronsIsEMLooseIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsIsEMMedium = 0;
   ElectronsAuxDyn_DFCommonElectronsIsEMMediumIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsIsEMTight = 0;
   ElectronsAuxDyn_DFCommonElectronsIsEMTightIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsML = 0;
   ElectronsAuxDyn_truthPdgId = 0;
   ElectronsAuxDyn_firstEgMotherTruthType = 0;
   ElectronsAuxDyn_firstEgMotherTruthOrigin = 0;
   ElectronsAuxDyn_firstEgMotherPdgId = 0;
   ElectronsAuxDyn_lastEgMotherTruthType = 0;
   ElectronsAuxDyn_lastEgMotherTruthOrigin = 0;
   ElectronsAuxDyn_lastEgMotherPdgId = 0;
   ElectronsAuxDyn_E_Lr0_HiG = 0;
   ElectronsAuxDyn_E_Lr1_HiG = 0;
   ElectronsAuxDyn_E_Lr2_HiG = 0;
   ElectronsAuxDyn_E_Lr3_HiG = 0;
   ElectronsAuxDyn_E_Lr0_MedG = 0;
   ElectronsAuxDyn_E_Lr1_MedG = 0;
   ElectronsAuxDyn_E_Lr2_MedG = 0;
   ElectronsAuxDyn_E_Lr3_MedG = 0;
   ElectronsAuxDyn_E_Lr0_LowG = 0;
   ElectronsAuxDyn_E_Lr1_LowG = 0;
   ElectronsAuxDyn_E_Lr2_LowG = 0;
   ElectronsAuxDyn_E_Lr3_LowG = 0;
   ElectronsAuxDyn_nCells_Lr0_HiG = 0;
   ElectronsAuxDyn_nCells_Lr1_HiG = 0;
   ElectronsAuxDyn_nCells_Lr2_HiG = 0;
   ElectronsAuxDyn_nCells_Lr3_HiG = 0;
   ElectronsAuxDyn_nCells_Lr0_MedG = 0;
   ElectronsAuxDyn_nCells_Lr1_MedG = 0;
   ElectronsAuxDyn_nCells_Lr2_MedG = 0;
   ElectronsAuxDyn_nCells_Lr3_MedG = 0;
   ElectronsAuxDyn_nCells_Lr0_LowG = 0;
   ElectronsAuxDyn_nCells_Lr1_LowG = 0;
   ElectronsAuxDyn_nCells_Lr2_LowG = 0;
   ElectronsAuxDyn_nCells_Lr3_LowG = 0;
   ElectronsAuxDyn_maxEcell_time = 0;
   ElectronsAuxDyn_maxEcell_energy = 0;
   ElectronsAuxDyn_maxEcell_gain = 0;
   ElectronsAuxDyn_maxEcell_onlId = 0;
   ElectronsAuxDyn_maxEcell_x = 0;
   ElectronsAuxDyn_maxEcell_y = 0;
   ElectronsAuxDyn_maxEcell_z = 0;
   ElectronsAuxDyn_7x11ClusterExist = 0;
   ElectronsAuxDyn_EG_e011 = 0;
   ElectronsAuxDyn_EG_e033 = 0;
   ElectronsAuxDyn_EG_e132 = 0;
   ElectronsAuxDyn_EG_e1152 = 0;
   ElectronsAuxDyn_EG_ethad1 = 0;
   ElectronsAuxDyn_EG_ethad = 0;
   ElectronsAuxDyn_EG_ehad1 = 0;
   ElectronsAuxDyn_EG_f1 = 0;
   ElectronsAuxDyn_EG_f3 = 0;
   ElectronsAuxDyn_EG_f1core = 0;
   ElectronsAuxDyn_EG_f3core = 0;
   ElectronsAuxDyn_EG_e233 = 0;
   ElectronsAuxDyn_EG_e235 = 0;
   ElectronsAuxDyn_EG_e255 = 0;
   ElectronsAuxDyn_EG_e237 = 0;
   ElectronsAuxDyn_EG_e277 = 0;
   ElectronsAuxDyn_EG_e333 = 0;
   ElectronsAuxDyn_EG_e335 = 0;
   ElectronsAuxDyn_EG_e337 = 0;
   ElectronsAuxDyn_EG_e377 = 0;
   ElectronsAuxDyn_EG_weta1 = 0;
   ElectronsAuxDyn_EG_weta2 = 0;
   ElectronsAuxDyn_EG_e2ts1 = 0;
   ElectronsAuxDyn_EG_e2tsts1 = 0;
   ElectronsAuxDyn_EG_fracs1 = 0;
   ElectronsAuxDyn_EG_widths1 = 0;
   ElectronsAuxDyn_EG_widths2 = 0;
   ElectronsAuxDyn_EG_poscs1 = 0;
   ElectronsAuxDyn_EG_poscs2 = 0;
   ElectronsAuxDyn_EG_asy1 = 0;
   ElectronsAuxDyn_EG_pos = 0;
   ElectronsAuxDyn_EG_pos7 = 0;
   ElectronsAuxDyn_EG_barys1 = 0;
   ElectronsAuxDyn_EG_wtots1 = 0;
   ElectronsAuxDyn_EG_emins1 = 0;
   ElectronsAuxDyn_EG_emaxs1 = 0;
   ElectronsAuxDyn_EG_r33over37allcalo = 0;
   ElectronsAuxDyn_EG_ecore = 0;
   ElectronsAuxDyn_EG_Reta = 0;
   ElectronsAuxDyn_EG_Rphi = 0;
   ElectronsAuxDyn_EG_Eratio = 0;
   ElectronsAuxDyn_author = 0;
   ElectronsAuxDyn_EG_Rhad = 0;
   ElectronsAuxDyn_EG_Rhad1 = 0;
   ElectronsAuxDyn_EG_DeltaE = 0;
   ElectronsAuxDyn_E3x5_Lr0 = 0;
   ElectronsAuxDyn_E3x5_Lr1 = 0;
   ElectronsAuxDyn_E3x5_Lr2 = 0;
   ElectronsAuxDyn_E3x5_Lr3 = 0;
   ElectronsAuxDyn_E5x7_Lr0 = 0;
   ElectronsAuxDyn_E5x7_Lr1 = 0;
   ElectronsAuxDyn_E5x7_Lr2 = 0;
   ElectronsAuxDyn_E5x7_Lr3 = 0;
   ElectronsAuxDyn_E7x7_Lr0 = 0;
   ElectronsAuxDyn_E7x7_Lr1 = 0;
   ElectronsAuxDyn_E7x7_Lr2 = 0;
   ElectronsAuxDyn_E7x7_Lr3 = 0;
   ElectronsAuxDyn_E7x11_Lr0 = 0;
   ElectronsAuxDyn_E7x11_Lr1 = 0;
   ElectronsAuxDyn_E7x11_Lr2 = 0;
   ElectronsAuxDyn_E7x11_Lr3 = 0;
   ElectronsAuxDyn_Energy7x11_Lr0 = 0;
   ElectronsAuxDyn_Energy7x11_Lr1 = 0;
   ElectronsAuxDyn_Energy7x11_Lr2 = 0;
   ElectronsAuxDyn_Energy7x11_Lr3 = 0;
   ElectronsAuxDyn_time_7x11 = 0;
   ElectronsAuxDyn_energy_7x11 = 0;
   ElectronsAuxDyn_gain_7x11 = 0;
   ElectronsAuxDyn_provenance_7x11 = 0;
   ElectronsAuxDyn_x_7x11 = 0;
   ElectronsAuxDyn_dx_7x11 = 0;
   ElectronsAuxDyn_y_7x11 = 0;
   ElectronsAuxDyn_dy_7x11 = 0;
   ElectronsAuxDyn_z_7x11 = 0;
   ElectronsAuxDyn_dz_7x11 = 0;
   ElectronsAuxDyn_eta_7x11 = 0;
   ElectronsAuxDyn_deta_7x11 = 0;
   ElectronsAuxDyn_etasize_7x11 = 0;
   ElectronsAuxDyn_phi_7x11 = 0;
   ElectronsAuxDyn_dphi_7x11 = 0;
   ElectronsAuxDyn_phisize_7x11 = 0;
   ElectronsAuxDyn_sampling_7x11 = 0;
   ElectronsAuxDyn_charge = 0;
   ElectronsAuxDyn_etcone20 = 0;
   ElectronsAuxDyn_etcone30 = 0;
   ElectronsAuxDyn_etcone40 = 0;
   ElectronsAuxDyn_ptcone20 = 0;
   ElectronsAuxDyn_ptcone30 = 0;
   ElectronsAuxDyn_ptcone40 = 0;
   ElectronsAuxDyn_ptvarcone20 = 0;
   ElectronsAuxDyn_ptvarcone40 = 0;
   ElectronsAuxDyn_PromptLeptonInput_TrackJetNTrack = 0;
   ElectronsAuxDyn_PromptLeptonInput_sv1_jf_ntrkv = 0;
   ElectronsAuxDyn_PromptLeptonInput_ip2 = 0;
   ElectronsAuxDyn_PromptLeptonInput_ip3 = 0;
   ElectronsAuxDyn_PromptLeptonInput_LepJetPtFrac = 0;
   ElectronsAuxDyn_PromptLeptonInput_DRlj = 0;
   ElectronsAuxDyn_PromptLeptonInput_TopoEtCone30Rel = 0;
   ElectronsAuxDyn_PromptLeptonInput_PtVarCone30Rel = 0;
   ElectronsAuxDyn_PromptLeptonIso = 0;
   ElectronsAuxDyn_topoetcone20 = 0;
   ElectronsAuxDyn_topoetcone30 = 0;
   ElectronsAuxDyn_ptvarcone30 = 0;
   ElectronsAuxDyn_PromptLeptonInput_rnnip = 0;
   ElectronsAuxDyn_PromptLeptonInput_DL1mu = 0;
   ElectronsAuxDyn_PromptLeptonInput_PtRel = 0;
   ElectronsAuxDyn_PromptLeptonInput_PtFrac = 0;
   ElectronsAuxDyn_PromptLeptonVeto = 0;
   ElectronsAuxDyn_etconeCorrBitset = 0;
   ElectronsAuxDyn_DFCommonJets_passOR = 0;
   ElectronsAuxDyn_selected = 0;
   ElectronsAuxDyn_neflowisol20 = 0;
   ElectronsAuxDyn_neflowisol30 = 0;
   ElectronsAuxDyn_neflowisol40 = 0;
   ElectronsAuxDyn_neflowisolCorrBitset = 0;
   ElectronsAuxDyn_neflowisolcoreConeEnergyCorrection = 0;
   ElectronsAuxDyn_ptconeCorrBitset = 0;
   ElectronsAuxDyn_ptconecoreTrackPtrCorrection = 0;
   ElectronsAuxDyn_topoetcone40 = 0;
   ElectronsAuxDyn_topoetconeCorrBitset = 0;
   ElectronsAuxDyn_topoetconecoreConeEnergyCorrection = 0;
   ElectronsAuxDyn_caloClusterLinks = 0;
   ElectronsAuxDyn_OQ = 0;
   ElectronsAuxDyn_f1 = 0;
   ElectronsAuxDyn_f3 = 0;
   ElectronsAuxDyn_f1core = 0;
   ElectronsAuxDyn_f3core = 0;
   ElectronsAuxDyn_weta1 = 0;
   ElectronsAuxDyn_weta2 = 0;
   ElectronsAuxDyn_fracs1 = 0;
   ElectronsAuxDyn_wtots1 = 0;
   ElectronsAuxDyn_e277 = 0;
   ElectronsAuxDyn_Reta = 0;
   ElectronsAuxDyn_Rphi = 0;
   ElectronsAuxDyn_Eratio = 0;
   ElectronsAuxDyn_Rhad = 0;
   ElectronsAuxDyn_Rhad1 = 0;
   ElectronsAuxDyn_DeltaE = 0;
   ElectronsAuxDyn_deltaEta0 = 0;
   ElectronsAuxDyn_deltaEta1 = 0;
   ElectronsAuxDyn_deltaEta2 = 0;
   ElectronsAuxDyn_deltaEta3 = 0;
   ElectronsAuxDyn_deltaPhi0 = 0;
   ElectronsAuxDyn_deltaPhi1 = 0;
   ElectronsAuxDyn_deltaPhi2 = 0;
   ElectronsAuxDyn_deltaPhi3 = 0;
   ElectronsAuxDyn_deltaPhiRescaled0 = 0;
   ElectronsAuxDyn_deltaPhiRescaled1 = 0;
   ElectronsAuxDyn_deltaPhiRescaled2 = 0;
   ElectronsAuxDyn_deltaPhiRescaled3 = 0;
   ElectronsAuxDyn_deltaPhiFromLastMeasurement = 0;
   ElectronsAuxDyn_EgammaCovarianceMatrix = 0;
   ElectronsAuxDyn_LHLoose = 0;
   ElectronsAuxDyn_LHMedium = 0;
   ElectronsAuxDyn_LHTight = 0;
   ElectronsAuxDyn_LHValue = 0;
   ElectronsAuxDyn_Loose = 0;
   ElectronsAuxDyn_Medium = 0;
   ElectronsAuxDyn_MultiLepton = 0;
   ElectronsAuxDyn_Tight = 0;
   ElectronsAuxDyn_ambiguityType = 0;
   ElectronsAuxDyn_asy1 = 0;
   ElectronsAuxDyn_barys1 = 0;
   ElectronsAuxDyn_caloRingsLinks = 0;
   ElectronsAuxDyn_core57cellsEnergyCorrection = 0;
   ElectronsAuxDyn_e1152 = 0;
   ElectronsAuxDyn_e132 = 0;
   EventInfoAuxDyn_mcEventWeights = 0;
   EventInfoAuxDyn_streamTagRobs = 0;
   EventInfoAuxDyn_streamTagDets = 0;
   EventInfoAuxDyn_subEventTime = 0;
   EventInfoAuxDyn_subEventIndex = 0;
   EventInfoAuxDyn_subEventType = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans = 0;
   GSFConversionVerticesAuxDyn_px = 0;
   GSFConversionVerticesAuxDyn_py = 0;
   GSFConversionVerticesAuxDyn_pz = 0;
   GSFConversionVerticesAuxDyn_x = 0;
   GSFConversionVerticesAuxDyn_y = 0;
   GSFConversionVerticesAuxDyn_z = 0;
   GSFConversionVerticesAuxDyn_trackParticleLinks = 0;
   GSFConversionVerticesAuxDyn_neutralParticleLinks = 0;
   GSFConversionVerticesAuxDyn_etaAtCalo = 0;
   GSFConversionVerticesAuxDyn_minRfirstHit = 0;
   GSFConversionVerticesAuxDyn_phiAtCalo = 0;
   GSFConversionVerticesAuxDyn_pt1 = 0;
   GSFConversionVerticesAuxDyn_pt2 = 0;
   GSFTrackParticlesAuxDyn_parameterPX = 0;
   GSFTrackParticlesAuxDyn_parameterPY = 0;
   GSFTrackParticlesAuxDyn_parameterPZ = 0;
   GSFTrackParticlesAuxDyn_parameterPosition = 0;
   GSFTrackParticlesAuxDyn_parameterX = 0;
   GSFTrackParticlesAuxDyn_parameterY = 0;
   GSFTrackParticlesAuxDyn_parameterZ = 0;
   GSFTrackParticlesAuxDyn_trackParameterCovarianceMatrices = 0;
   GSFTrackParticlesAuxDyn_truthOrigin = 0;
   GSFTrackParticlesAuxDyn_truthType = 0;
   GSFTrackParticlesAuxDyn_phi = 0;
   GSFTrackParticlesAuxDyn_d0 = 0;
   GSFTrackParticlesAuxDyn_z0 = 0;
   GSFTrackParticlesAuxDyn_theta = 0;
   GSFTrackParticlesAuxDyn_qOverP = 0;
   GSFTrackParticlesAuxDyn_definingParametersCovMatrix = 0;
   GSFTrackParticlesAuxDyn_vx = 0;
   GSFTrackParticlesAuxDyn_vy = 0;
   GSFTrackParticlesAuxDyn_vz = 0;
   GSFTrackParticlesAuxDyn_radiusOfFirstHit = 0;
   GSFTrackParticlesAuxDyn_identifierOfFirstHit = 0;
   GSFTrackParticlesAuxDyn_beamlineTiltX = 0;
   GSFTrackParticlesAuxDyn_beamlineTiltY = 0;
   GSFTrackParticlesAuxDyn_hitPattern = 0;
   GSFTrackParticlesAuxDyn_numberOfUsedHitsdEdx = 0;
   GSFTrackParticlesAuxDyn_numberOfIBLOverflowsdEdx = 0;
   GSFTrackParticlesAuxDyn_QoverPLM = 0;
   GSFTrackParticlesAuxDyn_chiSquared = 0;
   GSFTrackParticlesAuxDyn_numberDoF = 0;
   GSFTrackParticlesAuxDyn_trackFitter = 0;
   GSFTrackParticlesAuxDyn_particleHypothesis = 0;
   GSFTrackParticlesAuxDyn_trackProperties = 0;
   GSFTrackParticlesAuxDyn_patternRecoInfo = 0;
   GSFTrackParticlesAuxDyn_numberOfContribPixelLayers = 0;
   GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits = 0;
   GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers = 0;
   GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerSharedHits = 0;
   GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerSplitHits = 0;
   GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit = 0;
   GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits = 0;
   GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers = 0;
   GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerSharedHits = 0;
   GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerSplitHits = 0;
   GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelHits = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelOutliers = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelHoles = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelSharedHits = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelSplitHits = 0;
   GSFTrackParticlesAuxDyn_numberOfGangedPixels = 0;
   GSFTrackParticlesAuxDyn_numberOfGangedFlaggedFakes = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelSpoiltHits = 0;
   GSFTrackParticlesAuxDyn_numberOfDBMHits = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTHits = 0;
   GSFTrackParticlesAuxDyn_truthMatchProbability = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTOutliers = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTHoles = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTDoubleHoles = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTSharedHits = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   GSFTrackParticlesAuxDyn_TRTdEdxUsedHits = 0;
   GSFTrackParticlesAuxDyn_TRTTrackOccupancy = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTSpoiltHits = 0;
   GSFTrackParticlesAuxDyn_numberOfTRTHits = 0;
   GSFTrackParticlesAuxDyn_TRTdEdx = 0;
   GSFTrackParticlesAuxDyn_numberOfTRTOutliers = 0;
   GSFTrackParticlesAuxDyn_numberOfTRTHoles = 0;
   GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdHits = 0;
   GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdHitsTotal = 0;
   GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdOutliers = 0;
   GSFTrackParticlesAuxDyn_numberOfTRTDeadStraws = 0;
   GSFTrackParticlesAuxDyn_numberOfTRTTubeHits = 0;
   GSFTrackParticlesAuxDyn_numberOfTRTXenonHits = 0;
   GSFTrackParticlesAuxDyn_numberOfTRTSharedHits = 0;
   GSFTrackParticlesAuxDyn_numberOfPrecisionLayers = 0;
   GSFTrackParticlesAuxDyn_numberOfPrecisionHoleLayers = 0;
   GSFTrackParticlesAuxDyn_numberOfPhiLayers = 0;
   GSFTrackParticlesAuxDyn_numberOfPhiHoleLayers = 0;
   GSFTrackParticlesAuxDyn_numberOfTriggerEtaLayers = 0;
   GSFTrackParticlesAuxDyn_numberOfTriggerEtaHoleLayers = 0;
   GSFTrackParticlesAuxDyn_numberOfOutliersOnTrack = 0;
   GSFTrackParticlesAuxDyn_standardDeviationOfChi2OS = 0;
   GSFTrackParticlesAuxDyn_eProbabilityComb = 0;
   GSFTrackParticlesAuxDyn_eProbabilityHT = 0;
   GSFTrackParticlesAuxDyn_pixeldEdx = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_e_sampl = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_time = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_clusterSize = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_eta0 = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_phi0 = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawE = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawEta = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawPhi = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawM = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altE = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altEta = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altPhi = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altM = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calE = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calEta = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calPhi = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calM = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETA1CALOFRAME = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETA2CALOFRAME = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETACALOFRAME = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHI1CALOFRAME = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHI2CALOFRAME = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHICALOFRAME = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_eta_sampl = 0;
   HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_phi_sampl = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f3core = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_weta1 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_weta2 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_fracs1 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_wtots1 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_e277 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone20 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Reta = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone30 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rphi = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone40 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Eratio = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone20 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rhad = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone30 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rhad1 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone40 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone20 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_trackParticleLinks = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_DeltaE = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone20 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone30 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta0 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone40 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone30 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta1 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta2 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta3 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi0 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi1 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi2 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_pt = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi3 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_eta = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled0 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_phi = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled1 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_m = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled2 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled3 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiFromLastMeasurement = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHLoose = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHMedium = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHTight = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHValue = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Loose = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_author = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Medium = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Tight = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_VLoose = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMVLoose = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLoose = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMMedium = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMTight = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHVLoose = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHVLoose = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHLoose = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_charge = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHMedium = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHTight = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloVLoose = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloLoose = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloMedium = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloTight = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloVLoose = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloLoose = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloMedium = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloTight = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloValue = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone40 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_caloClusterLinks = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_OQ = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f1 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f3 = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f1core = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_author = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Loose = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Medium = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Tight = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone40 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_pt = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_eta = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_caloClusterLinks = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone20 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_phi = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_OQ = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone30 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_m = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f1 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone30 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f3 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f1core = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f3core = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_weta1 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_weta2 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone20 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_fracs1 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone30 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone40 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_wtots1 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone20 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_e277 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone30 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Reta = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone40 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rphi = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone20 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Eratio = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_vertexLinks = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone40 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rhad = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaEta1 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rhad1 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaEta2 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_DeltaE = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaPhi1 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaPhi2 = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMLoose = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMMedium = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMTight = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_phi = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_d0 = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_z0 = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_theta = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_qOverP = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_definingParametersCovMatrix = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vx = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vy = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vz = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_radiusOfFirstHit = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_identifierOfFirstHit = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_beamlineTiltX = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_beamlineTiltY = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_hitPattern = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfUsedHitsdEdx = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfIBLOverflowsdEdx = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_chiSquared = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberDoF = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_trackFitter = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_particleHypothesis = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_trackProperties = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_patternRecoInfo = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfContribPixelLayers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerOutliers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerSharedHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerSplitHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_expectInnermostPixelLayerHit = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerOutliers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerSharedHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerSplitHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_expectNextToInnermostPixelLayerHit = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelOutliers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelHoles = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSharedHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSplitHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfGangedPixels = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfGangedFlaggedFakes = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelDeadSensors = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSpoiltHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfDBMHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTOutliers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTHoles = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTDoubleHoles = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTSharedHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTDeadSensors = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_TRTTrackOccupancy = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTSpoiltHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTOutliers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHoles = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdHitsTotal = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdOutliers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTDeadStraws = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTTubeHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTXenonHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTSharedHits = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPrecisionLayers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPrecisionHoleLayers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPhiLayers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPhiHoleLayers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTriggerEtaLayers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTriggerEtaHoleLayers = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfOutliersOnTrack = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_standardDeviationOfChi2OS = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_eProbabilityComb = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_eProbabilityHT = 0;
   HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_pixeldEdx = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_et = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEta = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_nCells = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawPhi = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEnergy = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEnergySample = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEt = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e233 = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_RoIword = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_clusterQuality = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e237 = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_energy = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_energySample = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e2tsts1 = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_eta1 = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_eta = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_weta2 = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_wstot = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_phi = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_fracs1 = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_ehad1 = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_emaxs1 = 0;
   HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e277 = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_rcore = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_eratio = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etHad = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etHad1 = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f0 = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_charge = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f2 = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trkEtaAtCalo = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trkPhiAtCalo = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etOverPt = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_caloEta = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_caloPhi = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f1 = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_roiWord = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f3 = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_pt = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_zvtx = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_nTRTHits = 0;
   HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_nTRTHiThresholdHits = 0;
   HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_size = 0;
   HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_passBits = 0;
   HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_containerKey = 0;
   HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_containerClid = 0;
   HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_rnnDecision = 0;
   HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_rings = 0;
   InDetForwardTrackParticlesAuxDyn_vz = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfPixelHits = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfPixelHoles = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfPrecisionLayers = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfPrecisionHoleLayers = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfSCTHits = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfSCTHoles = 0;
   InDetForwardTrackParticlesAuxDyn_d0 = 0;
   InDetForwardTrackParticlesAuxDyn_z0 = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   InDetForwardTrackParticlesAuxDyn_theta = 0;
   InDetForwardTrackParticlesAuxDyn_phi = 0;
   InDetForwardTrackParticlesAuxDyn_qOverP = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfTRTHits = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfTRTOutliers = 0;
   InDetForwardTrackParticlesAuxDyn_definingParametersCovMatrix = 0;
   InDetTrackParticlesAuxDyn_numberOfPhiLayers = 0;
   InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers = 0;
   InDetTrackParticlesAuxDyn_chiSquared = 0;
   InDetTrackParticlesAuxDyn_numberDoF = 0;
   InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits = 0;
   InDetTrackParticlesAuxDyn_expectInnermostPixelLayerHit = 0;
   InDetTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits = 0;
   InDetTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit = 0;
   InDetTrackParticlesAuxDyn_numberOfPixelHits = 0;
   InDetTrackParticlesAuxDyn_phi = 0;
   InDetTrackParticlesAuxDyn_numberOfPixelHoles = 0;
   InDetTrackParticlesAuxDyn_numberOfPixelSharedHits = 0;
   InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   InDetTrackParticlesAuxDyn_numberOfSCTHits = 0;
   InDetTrackParticlesAuxDyn_numberOfSCTHoles = 0;
   InDetTrackParticlesAuxDyn_numberOfSCTSharedHits = 0;
   InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   InDetTrackParticlesAuxDyn_d0 = 0;
   InDetTrackParticlesAuxDyn_z0 = 0;
   InDetTrackParticlesAuxDyn_theta = 0;
   InDetTrackParticlesAuxDyn_numberOfTRTHits = 0;
   InDetTrackParticlesAuxDyn_qOverP = 0;
   InDetTrackParticlesAuxDyn_numberOfTRTOutliers = 0;
   InDetTrackParticlesAuxDyn_definingParametersCovMatrix = 0;
   InDetTrackParticlesAuxDyn_vz = 0;
   InDetTrackParticlesAuxDyn_numberOfPrecisionLayers = 0;
   InDetTrackParticlesAuxDyn_truthMatchProbability = 0;
   InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers = 0;
   LVL1EmTauRoIsAuxDyn_roiWord = 0;
   LVL1EmTauRoIsAuxDyn_etScale = 0;
   LVL1EmTauRoIsAuxDyn_thrPattern = 0;
   LVL1EmTauRoIsAuxDyn_thrNames = 0;
   LVL1EmTauRoIsAuxDyn_thrValues = 0;
   LVL1EmTauRoIsAuxDyn_core = 0;
   LVL1EmTauRoIsAuxDyn_emClus = 0;
   LVL1EmTauRoIsAuxDyn_eta = 0;
   LVL1EmTauRoIsAuxDyn_tauClus = 0;
   LVL1EmTauRoIsAuxDyn_phi = 0;
   LVL1EmTauRoIsAuxDyn_emIsol = 0;
   LVL1EmTauRoIsAuxDyn_hadIsol = 0;
   LVL1EmTauRoIsAuxDyn_hadCore = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_name = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_mpx = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_mpy = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_sumet = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_source = 0;
   MET_Reference_AntiKt4EMTopoAuxDyn_name = 0;
   MET_Reference_AntiKt4EMTopoAuxDyn_mpx = 0;
   MET_Reference_AntiKt4EMTopoAuxDyn_mpy = 0;
   MET_Reference_AntiKt4EMTopoAuxDyn_sumet = 0;
   MET_Reference_AntiKt4EMTopoAuxDyn_source = 0;
   MET_TrackAuxDyn_name = 0;
   MET_TrackAuxDyn_mpx = 0;
   MET_TrackAuxDyn_mpy = 0;
   MET_TruthAuxDyn_name = 0;
   MET_TruthAuxDyn_mpx = 0;
   MET_TruthAuxDyn_mpy = 0;
   MET_TruthAuxDyn_sumet = 0;
   MET_TruthAuxDyn_source = 0;
   MuonSegmentsAuxDyn_px = 0;
   MuonSegmentsAuxDyn_py = 0;
   MuonSegmentsAuxDyn_pz = 0;
   MuonSegmentsAuxDyn_x = 0;
   MuonSegmentsAuxDyn_y = 0;
   MuonSegmentsAuxDyn_z = 0;
   MuonSegmentsAuxDyn_chiSquared = 0;
   MuonSegmentsAuxDyn_numberDoF = 0;
   MuonSegmentsAuxDyn_t0error = 0;
   MuonSegmentsAuxDyn_sector = 0;
   MuonSegmentsAuxDyn_chamberIndex = 0;
   MuonSegmentsAuxDyn_etaIndex = 0;
   MuonSegmentsAuxDyn_t0 = 0;
   MuonSegmentsAuxDyn_technology = 0;
   MuonSegmentsAuxDyn_nPrecisionHits = 0;
   MuonSegmentsAuxDyn_nPhiLayers = 0;
   MuonSegmentsAuxDyn_nTrigEtaLayers = 0;
   MuonSegmentsAuxDyn_clusterTime = 0;
   MuonSegmentsAuxDyn_clusterTimeError = 0;
   MuonSegmentsAuxDyn_clusterTimeValid = 0;
   MuonSpectrometerTrackParticlesAuxDyn_d0 = 0;
   MuonSpectrometerTrackParticlesAuxDyn_z0 = 0;
   MuonSpectrometerTrackParticlesAuxDyn_theta = 0;
   MuonSpectrometerTrackParticlesAuxDyn_qOverP = 0;
   MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrix = 0;
   MuonSpectrometerTrackParticlesAuxDyn_vz = 0;
   MuonSpectrometerTrackParticlesAuxDyn_phi = 0;
   MuonTruthParticlesAuxDyn_truthOrigin = 0;
   MuonTruthParticlesAuxDyn_truthType = 0;
   MuonsAuxDyn_outerOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_topoetcone20 = 0;
   MuonsAuxDyn_topoetcone30 = 0;
   MuonsAuxDyn_extendedClosePrecisionHits = 0;
   MuonsAuxDyn_extendedOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_innerClosePrecisionHits = 0;
   MuonsAuxDyn_innerOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_topoetcone40 = 0;
   MuonsAuxDyn_isEndcapGoodLayers = 0;
   MuonsAuxDyn_isSmallGoodSectors = 0;
   MuonsAuxDyn_middleClosePrecisionHits = 0;
   MuonsAuxDyn_middleOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_truthOrigin = 0;
   MuonsAuxDyn_truthType = 0;
   MuonsAuxDyn_InnerDetectorPt = 0;
   MuonsAuxDyn_numberOfGoodPrecisionLayers = 0;
   MuonsAuxDyn_MuonSpectrometerPt = 0;
   MuonsAuxDyn_outerClosePrecisionHits = 0;
   MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits = 0;
   NewSwElectronsAuxDyn_7x11ClusterExist = 0;
   NewSwElectronsAuxDyn_deltaPhiRescaled0 = 0;
   NewSwElectronsAuxDyn_deltaPhiRescaled1 = 0;
   NewSwElectronsAuxDyn_e011 = 0;
   NewSwElectronsAuxDyn_deltaPhiRescaled2 = 0;
   NewSwElectronsAuxDyn_e033 = 0;
   NewSwElectronsAuxDyn_deltaPhiRescaled3 = 0;
   NewSwElectronsAuxDyn_e333 = 0;
   NewSwElectronsAuxDyn_deltaPhiFromLastMeasurement = 0;
   NewSwElectronsAuxDyn_e335 = 0;
   NewSwElectronsAuxDyn_EgammaCovarianceMatrix = 0;
   NewSwElectronsAuxDyn_e337 = 0;
   NewSwElectronsAuxDyn_LHLoose = 0;
   NewSwElectronsAuxDyn_e377 = 0;
   NewSwElectronsAuxDyn_LHMedium = 0;
   NewSwElectronsAuxDyn_LHTight = 0;
   NewSwElectronsAuxDyn_LHValue = 0;
   NewSwElectronsAuxDyn_Loose = 0;
   NewSwElectronsAuxDyn_trackParticleLinks = 0;
   NewSwElectronsAuxDyn_Medium = 0;
   NewSwElectronsAuxDyn_MultiLepton = 0;
   NewSwElectronsAuxDyn_Tight = 0;
   NewSwElectronsAuxDyn_ambiguityType = 0;
   NewSwElectronsAuxDyn_author = 0;
   NewSwElectronsAuxDyn_asy1 = 0;
   NewSwElectronsAuxDyn_barys1 = 0;
   NewSwElectronsAuxDyn_caloRingsLinks = 0;
   NewSwElectronsAuxDyn_pt = 0;
   NewSwElectronsAuxDyn_core57cellsEnergyCorrection = 0;
   NewSwElectronsAuxDyn_eta = 0;
   NewSwElectronsAuxDyn_e1152 = 0;
   NewSwElectronsAuxDyn_phi = 0;
   NewSwElectronsAuxDyn_e132 = 0;
   NewSwElectronsAuxDyn_m = 0;
   NewSwElectronsAuxDyn_e233 = 0;
   NewSwElectronsAuxDyn_e235 = 0;
   NewSwElectronsAuxDyn_e237 = 0;
   NewSwElectronsAuxDyn_e255 = 0;
   NewSwElectronsAuxDyn_e2ts1 = 0;
   NewSwElectronsAuxDyn_e2tsts1 = 0;
   NewSwElectronsAuxDyn_ecore = 0;
   NewSwElectronsAuxDyn_ehad1 = 0;
   NewSwElectronsAuxDyn_emaxs1 = 0;
   NewSwElectronsAuxDyn_emins1 = 0;
   NewSwElectronsAuxDyn_etcone20ptCorrection = 0;
   NewSwElectronsAuxDyn_etcone30ptCorrection = 0;
   NewSwElectronsAuxDyn_etcone40ptCorrection = 0;
   NewSwElectronsAuxDyn_ethad = 0;
   NewSwElectronsAuxDyn_ethad1 = 0;
   NewSwElectronsAuxDyn_neflowisol20ptCorrection = 0;
   NewSwElectronsAuxDyn_neflowisol30ptCorrection = 0;
   NewSwElectronsAuxDyn_neflowisol40ptCorrection = 0;
   NewSwElectronsAuxDyn_pos = 0;
   NewSwElectronsAuxDyn_pos7 = 0;
   NewSwElectronsAuxDyn_poscs1 = 0;
   NewSwElectronsAuxDyn_poscs2 = 0;
   NewSwElectronsAuxDyn_r33over37allcalo = 0;
   NewSwElectronsAuxDyn_topoetcone20ptCorrection = 0;
   NewSwElectronsAuxDyn_topoetcone30ptCorrection = 0;
   NewSwElectronsAuxDyn_topoetcone40ptCorrection = 0;
   NewSwElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection = 0;
   NewSwElectronsAuxDyn_widths1 = 0;
   NewSwElectronsAuxDyn_widths2 = 0;
   NewSwElectronsAuxDyn_charge = 0;
   NewSwElectronsAuxDyn_etcone20 = 0;
   NewSwElectronsAuxDyn_etcone30 = 0;
   NewSwElectronsAuxDyn_etcone40 = 0;
   NewSwElectronsAuxDyn_ptcone20 = 0;
   NewSwElectronsAuxDyn_ptcone30 = 0;
   NewSwElectronsAuxDyn_ptcone40 = 0;
   NewSwElectronsAuxDyn_ptvarcone20 = 0;
   NewSwElectronsAuxDyn_ptvarcone40 = 0;
   NewSwElectronsAuxDyn_topoetcone20 = 0;
   NewSwElectronsAuxDyn_truthOrigin = 0;
   NewSwElectronsAuxDyn_topoetcone30 = 0;
   NewSwElectronsAuxDyn_ptvarcone30 = 0;
   NewSwElectronsAuxDyn_truthType = 0;
   NewSwElectronsAuxDyn_etconeCorrBitset = 0;
   NewSwElectronsAuxDyn_DFCommonElectronsLHVeryLoose = 0;
   NewSwElectronsAuxDyn_DFCommonElectronsLHLoose = 0;
   NewSwElectronsAuxDyn_DFCommonElectronsLHMedium = 0;
   NewSwElectronsAuxDyn_DFCommonElectronsLHTight = 0;
   NewSwElectronsAuxDyn_DFCommonElectronsIsEMLoose = 0;
   NewSwElectronsAuxDyn_DFCommonElectronsIsEMLooseIsEMValue = 0;
   NewSwElectronsAuxDyn_DFCommonElectronsIsEMMedium = 0;
   NewSwElectronsAuxDyn_DFCommonElectronsIsEMMediumIsEMValue = 0;
   NewSwElectronsAuxDyn_neflowisol20 = 0;
   NewSwElectronsAuxDyn_DFCommonElectronsIsEMTight = 0;
   NewSwElectronsAuxDyn_neflowisol30 = 0;
   NewSwElectronsAuxDyn_DFCommonElectronsIsEMTightIsEMValue = 0;
   NewSwElectronsAuxDyn_neflowisol40 = 0;
   NewSwElectronsAuxDyn_neflowisolCorrBitset = 0;
   NewSwElectronsAuxDyn_neflowisolcoreConeEnergyCorrection = 0;
   NewSwElectronsAuxDyn_DFCommonElectronsML = 0;
   NewSwElectronsAuxDyn_truthPdgId = 0;
   NewSwElectronsAuxDyn_firstEgMotherTruthType = 0;
   NewSwElectronsAuxDyn_firstEgMotherTruthOrigin = 0;
   NewSwElectronsAuxDyn_firstEgMotherPdgId = 0;
   NewSwElectronsAuxDyn_ptconeCorrBitset = 0;
   NewSwElectronsAuxDyn_lastEgMotherTruthType = 0;
   NewSwElectronsAuxDyn_ptconecoreTrackPtrCorrection = 0;
   NewSwElectronsAuxDyn_lastEgMotherTruthOrigin = 0;
   NewSwElectronsAuxDyn_lastEgMotherPdgId = 0;
   NewSwElectronsAuxDyn_E_Lr0_HiG = 0;
   NewSwElectronsAuxDyn_E_Lr1_HiG = 0;
   NewSwElectronsAuxDyn_topoetcone40 = 0;
   NewSwElectronsAuxDyn_E_Lr2_HiG = 0;
   NewSwElectronsAuxDyn_topoetconeCorrBitset = 0;
   NewSwElectronsAuxDyn_E_Lr3_HiG = 0;
   NewSwElectronsAuxDyn_topoetconecoreConeEnergyCorrection = 0;
   NewSwElectronsAuxDyn_E_Lr0_MedG = 0;
   NewSwElectronsAuxDyn_E_Lr1_MedG = 0;
   NewSwElectronsAuxDyn_caloClusterLinks = 0;
   NewSwElectronsAuxDyn_E_Lr2_MedG = 0;
   NewSwElectronsAuxDyn_OQ = 0;
   NewSwElectronsAuxDyn_E_Lr3_MedG = 0;
   NewSwElectronsAuxDyn_f1 = 0;
   NewSwElectronsAuxDyn_E_Lr0_LowG = 0;
   NewSwElectronsAuxDyn_f3 = 0;
   NewSwElectronsAuxDyn_E_Lr1_LowG = 0;
   NewSwElectronsAuxDyn_f1core = 0;
   NewSwElectronsAuxDyn_E_Lr2_LowG = 0;
   NewSwElectronsAuxDyn_f3core = 0;
   NewSwElectronsAuxDyn_E_Lr3_LowG = 0;
   NewSwElectronsAuxDyn_weta1 = 0;
   NewSwElectronsAuxDyn_nCells_Lr0_HiG = 0;
   NewSwElectronsAuxDyn_weta2 = 0;
   NewSwElectronsAuxDyn_nCells_Lr1_HiG = 0;
   NewSwElectronsAuxDyn_fracs1 = 0;
   NewSwElectronsAuxDyn_nCells_Lr2_HiG = 0;
   NewSwElectronsAuxDyn_wtots1 = 0;
   NewSwElectronsAuxDyn_nCells_Lr3_HiG = 0;
   NewSwElectronsAuxDyn_e277 = 0;
   NewSwElectronsAuxDyn_nCells_Lr0_MedG = 0;
   NewSwElectronsAuxDyn_Reta = 0;
   NewSwElectronsAuxDyn_nCells_Lr1_MedG = 0;
   NewSwElectronsAuxDyn_Rphi = 0;
   NewSwElectronsAuxDyn_nCells_Lr2_MedG = 0;
   NewSwElectronsAuxDyn_Eratio = 0;
   NewSwElectronsAuxDyn_nCells_Lr3_MedG = 0;
   NewSwElectronsAuxDyn_Rhad = 0;
   NewSwElectronsAuxDyn_nCells_Lr0_LowG = 0;
   NewSwElectronsAuxDyn_Rhad1 = 0;
   NewSwElectronsAuxDyn_nCells_Lr1_LowG = 0;
   NewSwElectronsAuxDyn_DeltaE = 0;
   NewSwElectronsAuxDyn_nCells_Lr2_LowG = 0;
   NewSwElectronsAuxDyn_deltaEta0 = 0;
   NewSwElectronsAuxDyn_nCells_Lr3_LowG = 0;
   NewSwElectronsAuxDyn_deltaEta1 = 0;
   NewSwElectronsAuxDyn_maxEcell_time = 0;
   NewSwElectronsAuxDyn_deltaEta2 = 0;
   NewSwElectronsAuxDyn_maxEcell_energy = 0;
   NewSwElectronsAuxDyn_deltaEta3 = 0;
   NewSwElectronsAuxDyn_maxEcell_gain = 0;
   NewSwElectronsAuxDyn_deltaPhi0 = 0;
   NewSwElectronsAuxDyn_maxEcell_onlId = 0;
   NewSwElectronsAuxDyn_deltaPhi1 = 0;
   NewSwElectronsAuxDyn_maxEcell_x = 0;
   NewSwElectronsAuxDyn_deltaPhi2 = 0;
   NewSwElectronsAuxDyn_maxEcell_y = 0;
   NewSwElectronsAuxDyn_deltaPhi3 = 0;
   NewSwElectronsAuxDyn_maxEcell_z = 0;
   PhotonsAuxDyn_E3x5_Lr0 = 0;
   PhotonsAuxDyn_DFCommonPhotonsIsEMLoose = 0;
   PhotonsAuxDyn_weta1 = 0;
   PhotonsAuxDyn_E3x5_Lr1 = 0;
   PhotonsAuxDyn_weta2 = 0;
   PhotonsAuxDyn_E3x5_Lr2 = 0;
   PhotonsAuxDyn_DFCommonPhotonsIsEMTight = 0;
   PhotonsAuxDyn_fracs1 = 0;
   PhotonsAuxDyn_E3x5_Lr3 = 0;
   PhotonsAuxDyn_wtots1 = 0;
   PhotonsAuxDyn_E5x7_Lr0 = 0;
   PhotonsAuxDyn_vertexLinks = 0;
   PhotonsAuxDyn_e277 = 0;
   PhotonsAuxDyn_E5x7_Lr1 = 0;
   PhotonsAuxDyn_Reta = 0;
   PhotonsAuxDyn_E5x7_Lr2 = 0;
   PhotonsAuxDyn_Rphi = 0;
   PhotonsAuxDyn_E5x7_Lr3 = 0;
   PhotonsAuxDyn_ptcone20 = 0;
   PhotonsAuxDyn_Eratio = 0;
   PhotonsAuxDyn_E7x7_Lr0 = 0;
   PhotonsAuxDyn_ptcone30 = 0;
   PhotonsAuxDyn_Rhad = 0;
   PhotonsAuxDyn_E7x7_Lr1 = 0;
   PhotonsAuxDyn_topoetcone20 = 0;
   PhotonsAuxDyn_ptcone40 = 0;
   PhotonsAuxDyn_Rhad1 = 0;
   PhotonsAuxDyn_E7x7_Lr2 = 0;
   PhotonsAuxDyn_topoetcone30 = 0;
   PhotonsAuxDyn_ptvarcone20 = 0;
   PhotonsAuxDyn_E7x7_Lr3 = 0;
   PhotonsAuxDyn_DeltaE = 0;
   PhotonsAuxDyn_ptvarcone40 = 0;
   PhotonsAuxDyn_ptvarcone30 = 0;
   PhotonsAuxDyn_E7x11_Lr0 = 0;
   PhotonsAuxDyn_E7x11_Lr1 = 0;
   PhotonsAuxDyn_E_Lr0_HiG = 0;
   PhotonsAuxDyn_E7x11_Lr2 = 0;
   PhotonsAuxDyn_E_Lr1_HiG = 0;
   PhotonsAuxDyn_E7x11_Lr3 = 0;
   PhotonsAuxDyn_truthOrigin = 0;
   PhotonsAuxDyn_E_Lr2_HiG = 0;
   PhotonsAuxDyn_E_Lr3_HiG = 0;
   PhotonsAuxDyn_truthType = 0;
   PhotonsAuxDyn_pt = 0;
   PhotonsAuxDyn_E_Lr0_MedG = 0;
   PhotonsAuxDyn_eta = 0;
   PhotonsAuxDyn_E_Lr1_MedG = 0;
   PhotonsAuxDyn_phi = 0;
   PhotonsAuxDyn_E_Lr2_MedG = 0;
   PhotonsAuxDyn_m = 0;
   PhotonsAuxDyn_E_Lr3_MedG = 0;
   PhotonsAuxDyn_E_Lr0_LowG = 0;
   PhotonsAuxDyn_E_Lr1_LowG = 0;
   PhotonsAuxDyn_E_Lr2_LowG = 0;
   PhotonsAuxDyn_E_Lr3_LowG = 0;
   PhotonsAuxDyn_nCells_Lr0_HiG = 0;
   PhotonsAuxDyn_nCells_Lr1_HiG = 0;
   PhotonsAuxDyn_nCells_Lr2_HiG = 0;
   PhotonsAuxDyn_nCells_Lr3_HiG = 0;
   PhotonsAuxDyn_nCells_Lr0_MedG = 0;
   PhotonsAuxDyn_author = 0;
   PhotonsAuxDyn_Loose = 0;
   PhotonsAuxDyn_nCells_Lr1_MedG = 0;
   PhotonsAuxDyn_nCells_Lr2_MedG = 0;
   PhotonsAuxDyn_nCells_Lr3_MedG = 0;
   PhotonsAuxDyn_Tight = 0;
   PhotonsAuxDyn_nCells_Lr0_LowG = 0;
   PhotonsAuxDyn_nCells_Lr1_LowG = 0;
   PhotonsAuxDyn_nCells_Lr2_LowG = 0;
   PhotonsAuxDyn_nCells_Lr3_LowG = 0;
   PhotonsAuxDyn_e233 = 0;
   PhotonsAuxDyn_e237 = 0;
   PhotonsAuxDyn_e2tsts1 = 0;
   PhotonsAuxDyn_emaxs1 = 0;
   PhotonsAuxDyn_emins1 = 0;
   PhotonsAuxDyn_etcone20ptCorrection = 0;
   PhotonsAuxDyn_etcone30ptCorrection = 0;
   PhotonsAuxDyn_etcone40ptCorrection = 0;
   PhotonsAuxDyn_ethad = 0;
   PhotonsAuxDyn_ethad1 = 0;
   PhotonsAuxDyn_topoetcone20ptCorrection = 0;
   PhotonsAuxDyn_topoetcone30ptCorrection = 0;
   PhotonsAuxDyn_topoetcone40ptCorrection = 0;
   PhotonsAuxDyn_topoetcone40 = 0;
   PhotonsAuxDyn_caloClusterLinks = 0;
   PhotonsAuxDyn_OQ = 0;
   PhotonsAuxDyn_f1 = 0;
   PhotonsAuxDyn_f3 = 0;
   PrimaryVerticesAuxDyn_vertexType = 0;
   PrimaryVerticesAuxDyn_sumPt2 = 0;
   PrimaryVerticesAuxDyn_neutralParticleLinks = 0;
   PrimaryVerticesAuxDyn_x = 0;
   PrimaryVerticesAuxDyn_y = 0;
   PrimaryVerticesAuxDyn_z = 0;
   PrimaryVerticesAuxDyn_trackParticleLinks = 0;
   TauJetsAuxDyn_shotPFOLinks = 0;
   TauJetsAuxDyn_chargedPFOLinks = 0;
   TauJetsAuxDyn_neutralPFOLinks = 0;
   TauJetsAuxDyn_eta_combined = 0;
   TauJetsAuxDyn_pi0PFOLinks = 0;
   TauJetsAuxDyn_protoChargedPFOLinks = 0;
   TauJetsAuxDyn_protoNeutralPFOLinks = 0;
   TauJetsAuxDyn_protoPi0PFOLinks = 0;
   TauJetsAuxDyn_m_combined = 0;
   TauJetsAuxDyn_phi_combined = 0;
   TauJetsAuxDyn_pt_combined = 0;
   TauJetsAuxDyn_ptFinalCalib = 0;
   TauJetsAuxDyn_etaFinalCalib = 0;
   TauJetsAuxDyn_phiFinalCalib = 0;
   TauJetsAuxDyn_mFinalCalib = 0;
   TauJetsAuxDyn_pt = 0;
   TauJetsAuxDyn_eta = 0;
   TauJetsAuxDyn_BDTJetScore = 0;
   TauJetsAuxDyn_phi = 0;
   TauJetsAuxDyn_BDTEleScore = 0;
   TauJetsAuxDyn_m = 0;
   TauJetsAuxDyn_EleMatchLikelihoodScore = 0;
   TauJetsAuxDyn_charge = 0;
   TauJetsAuxDyn_BDTJetScoreSigTrans = 0;
   TauJetsAuxDyn_isTauFlags = 0;
   TauJetsAuxDyn_BDTEleScoreSigTrans = 0;
   TauJetsAuxDyn_tauTrackLinks = 0;
   TauJetsAuxDyn_hadronicPFOLinks = 0;
   TauJetsAuxDyn_PanTau_DecayMode = 0;
   TauTracksAuxDyn_flagSet = 0;
   TauTracksAuxDyn_bdtScores = 0;
   TauTracksAuxDyn_trackLinks = 0;
   TauTracksAuxDyn_pt = 0;
   TauTracksAuxDyn_eta = 0;
   TauTracksAuxDyn_phi = 0;
   TruthEventsAuxDyn_XF2 = 0;
   TruthEventsAuxDyn_truthParticleLinks = 0;
   TruthEventsAuxDyn_truthVertexLinks = 0;
   TruthEventsAuxDyn_weights = 0;
   TruthEventsAuxDyn_crossSection = 0;
   TruthEventsAuxDyn_crossSectionError = 0;
   TruthEventsAuxDyn_PDFID1 = 0;
   TruthEventsAuxDyn_PDFID2 = 0;
   TruthEventsAuxDyn_PDGID1 = 0;
   TruthEventsAuxDyn_PDGID2 = 0;
   TruthEventsAuxDyn_Q = 0;
   TruthEventsAuxDyn_X1 = 0;
   TruthEventsAuxDyn_X2 = 0;
   TruthEventsAuxDyn_XF1 = 0;
   TruthParticlesAuxDyn_px = 0;
   TruthParticlesAuxDyn_polarizationPhi = 0;
   TruthParticlesAuxDyn_py = 0;
   TruthParticlesAuxDyn_polarizationTheta = 0;
   TruthParticlesAuxDyn_pz = 0;
   TruthParticlesAuxDyn_e = 0;
   TruthParticlesAuxDyn_prodR = 0;
   TruthParticlesAuxDyn_prodZ = 0;
   TruthParticlesAuxDyn_pdgId = 0;
   TruthParticlesAuxDyn_barcode = 0;
   TruthParticlesAuxDyn_z0st = 0;
   TruthParticlesAuxDyn_status = 0;
   TruthParticlesAuxDyn_d0 = 0;
   TruthParticlesAuxDyn_z0 = 0;
   TruthParticlesAuxDyn_theta = 0;
   TruthParticlesAuxDyn_phi = 0;
   TruthParticlesAuxDyn_m = 0;
   TruthParticlesAuxDyn_qOverP = 0;
   TruthVerticesAuxDyn_incomingParticleLinks = 0;
   TruthVerticesAuxDyn_outgoingParticleLinks = 0;
   TruthVerticesAuxDyn_id = 0;
   TruthVerticesAuxDyn_t = 0;
   TruthVerticesAuxDyn_x = 0;
   TruthVerticesAuxDyn_barcode = 0;
   TruthVerticesAuxDyn_y = 0;
   TruthVerticesAuxDyn_z = 0;
   egammaClustersAuxDyn_e_sampl = 0;
   egammaClustersAuxDyn_time = 0;
   egammaClustersAuxDyn_clusterSize = 0;
   egammaClustersAuxDyn_eta0 = 0;
   egammaClustersAuxDyn_phi0 = 0;
   egammaClustersAuxDyn_rawE = 0;
   egammaClustersAuxDyn_rawEta = 0;
   egammaClustersAuxDyn_rawPhi = 0;
   egammaClustersAuxDyn_rawM = 0;
   egammaClustersAuxDyn_altE = 0;
   egammaClustersAuxDyn_altEta = 0;
   egammaClustersAuxDyn_altPhi = 0;
   egammaClustersAuxDyn_altM = 0;
   egammaClustersAuxDyn_calE = 0;
   egammaClustersAuxDyn_calEta = 0;
   egammaClustersAuxDyn_calPhi = 0;
   egammaClustersAuxDyn_calM = 0;
   egammaClustersAuxDyn_BadChannelList = 0;
   egammaClustersAuxDyn_ETA1CALOFRAME = 0;
   egammaClustersAuxDyn_ETA2CALOFRAME = 0;
   egammaClustersAuxDyn_ETACALOFRAME = 0;
   egammaClustersAuxDyn_PHI1CALOFRAME = 0;
   egammaClustersAuxDyn_PHI2CALOFRAME = 0;
   egammaClustersAuxDyn_PHICALOFRAME = 0;
   egammaClustersAuxDyn_constituentClusterLinks = 0;
   egammaClustersAuxDyn_emax_sampl = 0;
   egammaClustersAuxDyn_eta_sampl = 0;
   egammaClustersAuxDyn_etamax_sampl = 0;
   egammaClustersAuxDyn_phi_sampl = 0;
   egammaClustersAuxDyn_phimax_sampl = 0;
   egammaTruthParticlesAuxDyn_px = 0;
   egammaTruthParticlesAuxDyn_py = 0;
   egammaTruthParticlesAuxDyn_pz = 0;
   egammaTruthParticlesAuxDyn_e = 0;
   egammaTruthParticlesAuxDyn_barcode = 0;
   egammaTruthParticlesAuxDyn_pdgId = 0;
   egammaTruthParticlesAuxDyn_status = 0;
   egammaTruthParticlesAuxDyn_etcone20 = 0;
   egammaTruthParticlesAuxDyn_truthOrigin = 0;
   egammaTruthParticlesAuxDyn_etcone30 = 0;
   egammaTruthParticlesAuxDyn_etcone40 = 0;
   egammaTruthParticlesAuxDyn_truthType = 0;
   egammaTruthParticlesAuxDyn_ptcone20 = 0;
   egammaTruthParticlesAuxDyn_m = 0;
   egammaTruthParticlesAuxDyn_ptcone30 = 0;
   egammaTruthParticlesAuxDyn_ptcone40 = 0;
   MuonsAuxDyn_cscEtaHits = 0;
   MuonsAuxDyn_cscUnspoiledEtaHits = 0;
   MuonsAuxDyn_etcone20 = 0;
   MuonsAuxDyn_etcone30 = 0;
   MuonsAuxDyn_etcone40 = 0;
   MuonsAuxDyn_ptcone20 = 0;
   MuonsAuxDyn_ptcone30 = 0;
   MuonsAuxDyn_ptcone40 = 0;
   MuonsAuxDyn_ptvarcone20 = 0;
   MuonsAuxDyn_ptvarcone40 = 0;
   MuonsAuxDyn_ptvarcone30 = 0;
   MuonsAuxDyn_muonSegmentLinks = 0;
   MuonsAuxDyn_pt = 0;
   MuonsAuxDyn_spectrometerFieldIntegral = 0;
   MuonsAuxDyn_eta = 0;
   MuonsAuxDyn_scatteringCurvatureSignificance = 0;
   MuonsAuxDyn_phi = 0;
   MuonsAuxDyn_scatteringNeighbourSignificance = 0;
   MuonsAuxDyn_momentumBalanceSignificance = 0;
   MuonsAuxDyn_allAuthors = 0;
   MuonsAuxDyn_author = 0;
   MuonsAuxDyn_muonType = 0;
   MuonsAuxDyn_quality = 0;
   MuonsAuxDyn_energyLossType = 0;
   MuonsAuxDyn_CaloLRLikelihood = 0;
   MuonsAuxDyn_EnergyLoss = 0;
   MuonsAuxDyn_innerSmallHits = 0;
   MuonsAuxDyn_innerLargeHits = 0;
   MuonsAuxDyn_middleSmallHits = 0;
   MuonsAuxDyn_middleLargeHits = 0;
   MuonsAuxDyn_outerSmallHits = 0;
   MuonsAuxDyn_outerLargeHits = 0;
   MuonsAuxDyn_extendedSmallHits = 0;
   MuonsAuxDyn_extendedLargeHits = 0;
   MuonsAuxDyn_innerSmallHoles = 0;
   MuonsAuxDyn_CaloMuonIDTag = 0;
   MuonsAuxDyn_innerLargeHoles = 0;
   MuonsAuxDyn_middleSmallHoles = 0;
   MuonsAuxDyn_middleLargeHoles = 0;
   MuonsAuxDyn_outerSmallHoles = 0;
   MuonsAuxDyn_outerLargeHoles = 0;
   MuonsAuxDyn_extendedSmallHoles = 0;
   MuonsAuxDyn_extendedLargeHoles = 0;
   MuonsAuxDyn_charge = 0;
   MuonsAuxDyn_numberOfPrecisionLayers = 0;
   MuonsAuxDyn_numberOfPrecisionHoleLayers = 0;
   MuonsAuxDyn_DFCommonGoodMuon = 0;
   MuonsAuxDyn_DFCommonMuonsPreselection = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers = 0;
   CombinedMuonTrackParticlesAuxDyn_chiSquared = 0;
   CombinedMuonTrackParticlesAuxDyn_numberDoF = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits = 0;
   CombinedMuonTrackParticlesAuxDyn_phi = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   CombinedMuonTrackParticlesAuxDyn_d0 = 0;
   CombinedMuonTrackParticlesAuxDyn_z0 = 0;
   CombinedMuonTrackParticlesAuxDyn_theta = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits = 0;
   CombinedMuonTrackParticlesAuxDyn_qOverP = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers = 0;
   CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrix = 0;
   CombinedMuonTrackParticlesAuxDyn_vz = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_phi = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_d0 = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_z0 = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_theta = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_qOverP = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrix = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_vz = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers = 0;
   MuonTruthParticlesAuxDyn_px = 0;
   MuonTruthParticlesAuxDyn_py = 0;
   MuonTruthParticlesAuxDyn_pz = 0;
   MuonTruthParticlesAuxDyn_e = 0;
   MuonTruthParticlesAuxDyn_pdgId = 0;
   MuonTruthParticlesAuxDyn_status = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("McEventInfo", &McEventInfo, &b_McEventInfo);
   fChain->SetBranchAddress("AODCellContainer", &AODCellContainer, &b_AODCellContainer);
   fChain->SetBranchAddress("TrigConfKeys", &TrigConfKeys, &b_TrigConfKeys);
   fChain->SetBranchAddress("EventInfoAux.xAOD::AuxInfoBase", &EventInfoAux_xAOD__AuxInfoBase, &b_EventInfoAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("EventInfoAux.runNumber", &EventInfoAux_runNumber, &b_EventInfoAux_runNumber);
   fChain->SetBranchAddress("EventInfoAux.eventNumber", &EventInfoAux_eventNumber, &b_EventInfoAux_eventNumber);
   fChain->SetBranchAddress("EventInfoAux.lumiBlock", &EventInfoAux_lumiBlock, &b_EventInfoAux_lumiBlock);
   fChain->SetBranchAddress("EventInfoAux.timeStamp", &EventInfoAux_timeStamp, &b_EventInfoAux_timeStamp);
   fChain->SetBranchAddress("EventInfoAux.timeStampNSOffset", &EventInfoAux_timeStampNSOffset, &b_EventInfoAux_timeStampNSOffset);
   fChain->SetBranchAddress("EventInfoAux.bcid", &EventInfoAux_bcid, &b_EventInfoAux_bcid);
   fChain->SetBranchAddress("EventInfoAux.detectorMask0", &EventInfoAux_detectorMask0, &b_EventInfoAux_detectorMask0);
   fChain->SetBranchAddress("EventInfoAux.detectorMask1", &EventInfoAux_detectorMask1, &b_EventInfoAux_detectorMask1);
   fChain->SetBranchAddress("EventInfoAux.detectorMask2", &EventInfoAux_detectorMask2, &b_EventInfoAux_detectorMask2);
   fChain->SetBranchAddress("EventInfoAux.detectorMask3", &EventInfoAux_detectorMask3, &b_EventInfoAux_detectorMask3);
   fChain->SetBranchAddress("EventInfoAux.detDescrTags", &EventInfoAux_detDescrTags, &b_EventInfoAux_detDescrTags);
   fChain->SetBranchAddress("EventInfoAux.eventTypeBitmask", &EventInfoAux_eventTypeBitmask, &b_EventInfoAux_eventTypeBitmask);
   fChain->SetBranchAddress("EventInfoAux.statusElement", &EventInfoAux_statusElement, &b_EventInfoAux_statusElement);
   fChain->SetBranchAddress("EventInfoAux.extendedLevel1ID", &EventInfoAux_extendedLevel1ID, &b_EventInfoAux_extendedLevel1ID);
   fChain->SetBranchAddress("EventInfoAux.level1TriggerType", &EventInfoAux_level1TriggerType, &b_EventInfoAux_level1TriggerType);
   fChain->SetBranchAddress("EventInfoAux.streamTagNames", &EventInfoAux_streamTagNames, &b_EventInfoAux_streamTagNames);
   fChain->SetBranchAddress("EventInfoAux.streamTagTypes", &EventInfoAux_streamTagTypes, &b_EventInfoAux_streamTagTypes);
   fChain->SetBranchAddress("EventInfoAux.streamTagObeysLumiblock", &EventInfoAux_streamTagObeysLumiblock, &b_EventInfoAux_streamTagObeysLumiblock);
   fChain->SetBranchAddress("EventInfoAux.actualInteractionsPerCrossing", &EventInfoAux_actualInteractionsPerCrossing, &b_EventInfoAux_actualInteractionsPerCrossing);
   fChain->SetBranchAddress("EventInfoAux.averageInteractionsPerCrossing", &EventInfoAux_averageInteractionsPerCrossing, &b_EventInfoAux_averageInteractionsPerCrossing);
   fChain->SetBranchAddress("EventInfoAux.pixelFlags", &EventInfoAux_pixelFlags, &b_EventInfoAux_pixelFlags);
   fChain->SetBranchAddress("EventInfoAux.sctFlags", &EventInfoAux_sctFlags, &b_EventInfoAux_sctFlags);
   fChain->SetBranchAddress("EventInfoAux.trtFlags", &EventInfoAux_trtFlags, &b_EventInfoAux_trtFlags);
   fChain->SetBranchAddress("EventInfoAux.larFlags", &EventInfoAux_larFlags, &b_EventInfoAux_larFlags);
   fChain->SetBranchAddress("EventInfoAux.tileFlags", &EventInfoAux_tileFlags, &b_EventInfoAux_tileFlags);
   fChain->SetBranchAddress("EventInfoAux.muonFlags", &EventInfoAux_muonFlags, &b_EventInfoAux_muonFlags);
   fChain->SetBranchAddress("EventInfoAux.forwardDetFlags", &EventInfoAux_forwardDetFlags, &b_EventInfoAux_forwardDetFlags);
   fChain->SetBranchAddress("EventInfoAux.coreFlags", &EventInfoAux_coreFlags, &b_EventInfoAux_coreFlags);
   fChain->SetBranchAddress("EventInfoAux.backgroundFlags", &EventInfoAux_backgroundFlags, &b_EventInfoAux_backgroundFlags);
   fChain->SetBranchAddress("EventInfoAux.lumiFlags", &EventInfoAux_lumiFlags, &b_EventInfoAux_lumiFlags);
   fChain->SetBranchAddress("EventInfoAux.beamPosX", &EventInfoAux_beamPosX, &b_EventInfoAux_beamPosX);
   fChain->SetBranchAddress("EventInfoAux.beamPosY", &EventInfoAux_beamPosY, &b_EventInfoAux_beamPosY);
   fChain->SetBranchAddress("EventInfoAux.beamPosZ", &EventInfoAux_beamPosZ, &b_EventInfoAux_beamPosZ);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaX", &EventInfoAux_beamPosSigmaX, &b_EventInfoAux_beamPosSigmaX);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaY", &EventInfoAux_beamPosSigmaY, &b_EventInfoAux_beamPosSigmaY);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaZ", &EventInfoAux_beamPosSigmaZ, &b_EventInfoAux_beamPosSigmaZ);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaXY", &EventInfoAux_beamPosSigmaXY, &b_EventInfoAux_beamPosSigmaXY);
   fChain->SetBranchAddress("EventInfoAux.beamTiltXZ", &EventInfoAux_beamTiltXZ, &b_EventInfoAux_beamTiltXZ);
   fChain->SetBranchAddress("EventInfoAux.beamTiltYZ", &EventInfoAux_beamTiltYZ, &b_EventInfoAux_beamTiltYZ);
   fChain->SetBranchAddress("EventInfoAux.beamStatus", &EventInfoAux_beamStatus, &b_EventInfoAux_beamStatus);
   fChain->SetBranchAddress("xTrigDecisionAux.xAOD::AuxInfoBase", &xTrigDecisionAux_xAOD__AuxInfoBase, &b_xTrigDecisionAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("xTrigDecisionAux.smk", &xTrigDecisionAux_smk, &b_xTrigDecisionAux_smk);
   fChain->SetBranchAddress("xTrigDecisionAux.bgCode", &xTrigDecisionAux_bgCode, &b_xTrigDecisionAux_bgCode);
   fChain->SetBranchAddress("xTrigDecisionAux.tav", &xTrigDecisionAux_tav, &b_xTrigDecisionAux_tav);
   fChain->SetBranchAddress("xTrigDecisionAux.tap", &xTrigDecisionAux_tap, &b_xTrigDecisionAux_tap);
   fChain->SetBranchAddress("xTrigDecisionAux.tbp", &xTrigDecisionAux_tbp, &b_xTrigDecisionAux_tbp);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2ErrorBits", &xTrigDecisionAux_lvl2ErrorBits, &b_xTrigDecisionAux_lvl2ErrorBits);
   fChain->SetBranchAddress("xTrigDecisionAux.efErrorBits", &xTrigDecisionAux_efErrorBits, &b_xTrigDecisionAux_efErrorBits);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2Truncated", &xTrigDecisionAux_lvl2Truncated, &b_xTrigDecisionAux_lvl2Truncated);
   fChain->SetBranchAddress("xTrigDecisionAux.efTruncated", &xTrigDecisionAux_efTruncated, &b_xTrigDecisionAux_efTruncated);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2PassedPhysics", &xTrigDecisionAux_lvl2PassedPhysics, &b_xTrigDecisionAux_lvl2PassedPhysics);
   fChain->SetBranchAddress("xTrigDecisionAux.efPassedPhysics", &xTrigDecisionAux_efPassedPhysics, &b_xTrigDecisionAux_efPassedPhysics);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2PassedRaw", &xTrigDecisionAux_lvl2PassedRaw, &b_xTrigDecisionAux_lvl2PassedRaw);
   fChain->SetBranchAddress("xTrigDecisionAux.efPassedRaw", &xTrigDecisionAux_efPassedRaw, &b_xTrigDecisionAux_efPassedRaw);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2PassedThrough", &xTrigDecisionAux_lvl2PassedThrough, &b_xTrigDecisionAux_lvl2PassedThrough);
   fChain->SetBranchAddress("xTrigDecisionAux.efPassedThrough", &xTrigDecisionAux_efPassedThrough, &b_xTrigDecisionAux_efPassedThrough);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2Prescaled", &xTrigDecisionAux_lvl2Prescaled, &b_xTrigDecisionAux_lvl2Prescaled);
   fChain->SetBranchAddress("xTrigDecisionAux.efPrescaled", &xTrigDecisionAux_efPrescaled, &b_xTrigDecisionAux_efPrescaled);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2Resurrected", &xTrigDecisionAux_lvl2Resurrected, &b_xTrigDecisionAux_lvl2Resurrected);
   fChain->SetBranchAddress("xTrigDecisionAux.efResurrected", &xTrigDecisionAux_efResurrected, &b_xTrigDecisionAux_efResurrected);
   fChain->SetBranchAddress("EventInfo", &EventInfo, &b_EventInfo);
   fChain->SetBranchAddress("TrigNavigationAux.xAOD::AuxInfoBase", &TrigNavigationAux_xAOD__AuxInfoBase, &b_TrigNavigationAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("TrigNavigationAux.serialized", &TrigNavigationAux_serialized, &b_TrigNavigationAux_serialized);
   fChain->SetBranchAddress("xTrigDecision", &xTrigDecision, &b_xTrigDecision);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.xAOD::AuxContainerBase", &METAssoc_AntiKt4EMTopoAux_xAOD__AuxContainerBase, &b_METAssoc_AntiKt4EMTopoAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.jetLink", &METAssoc_AntiKt4EMTopoAux_jetLink, &b_METAssoc_AntiKt4EMTopoAux_jetLink);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.objectLinks", &METAssoc_AntiKt4EMTopoAux_objectLinks, &b_METAssoc_AntiKt4EMTopoAux_objectLinks);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.calpx", &METAssoc_AntiKt4EMTopoAux_calpx, &b_METAssoc_AntiKt4EMTopoAux_calpx);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.calpy", &METAssoc_AntiKt4EMTopoAux_calpy, &b_METAssoc_AntiKt4EMTopoAux_calpy);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.calpz", &METAssoc_AntiKt4EMTopoAux_calpz, &b_METAssoc_AntiKt4EMTopoAux_calpz);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.cale", &METAssoc_AntiKt4EMTopoAux_cale, &b_METAssoc_AntiKt4EMTopoAux_cale);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.calsumpt", &METAssoc_AntiKt4EMTopoAux_calsumpt, &b_METAssoc_AntiKt4EMTopoAux_calsumpt);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.calkey", &METAssoc_AntiKt4EMTopoAux_calkey, &b_METAssoc_AntiKt4EMTopoAux_calkey);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.trkpx", &METAssoc_AntiKt4EMTopoAux_trkpx, &b_METAssoc_AntiKt4EMTopoAux_trkpx);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.trkpy", &METAssoc_AntiKt4EMTopoAux_trkpy, &b_METAssoc_AntiKt4EMTopoAux_trkpy);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.trkpz", &METAssoc_AntiKt4EMTopoAux_trkpz, &b_METAssoc_AntiKt4EMTopoAux_trkpz);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.trke", &METAssoc_AntiKt4EMTopoAux_trke, &b_METAssoc_AntiKt4EMTopoAux_trke);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.trksumpt", &METAssoc_AntiKt4EMTopoAux_trksumpt, &b_METAssoc_AntiKt4EMTopoAux_trksumpt);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.trkkey", &METAssoc_AntiKt4EMTopoAux_trkkey, &b_METAssoc_AntiKt4EMTopoAux_trkkey);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.jettrkpx", &METAssoc_AntiKt4EMTopoAux_jettrkpx, &b_METAssoc_AntiKt4EMTopoAux_jettrkpx);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.jettrkpy", &METAssoc_AntiKt4EMTopoAux_jettrkpy, &b_METAssoc_AntiKt4EMTopoAux_jettrkpy);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.jettrkpz", &METAssoc_AntiKt4EMTopoAux_jettrkpz, &b_METAssoc_AntiKt4EMTopoAux_jettrkpz);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.jettrke", &METAssoc_AntiKt4EMTopoAux_jettrke, &b_METAssoc_AntiKt4EMTopoAux_jettrke);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.jettrksumpt", &METAssoc_AntiKt4EMTopoAux_jettrksumpt, &b_METAssoc_AntiKt4EMTopoAux_jettrksumpt);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.overlapIndices", &METAssoc_AntiKt4EMTopoAux_overlapIndices, &b_METAssoc_AntiKt4EMTopoAux_overlapIndices);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.overlapTypes", &METAssoc_AntiKt4EMTopoAux_overlapTypes, &b_METAssoc_AntiKt4EMTopoAux_overlapTypes);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.isMisc", &METAssoc_AntiKt4EMTopoAux_isMisc, &b_METAssoc_AntiKt4EMTopoAux_isMisc);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopo", &METAssoc_AntiKt4EMTopo, &b_METAssoc_AntiKt4EMTopo);
   fChain->SetBranchAddress("HLT_xAOD__RoiDescriptorStore_initialRoI", &HLT_xAOD__RoiDescriptorStore_initialRoI, &b_HLT_xAOD__RoiDescriptorStore_initialRoI);
   fChain->SetBranchAddress("TrigNavigation", &TrigNavigation, &b_TrigNavigation);
   fChain->SetBranchAddress("HLT_xAOD__RoiDescriptorStore_initialRoIAux.xAOD::AuxInfoBase", &HLT_xAOD__RoiDescriptorStore_initialRoIAux_xAOD__AuxInfoBase, &b_HLT_xAOD__RoiDescriptorStore_initialRoIAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("HLT_xAOD__RoiDescriptorStore_initialRoIAux.serialised", &HLT_xAOD__RoiDescriptorStore_initialRoIAux_serialised, &b_HLT_xAOD__RoiDescriptorStore_initialRoIAux_serialised);
   fChain->SetBranchAddress("Kt4EMTopoOriginEventShapeAux.xAOD::AuxInfoBase", &Kt4EMTopoOriginEventShapeAux_xAOD__AuxInfoBase, &b_Kt4EMTopoOriginEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("NeutralParticleFlowIsoCentralEventShapeAux.xAOD::AuxInfoBase", &NeutralParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase, &b_NeutralParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("NeutralParticleFlowIsoForwardEventShapeAux.xAOD::AuxInfoBase", &NeutralParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase, &b_NeutralParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("ParticleFlowIsoCentralEventShapeAux.xAOD::AuxInfoBase", &ParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase, &b_ParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("ParticleFlowIsoForwardEventShapeAux.xAOD::AuxInfoBase", &ParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase, &b_ParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("TopoClusterIsoCentralEventShapeAux.xAOD::AuxInfoBase", &TopoClusterIsoCentralEventShapeAux_xAOD__AuxInfoBase, &b_TopoClusterIsoCentralEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("TopoClusterIsoForwardEventShapeAux.xAOD::AuxInfoBase", &TopoClusterIsoForwardEventShapeAux_xAOD__AuxInfoBase, &b_TopoClusterIsoForwardEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("Kt4EMTopoOriginEventShape", &Kt4EMTopoOriginEventShape, &b_Kt4EMTopoOriginEventShape);
   fChain->SetBranchAddress("NeutralParticleFlowIsoCentralEventShape", &NeutralParticleFlowIsoCentralEventShape, &b_NeutralParticleFlowIsoCentralEventShape);
   fChain->SetBranchAddress("NeutralParticleFlowIsoForwardEventShape", &NeutralParticleFlowIsoForwardEventShape, &b_NeutralParticleFlowIsoForwardEventShape);
   fChain->SetBranchAddress("ParticleFlowIsoCentralEventShape", &ParticleFlowIsoCentralEventShape, &b_ParticleFlowIsoCentralEventShape);
   fChain->SetBranchAddress("ParticleFlowIsoForwardEventShape", &ParticleFlowIsoForwardEventShape, &b_ParticleFlowIsoForwardEventShape);
   fChain->SetBranchAddress("TopoClusterIsoCentralEventShape", &TopoClusterIsoCentralEventShape, &b_TopoClusterIsoCentralEventShape);
   fChain->SetBranchAddress("TopoClusterIsoForwardEventShape", &TopoClusterIsoForwardEventShape, &b_TopoClusterIsoForwardEventShape);
   fChain->SetBranchAddress("LVL1EmTauRoIs", &LVL1EmTauRoIs, &b_LVL1EmTauRoIs);
   fChain->SetBranchAddress("Electrons", &Electrons, &b_Electrons);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_Electrons", &HLT_xAOD__ElectronContainer_egamma_Electrons, &b_HLT_xAOD__ElectronContainer_egamma_Electrons);
   fChain->SetBranchAddress("NewSwElectrons", &NewSwElectrons, &b_NewSwElectrons);
   fChain->SetBranchAddress("GSFConversionVertices", &GSFConversionVertices, &b_GSFConversionVertices);
   fChain->SetBranchAddress("PrimaryVertices", &PrimaryVertices, &b_PrimaryVertices);
   fChain->SetBranchAddress("HLT_TrigRoiDescriptorCollection_initialRoI", &HLT_TrigRoiDescriptorCollection_initialRoI, &b_HLT_TrigRoiDescriptorCollection_initialRoI);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopo", &MET_Core_AntiKt4EMTopo, &b_MET_Core_AntiKt4EMTopo);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopo", &MET_Reference_AntiKt4EMTopo, &b_MET_Reference_AntiKt4EMTopo);
   fChain->SetBranchAddress("MET_Track", &MET_Track, &b_MET_Track);
   fChain->SetBranchAddress("MET_Truth", &MET_Truth, &b_MET_Truth);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_Photons", &HLT_xAOD__PhotonContainer_egamma_Photons, &b_HLT_xAOD__PhotonContainer_egamma_Photons);
   fChain->SetBranchAddress("Photons", &Photons, &b_Photons);
   fChain->SetBranchAddress("HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFex", &HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFex, &b_HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFex);
   fChain->SetBranchAddress("HLT_xAOD__TrigPassBitsContainer_passbits", &HLT_xAOD__TrigPassBitsContainer_passbits, &b_HLT_xAOD__TrigPassBitsContainer_passbits);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFex", &HLT_xAOD__TrigElectronContainer_L2ElectronFex, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFex);
   fChain->SetBranchAddress("MuonSegments", &MuonSegments, &b_MuonSegments);
   fChain->SetBranchAddress("egammaClusters_links", &egammaClusters_links, &b_egammaClusters_links);
   fChain->SetBranchAddress("TauJets", &TauJets, &b_TauJets);
   fChain->SetBranchAddress("Muons", &Muons, &b_Muons);
   fChain->SetBranchAddress("TruthEvents", &TruthEvents, &b_TruthEvents);
   fChain->SetBranchAddress("CaloCalTopoClusters", &CaloCalTopoClusters, &b_CaloCalTopoClusters);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFex", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFex, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFex);
   fChain->SetBranchAddress("egammaClusters", &egammaClusters, &b_egammaClusters);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.", &BTagging_AntiKt4EMTopoAux_, &b_BTagging_AntiKt4EMTopoAux_);
   fChain->SetBranchAddress("CaloCalTopoClustersAux.", &CaloCalTopoClustersAux_, &b_CaloCalTopoClustersAux_);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.", &CombinedMuonTrackParticlesAux_, &b_CombinedMuonTrackParticlesAux_);
   fChain->SetBranchAddress("ElectronsAux.", &ElectronsAux_, &b_ElectronsAux_);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.", &ExtrapolatedMuonTrackParticlesAux_, &b_ExtrapolatedMuonTrackParticlesAux_);
   fChain->SetBranchAddress("GSFConversionVerticesAux.", &GSFConversionVerticesAux_, &b_GSFConversionVerticesAux_);
   fChain->SetBranchAddress("GSFTrackParticlesAux.", &GSFTrackParticlesAux_, &b_GSFTrackParticlesAux_);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAux.", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAux_, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAux_);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAux.", &HLT_xAOD__ElectronContainer_egamma_ElectronsAux_, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAux_);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAux.", &HLT_xAOD__PhotonContainer_egamma_PhotonsAux_, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAux_);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAux.", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAux_, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAux_);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAux.", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAux_, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAux_);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAux.", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAux_, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAux_);
   fChain->SetBranchAddress("HLT_xAOD__TrigPassBitsContainer_passbitsAux.", &HLT_xAOD__TrigPassBitsContainer_passbitsAux_, &b_HLT_xAOD__TrigPassBitsContainer_passbitsAux_);
   fChain->SetBranchAddress("HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAux.", &HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAux_, &b_HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAux_);
   fChain->SetBranchAddress("HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAux.", &HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAux_, &b_HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAux_);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAux.", &InDetForwardTrackParticlesAux_, &b_InDetForwardTrackParticlesAux_);
   fChain->SetBranchAddress("InDetTrackParticlesAux.", &InDetTrackParticlesAux_, &b_InDetTrackParticlesAux_);
   fChain->SetBranchAddress("LVL1EmTauRoIsAux.", &LVL1EmTauRoIsAux_, &b_LVL1EmTauRoIsAux_);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAux.", &MET_Core_AntiKt4EMTopoAux_, &b_MET_Core_AntiKt4EMTopoAux_);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopoAux.", &MET_Reference_AntiKt4EMTopoAux_, &b_MET_Reference_AntiKt4EMTopoAux_);
   fChain->SetBranchAddress("MET_TrackAux.", &MET_TrackAux_, &b_MET_TrackAux_);
   fChain->SetBranchAddress("MET_TruthAux.", &MET_TruthAux_, &b_MET_TruthAux_);
   fChain->SetBranchAddress("MuonSegmentsAux.", &MuonSegmentsAux_, &b_MuonSegmentsAux_);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAux.", &MuonSpectrometerTrackParticlesAux_, &b_MuonSpectrometerTrackParticlesAux_);
   fChain->SetBranchAddress("MuonTruthParticlesAux.", &MuonTruthParticlesAux_, &b_MuonTruthParticlesAux_);
   fChain->SetBranchAddress("MuonsAux.", &MuonsAux_, &b_MuonsAux_);
   fChain->SetBranchAddress("NewSwElectronsAux.", &NewSwElectronsAux_, &b_NewSwElectronsAux_);
   fChain->SetBranchAddress("PhotonsAux.", &PhotonsAux_, &b_PhotonsAux_);
   fChain->SetBranchAddress("PrimaryVerticesAux.", &PrimaryVerticesAux_, &b_PrimaryVerticesAux_);
   fChain->SetBranchAddress("TauJetsAux.", &TauJetsAux_, &b_TauJetsAux_);
   fChain->SetBranchAddress("TauTracksAux.", &TauTracksAux_, &b_TauTracksAux_);
   fChain->SetBranchAddress("TruthEventsAux.", &TruthEventsAux_, &b_TruthEventsAux_);
   fChain->SetBranchAddress("TruthParticlesAux.", &TruthParticlesAux_, &b_TruthParticlesAux_);
   fChain->SetBranchAddress("TruthVerticesAux.", &TruthVerticesAux_, &b_TruthVerticesAux_);
   fChain->SetBranchAddress("egammaClustersAux.", &egammaClustersAux_, &b_egammaClustersAux_);
   fChain->SetBranchAddress("egammaTruthParticlesAux.", &egammaTruthParticlesAux_, &b_egammaTruthParticlesAux_);
   fChain->SetBranchAddress("MuonTruthParticles", &MuonTruthParticles, &b_MuonTruthParticles);
   fChain->SetBranchAddress("TruthParticles", &TruthParticles, &b_TruthParticles);
   fChain->SetBranchAddress("egammaTruthParticles", &egammaTruthParticles, &b_egammaTruthParticles);
   fChain->SetBranchAddress("TruthVertices", &TruthVertices, &b_TruthVertices);
   fChain->SetBranchAddress("AntiKt4EMTopoJets", &AntiKt4EMTopoJets, &b_AntiKt4EMTopoJets);
   fChain->SetBranchAddress("AntiKt4LCTopoJets", &AntiKt4LCTopoJets, &b_AntiKt4LCTopoJets);
   fChain->SetBranchAddress("AntiKt4PV0TrackJets", &AntiKt4PV0TrackJets, &b_AntiKt4PV0TrackJets);
   fChain->SetBranchAddress("AntiKt4TruthJets", &AntiKt4TruthJets, &b_AntiKt4TruthJets);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo", &BTagging_AntiKt4EMTopo, &b_BTagging_AntiKt4EMTopo);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgamma", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgamma, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgamma);
   fChain->SetBranchAddress("CombinedMuonTrackParticles", &CombinedMuonTrackParticles, &b_CombinedMuonTrackParticles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticles", &ExtrapolatedMuonTrackParticles, &b_ExtrapolatedMuonTrackParticles);
   fChain->SetBranchAddress("GSFTrackParticles", &GSFTrackParticles, &b_GSFTrackParticles);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrig", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrig, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrig);
   fChain->SetBranchAddress("InDetForwardTrackParticles", &InDetForwardTrackParticles, &b_InDetForwardTrackParticles);
   fChain->SetBranchAddress("InDetTrackParticles", &InDetTrackParticles, &b_InDetTrackParticles);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticles", &MuonSpectrometerTrackParticles, &b_MuonSpectrometerTrackParticles);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.xAOD::AuxContainerBase", &AntiKt4EMTopoJetsAux_xAOD__AuxContainerBase, &b_AntiKt4EMTopoJetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.pt", &AntiKt4EMTopoJetsAux_pt, &b_AntiKt4EMTopoJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.eta", &AntiKt4EMTopoJetsAux_eta, &b_AntiKt4EMTopoJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.phi", &AntiKt4EMTopoJetsAux_phi, &b_AntiKt4EMTopoJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.m", &AntiKt4EMTopoJetsAux_m, &b_AntiKt4EMTopoJetsAux_m);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.constituentLinks", &AntiKt4EMTopoJetsAux_constituentLinks, &b_AntiKt4EMTopoJetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.constituentWeights", &AntiKt4EMTopoJetsAux_constituentWeights, &b_AntiKt4EMTopoJetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAux.xAOD::AuxContainerBase", &AntiKt4PV0TrackJetsAux_xAOD__AuxContainerBase, &b_AntiKt4PV0TrackJetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAux.pt", &AntiKt4PV0TrackJetsAux_pt, &b_AntiKt4PV0TrackJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAux.eta", &AntiKt4PV0TrackJetsAux_eta, &b_AntiKt4PV0TrackJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAux.phi", &AntiKt4PV0TrackJetsAux_phi, &b_AntiKt4PV0TrackJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAux.m", &AntiKt4PV0TrackJetsAux_m, &b_AntiKt4PV0TrackJetsAux_m);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAux.constituentLinks", &AntiKt4PV0TrackJetsAux_constituentLinks, &b_AntiKt4PV0TrackJetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAux.constituentWeights", &AntiKt4PV0TrackJetsAux_constituentWeights, &b_AntiKt4PV0TrackJetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.xAOD::AuxContainerBase", &AntiKt4TruthJetsAux_xAOD__AuxContainerBase, &b_AntiKt4TruthJetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.pt", &AntiKt4TruthJetsAux_pt, &b_AntiKt4TruthJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.eta", &AntiKt4TruthJetsAux_eta, &b_AntiKt4TruthJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.phi", &AntiKt4TruthJetsAux_phi, &b_AntiKt4TruthJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.m", &AntiKt4TruthJetsAux_m, &b_AntiKt4TruthJetsAux_m);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.constituentLinks", &AntiKt4TruthJetsAux_constituentLinks, &b_AntiKt4TruthJetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.constituentWeights", &AntiKt4TruthJetsAux_constituentWeights, &b_AntiKt4TruthJetsAux_constituentWeights);
   fChain->SetBranchAddress("HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgamma", &HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgamma, &b_HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgamma);
   fChain->SetBranchAddress("TauTracks", &TauTracks, &b_TauTracks);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ConeExclCHadronsFinal", &AntiKt4EMTopoJetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKt4EMTopoJetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ConeTruthLabelID", &AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TrackWidthPt1000", &AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000, &b_AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DetectorEta", &AntiKt4EMTopoJetsAuxDyn_DetectorEta, &b_AntiKt4EMTopoJetsAuxDyn_DetectorEta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.EnergyPerSampling", &AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling, &b_AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HECFrac", &AntiKt4EMTopoJetsAuxDyn_HECFrac, &b_AntiKt4EMTopoJetsAuxDyn_HECFrac);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.EMFrac", &AntiKt4EMTopoJetsAuxDyn_EMFrac, &b_AntiKt4EMTopoJetsAuxDyn_EMFrac);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HECQuality", &AntiKt4EMTopoJetsAuxDyn_HECQuality, &b_AntiKt4EMTopoJetsAuxDyn_HECQuality);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FracSamplingMax", &AntiKt4EMTopoJetsAuxDyn_FracSamplingMax, &b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMax);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Width", &AntiKt4EMTopoJetsAuxDyn_Width, &b_AntiKt4EMTopoJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DFCommonJets_jetClean_LooseBad", &AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad, &b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FracSamplingMaxIndex", &AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex, &b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DFCommonJets_jetClean_TightBad", &AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_TightBad, &b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_TightBad);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JVFCorr", &AntiKt4EMTopoJetsAuxDyn_JVFCorr, &b_AntiKt4EMTopoJetsAuxDyn_JVFCorr);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Jvt", &AntiKt4EMTopoJetsAuxDyn_Jvt, &b_AntiKt4EMTopoJetsAuxDyn_Jvt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JvtRpt", &AntiKt4EMTopoJetsAuxDyn_JvtRpt, &b_AntiKt4EMTopoJetsAuxDyn_JvtRpt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.LArQuality", &AntiKt4EMTopoJetsAuxDyn_LArQuality, &b_AntiKt4EMTopoJetsAuxDyn_LArQuality);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostMuonSegmentCount", &AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.NegativeE", &AntiKt4EMTopoJetsAuxDyn_NegativeE, &b_AntiKt4EMTopoJetsAuxDyn_NegativeE);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.NumTrkPt1000", &AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000, &b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.btaggingLink", &AntiKt4EMTopoJetsAuxDyn_btaggingLink_, &b_AntiKt4EMTopoJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.btaggingLink.m_persKey", AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.btaggingLink.m_persIndex", AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.NumTrkPt500", &AntiKt4EMTopoJetsAuxDyn_NumTrkPt500, &b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_eta", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_m", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_phi", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTrack", &AntiKt4EMTopoJetsAuxDyn_GhostTrack, &b_AntiKt4EMTopoJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_pt", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.AverageLArQF", &AntiKt4EMTopoJetsAuxDyn_AverageLArQF, &b_AntiKt4EMTopoJetsAuxDyn_AverageLArQF);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.PartonTruthLabelID", &AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.SumPtTrkPt500", &AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500, &b_AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ConeExclBHadronsFinal", &AntiKt4EMTopoJetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKt4EMTopoJetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.btaggingLink", &AntiKt4PV0TrackJetsAuxDyn_btaggingLink_, &b_AntiKt4PV0TrackJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.btaggingLink.m_persKey", AntiKt4PV0TrackJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKt4PV0TrackJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.btaggingLink.m_persIndex", AntiKt4PV0TrackJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKt4PV0TrackJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ActiveArea", &AntiKt4TruthJetsAuxDyn_ActiveArea, &b_AntiKt4TruthJetsAuxDyn_ActiveArea);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ActiveArea4vec_eta", &AntiKt4TruthJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ActiveArea4vec_m", &AntiKt4TruthJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.PartonTruthLabelID", &AntiKt4TruthJetsAuxDyn_PartonTruthLabelID, &b_AntiKt4TruthJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ActiveArea4vec_phi", &AntiKt4TruthJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ActiveArea4vec_pt", &AntiKt4TruthJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ConeExclBHadronsFinal", &AntiKt4TruthJetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKt4TruthJetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ConeExclCHadronsFinal", &AntiKt4TruthJetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKt4TruthJetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ConeExclTausFinal", &AntiKt4TruthJetsAuxDyn_ConeExclTausFinal, &b_AntiKt4TruthJetsAuxDyn_ConeExclTausFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ConeTruthLabelID", &AntiKt4TruthJetsAuxDyn_ConeTruthLabelID, &b_AntiKt4TruthJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ConstituentScale", &AntiKt4TruthJetsAuxDyn_ConstituentScale, &b_AntiKt4TruthJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Width", &AntiKt4TruthJetsAuxDyn_Width, &b_AntiKt4TruthJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.WidthPhi", &AntiKt4TruthJetsAuxDyn_WidthPhi, &b_AntiKt4TruthJetsAuxDyn_WidthPhi);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBHadronsFinal", &AntiKt4TruthJetsAuxDyn_GhostBHadronsFinal, &b_AntiKt4TruthJetsAuxDyn_GhostBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBHadronsFinalCount", &AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBHadronsFinalPt", &AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalPt, &b_AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBHadronsInitial", &AntiKt4TruthJetsAuxDyn_GhostBHadronsInitial, &b_AntiKt4TruthJetsAuxDyn_GhostBHadronsInitial);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.InputType", &AntiKt4TruthJetsAuxDyn_InputType, &b_AntiKt4TruthJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBHadronsInitialCount", &AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialCount, &b_AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.AlgorithmType", &AntiKt4TruthJetsAuxDyn_AlgorithmType, &b_AntiKt4TruthJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBHadronsInitialPt", &AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialPt, &b_AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.SizeParameter", &AntiKt4TruthJetsAuxDyn_SizeParameter, &b_AntiKt4TruthJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBQuarksFinal", &AntiKt4TruthJetsAuxDyn_GhostBQuarksFinal, &b_AntiKt4TruthJetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBQuarksFinalCount", &AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalCount, &b_AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBQuarksFinalPt", &AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalPt, &b_AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCHadronsFinal", &AntiKt4TruthJetsAuxDyn_GhostCHadronsFinal, &b_AntiKt4TruthJetsAuxDyn_GhostCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCHadronsFinalCount", &AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCHadronsFinalPt", &AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalPt, &b_AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCHadronsInitial", &AntiKt4TruthJetsAuxDyn_GhostCHadronsInitial, &b_AntiKt4TruthJetsAuxDyn_GhostCHadronsInitial);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCHadronsInitialCount", &AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialCount, &b_AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCHadronsInitialPt", &AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialPt, &b_AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCQuarksFinal", &AntiKt4TruthJetsAuxDyn_GhostCQuarksFinal, &b_AntiKt4TruthJetsAuxDyn_GhostCQuarksFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCQuarksFinalCount", &AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalCount, &b_AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCQuarksFinalPt", &AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalPt, &b_AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostHBosons", &AntiKt4TruthJetsAuxDyn_GhostHBosons, &b_AntiKt4TruthJetsAuxDyn_GhostHBosons);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostHBosonsCount", &AntiKt4TruthJetsAuxDyn_GhostHBosonsCount, &b_AntiKt4TruthJetsAuxDyn_GhostHBosonsCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostHBosonsPt", &AntiKt4TruthJetsAuxDyn_GhostHBosonsPt, &b_AntiKt4TruthJetsAuxDyn_GhostHBosonsPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostPartons", &AntiKt4TruthJetsAuxDyn_GhostPartons, &b_AntiKt4TruthJetsAuxDyn_GhostPartons);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostPartonsCount", &AntiKt4TruthJetsAuxDyn_GhostPartonsCount, &b_AntiKt4TruthJetsAuxDyn_GhostPartonsCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostPartonsPt", &AntiKt4TruthJetsAuxDyn_GhostPartonsPt, &b_AntiKt4TruthJetsAuxDyn_GhostPartonsPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostTQuarksFinal", &AntiKt4TruthJetsAuxDyn_GhostTQuarksFinal, &b_AntiKt4TruthJetsAuxDyn_GhostTQuarksFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostTQuarksFinalCount", &AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalCount, &b_AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostTQuarksFinalPt", &AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalPt, &b_AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostTausFinal", &AntiKt4TruthJetsAuxDyn_GhostTausFinal, &b_AntiKt4TruthJetsAuxDyn_GhostTausFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostTausFinalCount", &AntiKt4TruthJetsAuxDyn_GhostTausFinalCount, &b_AntiKt4TruthJetsAuxDyn_GhostTausFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostTausFinalPt", &AntiKt4TruthJetsAuxDyn_GhostTausFinalPt, &b_AntiKt4TruthJetsAuxDyn_GhostTausFinalPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostWBosons", &AntiKt4TruthJetsAuxDyn_GhostWBosons, &b_AntiKt4TruthJetsAuxDyn_GhostWBosons);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostWBosonsCount", &AntiKt4TruthJetsAuxDyn_GhostWBosonsCount, &b_AntiKt4TruthJetsAuxDyn_GhostWBosonsCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostWBosonsPt", &AntiKt4TruthJetsAuxDyn_GhostWBosonsPt, &b_AntiKt4TruthJetsAuxDyn_GhostWBosonsPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostZBosons", &AntiKt4TruthJetsAuxDyn_GhostZBosons, &b_AntiKt4TruthJetsAuxDyn_GhostZBosons);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostZBosonsCount", &AntiKt4TruthJetsAuxDyn_GhostZBosonsCount, &b_AntiKt4TruthJetsAuxDyn_GhostZBosonsCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostZBosonsPt", &AntiKt4TruthJetsAuxDyn_GhostZBosonsPt, &b_AntiKt4TruthJetsAuxDyn_GhostZBosonsPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt4TruthJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt4TruthJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4TruthJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4TruthJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetGhostArea", &AntiKt4TruthJetsAuxDyn_JetGhostArea, &b_AntiKt4TruthJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.DL1_pb", &BTagging_AntiKt4EMTopoAuxDyn_DL1_pb, &b_BTagging_AntiKt4EMTopoAuxDyn_DL1_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.DL1_pc", &BTagging_AntiKt4EMTopoAuxDyn_DL1_pc, &b_BTagging_AntiKt4EMTopoAuxDyn_DL1_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.DL1_pu", &BTagging_AntiKt4EMTopoAuxDyn_DL1_pu, &b_BTagging_AntiKt4EMTopoAuxDyn_DL1_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.DL1mu_pb", &BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pb, &b_BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.MV2c100_discriminant", &BTagging_AntiKt4EMTopoAuxDyn_MV2c100_discriminant, &b_BTagging_AntiKt4EMTopoAuxDyn_MV2c100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.DL1mu_pc", &BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pc, &b_BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.MV2c10_discriminant", &BTagging_AntiKt4EMTopoAuxDyn_MV2c10_discriminant, &b_BTagging_AntiKt4EMTopoAuxDyn_MV2c10_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.DL1mu_pu", &BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pu, &b_BTagging_AntiKt4EMTopoAuxDyn_DL1mu_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.MV2c10mu_discriminant", &BTagging_AntiKt4EMTopoAuxDyn_MV2c10mu_discriminant, &b_BTagging_AntiKt4EMTopoAuxDyn_MV2c10mu_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.DL1rnn_pb", &BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pb, &b_BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.MV2c10rnn_discriminant", &BTagging_AntiKt4EMTopoAuxDyn_MV2c10rnn_discriminant, &b_BTagging_AntiKt4EMTopoAuxDyn_MV2c10rnn_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.DL1rnn_pc", &BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pc, &b_BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.MV2cl100_discriminant", &BTagging_AntiKt4EMTopoAuxDyn_MV2cl100_discriminant, &b_BTagging_AntiKt4EMTopoAuxDyn_MV2cl100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.DL1rnn_pu", &BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pu, &b_BTagging_AntiKt4EMTopoAuxDyn_DL1rnn_pu);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.e_sampl", &CaloCalTopoClustersAuxDyn_e_sampl, &b_CaloCalTopoClustersAuxDyn_e_sampl);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.time", &CaloCalTopoClustersAuxDyn_time, &b_CaloCalTopoClustersAuxDyn_time);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.clusterSize", &CaloCalTopoClustersAuxDyn_clusterSize, &b_CaloCalTopoClustersAuxDyn_clusterSize);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.eta0", &CaloCalTopoClustersAuxDyn_eta0, &b_CaloCalTopoClustersAuxDyn_eta0);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.phi0", &CaloCalTopoClustersAuxDyn_phi0, &b_CaloCalTopoClustersAuxDyn_phi0);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.rawE", &CaloCalTopoClustersAuxDyn_rawE, &b_CaloCalTopoClustersAuxDyn_rawE);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.rawEta", &CaloCalTopoClustersAuxDyn_rawEta, &b_CaloCalTopoClustersAuxDyn_rawEta);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.rawPhi", &CaloCalTopoClustersAuxDyn_rawPhi, &b_CaloCalTopoClustersAuxDyn_rawPhi);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.rawM", &CaloCalTopoClustersAuxDyn_rawM, &b_CaloCalTopoClustersAuxDyn_rawM);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.altE", &CaloCalTopoClustersAuxDyn_altE, &b_CaloCalTopoClustersAuxDyn_altE);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.AVG_LAR_Q", &CaloCalTopoClustersAuxDyn_AVG_LAR_Q, &b_CaloCalTopoClustersAuxDyn_AVG_LAR_Q);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.altEta", &CaloCalTopoClustersAuxDyn_altEta, &b_CaloCalTopoClustersAuxDyn_altEta);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.AVG_TILE_Q", &CaloCalTopoClustersAuxDyn_AVG_TILE_Q, &b_CaloCalTopoClustersAuxDyn_AVG_TILE_Q);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.altPhi", &CaloCalTopoClustersAuxDyn_altPhi, &b_CaloCalTopoClustersAuxDyn_altPhi);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.BADLARQ_FRAC", &CaloCalTopoClustersAuxDyn_BADLARQ_FRAC, &b_CaloCalTopoClustersAuxDyn_BADLARQ_FRAC);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.altM", &CaloCalTopoClustersAuxDyn_altM, &b_CaloCalTopoClustersAuxDyn_altM);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.CENTER_LAMBDA", &CaloCalTopoClustersAuxDyn_CENTER_LAMBDA, &b_CaloCalTopoClustersAuxDyn_CENTER_LAMBDA);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.calE", &CaloCalTopoClustersAuxDyn_calE, &b_CaloCalTopoClustersAuxDyn_calE);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.CENTER_MAG", &CaloCalTopoClustersAuxDyn_CENTER_MAG, &b_CaloCalTopoClustersAuxDyn_CENTER_MAG);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.calEta", &CaloCalTopoClustersAuxDyn_calEta, &b_CaloCalTopoClustersAuxDyn_calEta);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.EM_PROBABILITY", &CaloCalTopoClustersAuxDyn_EM_PROBABILITY, &b_CaloCalTopoClustersAuxDyn_EM_PROBABILITY);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.calPhi", &CaloCalTopoClustersAuxDyn_calPhi, &b_CaloCalTopoClustersAuxDyn_calPhi);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.calM", &CaloCalTopoClustersAuxDyn_calM, &b_CaloCalTopoClustersAuxDyn_calM);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.ENG_BAD_CELLS", &CaloCalTopoClustersAuxDyn_ENG_BAD_CELLS, &b_CaloCalTopoClustersAuxDyn_ENG_BAD_CELLS);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.BadChannelList", &CaloCalTopoClustersAuxDyn_BadChannelList, &b_CaloCalTopoClustersAuxDyn_BadChannelList);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.ENG_FRAC_MAX", &CaloCalTopoClustersAuxDyn_ENG_FRAC_MAX, &b_CaloCalTopoClustersAuxDyn_ENG_FRAC_MAX);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.ENG_POS", &CaloCalTopoClustersAuxDyn_ENG_POS, &b_CaloCalTopoClustersAuxDyn_ENG_POS);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.FIRST_ENG_DENS", &CaloCalTopoClustersAuxDyn_FIRST_ENG_DENS, &b_CaloCalTopoClustersAuxDyn_FIRST_ENG_DENS);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.ISOLATION", &CaloCalTopoClustersAuxDyn_ISOLATION, &b_CaloCalTopoClustersAuxDyn_ISOLATION);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.N_BAD_CELLS", &CaloCalTopoClustersAuxDyn_N_BAD_CELLS, &b_CaloCalTopoClustersAuxDyn_N_BAD_CELLS);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.SECOND_LAMBDA", &CaloCalTopoClustersAuxDyn_SECOND_LAMBDA, &b_CaloCalTopoClustersAuxDyn_SECOND_LAMBDA);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.SECOND_R", &CaloCalTopoClustersAuxDyn_SECOND_R, &b_CaloCalTopoClustersAuxDyn_SECOND_R);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectChId", &CombinedMuonTrackParticlesAuxDyn_alignEffectChId, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectChId);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthParticleLink", &CombinedMuonTrackParticlesAuxDyn_truthParticleLink_, &b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthParticleLink.m_persKey", CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthParticleLink.m_persIndex", CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectDeltaAngle", &CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectDeltaTrans", &CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectSigmaDeltaAngle", &CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectSigmaDeltaTrans", &CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans);
   fChain->SetBranchAddress("ElectronsAuxDyn.e233", &ElectronsAuxDyn_e233, &b_ElectronsAuxDyn_e233);
   fChain->SetBranchAddress("ElectronsAuxDyn.e235", &ElectronsAuxDyn_e235, &b_ElectronsAuxDyn_e235);
   fChain->SetBranchAddress("ElectronsAuxDyn.e237", &ElectronsAuxDyn_e237, &b_ElectronsAuxDyn_e237);
   fChain->SetBranchAddress("ElectronsAuxDyn.e255", &ElectronsAuxDyn_e255, &b_ElectronsAuxDyn_e255);
   fChain->SetBranchAddress("ElectronsAuxDyn.e2ts1", &ElectronsAuxDyn_e2ts1, &b_ElectronsAuxDyn_e2ts1);
   fChain->SetBranchAddress("ElectronsAuxDyn.e2tsts1", &ElectronsAuxDyn_e2tsts1, &b_ElectronsAuxDyn_e2tsts1);
   fChain->SetBranchAddress("ElectronsAuxDyn.ecore", &ElectronsAuxDyn_ecore, &b_ElectronsAuxDyn_ecore);
   fChain->SetBranchAddress("ElectronsAuxDyn.ehad1", &ElectronsAuxDyn_ehad1, &b_ElectronsAuxDyn_ehad1);
   fChain->SetBranchAddress("ElectronsAuxDyn.emaxs1", &ElectronsAuxDyn_emaxs1, &b_ElectronsAuxDyn_emaxs1);
   fChain->SetBranchAddress("ElectronsAuxDyn.emins1", &ElectronsAuxDyn_emins1, &b_ElectronsAuxDyn_emins1);
   fChain->SetBranchAddress("ElectronsAuxDyn.etcone20ptCorrection", &ElectronsAuxDyn_etcone20ptCorrection, &b_ElectronsAuxDyn_etcone20ptCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.trackParticleLinks", &ElectronsAuxDyn_trackParticleLinks, &b_ElectronsAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("ElectronsAuxDyn.etcone30ptCorrection", &ElectronsAuxDyn_etcone30ptCorrection, &b_ElectronsAuxDyn_etcone30ptCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.etcone40ptCorrection", &ElectronsAuxDyn_etcone40ptCorrection, &b_ElectronsAuxDyn_etcone40ptCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.ethad", &ElectronsAuxDyn_ethad, &b_ElectronsAuxDyn_ethad);
   fChain->SetBranchAddress("ElectronsAuxDyn.ethad1", &ElectronsAuxDyn_ethad1, &b_ElectronsAuxDyn_ethad1);
   fChain->SetBranchAddress("ElectronsAuxDyn.neflowisol20ptCorrection", &ElectronsAuxDyn_neflowisol20ptCorrection, &b_ElectronsAuxDyn_neflowisol20ptCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.neflowisol30ptCorrection", &ElectronsAuxDyn_neflowisol30ptCorrection, &b_ElectronsAuxDyn_neflowisol30ptCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.neflowisol40ptCorrection", &ElectronsAuxDyn_neflowisol40ptCorrection, &b_ElectronsAuxDyn_neflowisol40ptCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.pos", &ElectronsAuxDyn_pos, &b_ElectronsAuxDyn_pos);
   fChain->SetBranchAddress("ElectronsAuxDyn.pt", &ElectronsAuxDyn_pt, &b_ElectronsAuxDyn_pt);
   fChain->SetBranchAddress("ElectronsAuxDyn.pos7", &ElectronsAuxDyn_pos7, &b_ElectronsAuxDyn_pos7);
   fChain->SetBranchAddress("ElectronsAuxDyn.eta", &ElectronsAuxDyn_eta, &b_ElectronsAuxDyn_eta);
   fChain->SetBranchAddress("ElectronsAuxDyn.poscs1", &ElectronsAuxDyn_poscs1, &b_ElectronsAuxDyn_poscs1);
   fChain->SetBranchAddress("ElectronsAuxDyn.phi", &ElectronsAuxDyn_phi, &b_ElectronsAuxDyn_phi);
   fChain->SetBranchAddress("ElectronsAuxDyn.poscs2", &ElectronsAuxDyn_poscs2, &b_ElectronsAuxDyn_poscs2);
   fChain->SetBranchAddress("ElectronsAuxDyn.m", &ElectronsAuxDyn_m, &b_ElectronsAuxDyn_m);
   fChain->SetBranchAddress("ElectronsAuxDyn.r33over37allcalo", &ElectronsAuxDyn_r33over37allcalo, &b_ElectronsAuxDyn_r33over37allcalo);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone20ptCorrection", &ElectronsAuxDyn_topoetcone20ptCorrection, &b_ElectronsAuxDyn_topoetcone20ptCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone30ptCorrection", &ElectronsAuxDyn_topoetcone30ptCorrection, &b_ElectronsAuxDyn_topoetcone30ptCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone40ptCorrection", &ElectronsAuxDyn_topoetcone40ptCorrection, &b_ElectronsAuxDyn_topoetcone40ptCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetconecoreConeSCEnergyCorrection", &ElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection, &b_ElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.widths1", &ElectronsAuxDyn_widths1, &b_ElectronsAuxDyn_widths1);
   fChain->SetBranchAddress("ElectronsAuxDyn.widths2", &ElectronsAuxDyn_widths2, &b_ElectronsAuxDyn_widths2);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthOrigin", &ElectronsAuxDyn_truthOrigin, &b_ElectronsAuxDyn_truthOrigin);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthParticleLink", &ElectronsAuxDyn_truthParticleLink_, &b_ElectronsAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthParticleLink.m_persKey", ElectronsAuxDyn_truthParticleLink_m_persKey, &b_ElectronsAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthParticleLink.m_persIndex", ElectronsAuxDyn_truthParticleLink_m_persIndex, &b_ElectronsAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthType", &ElectronsAuxDyn_truthType, &b_ElectronsAuxDyn_truthType);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHVeryLoose", &ElectronsAuxDyn_DFCommonElectronsLHVeryLoose, &b_ElectronsAuxDyn_DFCommonElectronsLHVeryLoose);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHLoose", &ElectronsAuxDyn_DFCommonElectronsLHLoose, &b_ElectronsAuxDyn_DFCommonElectronsLHLoose);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHMedium", &ElectronsAuxDyn_DFCommonElectronsLHMedium, &b_ElectronsAuxDyn_DFCommonElectronsLHMedium);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHTight", &ElectronsAuxDyn_DFCommonElectronsLHTight, &b_ElectronsAuxDyn_DFCommonElectronsLHTight);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsIsEMLoose", &ElectronsAuxDyn_DFCommonElectronsIsEMLoose, &b_ElectronsAuxDyn_DFCommonElectronsIsEMLoose);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsIsEMLooseIsEMValue", &ElectronsAuxDyn_DFCommonElectronsIsEMLooseIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsIsEMLooseIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsIsEMMedium", &ElectronsAuxDyn_DFCommonElectronsIsEMMedium, &b_ElectronsAuxDyn_DFCommonElectronsIsEMMedium);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsIsEMMediumIsEMValue", &ElectronsAuxDyn_DFCommonElectronsIsEMMediumIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsIsEMMediumIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsIsEMTight", &ElectronsAuxDyn_DFCommonElectronsIsEMTight, &b_ElectronsAuxDyn_DFCommonElectronsIsEMTight);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsIsEMTightIsEMValue", &ElectronsAuxDyn_DFCommonElectronsIsEMTightIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsIsEMTightIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsML", &ElectronsAuxDyn_DFCommonElectronsML, &b_ElectronsAuxDyn_DFCommonElectronsML);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthPdgId", &ElectronsAuxDyn_truthPdgId, &b_ElectronsAuxDyn_truthPdgId);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthType", &ElectronsAuxDyn_firstEgMotherTruthType, &b_ElectronsAuxDyn_firstEgMotherTruthType);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthOrigin", &ElectronsAuxDyn_firstEgMotherTruthOrigin, &b_ElectronsAuxDyn_firstEgMotherTruthOrigin);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthParticleLink", &ElectronsAuxDyn_firstEgMotherTruthParticleLink_, &b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthParticleLink.m_persKey", ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey, &b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthParticleLink.m_persIndex", ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex, &b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherPdgId", &ElectronsAuxDyn_firstEgMotherPdgId, &b_ElectronsAuxDyn_firstEgMotherPdgId);
   fChain->SetBranchAddress("ElectronsAuxDyn.lastEgMotherTruthType", &ElectronsAuxDyn_lastEgMotherTruthType, &b_ElectronsAuxDyn_lastEgMotherTruthType);
   fChain->SetBranchAddress("ElectronsAuxDyn.lastEgMotherTruthOrigin", &ElectronsAuxDyn_lastEgMotherTruthOrigin, &b_ElectronsAuxDyn_lastEgMotherTruthOrigin);
   fChain->SetBranchAddress("ElectronsAuxDyn.lastEgMotherTruthParticleLink", &ElectronsAuxDyn_lastEgMotherTruthParticleLink_, &b_ElectronsAuxDyn_lastEgMotherTruthParticleLink_);
   fChain->SetBranchAddress("ElectronsAuxDyn.lastEgMotherTruthParticleLink.m_persKey", ElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persKey, &b_ElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persKey);
   fChain->SetBranchAddress("ElectronsAuxDyn.lastEgMotherTruthParticleLink.m_persIndex", ElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persIndex, &b_ElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persIndex);
   fChain->SetBranchAddress("ElectronsAuxDyn.lastEgMotherPdgId", &ElectronsAuxDyn_lastEgMotherPdgId, &b_ElectronsAuxDyn_lastEgMotherPdgId);
   fChain->SetBranchAddress("ElectronsAuxDyn.E_Lr0_HiG", &ElectronsAuxDyn_E_Lr0_HiG, &b_ElectronsAuxDyn_E_Lr0_HiG);
   fChain->SetBranchAddress("ElectronsAuxDyn.E_Lr1_HiG", &ElectronsAuxDyn_E_Lr1_HiG, &b_ElectronsAuxDyn_E_Lr1_HiG);
   fChain->SetBranchAddress("ElectronsAuxDyn.E_Lr2_HiG", &ElectronsAuxDyn_E_Lr2_HiG, &b_ElectronsAuxDyn_E_Lr2_HiG);
   fChain->SetBranchAddress("ElectronsAuxDyn.E_Lr3_HiG", &ElectronsAuxDyn_E_Lr3_HiG, &b_ElectronsAuxDyn_E_Lr3_HiG);
   fChain->SetBranchAddress("ElectronsAuxDyn.E_Lr0_MedG", &ElectronsAuxDyn_E_Lr0_MedG, &b_ElectronsAuxDyn_E_Lr0_MedG);
   fChain->SetBranchAddress("ElectronsAuxDyn.E_Lr1_MedG", &ElectronsAuxDyn_E_Lr1_MedG, &b_ElectronsAuxDyn_E_Lr1_MedG);
   fChain->SetBranchAddress("ElectronsAuxDyn.E_Lr2_MedG", &ElectronsAuxDyn_E_Lr2_MedG, &b_ElectronsAuxDyn_E_Lr2_MedG);
   fChain->SetBranchAddress("ElectronsAuxDyn.E_Lr3_MedG", &ElectronsAuxDyn_E_Lr3_MedG, &b_ElectronsAuxDyn_E_Lr3_MedG);
   fChain->SetBranchAddress("ElectronsAuxDyn.E_Lr0_LowG", &ElectronsAuxDyn_E_Lr0_LowG, &b_ElectronsAuxDyn_E_Lr0_LowG);
   fChain->SetBranchAddress("ElectronsAuxDyn.E_Lr1_LowG", &ElectronsAuxDyn_E_Lr1_LowG, &b_ElectronsAuxDyn_E_Lr1_LowG);
   fChain->SetBranchAddress("ElectronsAuxDyn.E_Lr2_LowG", &ElectronsAuxDyn_E_Lr2_LowG, &b_ElectronsAuxDyn_E_Lr2_LowG);
   fChain->SetBranchAddress("ElectronsAuxDyn.E_Lr3_LowG", &ElectronsAuxDyn_E_Lr3_LowG, &b_ElectronsAuxDyn_E_Lr3_LowG);
   fChain->SetBranchAddress("ElectronsAuxDyn.nCells_Lr0_HiG", &ElectronsAuxDyn_nCells_Lr0_HiG, &b_ElectronsAuxDyn_nCells_Lr0_HiG);
   fChain->SetBranchAddress("ElectronsAuxDyn.nCells_Lr1_HiG", &ElectronsAuxDyn_nCells_Lr1_HiG, &b_ElectronsAuxDyn_nCells_Lr1_HiG);
   fChain->SetBranchAddress("ElectronsAuxDyn.nCells_Lr2_HiG", &ElectronsAuxDyn_nCells_Lr2_HiG, &b_ElectronsAuxDyn_nCells_Lr2_HiG);
   fChain->SetBranchAddress("ElectronsAuxDyn.nCells_Lr3_HiG", &ElectronsAuxDyn_nCells_Lr3_HiG, &b_ElectronsAuxDyn_nCells_Lr3_HiG);
   fChain->SetBranchAddress("ElectronsAuxDyn.nCells_Lr0_MedG", &ElectronsAuxDyn_nCells_Lr0_MedG, &b_ElectronsAuxDyn_nCells_Lr0_MedG);
   fChain->SetBranchAddress("ElectronsAuxDyn.nCells_Lr1_MedG", &ElectronsAuxDyn_nCells_Lr1_MedG, &b_ElectronsAuxDyn_nCells_Lr1_MedG);
   fChain->SetBranchAddress("ElectronsAuxDyn.nCells_Lr2_MedG", &ElectronsAuxDyn_nCells_Lr2_MedG, &b_ElectronsAuxDyn_nCells_Lr2_MedG);
   fChain->SetBranchAddress("ElectronsAuxDyn.nCells_Lr3_MedG", &ElectronsAuxDyn_nCells_Lr3_MedG, &b_ElectronsAuxDyn_nCells_Lr3_MedG);
   fChain->SetBranchAddress("ElectronsAuxDyn.nCells_Lr0_LowG", &ElectronsAuxDyn_nCells_Lr0_LowG, &b_ElectronsAuxDyn_nCells_Lr0_LowG);
   fChain->SetBranchAddress("ElectronsAuxDyn.nCells_Lr1_LowG", &ElectronsAuxDyn_nCells_Lr1_LowG, &b_ElectronsAuxDyn_nCells_Lr1_LowG);
   fChain->SetBranchAddress("ElectronsAuxDyn.nCells_Lr2_LowG", &ElectronsAuxDyn_nCells_Lr2_LowG, &b_ElectronsAuxDyn_nCells_Lr2_LowG);
   fChain->SetBranchAddress("ElectronsAuxDyn.nCells_Lr3_LowG", &ElectronsAuxDyn_nCells_Lr3_LowG, &b_ElectronsAuxDyn_nCells_Lr3_LowG);
   fChain->SetBranchAddress("ElectronsAuxDyn.maxEcell_time", &ElectronsAuxDyn_maxEcell_time, &b_ElectronsAuxDyn_maxEcell_time);
   fChain->SetBranchAddress("ElectronsAuxDyn.maxEcell_energy", &ElectronsAuxDyn_maxEcell_energy, &b_ElectronsAuxDyn_maxEcell_energy);
   fChain->SetBranchAddress("ElectronsAuxDyn.maxEcell_gain", &ElectronsAuxDyn_maxEcell_gain, &b_ElectronsAuxDyn_maxEcell_gain);
   fChain->SetBranchAddress("ElectronsAuxDyn.maxEcell_onlId", &ElectronsAuxDyn_maxEcell_onlId, &b_ElectronsAuxDyn_maxEcell_onlId);
   fChain->SetBranchAddress("ElectronsAuxDyn.maxEcell_x", &ElectronsAuxDyn_maxEcell_x, &b_ElectronsAuxDyn_maxEcell_x);
   fChain->SetBranchAddress("ElectronsAuxDyn.maxEcell_y", &ElectronsAuxDyn_maxEcell_y, &b_ElectronsAuxDyn_maxEcell_y);
   fChain->SetBranchAddress("ElectronsAuxDyn.maxEcell_z", &ElectronsAuxDyn_maxEcell_z, &b_ElectronsAuxDyn_maxEcell_z);
   fChain->SetBranchAddress("ElectronsAuxDyn.7x11ClusterExist", &ElectronsAuxDyn_7x11ClusterExist, &b_ElectronsAuxDyn_7x11ClusterExist);
   fChain->SetBranchAddress("ElectronsAuxDyn.NewSwClusterLink", &ElectronsAuxDyn_NewSwClusterLink_, &b_ElectronsAuxDyn_NewSwClusterLink_);
   fChain->SetBranchAddress("ElectronsAuxDyn.NewSwClusterLink.m_persKey", ElectronsAuxDyn_NewSwClusterLink_m_persKey, &b_ElectronsAuxDyn_NewSwClusterLink_m_persKey);
   fChain->SetBranchAddress("ElectronsAuxDyn.NewSwClusterLink.m_persIndex", ElectronsAuxDyn_NewSwClusterLink_m_persIndex, &b_ElectronsAuxDyn_NewSwClusterLink_m_persIndex);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e011", &ElectronsAuxDyn_EG_e011, &b_ElectronsAuxDyn_EG_e011);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e033", &ElectronsAuxDyn_EG_e033, &b_ElectronsAuxDyn_EG_e033);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e132", &ElectronsAuxDyn_EG_e132, &b_ElectronsAuxDyn_EG_e132);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e1152", &ElectronsAuxDyn_EG_e1152, &b_ElectronsAuxDyn_EG_e1152);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_ethad1", &ElectronsAuxDyn_EG_ethad1, &b_ElectronsAuxDyn_EG_ethad1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_ethad", &ElectronsAuxDyn_EG_ethad, &b_ElectronsAuxDyn_EG_ethad);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_ehad1", &ElectronsAuxDyn_EG_ehad1, &b_ElectronsAuxDyn_EG_ehad1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_f1", &ElectronsAuxDyn_EG_f1, &b_ElectronsAuxDyn_EG_f1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_f3", &ElectronsAuxDyn_EG_f3, &b_ElectronsAuxDyn_EG_f3);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_f1core", &ElectronsAuxDyn_EG_f1core, &b_ElectronsAuxDyn_EG_f1core);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_f3core", &ElectronsAuxDyn_EG_f3core, &b_ElectronsAuxDyn_EG_f3core);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e233", &ElectronsAuxDyn_EG_e233, &b_ElectronsAuxDyn_EG_e233);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e235", &ElectronsAuxDyn_EG_e235, &b_ElectronsAuxDyn_EG_e235);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e255", &ElectronsAuxDyn_EG_e255, &b_ElectronsAuxDyn_EG_e255);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e237", &ElectronsAuxDyn_EG_e237, &b_ElectronsAuxDyn_EG_e237);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e277", &ElectronsAuxDyn_EG_e277, &b_ElectronsAuxDyn_EG_e277);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e333", &ElectronsAuxDyn_EG_e333, &b_ElectronsAuxDyn_EG_e333);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e335", &ElectronsAuxDyn_EG_e335, &b_ElectronsAuxDyn_EG_e335);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e337", &ElectronsAuxDyn_EG_e337, &b_ElectronsAuxDyn_EG_e337);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e377", &ElectronsAuxDyn_EG_e377, &b_ElectronsAuxDyn_EG_e377);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_weta1", &ElectronsAuxDyn_EG_weta1, &b_ElectronsAuxDyn_EG_weta1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_weta2", &ElectronsAuxDyn_EG_weta2, &b_ElectronsAuxDyn_EG_weta2);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e2ts1", &ElectronsAuxDyn_EG_e2ts1, &b_ElectronsAuxDyn_EG_e2ts1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_e2tsts1", &ElectronsAuxDyn_EG_e2tsts1, &b_ElectronsAuxDyn_EG_e2tsts1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_fracs1", &ElectronsAuxDyn_EG_fracs1, &b_ElectronsAuxDyn_EG_fracs1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_widths1", &ElectronsAuxDyn_EG_widths1, &b_ElectronsAuxDyn_EG_widths1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_widths2", &ElectronsAuxDyn_EG_widths2, &b_ElectronsAuxDyn_EG_widths2);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_poscs1", &ElectronsAuxDyn_EG_poscs1, &b_ElectronsAuxDyn_EG_poscs1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_poscs2", &ElectronsAuxDyn_EG_poscs2, &b_ElectronsAuxDyn_EG_poscs2);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_asy1", &ElectronsAuxDyn_EG_asy1, &b_ElectronsAuxDyn_EG_asy1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_pos", &ElectronsAuxDyn_EG_pos, &b_ElectronsAuxDyn_EG_pos);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_pos7", &ElectronsAuxDyn_EG_pos7, &b_ElectronsAuxDyn_EG_pos7);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_barys1", &ElectronsAuxDyn_EG_barys1, &b_ElectronsAuxDyn_EG_barys1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_wtots1", &ElectronsAuxDyn_EG_wtots1, &b_ElectronsAuxDyn_EG_wtots1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_emins1", &ElectronsAuxDyn_EG_emins1, &b_ElectronsAuxDyn_EG_emins1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_emaxs1", &ElectronsAuxDyn_EG_emaxs1, &b_ElectronsAuxDyn_EG_emaxs1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_r33over37allcalo", &ElectronsAuxDyn_EG_r33over37allcalo, &b_ElectronsAuxDyn_EG_r33over37allcalo);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_ecore", &ElectronsAuxDyn_EG_ecore, &b_ElectronsAuxDyn_EG_ecore);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_Reta", &ElectronsAuxDyn_EG_Reta, &b_ElectronsAuxDyn_EG_Reta);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_Rphi", &ElectronsAuxDyn_EG_Rphi, &b_ElectronsAuxDyn_EG_Rphi);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_Eratio", &ElectronsAuxDyn_EG_Eratio, &b_ElectronsAuxDyn_EG_Eratio);
   fChain->SetBranchAddress("ElectronsAuxDyn.author", &ElectronsAuxDyn_author, &b_ElectronsAuxDyn_author);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_Rhad", &ElectronsAuxDyn_EG_Rhad, &b_ElectronsAuxDyn_EG_Rhad);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_Rhad1", &ElectronsAuxDyn_EG_Rhad1, &b_ElectronsAuxDyn_EG_Rhad1);
   fChain->SetBranchAddress("ElectronsAuxDyn.EG_DeltaE", &ElectronsAuxDyn_EG_DeltaE, &b_ElectronsAuxDyn_EG_DeltaE);
   fChain->SetBranchAddress("ElectronsAuxDyn.E3x5_Lr0", &ElectronsAuxDyn_E3x5_Lr0, &b_ElectronsAuxDyn_E3x5_Lr0);
   fChain->SetBranchAddress("ElectronsAuxDyn.E3x5_Lr1", &ElectronsAuxDyn_E3x5_Lr1, &b_ElectronsAuxDyn_E3x5_Lr1);
   fChain->SetBranchAddress("ElectronsAuxDyn.E3x5_Lr2", &ElectronsAuxDyn_E3x5_Lr2, &b_ElectronsAuxDyn_E3x5_Lr2);
   fChain->SetBranchAddress("ElectronsAuxDyn.E3x5_Lr3", &ElectronsAuxDyn_E3x5_Lr3, &b_ElectronsAuxDyn_E3x5_Lr3);
   fChain->SetBranchAddress("ElectronsAuxDyn.E5x7_Lr0", &ElectronsAuxDyn_E5x7_Lr0, &b_ElectronsAuxDyn_E5x7_Lr0);
   fChain->SetBranchAddress("ElectronsAuxDyn.E5x7_Lr1", &ElectronsAuxDyn_E5x7_Lr1, &b_ElectronsAuxDyn_E5x7_Lr1);
   fChain->SetBranchAddress("ElectronsAuxDyn.E5x7_Lr2", &ElectronsAuxDyn_E5x7_Lr2, &b_ElectronsAuxDyn_E5x7_Lr2);
   fChain->SetBranchAddress("ElectronsAuxDyn.E5x7_Lr3", &ElectronsAuxDyn_E5x7_Lr3, &b_ElectronsAuxDyn_E5x7_Lr3);
   fChain->SetBranchAddress("ElectronsAuxDyn.E7x7_Lr0", &ElectronsAuxDyn_E7x7_Lr0, &b_ElectronsAuxDyn_E7x7_Lr0);
   fChain->SetBranchAddress("ElectronsAuxDyn.E7x7_Lr1", &ElectronsAuxDyn_E7x7_Lr1, &b_ElectronsAuxDyn_E7x7_Lr1);
   fChain->SetBranchAddress("ElectronsAuxDyn.E7x7_Lr2", &ElectronsAuxDyn_E7x7_Lr2, &b_ElectronsAuxDyn_E7x7_Lr2);
   fChain->SetBranchAddress("ElectronsAuxDyn.E7x7_Lr3", &ElectronsAuxDyn_E7x7_Lr3, &b_ElectronsAuxDyn_E7x7_Lr3);
   fChain->SetBranchAddress("ElectronsAuxDyn.E7x11_Lr0", &ElectronsAuxDyn_E7x11_Lr0, &b_ElectronsAuxDyn_E7x11_Lr0);
   fChain->SetBranchAddress("ElectronsAuxDyn.E7x11_Lr1", &ElectronsAuxDyn_E7x11_Lr1, &b_ElectronsAuxDyn_E7x11_Lr1);
   fChain->SetBranchAddress("ElectronsAuxDyn.E7x11_Lr2", &ElectronsAuxDyn_E7x11_Lr2, &b_ElectronsAuxDyn_E7x11_Lr2);
   fChain->SetBranchAddress("ElectronsAuxDyn.E7x11_Lr3", &ElectronsAuxDyn_E7x11_Lr3, &b_ElectronsAuxDyn_E7x11_Lr3);
   fChain->SetBranchAddress("ElectronsAuxDyn.Energy7x11_Lr0", &ElectronsAuxDyn_Energy7x11_Lr0, &b_ElectronsAuxDyn_Energy7x11_Lr0);
   fChain->SetBranchAddress("ElectronsAuxDyn.Energy7x11_Lr1", &ElectronsAuxDyn_Energy7x11_Lr1, &b_ElectronsAuxDyn_Energy7x11_Lr1);
   fChain->SetBranchAddress("ElectronsAuxDyn.Energy7x11_Lr2", &ElectronsAuxDyn_Energy7x11_Lr2, &b_ElectronsAuxDyn_Energy7x11_Lr2);
   fChain->SetBranchAddress("ElectronsAuxDyn.Energy7x11_Lr3", &ElectronsAuxDyn_Energy7x11_Lr3, &b_ElectronsAuxDyn_Energy7x11_Lr3);
   fChain->SetBranchAddress("ElectronsAuxDyn.time_7x11", &ElectronsAuxDyn_time_7x11, &b_ElectronsAuxDyn_time_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.energy_7x11", &ElectronsAuxDyn_energy_7x11, &b_ElectronsAuxDyn_energy_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.gain_7x11", &ElectronsAuxDyn_gain_7x11, &b_ElectronsAuxDyn_gain_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.provenance_7x11", &ElectronsAuxDyn_provenance_7x11, &b_ElectronsAuxDyn_provenance_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.x_7x11", &ElectronsAuxDyn_x_7x11, &b_ElectronsAuxDyn_x_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.dx_7x11", &ElectronsAuxDyn_dx_7x11, &b_ElectronsAuxDyn_dx_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.y_7x11", &ElectronsAuxDyn_y_7x11, &b_ElectronsAuxDyn_y_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.dy_7x11", &ElectronsAuxDyn_dy_7x11, &b_ElectronsAuxDyn_dy_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.z_7x11", &ElectronsAuxDyn_z_7x11, &b_ElectronsAuxDyn_z_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.dz_7x11", &ElectronsAuxDyn_dz_7x11, &b_ElectronsAuxDyn_dz_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.eta_7x11", &ElectronsAuxDyn_eta_7x11, &b_ElectronsAuxDyn_eta_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.deta_7x11", &ElectronsAuxDyn_deta_7x11, &b_ElectronsAuxDyn_deta_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.etasize_7x11", &ElectronsAuxDyn_etasize_7x11, &b_ElectronsAuxDyn_etasize_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.phi_7x11", &ElectronsAuxDyn_phi_7x11, &b_ElectronsAuxDyn_phi_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.dphi_7x11", &ElectronsAuxDyn_dphi_7x11, &b_ElectronsAuxDyn_dphi_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.phisize_7x11", &ElectronsAuxDyn_phisize_7x11, &b_ElectronsAuxDyn_phisize_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.sampling_7x11", &ElectronsAuxDyn_sampling_7x11, &b_ElectronsAuxDyn_sampling_7x11);
   fChain->SetBranchAddress("ElectronsAuxDyn.charge", &ElectronsAuxDyn_charge, &b_ElectronsAuxDyn_charge);
   fChain->SetBranchAddress("ElectronsAuxDyn.etcone20", &ElectronsAuxDyn_etcone20, &b_ElectronsAuxDyn_etcone20);
   fChain->SetBranchAddress("ElectronsAuxDyn.etcone30", &ElectronsAuxDyn_etcone30, &b_ElectronsAuxDyn_etcone30);
   fChain->SetBranchAddress("ElectronsAuxDyn.etcone40", &ElectronsAuxDyn_etcone40, &b_ElectronsAuxDyn_etcone40);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptcone20", &ElectronsAuxDyn_ptcone20, &b_ElectronsAuxDyn_ptcone20);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptcone30", &ElectronsAuxDyn_ptcone30, &b_ElectronsAuxDyn_ptcone30);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptcone40", &ElectronsAuxDyn_ptcone40, &b_ElectronsAuxDyn_ptcone40);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone20", &ElectronsAuxDyn_ptvarcone20, &b_ElectronsAuxDyn_ptvarcone20);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone40", &ElectronsAuxDyn_ptvarcone40, &b_ElectronsAuxDyn_ptvarcone40);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonInput_TrackJetNTrack", &ElectronsAuxDyn_PromptLeptonInput_TrackJetNTrack, &b_ElectronsAuxDyn_PromptLeptonInput_TrackJetNTrack);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonInput_sv1_jf_ntrkv", &ElectronsAuxDyn_PromptLeptonInput_sv1_jf_ntrkv, &b_ElectronsAuxDyn_PromptLeptonInput_sv1_jf_ntrkv);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonInput_ip2", &ElectronsAuxDyn_PromptLeptonInput_ip2, &b_ElectronsAuxDyn_PromptLeptonInput_ip2);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonInput_ip3", &ElectronsAuxDyn_PromptLeptonInput_ip3, &b_ElectronsAuxDyn_PromptLeptonInput_ip3);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonInput_LepJetPtFrac", &ElectronsAuxDyn_PromptLeptonInput_LepJetPtFrac, &b_ElectronsAuxDyn_PromptLeptonInput_LepJetPtFrac);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonInput_DRlj", &ElectronsAuxDyn_PromptLeptonInput_DRlj, &b_ElectronsAuxDyn_PromptLeptonInput_DRlj);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonInput_TopoEtCone30Rel", &ElectronsAuxDyn_PromptLeptonInput_TopoEtCone30Rel, &b_ElectronsAuxDyn_PromptLeptonInput_TopoEtCone30Rel);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonInput_PtVarCone30Rel", &ElectronsAuxDyn_PromptLeptonInput_PtVarCone30Rel, &b_ElectronsAuxDyn_PromptLeptonInput_PtVarCone30Rel);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonIso", &ElectronsAuxDyn_PromptLeptonIso, &b_ElectronsAuxDyn_PromptLeptonIso);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone20", &ElectronsAuxDyn_topoetcone20, &b_ElectronsAuxDyn_topoetcone20);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone30", &ElectronsAuxDyn_topoetcone30, &b_ElectronsAuxDyn_topoetcone30);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone30", &ElectronsAuxDyn_ptvarcone30, &b_ElectronsAuxDyn_ptvarcone30);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonInput_rnnip", &ElectronsAuxDyn_PromptLeptonInput_rnnip, &b_ElectronsAuxDyn_PromptLeptonInput_rnnip);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonInput_DL1mu", &ElectronsAuxDyn_PromptLeptonInput_DL1mu, &b_ElectronsAuxDyn_PromptLeptonInput_DL1mu);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonInput_PtRel", &ElectronsAuxDyn_PromptLeptonInput_PtRel, &b_ElectronsAuxDyn_PromptLeptonInput_PtRel);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonInput_PtFrac", &ElectronsAuxDyn_PromptLeptonInput_PtFrac, &b_ElectronsAuxDyn_PromptLeptonInput_PtFrac);
   fChain->SetBranchAddress("ElectronsAuxDyn.PromptLeptonVeto", &ElectronsAuxDyn_PromptLeptonVeto, &b_ElectronsAuxDyn_PromptLeptonVeto);
   fChain->SetBranchAddress("ElectronsAuxDyn.etconeCorrBitset", &ElectronsAuxDyn_etconeCorrBitset, &b_ElectronsAuxDyn_etconeCorrBitset);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonJets_passOR", &ElectronsAuxDyn_DFCommonJets_passOR, &b_ElectronsAuxDyn_DFCommonJets_passOR);
   fChain->SetBranchAddress("ElectronsAuxDyn.selected", &ElectronsAuxDyn_selected, &b_ElectronsAuxDyn_selected);
   fChain->SetBranchAddress("ElectronsAuxDyn.neflowisol20", &ElectronsAuxDyn_neflowisol20, &b_ElectronsAuxDyn_neflowisol20);
   fChain->SetBranchAddress("ElectronsAuxDyn.neflowisol30", &ElectronsAuxDyn_neflowisol30, &b_ElectronsAuxDyn_neflowisol30);
   fChain->SetBranchAddress("ElectronsAuxDyn.neflowisol40", &ElectronsAuxDyn_neflowisol40, &b_ElectronsAuxDyn_neflowisol40);
   fChain->SetBranchAddress("ElectronsAuxDyn.neflowisolCorrBitset", &ElectronsAuxDyn_neflowisolCorrBitset, &b_ElectronsAuxDyn_neflowisolCorrBitset);
   fChain->SetBranchAddress("ElectronsAuxDyn.neflowisolcoreConeEnergyCorrection", &ElectronsAuxDyn_neflowisolcoreConeEnergyCorrection, &b_ElectronsAuxDyn_neflowisolcoreConeEnergyCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptconeCorrBitset", &ElectronsAuxDyn_ptconeCorrBitset, &b_ElectronsAuxDyn_ptconeCorrBitset);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptconecoreTrackPtrCorrection", &ElectronsAuxDyn_ptconecoreTrackPtrCorrection, &b_ElectronsAuxDyn_ptconecoreTrackPtrCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone40", &ElectronsAuxDyn_topoetcone40, &b_ElectronsAuxDyn_topoetcone40);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetconeCorrBitset", &ElectronsAuxDyn_topoetconeCorrBitset, &b_ElectronsAuxDyn_topoetconeCorrBitset);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetconecoreConeEnergyCorrection", &ElectronsAuxDyn_topoetconecoreConeEnergyCorrection, &b_ElectronsAuxDyn_topoetconecoreConeEnergyCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.caloClusterLinks", &ElectronsAuxDyn_caloClusterLinks, &b_ElectronsAuxDyn_caloClusterLinks);
   fChain->SetBranchAddress("ElectronsAuxDyn.OQ", &ElectronsAuxDyn_OQ, &b_ElectronsAuxDyn_OQ);
   fChain->SetBranchAddress("ElectronsAuxDyn.f1", &ElectronsAuxDyn_f1, &b_ElectronsAuxDyn_f1);
   fChain->SetBranchAddress("ElectronsAuxDyn.f3", &ElectronsAuxDyn_f3, &b_ElectronsAuxDyn_f3);
   fChain->SetBranchAddress("ElectronsAuxDyn.f1core", &ElectronsAuxDyn_f1core, &b_ElectronsAuxDyn_f1core);
   fChain->SetBranchAddress("ElectronsAuxDyn.f3core", &ElectronsAuxDyn_f3core, &b_ElectronsAuxDyn_f3core);
   fChain->SetBranchAddress("ElectronsAuxDyn.weta1", &ElectronsAuxDyn_weta1, &b_ElectronsAuxDyn_weta1);
   fChain->SetBranchAddress("ElectronsAuxDyn.weta2", &ElectronsAuxDyn_weta2, &b_ElectronsAuxDyn_weta2);
   fChain->SetBranchAddress("ElectronsAuxDyn.fracs1", &ElectronsAuxDyn_fracs1, &b_ElectronsAuxDyn_fracs1);
   fChain->SetBranchAddress("ElectronsAuxDyn.wtots1", &ElectronsAuxDyn_wtots1, &b_ElectronsAuxDyn_wtots1);
   fChain->SetBranchAddress("ElectronsAuxDyn.e277", &ElectronsAuxDyn_e277, &b_ElectronsAuxDyn_e277);
   fChain->SetBranchAddress("ElectronsAuxDyn.Reta", &ElectronsAuxDyn_Reta, &b_ElectronsAuxDyn_Reta);
   fChain->SetBranchAddress("ElectronsAuxDyn.Rphi", &ElectronsAuxDyn_Rphi, &b_ElectronsAuxDyn_Rphi);
   fChain->SetBranchAddress("ElectronsAuxDyn.Eratio", &ElectronsAuxDyn_Eratio, &b_ElectronsAuxDyn_Eratio);
   fChain->SetBranchAddress("ElectronsAuxDyn.Rhad", &ElectronsAuxDyn_Rhad, &b_ElectronsAuxDyn_Rhad);
   fChain->SetBranchAddress("ElectronsAuxDyn.Rhad1", &ElectronsAuxDyn_Rhad1, &b_ElectronsAuxDyn_Rhad1);
   fChain->SetBranchAddress("ElectronsAuxDyn.DeltaE", &ElectronsAuxDyn_DeltaE, &b_ElectronsAuxDyn_DeltaE);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaEta0", &ElectronsAuxDyn_deltaEta0, &b_ElectronsAuxDyn_deltaEta0);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaEta1", &ElectronsAuxDyn_deltaEta1, &b_ElectronsAuxDyn_deltaEta1);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaEta2", &ElectronsAuxDyn_deltaEta2, &b_ElectronsAuxDyn_deltaEta2);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaEta3", &ElectronsAuxDyn_deltaEta3, &b_ElectronsAuxDyn_deltaEta3);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaPhi0", &ElectronsAuxDyn_deltaPhi0, &b_ElectronsAuxDyn_deltaPhi0);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaPhi1", &ElectronsAuxDyn_deltaPhi1, &b_ElectronsAuxDyn_deltaPhi1);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaPhi2", &ElectronsAuxDyn_deltaPhi2, &b_ElectronsAuxDyn_deltaPhi2);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaPhi3", &ElectronsAuxDyn_deltaPhi3, &b_ElectronsAuxDyn_deltaPhi3);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaPhiRescaled0", &ElectronsAuxDyn_deltaPhiRescaled0, &b_ElectronsAuxDyn_deltaPhiRescaled0);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaPhiRescaled1", &ElectronsAuxDyn_deltaPhiRescaled1, &b_ElectronsAuxDyn_deltaPhiRescaled1);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaPhiRescaled2", &ElectronsAuxDyn_deltaPhiRescaled2, &b_ElectronsAuxDyn_deltaPhiRescaled2);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaPhiRescaled3", &ElectronsAuxDyn_deltaPhiRescaled3, &b_ElectronsAuxDyn_deltaPhiRescaled3);
   fChain->SetBranchAddress("ElectronsAuxDyn.deltaPhiFromLastMeasurement", &ElectronsAuxDyn_deltaPhiFromLastMeasurement, &b_ElectronsAuxDyn_deltaPhiFromLastMeasurement);
   fChain->SetBranchAddress("ElectronsAuxDyn.EgammaCovarianceMatrix", &ElectronsAuxDyn_EgammaCovarianceMatrix, &b_ElectronsAuxDyn_EgammaCovarianceMatrix);
   fChain->SetBranchAddress("ElectronsAuxDyn.LHLoose", &ElectronsAuxDyn_LHLoose, &b_ElectronsAuxDyn_LHLoose);
   fChain->SetBranchAddress("ElectronsAuxDyn.LHMedium", &ElectronsAuxDyn_LHMedium, &b_ElectronsAuxDyn_LHMedium);
   fChain->SetBranchAddress("ElectronsAuxDyn.LHTight", &ElectronsAuxDyn_LHTight, &b_ElectronsAuxDyn_LHTight);
   fChain->SetBranchAddress("ElectronsAuxDyn.LHValue", &ElectronsAuxDyn_LHValue, &b_ElectronsAuxDyn_LHValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.Loose", &ElectronsAuxDyn_Loose, &b_ElectronsAuxDyn_Loose);
   fChain->SetBranchAddress("ElectronsAuxDyn.Medium", &ElectronsAuxDyn_Medium, &b_ElectronsAuxDyn_Medium);
   fChain->SetBranchAddress("ElectronsAuxDyn.MultiLepton", &ElectronsAuxDyn_MultiLepton, &b_ElectronsAuxDyn_MultiLepton);
   fChain->SetBranchAddress("ElectronsAuxDyn.Tight", &ElectronsAuxDyn_Tight, &b_ElectronsAuxDyn_Tight);
   fChain->SetBranchAddress("ElectronsAuxDyn.ambiguityLink", &ElectronsAuxDyn_ambiguityLink_, &b_ElectronsAuxDyn_ambiguityLink_);
   fChain->SetBranchAddress("ElectronsAuxDyn.ambiguityLink.m_persKey", ElectronsAuxDyn_ambiguityLink_m_persKey, &b_ElectronsAuxDyn_ambiguityLink_m_persKey);
   fChain->SetBranchAddress("ElectronsAuxDyn.ambiguityLink.m_persIndex", ElectronsAuxDyn_ambiguityLink_m_persIndex, &b_ElectronsAuxDyn_ambiguityLink_m_persIndex);
   fChain->SetBranchAddress("ElectronsAuxDyn.ambiguityType", &ElectronsAuxDyn_ambiguityType, &b_ElectronsAuxDyn_ambiguityType);
   fChain->SetBranchAddress("ElectronsAuxDyn.asy1", &ElectronsAuxDyn_asy1, &b_ElectronsAuxDyn_asy1);
   fChain->SetBranchAddress("ElectronsAuxDyn.barys1", &ElectronsAuxDyn_barys1, &b_ElectronsAuxDyn_barys1);
   fChain->SetBranchAddress("ElectronsAuxDyn.caloRingsLinks", &ElectronsAuxDyn_caloRingsLinks, &b_ElectronsAuxDyn_caloRingsLinks);
   fChain->SetBranchAddress("ElectronsAuxDyn.core57cellsEnergyCorrection", &ElectronsAuxDyn_core57cellsEnergyCorrection, &b_ElectronsAuxDyn_core57cellsEnergyCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.e1152", &ElectronsAuxDyn_e1152, &b_ElectronsAuxDyn_e1152);
   fChain->SetBranchAddress("ElectronsAuxDyn.e132", &ElectronsAuxDyn_e132, &b_ElectronsAuxDyn_e132);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcEventNumber", &EventInfoAuxDyn_mcEventNumber, &b_mcEventNumber);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcEventWeights", &EventInfoAuxDyn_mcEventWeights, &b_EventInfoAuxDyn_mcEventWeights);
   fChain->SetBranchAddress("EventInfoAuxDyn.streamTagRobs", &EventInfoAuxDyn_streamTagRobs, &b_EventInfoAuxDyn_streamTagRobs);
   fChain->SetBranchAddress("EventInfoAuxDyn.streamTagDets", &EventInfoAuxDyn_streamTagDets, &b_EventInfoAuxDyn_streamTagDets);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventTime", &EventInfoAuxDyn_subEventTime, &b_EventInfoAuxDyn_subEventTime);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventIndex", &EventInfoAuxDyn_subEventIndex, &b_EventInfoAuxDyn_subEventIndex);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_eventClean_LooseBad", &EventInfoAuxDyn_DFCommonJets_eventClean_LooseBad, &b_DFCommonJets_eventClean_LooseBad);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_isBadBatman", &EventInfoAuxDyn_DFCommonJets_isBadBatman, &b_DFCommonJets_isBadBatman);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventLink", &EventInfoAuxDyn_subEventLink_, &b_EventInfoAuxDyn_subEventLink_);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventLink.m_persKey", &EventInfoAuxDyn_subEventLink_m_persKey, &b_EventInfoAuxDyn_subEventLink_m_persKey);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventLink.m_persIndex", &EventInfoAuxDyn_subEventLink_m_persIndex, &b_EventInfoAuxDyn_subEventLink_m_persIndex);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventType", &EventInfoAuxDyn_subEventType, &b_EventInfoAuxDyn_subEventType);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcChannelNumber", &EventInfoAuxDyn_mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectChId", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink", &ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink.m_persKey", ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink.m_persIndex", ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectDeltaAngle", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectDeltaTrans", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectSigmaDeltaAngle", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectSigmaDeltaTrans", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.px", &GSFConversionVerticesAuxDyn_px, &b_GSFConversionVerticesAuxDyn_px);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.py", &GSFConversionVerticesAuxDyn_py, &b_GSFConversionVerticesAuxDyn_py);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.pz", &GSFConversionVerticesAuxDyn_pz, &b_GSFConversionVerticesAuxDyn_pz);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.x", &GSFConversionVerticesAuxDyn_x, &b_GSFConversionVerticesAuxDyn_x);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.y", &GSFConversionVerticesAuxDyn_y, &b_GSFConversionVerticesAuxDyn_y);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.z", &GSFConversionVerticesAuxDyn_z, &b_GSFConversionVerticesAuxDyn_z);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.trackParticleLinks", &GSFConversionVerticesAuxDyn_trackParticleLinks, &b_GSFConversionVerticesAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.neutralParticleLinks", &GSFConversionVerticesAuxDyn_neutralParticleLinks, &b_GSFConversionVerticesAuxDyn_neutralParticleLinks);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.etaAtCalo", &GSFConversionVerticesAuxDyn_etaAtCalo, &b_GSFConversionVerticesAuxDyn_etaAtCalo);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.minRfirstHit", &GSFConversionVerticesAuxDyn_minRfirstHit, &b_GSFConversionVerticesAuxDyn_minRfirstHit);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.phiAtCalo", &GSFConversionVerticesAuxDyn_phiAtCalo, &b_GSFConversionVerticesAuxDyn_phiAtCalo);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.pt1", &GSFConversionVerticesAuxDyn_pt1, &b_GSFConversionVerticesAuxDyn_pt1);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.pt2", &GSFConversionVerticesAuxDyn_pt2, &b_GSFConversionVerticesAuxDyn_pt2);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.parameterPX", &GSFTrackParticlesAuxDyn_parameterPX, &b_GSFTrackParticlesAuxDyn_parameterPX);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.parameterPY", &GSFTrackParticlesAuxDyn_parameterPY, &b_GSFTrackParticlesAuxDyn_parameterPY);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.parameterPZ", &GSFTrackParticlesAuxDyn_parameterPZ, &b_GSFTrackParticlesAuxDyn_parameterPZ);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.parameterPosition", &GSFTrackParticlesAuxDyn_parameterPosition, &b_GSFTrackParticlesAuxDyn_parameterPosition);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.parameterX", &GSFTrackParticlesAuxDyn_parameterX, &b_GSFTrackParticlesAuxDyn_parameterX);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.parameterY", &GSFTrackParticlesAuxDyn_parameterY, &b_GSFTrackParticlesAuxDyn_parameterY);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.parameterZ", &GSFTrackParticlesAuxDyn_parameterZ, &b_GSFTrackParticlesAuxDyn_parameterZ);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.trackLink", &GSFTrackParticlesAuxDyn_trackLink_, &b_GSFTrackParticlesAuxDyn_trackLink_);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.trackLink.m_persKey", GSFTrackParticlesAuxDyn_trackLink_m_persKey, &b_GSFTrackParticlesAuxDyn_trackLink_m_persKey);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.trackLink.m_persIndex", GSFTrackParticlesAuxDyn_trackLink_m_persIndex, &b_GSFTrackParticlesAuxDyn_trackLink_m_persIndex);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.trackParameterCovarianceMatrices", &GSFTrackParticlesAuxDyn_trackParameterCovarianceMatrices, &b_GSFTrackParticlesAuxDyn_trackParameterCovarianceMatrices);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthOrigin", &GSFTrackParticlesAuxDyn_truthOrigin, &b_GSFTrackParticlesAuxDyn_truthOrigin);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthParticleLink", &GSFTrackParticlesAuxDyn_truthParticleLink_, &b_GSFTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthParticleLink.m_persKey", GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthParticleLink.m_persIndex", GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthType", &GSFTrackParticlesAuxDyn_truthType, &b_GSFTrackParticlesAuxDyn_truthType);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.phi", &GSFTrackParticlesAuxDyn_phi, &b_GSFTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.d0", &GSFTrackParticlesAuxDyn_d0, &b_GSFTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.z0", &GSFTrackParticlesAuxDyn_z0, &b_GSFTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.theta", &GSFTrackParticlesAuxDyn_theta, &b_GSFTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.qOverP", &GSFTrackParticlesAuxDyn_qOverP, &b_GSFTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.definingParametersCovMatrix", &GSFTrackParticlesAuxDyn_definingParametersCovMatrix, &b_GSFTrackParticlesAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.vx", &GSFTrackParticlesAuxDyn_vx, &b_GSFTrackParticlesAuxDyn_vx);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.vy", &GSFTrackParticlesAuxDyn_vy, &b_GSFTrackParticlesAuxDyn_vy);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.vz", &GSFTrackParticlesAuxDyn_vz, &b_GSFTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.radiusOfFirstHit", &GSFTrackParticlesAuxDyn_radiusOfFirstHit, &b_GSFTrackParticlesAuxDyn_radiusOfFirstHit);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.identifierOfFirstHit", &GSFTrackParticlesAuxDyn_identifierOfFirstHit, &b_GSFTrackParticlesAuxDyn_identifierOfFirstHit);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.beamlineTiltX", &GSFTrackParticlesAuxDyn_beamlineTiltX, &b_GSFTrackParticlesAuxDyn_beamlineTiltX);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.beamlineTiltY", &GSFTrackParticlesAuxDyn_beamlineTiltY, &b_GSFTrackParticlesAuxDyn_beamlineTiltY);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.hitPattern", &GSFTrackParticlesAuxDyn_hitPattern, &b_GSFTrackParticlesAuxDyn_hitPattern);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfUsedHitsdEdx", &GSFTrackParticlesAuxDyn_numberOfUsedHitsdEdx, &b_GSFTrackParticlesAuxDyn_numberOfUsedHitsdEdx);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfIBLOverflowsdEdx", &GSFTrackParticlesAuxDyn_numberOfIBLOverflowsdEdx, &b_GSFTrackParticlesAuxDyn_numberOfIBLOverflowsdEdx);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.QoverPLM", &GSFTrackParticlesAuxDyn_QoverPLM, &b_GSFTrackParticlesAuxDyn_QoverPLM);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.chiSquared", &GSFTrackParticlesAuxDyn_chiSquared, &b_GSFTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.originalTrackParticle", &GSFTrackParticlesAuxDyn_originalTrackParticle_, &b_GSFTrackParticlesAuxDyn_originalTrackParticle_);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey", GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey, &b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex", GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex, &b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberDoF", &GSFTrackParticlesAuxDyn_numberDoF, &b_GSFTrackParticlesAuxDyn_numberDoF);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.trackFitter", &GSFTrackParticlesAuxDyn_trackFitter, &b_GSFTrackParticlesAuxDyn_trackFitter);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.particleHypothesis", &GSFTrackParticlesAuxDyn_particleHypothesis, &b_GSFTrackParticlesAuxDyn_particleHypothesis);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.trackProperties", &GSFTrackParticlesAuxDyn_trackProperties, &b_GSFTrackParticlesAuxDyn_trackProperties);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.patternRecoInfo", &GSFTrackParticlesAuxDyn_patternRecoInfo, &b_GSFTrackParticlesAuxDyn_patternRecoInfo);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfContribPixelLayers", &GSFTrackParticlesAuxDyn_numberOfContribPixelLayers, &b_GSFTrackParticlesAuxDyn_numberOfContribPixelLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfInnermostPixelLayerHits", &GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits, &b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.vertexLink", &GSFTrackParticlesAuxDyn_vertexLink_, &b_GSFTrackParticlesAuxDyn_vertexLink_);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.vertexLink.m_persKey", GSFTrackParticlesAuxDyn_vertexLink_m_persKey, &b_GSFTrackParticlesAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.vertexLink.m_persIndex", GSFTrackParticlesAuxDyn_vertexLink_m_persIndex, &b_GSFTrackParticlesAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfInnermostPixelLayerOutliers", &GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers, &b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfInnermostPixelLayerSharedHits", &GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerSharedHits, &b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerSharedHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfInnermostPixelLayerSplitHits", &GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerSplitHits, &b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerSplitHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.expectInnermostPixelLayerHit", &GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit, &b_GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfNextToInnermostPixelLayerHits", &GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits, &b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfNextToInnermostPixelLayerOutliers", &GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers, &b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfNextToInnermostPixelLayerSharedHits", &GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerSharedHits, &b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerSharedHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfNextToInnermostPixelLayerSplitHits", &GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerSplitHits, &b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerSplitHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.expectNextToInnermostPixelLayerHit", &GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit, &b_GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelHits", &GSFTrackParticlesAuxDyn_numberOfPixelHits, &b_GSFTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelOutliers", &GSFTrackParticlesAuxDyn_numberOfPixelOutliers, &b_GSFTrackParticlesAuxDyn_numberOfPixelOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelHoles", &GSFTrackParticlesAuxDyn_numberOfPixelHoles, &b_GSFTrackParticlesAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelSharedHits", &GSFTrackParticlesAuxDyn_numberOfPixelSharedHits, &b_GSFTrackParticlesAuxDyn_numberOfPixelSharedHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelSplitHits", &GSFTrackParticlesAuxDyn_numberOfPixelSplitHits, &b_GSFTrackParticlesAuxDyn_numberOfPixelSplitHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfGangedPixels", &GSFTrackParticlesAuxDyn_numberOfGangedPixels, &b_GSFTrackParticlesAuxDyn_numberOfGangedPixels);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfGangedFlaggedFakes", &GSFTrackParticlesAuxDyn_numberOfGangedFlaggedFakes, &b_GSFTrackParticlesAuxDyn_numberOfGangedFlaggedFakes);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelDeadSensors", &GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelSpoiltHits", &GSFTrackParticlesAuxDyn_numberOfPixelSpoiltHits, &b_GSFTrackParticlesAuxDyn_numberOfPixelSpoiltHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfDBMHits", &GSFTrackParticlesAuxDyn_numberOfDBMHits, &b_GSFTrackParticlesAuxDyn_numberOfDBMHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTHits", &GSFTrackParticlesAuxDyn_numberOfSCTHits, &b_GSFTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthMatchProbability", &GSFTrackParticlesAuxDyn_truthMatchProbability, &b_GSFTrackParticlesAuxDyn_truthMatchProbability);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTOutliers", &GSFTrackParticlesAuxDyn_numberOfSCTOutliers, &b_GSFTrackParticlesAuxDyn_numberOfSCTOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTHoles", &GSFTrackParticlesAuxDyn_numberOfSCTHoles, &b_GSFTrackParticlesAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTDoubleHoles", &GSFTrackParticlesAuxDyn_numberOfSCTDoubleHoles, &b_GSFTrackParticlesAuxDyn_numberOfSCTDoubleHoles);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTSharedHits", &GSFTrackParticlesAuxDyn_numberOfSCTSharedHits, &b_GSFTrackParticlesAuxDyn_numberOfSCTSharedHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTDeadSensors", &GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.TRTdEdxUsedHits", &GSFTrackParticlesAuxDyn_TRTdEdxUsedHits, &b_GSFTrackParticlesAuxDyn_TRTdEdxUsedHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.TRTTrackOccupancy", &GSFTrackParticlesAuxDyn_TRTTrackOccupancy, &b_GSFTrackParticlesAuxDyn_TRTTrackOccupancy);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTSpoiltHits", &GSFTrackParticlesAuxDyn_numberOfSCTSpoiltHits, &b_GSFTrackParticlesAuxDyn_numberOfSCTSpoiltHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfTRTHits", &GSFTrackParticlesAuxDyn_numberOfTRTHits, &b_GSFTrackParticlesAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.TRTdEdx", &GSFTrackParticlesAuxDyn_TRTdEdx, &b_GSFTrackParticlesAuxDyn_TRTdEdx);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfTRTOutliers", &GSFTrackParticlesAuxDyn_numberOfTRTOutliers, &b_GSFTrackParticlesAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfTRTHoles", &GSFTrackParticlesAuxDyn_numberOfTRTHoles, &b_GSFTrackParticlesAuxDyn_numberOfTRTHoles);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfTRTHighThresholdHits", &GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdHits, &b_GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfTRTHighThresholdHitsTotal", &GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdHitsTotal, &b_GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdHitsTotal);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfTRTHighThresholdOutliers", &GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdOutliers, &b_GSFTrackParticlesAuxDyn_numberOfTRTHighThresholdOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfTRTDeadStraws", &GSFTrackParticlesAuxDyn_numberOfTRTDeadStraws, &b_GSFTrackParticlesAuxDyn_numberOfTRTDeadStraws);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfTRTTubeHits", &GSFTrackParticlesAuxDyn_numberOfTRTTubeHits, &b_GSFTrackParticlesAuxDyn_numberOfTRTTubeHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfTRTXenonHits", &GSFTrackParticlesAuxDyn_numberOfTRTXenonHits, &b_GSFTrackParticlesAuxDyn_numberOfTRTXenonHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfTRTSharedHits", &GSFTrackParticlesAuxDyn_numberOfTRTSharedHits, &b_GSFTrackParticlesAuxDyn_numberOfTRTSharedHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPrecisionLayers", &GSFTrackParticlesAuxDyn_numberOfPrecisionLayers, &b_GSFTrackParticlesAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPrecisionHoleLayers", &GSFTrackParticlesAuxDyn_numberOfPrecisionHoleLayers, &b_GSFTrackParticlesAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPhiLayers", &GSFTrackParticlesAuxDyn_numberOfPhiLayers, &b_GSFTrackParticlesAuxDyn_numberOfPhiLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPhiHoleLayers", &GSFTrackParticlesAuxDyn_numberOfPhiHoleLayers, &b_GSFTrackParticlesAuxDyn_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfTriggerEtaLayers", &GSFTrackParticlesAuxDyn_numberOfTriggerEtaLayers, &b_GSFTrackParticlesAuxDyn_numberOfTriggerEtaLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfTriggerEtaHoleLayers", &GSFTrackParticlesAuxDyn_numberOfTriggerEtaHoleLayers, &b_GSFTrackParticlesAuxDyn_numberOfTriggerEtaHoleLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfOutliersOnTrack", &GSFTrackParticlesAuxDyn_numberOfOutliersOnTrack, &b_GSFTrackParticlesAuxDyn_numberOfOutliersOnTrack);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.standardDeviationOfChi2OS", &GSFTrackParticlesAuxDyn_standardDeviationOfChi2OS, &b_GSFTrackParticlesAuxDyn_standardDeviationOfChi2OS);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.eProbabilityComb", &GSFTrackParticlesAuxDyn_eProbabilityComb, &b_GSFTrackParticlesAuxDyn_eProbabilityComb);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.eProbabilityHT", &GSFTrackParticlesAuxDyn_eProbabilityHT, &b_GSFTrackParticlesAuxDyn_eProbabilityHT);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.pixeldEdx", &GSFTrackParticlesAuxDyn_pixeldEdx, &b_GSFTrackParticlesAuxDyn_pixeldEdx);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.e_sampl", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_e_sampl, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_e_sampl);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.time", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_time, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_time);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.clusterSize", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_clusterSize, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_clusterSize);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.eta0", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_eta0, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_eta0);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.phi0", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_phi0, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_phi0);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.rawE", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawE, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawE);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.rawEta", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawEta, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawEta);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.rawPhi", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawPhi, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawPhi);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.rawM", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawM, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_rawM);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.altE", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altE, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altE);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.altEta", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altEta, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altEta);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.altPhi", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altPhi, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altPhi);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.altM", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altM, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_altM);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.calE", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calE, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calE);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.calEta", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calEta, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calEta);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.calPhi", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calPhi, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calPhi);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.calM", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calM, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_calM);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.ETA1CALOFRAME", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETA1CALOFRAME, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETA1CALOFRAME);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.ETA2CALOFRAME", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETA2CALOFRAME, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETA2CALOFRAME);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.ETACALOFRAME", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETACALOFRAME, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_ETACALOFRAME);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.PHI1CALOFRAME", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHI1CALOFRAME, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHI1CALOFRAME);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.PHI2CALOFRAME", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHI2CALOFRAME, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHI2CALOFRAME);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.PHICALOFRAME", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHICALOFRAME, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_PHICALOFRAME);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.eta_sampl", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_eta_sampl, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_eta_sampl);
   fChain->SetBranchAddress("HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn.phi_sampl", &HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_phi_sampl, &b_HLT_xAOD__CaloClusterContainer_TrigEFCaloCalibFexAuxDyn_phi_sampl);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.f3core", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f3core, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f3core);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.weta1", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_weta1, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_weta1);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.weta2", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_weta2, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_weta2);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.fracs1", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_fracs1, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_fracs1);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.wtots1", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_wtots1, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_wtots1);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.e277", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_e277, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_e277);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.etcone20", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone20, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone20);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.Reta", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Reta, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Reta);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.etcone30", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone30, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone30);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.Rphi", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rphi, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rphi);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.etcone40", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone40, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_etcone40);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.Eratio", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Eratio, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Eratio);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.ptcone20", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone20, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone20);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.Rhad", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rhad, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rhad);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.ptcone30", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone30, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone30);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.Rhad1", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rhad1, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Rhad1);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.ptcone40", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone40, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptcone40);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.topoetcone20", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone20, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone20);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.trackParticleLinks", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_trackParticleLinks, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.DeltaE", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_DeltaE, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_DeltaE);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.ptvarcone20", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone20, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone20);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.topoetcone30", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone30, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone30);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaEta0", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta0, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta0);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.ptvarcone40", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone40, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone40);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.ptvarcone30", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone30, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_ptvarcone30);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaEta1", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta1, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta1);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaEta2", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta2, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta2);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaEta3", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta3, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaEta3);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaPhi0", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi0, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi0);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaPhi1", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi1, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi1);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaPhi2", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi2, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi2);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.pt", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_pt, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_pt);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaPhi3", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi3, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhi3);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.eta", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_eta, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_eta);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaPhiRescaled0", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled0, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled0);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.phi", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_phi, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_phi);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaPhiRescaled1", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled1, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled1);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.m", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_m, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_m);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaPhiRescaled2", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled2, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled2);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaPhiRescaled3", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled3, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiRescaled3);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.deltaPhiFromLastMeasurement", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiFromLastMeasurement, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_deltaPhiFromLastMeasurement);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.LHLoose", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHLoose, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHLoose);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.LHMedium", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHMedium, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHMedium);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.LHTight", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHTight, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHTight);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.LHValue", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHValue, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHValue);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.Loose", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Loose, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Loose);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.author", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_author, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_author);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.Medium", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Medium, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Medium);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.Tight", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Tight, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_Tight);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.VLoose", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_VLoose, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_VLoose);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.isEMVLoose", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMVLoose, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMVLoose);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.isEMLoose", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLoose, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLoose);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.isEMMedium", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMMedium, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMMedium);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.isEMTight", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMTight, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMTight);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.LHVLoose", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHVLoose, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHVLoose);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.isEMLHVLoose", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHVLoose, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHVLoose);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.isEMLHLoose", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHLoose, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHLoose);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.charge", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_charge, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_charge);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.isEMLHMedium", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHMedium, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHMedium);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.isEMLHTight", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHTight, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHTight);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.LHCaloVLoose", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloVLoose, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloVLoose);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.LHCaloLoose", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloLoose, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloLoose);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.LHCaloMedium", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloMedium, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloMedium);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.LHCaloTight", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloTight, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloTight);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.isEMLHCaloVLoose", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloVLoose, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloVLoose);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.isEMLHCaloLoose", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloLoose, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloLoose);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.isEMLHCaloMedium", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloMedium, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloMedium);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.isEMLHCaloTight", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloTight, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_isEMLHCaloTight);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.LHCaloValue", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloValue, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_LHCaloValue);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.topoetcone40", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone40, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_topoetcone40);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.caloClusterLinks", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_caloClusterLinks, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_caloClusterLinks);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.OQ", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_OQ, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_OQ);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.f1", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f1, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f1);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.f3", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f3, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f3);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.f1core", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f1core, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_f1core);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.author", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_author, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_author);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.Loose", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Loose, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Loose);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.Medium", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Medium, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Medium);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.Tight", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Tight, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Tight);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.topoetcone40", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone40, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone40);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.pt", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_pt, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_pt);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.eta", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_eta, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_eta);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.caloClusterLinks", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_caloClusterLinks, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_caloClusterLinks);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.topoetcone20", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone20, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone20);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.phi", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_phi, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_phi);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.OQ", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_OQ, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_OQ);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.topoetcone30", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone30, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_topoetcone30);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.m", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_m, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_m);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.f1", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f1, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f1);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.ptvarcone30", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone30, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone30);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.f3", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f3, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f3);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.f1core", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f1core, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f1core);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.f3core", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f3core, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_f3core);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.weta1", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_weta1, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_weta1);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.weta2", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_weta2, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_weta2);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.etcone20", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone20, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone20);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.fracs1", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_fracs1, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_fracs1);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.etcone30", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone30, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone30);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.etcone40", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone40, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_etcone40);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.wtots1", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_wtots1, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_wtots1);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.ptcone20", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone20, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone20);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.e277", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_e277, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_e277);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.ptcone30", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone30, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone30);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.Reta", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Reta, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Reta);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.ptcone40", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone40, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptcone40);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.Rphi", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rphi, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rphi);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.ptvarcone20", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone20, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone20);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.Eratio", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Eratio, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Eratio);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.vertexLinks", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_vertexLinks, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_vertexLinks);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.ptvarcone40", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone40, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_ptvarcone40);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.Rhad", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rhad, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rhad);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.convMatchDeltaEta1", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaEta1, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaEta1);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.Rhad1", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rhad1, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_Rhad1);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.convMatchDeltaEta2", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaEta2, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaEta2);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.DeltaE", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_DeltaE, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_DeltaE);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.convMatchDeltaPhi1", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaPhi1, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaPhi1);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.convMatchDeltaPhi2", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaPhi2, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_convMatchDeltaPhi2);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.isEMLoose", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMLoose, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMLoose);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.isEMMedium", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMMedium, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMMedium);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.isEMTight", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMTight, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_isEMTight);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.phi", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_phi, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_phi);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.d0", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_d0, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_d0);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.z0", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_z0, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_z0);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.theta", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_theta, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_theta);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.qOverP", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_qOverP, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_qOverP);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.definingParametersCovMatrix", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_definingParametersCovMatrix, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.vx", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vx, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vx);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.vy", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vy, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vy);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.vz", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vz, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vz);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.radiusOfFirstHit", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_radiusOfFirstHit, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_radiusOfFirstHit);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.identifierOfFirstHit", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_identifierOfFirstHit, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_identifierOfFirstHit);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.beamlineTiltX", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_beamlineTiltX, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_beamlineTiltX);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.beamlineTiltY", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_beamlineTiltY, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_beamlineTiltY);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.hitPattern", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_hitPattern, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_hitPattern);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfUsedHitsdEdx", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfUsedHitsdEdx, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfUsedHitsdEdx);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfIBLOverflowsdEdx", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfIBLOverflowsdEdx, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfIBLOverflowsdEdx);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.chiSquared", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_chiSquared, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_chiSquared);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberDoF", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberDoF, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberDoF);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.trackFitter", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_trackFitter, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_trackFitter);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.particleHypothesis", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_particleHypothesis, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_particleHypothesis);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.trackProperties", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_trackProperties, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_trackProperties);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.patternRecoInfo", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_patternRecoInfo, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_patternRecoInfo);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfContribPixelLayers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfContribPixelLayers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfContribPixelLayers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfInnermostPixelLayerHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.vertexLink", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink_, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink_);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.vertexLink.m_persKey", HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink_m_persKey, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.vertexLink.m_persIndex", HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink_m_persIndex, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfInnermostPixelLayerOutliers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerOutliers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerOutliers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfInnermostPixelLayerSharedHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerSharedHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerSharedHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfInnermostPixelLayerSplitHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerSplitHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfInnermostPixelLayerSplitHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.expectInnermostPixelLayerHit", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_expectInnermostPixelLayerHit, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_expectInnermostPixelLayerHit);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfNextToInnermostPixelLayerHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfNextToInnermostPixelLayerOutliers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerOutliers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerOutliers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfNextToInnermostPixelLayerSharedHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerSharedHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerSharedHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfNextToInnermostPixelLayerSplitHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerSplitHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfNextToInnermostPixelLayerSplitHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.expectNextToInnermostPixelLayerHit", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_expectNextToInnermostPixelLayerHit, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_expectNextToInnermostPixelLayerHit);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfPixelHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfPixelOutliers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelOutliers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelOutliers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfPixelHoles", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelHoles, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfPixelSharedHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSharedHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSharedHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfPixelSplitHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSplitHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSplitHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfGangedPixels", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfGangedPixels, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfGangedPixels);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfGangedFlaggedFakes", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfGangedFlaggedFakes, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfGangedFlaggedFakes);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfPixelDeadSensors", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelDeadSensors, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfPixelSpoiltHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSpoiltHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPixelSpoiltHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfDBMHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfDBMHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfDBMHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfSCTHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfSCTOutliers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTOutliers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTOutliers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfSCTHoles", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTHoles, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfSCTDoubleHoles", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTDoubleHoles, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTDoubleHoles);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfSCTSharedHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTSharedHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTSharedHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfSCTDeadSensors", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTDeadSensors, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.TRTTrackOccupancy", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_TRTTrackOccupancy, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_TRTTrackOccupancy);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfSCTSpoiltHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTSpoiltHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfSCTSpoiltHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfTRTHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfTRTOutliers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTOutliers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfTRTHoles", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHoles, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHoles);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfTRTHighThresholdHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfTRTHighThresholdHitsTotal", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdHitsTotal, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdHitsTotal);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfTRTHighThresholdOutliers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdOutliers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTHighThresholdOutliers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfTRTDeadStraws", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTDeadStraws, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTDeadStraws);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfTRTTubeHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTTubeHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTTubeHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfTRTXenonHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTXenonHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTXenonHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfTRTSharedHits", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTSharedHits, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTRTSharedHits);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfPrecisionLayers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPrecisionLayers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfPrecisionHoleLayers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPrecisionHoleLayers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfPhiLayers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPhiLayers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPhiLayers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfPhiHoleLayers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPhiHoleLayers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfTriggerEtaLayers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTriggerEtaLayers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTriggerEtaLayers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfTriggerEtaHoleLayers", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTriggerEtaHoleLayers, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfTriggerEtaHoleLayers);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.numberOfOutliersOnTrack", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfOutliersOnTrack, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_numberOfOutliersOnTrack);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.standardDeviationOfChi2OS", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_standardDeviationOfChi2OS, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_standardDeviationOfChi2OS);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.eProbabilityComb", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_eProbabilityComb, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_eProbabilityComb);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.eProbabilityHT", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_eProbabilityHT, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_eProbabilityHT);
   fChain->SetBranchAddress("HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn.pixeldEdx", &HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_pixeldEdx, &b_HLT_xAOD__TrackParticleContainer_InDetTrigTrackingxAODCnv_Electron_IDTrigAuxDyn_pixeldEdx);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.et", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_et, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_et);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.rawEta", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEta, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEta);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.nCells", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_nCells, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_nCells);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.rawPhi", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawPhi, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawPhi);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.rawEnergy", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEnergy, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEnergy);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.rawEnergySample", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEnergySample, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEnergySample);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.rawEt", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEt, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_rawEt);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.e233", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e233, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e233);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.RoIword", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_RoIword, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_RoIword);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.clusterQuality", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_clusterQuality, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_clusterQuality);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.e237", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e237, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e237);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.energy", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_energy, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_energy);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.energySample", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_energySample, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_energySample);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.e2tsts1", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e2tsts1, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e2tsts1);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.eta1", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_eta1, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_eta1);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.eta", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_eta, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_eta);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.weta2", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_weta2, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_weta2);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.wstot", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_wstot, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_wstot);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.phi", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_phi, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_phi);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.fracs1", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_fracs1, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_fracs1);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.ehad1", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_ehad1, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_ehad1);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.emaxs1", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_emaxs1, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_emaxs1);
   fChain->SetBranchAddress("HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn.e277", &HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e277, &b_HLT_xAOD__TrigEMClusterContainer_TrigT2CaloEgammaAuxDyn_e277);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.rcore", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_rcore, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_rcore);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.eratio", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_eratio, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_eratio);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.etHad", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etHad, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etHad);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.etHad1", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etHad1, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etHad1);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.f0", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f0, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f0);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.charge", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_charge, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_charge);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.f2", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f2, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f2);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.trkEtaAtCalo", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trkEtaAtCalo, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trkEtaAtCalo);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.trkPhiAtCalo", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trkPhiAtCalo, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trkPhiAtCalo);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.etOverPt", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etOverPt, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_etOverPt);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.caloEta", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_caloEta, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_caloEta);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.caloPhi", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_caloPhi, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_caloPhi);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.emClusterLink", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink_, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink_);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.emClusterLink.m_persKey", HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink_m_persKey, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink_m_persKey);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.emClusterLink.m_persIndex", HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink_m_persIndex, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_emClusterLink_m_persIndex);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.trackParticleLink", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink_, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink_);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.trackParticleLink.m_persKey", HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink_m_persKey, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink_m_persKey);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.trackParticleLink.m_persIndex", HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink_m_persIndex, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_trackParticleLink_m_persIndex);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.f1", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f1, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f1);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.roiWord", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_roiWord, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_roiWord);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.f3", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f3, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_f3);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.pt", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_pt, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_pt);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.zvtx", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_zvtx, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_zvtx);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.nTRTHits", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_nTRTHits, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_nTRTHits);
   fChain->SetBranchAddress("HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn.nTRTHiThresholdHits", &HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_nTRTHiThresholdHits, &b_HLT_xAOD__TrigElectronContainer_L2ElectronFexAuxDyn_nTRTHiThresholdHits);
   fChain->SetBranchAddress("HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn.size", &HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_size, &b_HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_size);
   fChain->SetBranchAddress("HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn.passBits", &HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_passBits, &b_HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_passBits);
   fChain->SetBranchAddress("HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn.containerKey", &HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_containerKey, &b_HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_containerKey);
   fChain->SetBranchAddress("HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn.containerClid", &HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_containerClid, &b_HLT_xAOD__TrigPassBitsContainer_passbitsAuxDyn_containerClid);
   fChain->SetBranchAddress("HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn.rnnDecision", &HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_rnnDecision, &b_HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_rnnDecision);
   fChain->SetBranchAddress("HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn.ringerLink", &HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink_, &b_HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink_);
   fChain->SetBranchAddress("HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn.ringerLink.m_persKey", HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink_m_persKey, &b_HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink_m_persKey);
   fChain->SetBranchAddress("HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn.ringerLink.m_persIndex", HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink_m_persIndex, &b_HLT_xAOD__TrigRNNOutputContainer_TrigRingerNeuralFexAuxDyn_ringerLink_m_persIndex);
   fChain->SetBranchAddress("HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn.emClusterLink", &HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink_, &b_HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink_);
   fChain->SetBranchAddress("HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn.emClusterLink.m_persKey", HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink_m_persKey, &b_HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink_m_persKey);
   fChain->SetBranchAddress("HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn.emClusterLink.m_persIndex", HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink_m_persIndex, &b_HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_emClusterLink_m_persIndex);
   fChain->SetBranchAddress("HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn.rings", &HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_rings, &b_HLT_xAOD__TrigRingerRingsContainer_TrigT2CaloEgammaAuxDyn_rings);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.vz", &InDetForwardTrackParticlesAuxDyn_vz, &b_InDetForwardTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfPixelHits", &InDetForwardTrackParticlesAuxDyn_numberOfPixelHits, &b_InDetForwardTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfPixelHoles", &InDetForwardTrackParticlesAuxDyn_numberOfPixelHoles, &b_InDetForwardTrackParticlesAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfPrecisionLayers", &InDetForwardTrackParticlesAuxDyn_numberOfPrecisionLayers, &b_InDetForwardTrackParticlesAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfPrecisionHoleLayers", &InDetForwardTrackParticlesAuxDyn_numberOfPrecisionHoleLayers, &b_InDetForwardTrackParticlesAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfPixelDeadSensors", &InDetForwardTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_InDetForwardTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfSCTHits", &InDetForwardTrackParticlesAuxDyn_numberOfSCTHits, &b_InDetForwardTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfSCTHoles", &InDetForwardTrackParticlesAuxDyn_numberOfSCTHoles, &b_InDetForwardTrackParticlesAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.d0", &InDetForwardTrackParticlesAuxDyn_d0, &b_InDetForwardTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.z0", &InDetForwardTrackParticlesAuxDyn_z0, &b_InDetForwardTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfSCTDeadSensors", &InDetForwardTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_InDetForwardTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.theta", &InDetForwardTrackParticlesAuxDyn_theta, &b_InDetForwardTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.phi", &InDetForwardTrackParticlesAuxDyn_phi, &b_InDetForwardTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.qOverP", &InDetForwardTrackParticlesAuxDyn_qOverP, &b_InDetForwardTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfTRTHits", &InDetForwardTrackParticlesAuxDyn_numberOfTRTHits, &b_InDetForwardTrackParticlesAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfTRTOutliers", &InDetForwardTrackParticlesAuxDyn_numberOfTRTOutliers, &b_InDetForwardTrackParticlesAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.definingParametersCovMatrix", &InDetForwardTrackParticlesAuxDyn_definingParametersCovMatrix, &b_InDetForwardTrackParticlesAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPhiLayers", &InDetTrackParticlesAuxDyn_numberOfPhiLayers, &b_InDetTrackParticlesAuxDyn_numberOfPhiLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPhiHoleLayers", &InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers, &b_InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.chiSquared", &InDetTrackParticlesAuxDyn_chiSquared, &b_InDetTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberDoF", &InDetTrackParticlesAuxDyn_numberDoF, &b_InDetTrackParticlesAuxDyn_numberDoF);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfInnermostPixelLayerHits", &InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits, &b_InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.expectInnermostPixelLayerHit", &InDetTrackParticlesAuxDyn_expectInnermostPixelLayerHit, &b_InDetTrackParticlesAuxDyn_expectInnermostPixelLayerHit);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfNextToInnermostPixelLayerHits", &InDetTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits, &b_InDetTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.expectNextToInnermostPixelLayerHit", &InDetTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit, &b_InDetTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPixelHits", &InDetTrackParticlesAuxDyn_numberOfPixelHits, &b_InDetTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.phi", &InDetTrackParticlesAuxDyn_phi, &b_InDetTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPixelHoles", &InDetTrackParticlesAuxDyn_numberOfPixelHoles, &b_InDetTrackParticlesAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPixelSharedHits", &InDetTrackParticlesAuxDyn_numberOfPixelSharedHits, &b_InDetTrackParticlesAuxDyn_numberOfPixelSharedHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPixelDeadSensors", &InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfSCTHits", &InDetTrackParticlesAuxDyn_numberOfSCTHits, &b_InDetTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfSCTHoles", &InDetTrackParticlesAuxDyn_numberOfSCTHoles, &b_InDetTrackParticlesAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthParticleLink", &InDetTrackParticlesAuxDyn_truthParticleLink_, &b_InDetTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthParticleLink.m_persKey", InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthParticleLink.m_persIndex", InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfSCTSharedHits", &InDetTrackParticlesAuxDyn_numberOfSCTSharedHits, &b_InDetTrackParticlesAuxDyn_numberOfSCTSharedHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfSCTDeadSensors", &InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.d0", &InDetTrackParticlesAuxDyn_d0, &b_InDetTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.z0", &InDetTrackParticlesAuxDyn_z0, &b_InDetTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.theta", &InDetTrackParticlesAuxDyn_theta, &b_InDetTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfTRTHits", &InDetTrackParticlesAuxDyn_numberOfTRTHits, &b_InDetTrackParticlesAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.qOverP", &InDetTrackParticlesAuxDyn_qOverP, &b_InDetTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfTRTOutliers", &InDetTrackParticlesAuxDyn_numberOfTRTOutliers, &b_InDetTrackParticlesAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.definingParametersCovMatrix", &InDetTrackParticlesAuxDyn_definingParametersCovMatrix, &b_InDetTrackParticlesAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.vz", &InDetTrackParticlesAuxDyn_vz, &b_InDetTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.vertexLink", &InDetTrackParticlesAuxDyn_vertexLink_, &b_InDetTrackParticlesAuxDyn_vertexLink_);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.vertexLink.m_persKey", InDetTrackParticlesAuxDyn_vertexLink_m_persKey, &b_InDetTrackParticlesAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.vertexLink.m_persIndex", InDetTrackParticlesAuxDyn_vertexLink_m_persIndex, &b_InDetTrackParticlesAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPrecisionLayers", &InDetTrackParticlesAuxDyn_numberOfPrecisionLayers, &b_InDetTrackParticlesAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthMatchProbability", &InDetTrackParticlesAuxDyn_truthMatchProbability, &b_InDetTrackParticlesAuxDyn_truthMatchProbability);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPrecisionHoleLayers", &InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers, &b_InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("Kt4EMTopoOriginEventShapeAuxDyn.Density", &Kt4EMTopoOriginEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.roiWord", &LVL1EmTauRoIsAuxDyn_roiWord, &b_LVL1EmTauRoIsAuxDyn_roiWord);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.etScale", &LVL1EmTauRoIsAuxDyn_etScale, &b_LVL1EmTauRoIsAuxDyn_etScale);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.thrPattern", &LVL1EmTauRoIsAuxDyn_thrPattern, &b_LVL1EmTauRoIsAuxDyn_thrPattern);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.thrNames", &LVL1EmTauRoIsAuxDyn_thrNames, &b_LVL1EmTauRoIsAuxDyn_thrNames);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.thrValues", &LVL1EmTauRoIsAuxDyn_thrValues, &b_LVL1EmTauRoIsAuxDyn_thrValues);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.core", &LVL1EmTauRoIsAuxDyn_core, &b_LVL1EmTauRoIsAuxDyn_core);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.emClus", &LVL1EmTauRoIsAuxDyn_emClus, &b_LVL1EmTauRoIsAuxDyn_emClus);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.eta", &LVL1EmTauRoIsAuxDyn_eta, &b_LVL1EmTauRoIsAuxDyn_eta);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.tauClus", &LVL1EmTauRoIsAuxDyn_tauClus, &b_LVL1EmTauRoIsAuxDyn_tauClus);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.phi", &LVL1EmTauRoIsAuxDyn_phi, &b_LVL1EmTauRoIsAuxDyn_phi);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.emIsol", &LVL1EmTauRoIsAuxDyn_emIsol, &b_LVL1EmTauRoIsAuxDyn_emIsol);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.hadIsol", &LVL1EmTauRoIsAuxDyn_hadIsol, &b_LVL1EmTauRoIsAuxDyn_hadIsol);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.hadCore", &LVL1EmTauRoIsAuxDyn_hadCore, &b_LVL1EmTauRoIsAuxDyn_hadCore);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.name", &MET_Core_AntiKt4EMTopoAuxDyn_name, &b_MET_Core_AntiKt4EMTopoAuxDyn_name);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.mpx", &MET_Core_AntiKt4EMTopoAuxDyn_mpx, &b_MET_Core_AntiKt4EMTopoAuxDyn_mpx);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.mpy", &MET_Core_AntiKt4EMTopoAuxDyn_mpy, &b_MET_Core_AntiKt4EMTopoAuxDyn_mpy);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.sumet", &MET_Core_AntiKt4EMTopoAuxDyn_sumet, &b_MET_Core_AntiKt4EMTopoAuxDyn_sumet);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.source", &MET_Core_AntiKt4EMTopoAuxDyn_source, &b_MET_Core_AntiKt4EMTopoAuxDyn_source);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopoAuxDyn.name", &MET_Reference_AntiKt4EMTopoAuxDyn_name, &b_MET_Reference_AntiKt4EMTopoAuxDyn_name);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopoAuxDyn.mpx", &MET_Reference_AntiKt4EMTopoAuxDyn_mpx, &b_MET_Reference_AntiKt4EMTopoAuxDyn_mpx);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopoAuxDyn.mpy", &MET_Reference_AntiKt4EMTopoAuxDyn_mpy, &b_MET_Reference_AntiKt4EMTopoAuxDyn_mpy);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopoAuxDyn.sumet", &MET_Reference_AntiKt4EMTopoAuxDyn_sumet, &b_MET_Reference_AntiKt4EMTopoAuxDyn_sumet);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopoAuxDyn.source", &MET_Reference_AntiKt4EMTopoAuxDyn_source, &b_MET_Reference_AntiKt4EMTopoAuxDyn_source);
   fChain->SetBranchAddress("MET_TrackAuxDyn.name", &MET_TrackAuxDyn_name, &b_MET_TrackAuxDyn_name);
   fChain->SetBranchAddress("MET_TrackAuxDyn.mpx", &MET_TrackAuxDyn_mpx, &b_MET_TrackAuxDyn_mpx);
   fChain->SetBranchAddress("MET_TrackAuxDyn.mpy", &MET_TrackAuxDyn_mpy, &b_MET_TrackAuxDyn_mpy);
   fChain->SetBranchAddress("MET_TruthAuxDyn.name", &MET_TruthAuxDyn_name, &b_MET_TruthAuxDyn_name);
   fChain->SetBranchAddress("MET_TruthAuxDyn.mpx", &MET_TruthAuxDyn_mpx, &b_MET_TruthAuxDyn_mpx);
   fChain->SetBranchAddress("MET_TruthAuxDyn.mpy", &MET_TruthAuxDyn_mpy, &b_MET_TruthAuxDyn_mpy);
   fChain->SetBranchAddress("MET_TruthAuxDyn.sumet", &MET_TruthAuxDyn_sumet, &b_MET_TruthAuxDyn_sumet);
   fChain->SetBranchAddress("MET_TruthAuxDyn.source", &MET_TruthAuxDyn_source, &b_MET_TruthAuxDyn_source);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.truthSegmentLink", &MuonSegmentsAuxDyn_truthSegmentLink_, &b_MuonSegmentsAuxDyn_truthSegmentLink_);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.truthSegmentLink.m_persKey", MuonSegmentsAuxDyn_truthSegmentLink_m_persKey, &b_MuonSegmentsAuxDyn_truthSegmentLink_m_persKey);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.truthSegmentLink.m_persIndex", MuonSegmentsAuxDyn_truthSegmentLink_m_persIndex, &b_MuonSegmentsAuxDyn_truthSegmentLink_m_persIndex);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.px", &MuonSegmentsAuxDyn_px, &b_MuonSegmentsAuxDyn_px);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.py", &MuonSegmentsAuxDyn_py, &b_MuonSegmentsAuxDyn_py);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.pz", &MuonSegmentsAuxDyn_pz, &b_MuonSegmentsAuxDyn_pz);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.x", &MuonSegmentsAuxDyn_x, &b_MuonSegmentsAuxDyn_x);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.y", &MuonSegmentsAuxDyn_y, &b_MuonSegmentsAuxDyn_y);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.z", &MuonSegmentsAuxDyn_z, &b_MuonSegmentsAuxDyn_z);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.chiSquared", &MuonSegmentsAuxDyn_chiSquared, &b_MuonSegmentsAuxDyn_chiSquared);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.numberDoF", &MuonSegmentsAuxDyn_numberDoF, &b_MuonSegmentsAuxDyn_numberDoF);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.t0error", &MuonSegmentsAuxDyn_t0error, &b_MuonSegmentsAuxDyn_t0error);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.sector", &MuonSegmentsAuxDyn_sector, &b_MuonSegmentsAuxDyn_sector);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.chamberIndex", &MuonSegmentsAuxDyn_chamberIndex, &b_MuonSegmentsAuxDyn_chamberIndex);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.etaIndex", &MuonSegmentsAuxDyn_etaIndex, &b_MuonSegmentsAuxDyn_etaIndex);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.t0", &MuonSegmentsAuxDyn_t0, &b_MuonSegmentsAuxDyn_t0);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.technology", &MuonSegmentsAuxDyn_technology, &b_MuonSegmentsAuxDyn_technology);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.nPrecisionHits", &MuonSegmentsAuxDyn_nPrecisionHits, &b_MuonSegmentsAuxDyn_nPrecisionHits);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.nPhiLayers", &MuonSegmentsAuxDyn_nPhiLayers, &b_MuonSegmentsAuxDyn_nPhiLayers);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.nTrigEtaLayers", &MuonSegmentsAuxDyn_nTrigEtaLayers, &b_MuonSegmentsAuxDyn_nTrigEtaLayers);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.clusterTime", &MuonSegmentsAuxDyn_clusterTime, &b_MuonSegmentsAuxDyn_clusterTime);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.clusterTimeError", &MuonSegmentsAuxDyn_clusterTimeError, &b_MuonSegmentsAuxDyn_clusterTimeError);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.clusterTimeValid", &MuonSegmentsAuxDyn_clusterTimeValid, &b_MuonSegmentsAuxDyn_clusterTimeValid);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.muonSegment", &MuonSegmentsAuxDyn_muonSegment_, &b_MuonSegmentsAuxDyn_muonSegment_);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.muonSegment.m_persKey", MuonSegmentsAuxDyn_muonSegment_m_persKey, &b_MuonSegmentsAuxDyn_muonSegment_m_persKey);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.muonSegment.m_persIndex", MuonSegmentsAuxDyn_muonSegment_m_persIndex, &b_MuonSegmentsAuxDyn_muonSegment_m_persIndex);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.vertexLink", &MuonSpectrometerTrackParticlesAuxDyn_vertexLink_, &b_MuonSpectrometerTrackParticlesAuxDyn_vertexLink_);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.vertexLink.m_persKey", MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persKey, &b_MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.vertexLink.m_persIndex", MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persIndex, &b_MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.d0", &MuonSpectrometerTrackParticlesAuxDyn_d0, &b_MuonSpectrometerTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.z0", &MuonSpectrometerTrackParticlesAuxDyn_z0, &b_MuonSpectrometerTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.theta", &MuonSpectrometerTrackParticlesAuxDyn_theta, &b_MuonSpectrometerTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.qOverP", &MuonSpectrometerTrackParticlesAuxDyn_qOverP, &b_MuonSpectrometerTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.definingParametersCovMatrix", &MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrix, &b_MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink", &MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_, &b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink.m_persKey", MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink.m_persIndex", MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.vz", &MuonSpectrometerTrackParticlesAuxDyn_vz, &b_MuonSpectrometerTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.phi", &MuonSpectrometerTrackParticlesAuxDyn_phi, &b_MuonSpectrometerTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("MuonTruthParticlesAuxDyn.truthOrigin", &MuonTruthParticlesAuxDyn_truthOrigin, &b_MuonTruthParticlesAuxDyn_truthOrigin);
   fChain->SetBranchAddress("MuonTruthParticlesAuxDyn.truthType", &MuonTruthParticlesAuxDyn_truthType, &b_MuonTruthParticlesAuxDyn_truthType);
   fChain->SetBranchAddress("MuonsAuxDyn.outerOutBoundsPrecisionHits", &MuonsAuxDyn_outerOutBoundsPrecisionHits, &b_MuonsAuxDyn_outerOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.topoetcone20", &MuonsAuxDyn_topoetcone20, &b_MuonsAuxDyn_topoetcone20);
   fChain->SetBranchAddress("MuonsAuxDyn.topoetcone30", &MuonsAuxDyn_topoetcone30, &b_MuonsAuxDyn_topoetcone30);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedClosePrecisionHits", &MuonsAuxDyn_extendedClosePrecisionHits, &b_MuonsAuxDyn_extendedClosePrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedOutBoundsPrecisionHits", &MuonsAuxDyn_extendedOutBoundsPrecisionHits, &b_MuonsAuxDyn_extendedOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.innerClosePrecisionHits", &MuonsAuxDyn_innerClosePrecisionHits, &b_MuonsAuxDyn_innerClosePrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.innerOutBoundsPrecisionHits", &MuonsAuxDyn_innerOutBoundsPrecisionHits, &b_MuonsAuxDyn_innerOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.topoetcone40", &MuonsAuxDyn_topoetcone40, &b_MuonsAuxDyn_topoetcone40);
   fChain->SetBranchAddress("MuonsAuxDyn.isEndcapGoodLayers", &MuonsAuxDyn_isEndcapGoodLayers, &b_MuonsAuxDyn_isEndcapGoodLayers);
   fChain->SetBranchAddress("MuonsAuxDyn.isSmallGoodSectors", &MuonsAuxDyn_isSmallGoodSectors, &b_MuonsAuxDyn_isSmallGoodSectors);
   fChain->SetBranchAddress("MuonsAuxDyn.middleClosePrecisionHits", &MuonsAuxDyn_middleClosePrecisionHits, &b_MuonsAuxDyn_middleClosePrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.middleOutBoundsPrecisionHits", &MuonsAuxDyn_middleOutBoundsPrecisionHits, &b_MuonsAuxDyn_middleOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.truthOrigin", &MuonsAuxDyn_truthOrigin, &b_MuonsAuxDyn_truthOrigin);
   fChain->SetBranchAddress("MuonsAuxDyn.truthParticleLink", &MuonsAuxDyn_truthParticleLink_, &b_MuonsAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.truthParticleLink.m_persKey", MuonsAuxDyn_truthParticleLink_m_persKey, &b_MuonsAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.truthParticleLink.m_persIndex", MuonsAuxDyn_truthParticleLink_m_persIndex, &b_MuonsAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.truthType", &MuonsAuxDyn_truthType, &b_MuonsAuxDyn_truthType);
   fChain->SetBranchAddress("MuonsAuxDyn.InnerDetectorPt", &MuonsAuxDyn_InnerDetectorPt, &b_MuonsAuxDyn_InnerDetectorPt);
   fChain->SetBranchAddress("MuonsAuxDyn.numberOfGoodPrecisionLayers", &MuonsAuxDyn_numberOfGoodPrecisionLayers, &b_MuonsAuxDyn_numberOfGoodPrecisionLayers);
   fChain->SetBranchAddress("MuonsAuxDyn.MuonSpectrometerPt", &MuonsAuxDyn_MuonSpectrometerPt, &b_MuonsAuxDyn_MuonSpectrometerPt);
   fChain->SetBranchAddress("MuonsAuxDyn.outerClosePrecisionHits", &MuonsAuxDyn_outerClosePrecisionHits, &b_MuonsAuxDyn_outerClosePrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.combinedTrackOutBoundsPrecisionHits", &MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits, &b_MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits);
   fChain->SetBranchAddress("NeutralParticleFlowIsoCentralEventShapeAuxDyn.Density", &NeutralParticleFlowIsoCentralEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("NeutralParticleFlowIsoCentralEventShapeAuxDyn.DensitySigma", &NeutralParticleFlowIsoCentralEventShapeAuxDyn_DensitySigma, &b_DensitySigma);
   fChain->SetBranchAddress("NeutralParticleFlowIsoCentralEventShapeAuxDyn.DensityArea", &NeutralParticleFlowIsoCentralEventShapeAuxDyn_DensityArea, &b_DensityArea);
   fChain->SetBranchAddress("NeutralParticleFlowIsoForwardEventShapeAuxDyn.Density", &NeutralParticleFlowIsoForwardEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("NeutralParticleFlowIsoForwardEventShapeAuxDyn.DensitySigma", &NeutralParticleFlowIsoForwardEventShapeAuxDyn_DensitySigma, &b_DensitySigma);
   fChain->SetBranchAddress("NeutralParticleFlowIsoForwardEventShapeAuxDyn.DensityArea", &NeutralParticleFlowIsoForwardEventShapeAuxDyn_DensityArea, &b_DensityArea);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.7x11ClusterExist", &NewSwElectronsAuxDyn_7x11ClusterExist, &b_NewSwElectronsAuxDyn_7x11ClusterExist);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaPhiRescaled0", &NewSwElectronsAuxDyn_deltaPhiRescaled0, &b_NewSwElectronsAuxDyn_deltaPhiRescaled0);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.NewSwClusterLink", &NewSwElectronsAuxDyn_NewSwClusterLink_, &b_NewSwElectronsAuxDyn_NewSwClusterLink_);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.NewSwClusterLink.m_persKey", NewSwElectronsAuxDyn_NewSwClusterLink_m_persKey, &b_NewSwElectronsAuxDyn_NewSwClusterLink_m_persKey);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.NewSwClusterLink.m_persIndex", NewSwElectronsAuxDyn_NewSwClusterLink_m_persIndex, &b_NewSwElectronsAuxDyn_NewSwClusterLink_m_persIndex);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaPhiRescaled1", &NewSwElectronsAuxDyn_deltaPhiRescaled1, &b_NewSwElectronsAuxDyn_deltaPhiRescaled1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e011", &NewSwElectronsAuxDyn_e011, &b_NewSwElectronsAuxDyn_e011);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaPhiRescaled2", &NewSwElectronsAuxDyn_deltaPhiRescaled2, &b_NewSwElectronsAuxDyn_deltaPhiRescaled2);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e033", &NewSwElectronsAuxDyn_e033, &b_NewSwElectronsAuxDyn_e033);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaPhiRescaled3", &NewSwElectronsAuxDyn_deltaPhiRescaled3, &b_NewSwElectronsAuxDyn_deltaPhiRescaled3);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e333", &NewSwElectronsAuxDyn_e333, &b_NewSwElectronsAuxDyn_e333);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaPhiFromLastMeasurement", &NewSwElectronsAuxDyn_deltaPhiFromLastMeasurement, &b_NewSwElectronsAuxDyn_deltaPhiFromLastMeasurement);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e335", &NewSwElectronsAuxDyn_e335, &b_NewSwElectronsAuxDyn_e335);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.EgammaCovarianceMatrix", &NewSwElectronsAuxDyn_EgammaCovarianceMatrix, &b_NewSwElectronsAuxDyn_EgammaCovarianceMatrix);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e337", &NewSwElectronsAuxDyn_e337, &b_NewSwElectronsAuxDyn_e337);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.LHLoose", &NewSwElectronsAuxDyn_LHLoose, &b_NewSwElectronsAuxDyn_LHLoose);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e377", &NewSwElectronsAuxDyn_e377, &b_NewSwElectronsAuxDyn_e377);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.LHMedium", &NewSwElectronsAuxDyn_LHMedium, &b_NewSwElectronsAuxDyn_LHMedium);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.LHTight", &NewSwElectronsAuxDyn_LHTight, &b_NewSwElectronsAuxDyn_LHTight);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.LHValue", &NewSwElectronsAuxDyn_LHValue, &b_NewSwElectronsAuxDyn_LHValue);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.Loose", &NewSwElectronsAuxDyn_Loose, &b_NewSwElectronsAuxDyn_Loose);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.trackParticleLinks", &NewSwElectronsAuxDyn_trackParticleLinks, &b_NewSwElectronsAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.Medium", &NewSwElectronsAuxDyn_Medium, &b_NewSwElectronsAuxDyn_Medium);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.MultiLepton", &NewSwElectronsAuxDyn_MultiLepton, &b_NewSwElectronsAuxDyn_MultiLepton);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.Tight", &NewSwElectronsAuxDyn_Tight, &b_NewSwElectronsAuxDyn_Tight);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ambiguityLink", &NewSwElectronsAuxDyn_ambiguityLink_, &b_NewSwElectronsAuxDyn_ambiguityLink_);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ambiguityLink.m_persKey", NewSwElectronsAuxDyn_ambiguityLink_m_persKey, &b_NewSwElectronsAuxDyn_ambiguityLink_m_persKey);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ambiguityLink.m_persIndex", NewSwElectronsAuxDyn_ambiguityLink_m_persIndex, &b_NewSwElectronsAuxDyn_ambiguityLink_m_persIndex);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ambiguityType", &NewSwElectronsAuxDyn_ambiguityType, &b_NewSwElectronsAuxDyn_ambiguityType);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.author", &NewSwElectronsAuxDyn_author, &b_NewSwElectronsAuxDyn_author);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.asy1", &NewSwElectronsAuxDyn_asy1, &b_NewSwElectronsAuxDyn_asy1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.barys1", &NewSwElectronsAuxDyn_barys1, &b_NewSwElectronsAuxDyn_barys1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.caloRingsLinks", &NewSwElectronsAuxDyn_caloRingsLinks, &b_NewSwElectronsAuxDyn_caloRingsLinks);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.pt", &NewSwElectronsAuxDyn_pt, &b_NewSwElectronsAuxDyn_pt);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.core57cellsEnergyCorrection", &NewSwElectronsAuxDyn_core57cellsEnergyCorrection, &b_NewSwElectronsAuxDyn_core57cellsEnergyCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.eta", &NewSwElectronsAuxDyn_eta, &b_NewSwElectronsAuxDyn_eta);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e1152", &NewSwElectronsAuxDyn_e1152, &b_NewSwElectronsAuxDyn_e1152);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.phi", &NewSwElectronsAuxDyn_phi, &b_NewSwElectronsAuxDyn_phi);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e132", &NewSwElectronsAuxDyn_e132, &b_NewSwElectronsAuxDyn_e132);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.m", &NewSwElectronsAuxDyn_m, &b_NewSwElectronsAuxDyn_m);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e233", &NewSwElectronsAuxDyn_e233, &b_NewSwElectronsAuxDyn_e233);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e235", &NewSwElectronsAuxDyn_e235, &b_NewSwElectronsAuxDyn_e235);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e237", &NewSwElectronsAuxDyn_e237, &b_NewSwElectronsAuxDyn_e237);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e255", &NewSwElectronsAuxDyn_e255, &b_NewSwElectronsAuxDyn_e255);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e2ts1", &NewSwElectronsAuxDyn_e2ts1, &b_NewSwElectronsAuxDyn_e2ts1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e2tsts1", &NewSwElectronsAuxDyn_e2tsts1, &b_NewSwElectronsAuxDyn_e2tsts1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ecore", &NewSwElectronsAuxDyn_ecore, &b_NewSwElectronsAuxDyn_ecore);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ehad1", &NewSwElectronsAuxDyn_ehad1, &b_NewSwElectronsAuxDyn_ehad1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.emaxs1", &NewSwElectronsAuxDyn_emaxs1, &b_NewSwElectronsAuxDyn_emaxs1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.emins1", &NewSwElectronsAuxDyn_emins1, &b_NewSwElectronsAuxDyn_emins1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.etcone20ptCorrection", &NewSwElectronsAuxDyn_etcone20ptCorrection, &b_NewSwElectronsAuxDyn_etcone20ptCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.etcone30ptCorrection", &NewSwElectronsAuxDyn_etcone30ptCorrection, &b_NewSwElectronsAuxDyn_etcone30ptCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.etcone40ptCorrection", &NewSwElectronsAuxDyn_etcone40ptCorrection, &b_NewSwElectronsAuxDyn_etcone40ptCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ethad", &NewSwElectronsAuxDyn_ethad, &b_NewSwElectronsAuxDyn_ethad);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ethad1", &NewSwElectronsAuxDyn_ethad1, &b_NewSwElectronsAuxDyn_ethad1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.neflowisol20ptCorrection", &NewSwElectronsAuxDyn_neflowisol20ptCorrection, &b_NewSwElectronsAuxDyn_neflowisol20ptCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.neflowisol30ptCorrection", &NewSwElectronsAuxDyn_neflowisol30ptCorrection, &b_NewSwElectronsAuxDyn_neflowisol30ptCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.neflowisol40ptCorrection", &NewSwElectronsAuxDyn_neflowisol40ptCorrection, &b_NewSwElectronsAuxDyn_neflowisol40ptCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.pos", &NewSwElectronsAuxDyn_pos, &b_NewSwElectronsAuxDyn_pos);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.pos7", &NewSwElectronsAuxDyn_pos7, &b_NewSwElectronsAuxDyn_pos7);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.poscs1", &NewSwElectronsAuxDyn_poscs1, &b_NewSwElectronsAuxDyn_poscs1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.poscs2", &NewSwElectronsAuxDyn_poscs2, &b_NewSwElectronsAuxDyn_poscs2);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.r33over37allcalo", &NewSwElectronsAuxDyn_r33over37allcalo, &b_NewSwElectronsAuxDyn_r33over37allcalo);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.topoetcone20ptCorrection", &NewSwElectronsAuxDyn_topoetcone20ptCorrection, &b_NewSwElectronsAuxDyn_topoetcone20ptCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.topoetcone30ptCorrection", &NewSwElectronsAuxDyn_topoetcone30ptCorrection, &b_NewSwElectronsAuxDyn_topoetcone30ptCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.topoetcone40ptCorrection", &NewSwElectronsAuxDyn_topoetcone40ptCorrection, &b_NewSwElectronsAuxDyn_topoetcone40ptCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.topoetconecoreConeSCEnergyCorrection", &NewSwElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection, &b_NewSwElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.widths1", &NewSwElectronsAuxDyn_widths1, &b_NewSwElectronsAuxDyn_widths1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.widths2", &NewSwElectronsAuxDyn_widths2, &b_NewSwElectronsAuxDyn_widths2);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.charge", &NewSwElectronsAuxDyn_charge, &b_NewSwElectronsAuxDyn_charge);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.etcone20", &NewSwElectronsAuxDyn_etcone20, &b_NewSwElectronsAuxDyn_etcone20);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.etcone30", &NewSwElectronsAuxDyn_etcone30, &b_NewSwElectronsAuxDyn_etcone30);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.etcone40", &NewSwElectronsAuxDyn_etcone40, &b_NewSwElectronsAuxDyn_etcone40);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ptcone20", &NewSwElectronsAuxDyn_ptcone20, &b_NewSwElectronsAuxDyn_ptcone20);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ptcone30", &NewSwElectronsAuxDyn_ptcone30, &b_NewSwElectronsAuxDyn_ptcone30);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ptcone40", &NewSwElectronsAuxDyn_ptcone40, &b_NewSwElectronsAuxDyn_ptcone40);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ptvarcone20", &NewSwElectronsAuxDyn_ptvarcone20, &b_NewSwElectronsAuxDyn_ptvarcone20);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ptvarcone40", &NewSwElectronsAuxDyn_ptvarcone40, &b_NewSwElectronsAuxDyn_ptvarcone40);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.topoetcone20", &NewSwElectronsAuxDyn_topoetcone20, &b_NewSwElectronsAuxDyn_topoetcone20);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.truthOrigin", &NewSwElectronsAuxDyn_truthOrigin, &b_NewSwElectronsAuxDyn_truthOrigin);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.topoetcone30", &NewSwElectronsAuxDyn_topoetcone30, &b_NewSwElectronsAuxDyn_topoetcone30);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.truthParticleLink", &NewSwElectronsAuxDyn_truthParticleLink_, &b_NewSwElectronsAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.truthParticleLink.m_persKey", NewSwElectronsAuxDyn_truthParticleLink_m_persKey, &b_NewSwElectronsAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.truthParticleLink.m_persIndex", NewSwElectronsAuxDyn_truthParticleLink_m_persIndex, &b_NewSwElectronsAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ptvarcone30", &NewSwElectronsAuxDyn_ptvarcone30, &b_NewSwElectronsAuxDyn_ptvarcone30);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.truthType", &NewSwElectronsAuxDyn_truthType, &b_NewSwElectronsAuxDyn_truthType);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.etconeCorrBitset", &NewSwElectronsAuxDyn_etconeCorrBitset, &b_NewSwElectronsAuxDyn_etconeCorrBitset);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.DFCommonElectronsLHVeryLoose", &NewSwElectronsAuxDyn_DFCommonElectronsLHVeryLoose, &b_NewSwElectronsAuxDyn_DFCommonElectronsLHVeryLoose);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.DFCommonElectronsLHLoose", &NewSwElectronsAuxDyn_DFCommonElectronsLHLoose, &b_NewSwElectronsAuxDyn_DFCommonElectronsLHLoose);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.DFCommonElectronsLHMedium", &NewSwElectronsAuxDyn_DFCommonElectronsLHMedium, &b_NewSwElectronsAuxDyn_DFCommonElectronsLHMedium);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.DFCommonElectronsLHTight", &NewSwElectronsAuxDyn_DFCommonElectronsLHTight, &b_NewSwElectronsAuxDyn_DFCommonElectronsLHTight);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.DFCommonElectronsIsEMLoose", &NewSwElectronsAuxDyn_DFCommonElectronsIsEMLoose, &b_NewSwElectronsAuxDyn_DFCommonElectronsIsEMLoose);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.DFCommonElectronsIsEMLooseIsEMValue", &NewSwElectronsAuxDyn_DFCommonElectronsIsEMLooseIsEMValue, &b_NewSwElectronsAuxDyn_DFCommonElectronsIsEMLooseIsEMValue);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.DFCommonElectronsIsEMMedium", &NewSwElectronsAuxDyn_DFCommonElectronsIsEMMedium, &b_NewSwElectronsAuxDyn_DFCommonElectronsIsEMMedium);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.DFCommonElectronsIsEMMediumIsEMValue", &NewSwElectronsAuxDyn_DFCommonElectronsIsEMMediumIsEMValue, &b_NewSwElectronsAuxDyn_DFCommonElectronsIsEMMediumIsEMValue);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.neflowisol20", &NewSwElectronsAuxDyn_neflowisol20, &b_NewSwElectronsAuxDyn_neflowisol20);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.DFCommonElectronsIsEMTight", &NewSwElectronsAuxDyn_DFCommonElectronsIsEMTight, &b_NewSwElectronsAuxDyn_DFCommonElectronsIsEMTight);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.neflowisol30", &NewSwElectronsAuxDyn_neflowisol30, &b_NewSwElectronsAuxDyn_neflowisol30);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.DFCommonElectronsIsEMTightIsEMValue", &NewSwElectronsAuxDyn_DFCommonElectronsIsEMTightIsEMValue, &b_NewSwElectronsAuxDyn_DFCommonElectronsIsEMTightIsEMValue);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.neflowisol40", &NewSwElectronsAuxDyn_neflowisol40, &b_NewSwElectronsAuxDyn_neflowisol40);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.neflowisolCorrBitset", &NewSwElectronsAuxDyn_neflowisolCorrBitset, &b_NewSwElectronsAuxDyn_neflowisolCorrBitset);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.neflowisolcoreConeEnergyCorrection", &NewSwElectronsAuxDyn_neflowisolcoreConeEnergyCorrection, &b_NewSwElectronsAuxDyn_neflowisolcoreConeEnergyCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.DFCommonElectronsML", &NewSwElectronsAuxDyn_DFCommonElectronsML, &b_NewSwElectronsAuxDyn_DFCommonElectronsML);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.truthPdgId", &NewSwElectronsAuxDyn_truthPdgId, &b_NewSwElectronsAuxDyn_truthPdgId);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.firstEgMotherTruthType", &NewSwElectronsAuxDyn_firstEgMotherTruthType, &b_NewSwElectronsAuxDyn_firstEgMotherTruthType);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.firstEgMotherTruthOrigin", &NewSwElectronsAuxDyn_firstEgMotherTruthOrigin, &b_NewSwElectronsAuxDyn_firstEgMotherTruthOrigin);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.firstEgMotherTruthParticleLink", &NewSwElectronsAuxDyn_firstEgMotherTruthParticleLink_, &b_NewSwElectronsAuxDyn_firstEgMotherTruthParticleLink_);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.firstEgMotherTruthParticleLink.m_persKey", NewSwElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey, &b_NewSwElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.firstEgMotherTruthParticleLink.m_persIndex", NewSwElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex, &b_NewSwElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.firstEgMotherPdgId", &NewSwElectronsAuxDyn_firstEgMotherPdgId, &b_NewSwElectronsAuxDyn_firstEgMotherPdgId);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ptconeCorrBitset", &NewSwElectronsAuxDyn_ptconeCorrBitset, &b_NewSwElectronsAuxDyn_ptconeCorrBitset);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.lastEgMotherTruthType", &NewSwElectronsAuxDyn_lastEgMotherTruthType, &b_NewSwElectronsAuxDyn_lastEgMotherTruthType);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.ptconecoreTrackPtrCorrection", &NewSwElectronsAuxDyn_ptconecoreTrackPtrCorrection, &b_NewSwElectronsAuxDyn_ptconecoreTrackPtrCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.lastEgMotherTruthOrigin", &NewSwElectronsAuxDyn_lastEgMotherTruthOrigin, &b_NewSwElectronsAuxDyn_lastEgMotherTruthOrigin);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.lastEgMotherTruthParticleLink", &NewSwElectronsAuxDyn_lastEgMotherTruthParticleLink_, &b_NewSwElectronsAuxDyn_lastEgMotherTruthParticleLink_);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.lastEgMotherTruthParticleLink.m_persKey", NewSwElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persKey, &b_NewSwElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persKey);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.lastEgMotherTruthParticleLink.m_persIndex", NewSwElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persIndex, &b_NewSwElectronsAuxDyn_lastEgMotherTruthParticleLink_m_persIndex);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.lastEgMotherPdgId", &NewSwElectronsAuxDyn_lastEgMotherPdgId, &b_NewSwElectronsAuxDyn_lastEgMotherPdgId);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.E_Lr0_HiG", &NewSwElectronsAuxDyn_E_Lr0_HiG, &b_NewSwElectronsAuxDyn_E_Lr0_HiG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.E_Lr1_HiG", &NewSwElectronsAuxDyn_E_Lr1_HiG, &b_NewSwElectronsAuxDyn_E_Lr1_HiG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.topoetcone40", &NewSwElectronsAuxDyn_topoetcone40, &b_NewSwElectronsAuxDyn_topoetcone40);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.E_Lr2_HiG", &NewSwElectronsAuxDyn_E_Lr2_HiG, &b_NewSwElectronsAuxDyn_E_Lr2_HiG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.topoetconeCorrBitset", &NewSwElectronsAuxDyn_topoetconeCorrBitset, &b_NewSwElectronsAuxDyn_topoetconeCorrBitset);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.E_Lr3_HiG", &NewSwElectronsAuxDyn_E_Lr3_HiG, &b_NewSwElectronsAuxDyn_E_Lr3_HiG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.topoetconecoreConeEnergyCorrection", &NewSwElectronsAuxDyn_topoetconecoreConeEnergyCorrection, &b_NewSwElectronsAuxDyn_topoetconecoreConeEnergyCorrection);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.E_Lr0_MedG", &NewSwElectronsAuxDyn_E_Lr0_MedG, &b_NewSwElectronsAuxDyn_E_Lr0_MedG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.E_Lr1_MedG", &NewSwElectronsAuxDyn_E_Lr1_MedG, &b_NewSwElectronsAuxDyn_E_Lr1_MedG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.caloClusterLinks", &NewSwElectronsAuxDyn_caloClusterLinks, &b_NewSwElectronsAuxDyn_caloClusterLinks);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.E_Lr2_MedG", &NewSwElectronsAuxDyn_E_Lr2_MedG, &b_NewSwElectronsAuxDyn_E_Lr2_MedG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.OQ", &NewSwElectronsAuxDyn_OQ, &b_NewSwElectronsAuxDyn_OQ);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.E_Lr3_MedG", &NewSwElectronsAuxDyn_E_Lr3_MedG, &b_NewSwElectronsAuxDyn_E_Lr3_MedG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.f1", &NewSwElectronsAuxDyn_f1, &b_NewSwElectronsAuxDyn_f1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.E_Lr0_LowG", &NewSwElectronsAuxDyn_E_Lr0_LowG, &b_NewSwElectronsAuxDyn_E_Lr0_LowG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.f3", &NewSwElectronsAuxDyn_f3, &b_NewSwElectronsAuxDyn_f3);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.E_Lr1_LowG", &NewSwElectronsAuxDyn_E_Lr1_LowG, &b_NewSwElectronsAuxDyn_E_Lr1_LowG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.f1core", &NewSwElectronsAuxDyn_f1core, &b_NewSwElectronsAuxDyn_f1core);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.E_Lr2_LowG", &NewSwElectronsAuxDyn_E_Lr2_LowG, &b_NewSwElectronsAuxDyn_E_Lr2_LowG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.f3core", &NewSwElectronsAuxDyn_f3core, &b_NewSwElectronsAuxDyn_f3core);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.E_Lr3_LowG", &NewSwElectronsAuxDyn_E_Lr3_LowG, &b_NewSwElectronsAuxDyn_E_Lr3_LowG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.weta1", &NewSwElectronsAuxDyn_weta1, &b_NewSwElectronsAuxDyn_weta1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.nCells_Lr0_HiG", &NewSwElectronsAuxDyn_nCells_Lr0_HiG, &b_NewSwElectronsAuxDyn_nCells_Lr0_HiG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.weta2", &NewSwElectronsAuxDyn_weta2, &b_NewSwElectronsAuxDyn_weta2);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.nCells_Lr1_HiG", &NewSwElectronsAuxDyn_nCells_Lr1_HiG, &b_NewSwElectronsAuxDyn_nCells_Lr1_HiG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.fracs1", &NewSwElectronsAuxDyn_fracs1, &b_NewSwElectronsAuxDyn_fracs1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.nCells_Lr2_HiG", &NewSwElectronsAuxDyn_nCells_Lr2_HiG, &b_NewSwElectronsAuxDyn_nCells_Lr2_HiG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.wtots1", &NewSwElectronsAuxDyn_wtots1, &b_NewSwElectronsAuxDyn_wtots1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.nCells_Lr3_HiG", &NewSwElectronsAuxDyn_nCells_Lr3_HiG, &b_NewSwElectronsAuxDyn_nCells_Lr3_HiG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.e277", &NewSwElectronsAuxDyn_e277, &b_NewSwElectronsAuxDyn_e277);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.nCells_Lr0_MedG", &NewSwElectronsAuxDyn_nCells_Lr0_MedG, &b_NewSwElectronsAuxDyn_nCells_Lr0_MedG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.Reta", &NewSwElectronsAuxDyn_Reta, &b_NewSwElectronsAuxDyn_Reta);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.nCells_Lr1_MedG", &NewSwElectronsAuxDyn_nCells_Lr1_MedG, &b_NewSwElectronsAuxDyn_nCells_Lr1_MedG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.Rphi", &NewSwElectronsAuxDyn_Rphi, &b_NewSwElectronsAuxDyn_Rphi);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.nCells_Lr2_MedG", &NewSwElectronsAuxDyn_nCells_Lr2_MedG, &b_NewSwElectronsAuxDyn_nCells_Lr2_MedG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.Eratio", &NewSwElectronsAuxDyn_Eratio, &b_NewSwElectronsAuxDyn_Eratio);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.nCells_Lr3_MedG", &NewSwElectronsAuxDyn_nCells_Lr3_MedG, &b_NewSwElectronsAuxDyn_nCells_Lr3_MedG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.Rhad", &NewSwElectronsAuxDyn_Rhad, &b_NewSwElectronsAuxDyn_Rhad);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.nCells_Lr0_LowG", &NewSwElectronsAuxDyn_nCells_Lr0_LowG, &b_NewSwElectronsAuxDyn_nCells_Lr0_LowG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.Rhad1", &NewSwElectronsAuxDyn_Rhad1, &b_NewSwElectronsAuxDyn_Rhad1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.nCells_Lr1_LowG", &NewSwElectronsAuxDyn_nCells_Lr1_LowG, &b_NewSwElectronsAuxDyn_nCells_Lr1_LowG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.DeltaE", &NewSwElectronsAuxDyn_DeltaE, &b_NewSwElectronsAuxDyn_DeltaE);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.nCells_Lr2_LowG", &NewSwElectronsAuxDyn_nCells_Lr2_LowG, &b_NewSwElectronsAuxDyn_nCells_Lr2_LowG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaEta0", &NewSwElectronsAuxDyn_deltaEta0, &b_NewSwElectronsAuxDyn_deltaEta0);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.nCells_Lr3_LowG", &NewSwElectronsAuxDyn_nCells_Lr3_LowG, &b_NewSwElectronsAuxDyn_nCells_Lr3_LowG);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaEta1", &NewSwElectronsAuxDyn_deltaEta1, &b_NewSwElectronsAuxDyn_deltaEta1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.maxEcell_time", &NewSwElectronsAuxDyn_maxEcell_time, &b_NewSwElectronsAuxDyn_maxEcell_time);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaEta2", &NewSwElectronsAuxDyn_deltaEta2, &b_NewSwElectronsAuxDyn_deltaEta2);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.maxEcell_energy", &NewSwElectronsAuxDyn_maxEcell_energy, &b_NewSwElectronsAuxDyn_maxEcell_energy);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaEta3", &NewSwElectronsAuxDyn_deltaEta3, &b_NewSwElectronsAuxDyn_deltaEta3);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.maxEcell_gain", &NewSwElectronsAuxDyn_maxEcell_gain, &b_NewSwElectronsAuxDyn_maxEcell_gain);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaPhi0", &NewSwElectronsAuxDyn_deltaPhi0, &b_NewSwElectronsAuxDyn_deltaPhi0);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.maxEcell_onlId", &NewSwElectronsAuxDyn_maxEcell_onlId, &b_NewSwElectronsAuxDyn_maxEcell_onlId);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaPhi1", &NewSwElectronsAuxDyn_deltaPhi1, &b_NewSwElectronsAuxDyn_deltaPhi1);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.maxEcell_x", &NewSwElectronsAuxDyn_maxEcell_x, &b_NewSwElectronsAuxDyn_maxEcell_x);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaPhi2", &NewSwElectronsAuxDyn_deltaPhi2, &b_NewSwElectronsAuxDyn_deltaPhi2);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.maxEcell_y", &NewSwElectronsAuxDyn_maxEcell_y, &b_NewSwElectronsAuxDyn_maxEcell_y);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.deltaPhi3", &NewSwElectronsAuxDyn_deltaPhi3, &b_NewSwElectronsAuxDyn_deltaPhi3);
   fChain->SetBranchAddress("NewSwElectronsAuxDyn.maxEcell_z", &NewSwElectronsAuxDyn_maxEcell_z, &b_NewSwElectronsAuxDyn_maxEcell_z);
   fChain->SetBranchAddress("ParticleFlowIsoCentralEventShapeAuxDyn.Density", &ParticleFlowIsoCentralEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("ParticleFlowIsoCentralEventShapeAuxDyn.DensitySigma", &ParticleFlowIsoCentralEventShapeAuxDyn_DensitySigma, &b_DensitySigma);
   fChain->SetBranchAddress("ParticleFlowIsoCentralEventShapeAuxDyn.DensityArea", &ParticleFlowIsoCentralEventShapeAuxDyn_DensityArea, &b_DensityArea);
   fChain->SetBranchAddress("ParticleFlowIsoForwardEventShapeAuxDyn.Density", &ParticleFlowIsoForwardEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("ParticleFlowIsoForwardEventShapeAuxDyn.DensitySigma", &ParticleFlowIsoForwardEventShapeAuxDyn_DensitySigma, &b_DensitySigma);
   fChain->SetBranchAddress("ParticleFlowIsoForwardEventShapeAuxDyn.DensityArea", &ParticleFlowIsoForwardEventShapeAuxDyn_DensityArea, &b_DensityArea);
   fChain->SetBranchAddress("PhotonsAuxDyn.E3x5_Lr0", &PhotonsAuxDyn_E3x5_Lr0, &b_PhotonsAuxDyn_E3x5_Lr0);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsIsEMLoose", &PhotonsAuxDyn_DFCommonPhotonsIsEMLoose, &b_PhotonsAuxDyn_DFCommonPhotonsIsEMLoose);
   fChain->SetBranchAddress("PhotonsAuxDyn.weta1", &PhotonsAuxDyn_weta1, &b_PhotonsAuxDyn_weta1);
   fChain->SetBranchAddress("PhotonsAuxDyn.E3x5_Lr1", &PhotonsAuxDyn_E3x5_Lr1, &b_PhotonsAuxDyn_E3x5_Lr1);
   fChain->SetBranchAddress("PhotonsAuxDyn.weta2", &PhotonsAuxDyn_weta2, &b_PhotonsAuxDyn_weta2);
   fChain->SetBranchAddress("PhotonsAuxDyn.E3x5_Lr2", &PhotonsAuxDyn_E3x5_Lr2, &b_PhotonsAuxDyn_E3x5_Lr2);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsIsEMTight", &PhotonsAuxDyn_DFCommonPhotonsIsEMTight, &b_PhotonsAuxDyn_DFCommonPhotonsIsEMTight);
   fChain->SetBranchAddress("PhotonsAuxDyn.fracs1", &PhotonsAuxDyn_fracs1, &b_PhotonsAuxDyn_fracs1);
   fChain->SetBranchAddress("PhotonsAuxDyn.E3x5_Lr3", &PhotonsAuxDyn_E3x5_Lr3, &b_PhotonsAuxDyn_E3x5_Lr3);
   fChain->SetBranchAddress("PhotonsAuxDyn.wtots1", &PhotonsAuxDyn_wtots1, &b_PhotonsAuxDyn_wtots1);
   fChain->SetBranchAddress("PhotonsAuxDyn.E5x7_Lr0", &PhotonsAuxDyn_E5x7_Lr0, &b_PhotonsAuxDyn_E5x7_Lr0);
   fChain->SetBranchAddress("PhotonsAuxDyn.vertexLinks", &PhotonsAuxDyn_vertexLinks, &b_PhotonsAuxDyn_vertexLinks);
   fChain->SetBranchAddress("PhotonsAuxDyn.e277", &PhotonsAuxDyn_e277, &b_PhotonsAuxDyn_e277);
   fChain->SetBranchAddress("PhotonsAuxDyn.E5x7_Lr1", &PhotonsAuxDyn_E5x7_Lr1, &b_PhotonsAuxDyn_E5x7_Lr1);
   fChain->SetBranchAddress("PhotonsAuxDyn.Reta", &PhotonsAuxDyn_Reta, &b_PhotonsAuxDyn_Reta);
   fChain->SetBranchAddress("PhotonsAuxDyn.E5x7_Lr2", &PhotonsAuxDyn_E5x7_Lr2, &b_PhotonsAuxDyn_E5x7_Lr2);
   fChain->SetBranchAddress("PhotonsAuxDyn.Rphi", &PhotonsAuxDyn_Rphi, &b_PhotonsAuxDyn_Rphi);
   fChain->SetBranchAddress("PhotonsAuxDyn.E5x7_Lr3", &PhotonsAuxDyn_E5x7_Lr3, &b_PhotonsAuxDyn_E5x7_Lr3);
   fChain->SetBranchAddress("PhotonsAuxDyn.ptcone20", &PhotonsAuxDyn_ptcone20, &b_PhotonsAuxDyn_ptcone20);
   fChain->SetBranchAddress("PhotonsAuxDyn.Eratio", &PhotonsAuxDyn_Eratio, &b_PhotonsAuxDyn_Eratio);
   fChain->SetBranchAddress("PhotonsAuxDyn.E7x7_Lr0", &PhotonsAuxDyn_E7x7_Lr0, &b_PhotonsAuxDyn_E7x7_Lr0);
   fChain->SetBranchAddress("PhotonsAuxDyn.ptcone30", &PhotonsAuxDyn_ptcone30, &b_PhotonsAuxDyn_ptcone30);
   fChain->SetBranchAddress("PhotonsAuxDyn.Rhad", &PhotonsAuxDyn_Rhad, &b_PhotonsAuxDyn_Rhad);
   fChain->SetBranchAddress("PhotonsAuxDyn.E7x7_Lr1", &PhotonsAuxDyn_E7x7_Lr1, &b_PhotonsAuxDyn_E7x7_Lr1);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone20", &PhotonsAuxDyn_topoetcone20, &b_PhotonsAuxDyn_topoetcone20);
   fChain->SetBranchAddress("PhotonsAuxDyn.ptcone40", &PhotonsAuxDyn_ptcone40, &b_PhotonsAuxDyn_ptcone40);
   fChain->SetBranchAddress("PhotonsAuxDyn.Rhad1", &PhotonsAuxDyn_Rhad1, &b_PhotonsAuxDyn_Rhad1);
   fChain->SetBranchAddress("PhotonsAuxDyn.E7x7_Lr2", &PhotonsAuxDyn_E7x7_Lr2, &b_PhotonsAuxDyn_E7x7_Lr2);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone30", &PhotonsAuxDyn_topoetcone30, &b_PhotonsAuxDyn_topoetcone30);
   fChain->SetBranchAddress("PhotonsAuxDyn.ptvarcone20", &PhotonsAuxDyn_ptvarcone20, &b_PhotonsAuxDyn_ptvarcone20);
   fChain->SetBranchAddress("PhotonsAuxDyn.E7x7_Lr3", &PhotonsAuxDyn_E7x7_Lr3, &b_PhotonsAuxDyn_E7x7_Lr3);
   fChain->SetBranchAddress("PhotonsAuxDyn.DeltaE", &PhotonsAuxDyn_DeltaE, &b_PhotonsAuxDyn_DeltaE);
   fChain->SetBranchAddress("PhotonsAuxDyn.ptvarcone40", &PhotonsAuxDyn_ptvarcone40, &b_PhotonsAuxDyn_ptvarcone40);
   fChain->SetBranchAddress("PhotonsAuxDyn.ptvarcone30", &PhotonsAuxDyn_ptvarcone30, &b_PhotonsAuxDyn_ptvarcone30);
   fChain->SetBranchAddress("PhotonsAuxDyn.E7x11_Lr0", &PhotonsAuxDyn_E7x11_Lr0, &b_PhotonsAuxDyn_E7x11_Lr0);
   fChain->SetBranchAddress("PhotonsAuxDyn.E7x11_Lr1", &PhotonsAuxDyn_E7x11_Lr1, &b_PhotonsAuxDyn_E7x11_Lr1);
   fChain->SetBranchAddress("PhotonsAuxDyn.E_Lr0_HiG", &PhotonsAuxDyn_E_Lr0_HiG, &b_PhotonsAuxDyn_E_Lr0_HiG);
   fChain->SetBranchAddress("PhotonsAuxDyn.E7x11_Lr2", &PhotonsAuxDyn_E7x11_Lr2, &b_PhotonsAuxDyn_E7x11_Lr2);
   fChain->SetBranchAddress("PhotonsAuxDyn.E_Lr1_HiG", &PhotonsAuxDyn_E_Lr1_HiG, &b_PhotonsAuxDyn_E_Lr1_HiG);
   fChain->SetBranchAddress("PhotonsAuxDyn.E7x11_Lr3", &PhotonsAuxDyn_E7x11_Lr3, &b_PhotonsAuxDyn_E7x11_Lr3);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthOrigin", &PhotonsAuxDyn_truthOrigin, &b_PhotonsAuxDyn_truthOrigin);
   fChain->SetBranchAddress("PhotonsAuxDyn.E_Lr2_HiG", &PhotonsAuxDyn_E_Lr2_HiG, &b_PhotonsAuxDyn_E_Lr2_HiG);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthParticleLink", &PhotonsAuxDyn_truthParticleLink_, &b_PhotonsAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthParticleLink.m_persKey", PhotonsAuxDyn_truthParticleLink_m_persKey, &b_PhotonsAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthParticleLink.m_persIndex", PhotonsAuxDyn_truthParticleLink_m_persIndex, &b_PhotonsAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("PhotonsAuxDyn.E_Lr3_HiG", &PhotonsAuxDyn_E_Lr3_HiG, &b_PhotonsAuxDyn_E_Lr3_HiG);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthType", &PhotonsAuxDyn_truthType, &b_PhotonsAuxDyn_truthType);
   fChain->SetBranchAddress("PhotonsAuxDyn.pt", &PhotonsAuxDyn_pt, &b_PhotonsAuxDyn_pt);
   fChain->SetBranchAddress("PhotonsAuxDyn.E_Lr0_MedG", &PhotonsAuxDyn_E_Lr0_MedG, &b_PhotonsAuxDyn_E_Lr0_MedG);
   fChain->SetBranchAddress("PhotonsAuxDyn.eta", &PhotonsAuxDyn_eta, &b_PhotonsAuxDyn_eta);
   fChain->SetBranchAddress("PhotonsAuxDyn.E_Lr1_MedG", &PhotonsAuxDyn_E_Lr1_MedG, &b_PhotonsAuxDyn_E_Lr1_MedG);
   fChain->SetBranchAddress("PhotonsAuxDyn.phi", &PhotonsAuxDyn_phi, &b_PhotonsAuxDyn_phi);
   fChain->SetBranchAddress("PhotonsAuxDyn.E_Lr2_MedG", &PhotonsAuxDyn_E_Lr2_MedG, &b_PhotonsAuxDyn_E_Lr2_MedG);
   fChain->SetBranchAddress("PhotonsAuxDyn.m", &PhotonsAuxDyn_m, &b_PhotonsAuxDyn_m);
   fChain->SetBranchAddress("PhotonsAuxDyn.E_Lr3_MedG", &PhotonsAuxDyn_E_Lr3_MedG, &b_PhotonsAuxDyn_E_Lr3_MedG);
   fChain->SetBranchAddress("PhotonsAuxDyn.E_Lr0_LowG", &PhotonsAuxDyn_E_Lr0_LowG, &b_PhotonsAuxDyn_E_Lr0_LowG);
   fChain->SetBranchAddress("PhotonsAuxDyn.E_Lr1_LowG", &PhotonsAuxDyn_E_Lr1_LowG, &b_PhotonsAuxDyn_E_Lr1_LowG);
   fChain->SetBranchAddress("PhotonsAuxDyn.E_Lr2_LowG", &PhotonsAuxDyn_E_Lr2_LowG, &b_PhotonsAuxDyn_E_Lr2_LowG);
   fChain->SetBranchAddress("PhotonsAuxDyn.E_Lr3_LowG", &PhotonsAuxDyn_E_Lr3_LowG, &b_PhotonsAuxDyn_E_Lr3_LowG);
   fChain->SetBranchAddress("PhotonsAuxDyn.nCells_Lr0_HiG", &PhotonsAuxDyn_nCells_Lr0_HiG, &b_PhotonsAuxDyn_nCells_Lr0_HiG);
   fChain->SetBranchAddress("PhotonsAuxDyn.nCells_Lr1_HiG", &PhotonsAuxDyn_nCells_Lr1_HiG, &b_PhotonsAuxDyn_nCells_Lr1_HiG);
   fChain->SetBranchAddress("PhotonsAuxDyn.nCells_Lr2_HiG", &PhotonsAuxDyn_nCells_Lr2_HiG, &b_PhotonsAuxDyn_nCells_Lr2_HiG);
   fChain->SetBranchAddress("PhotonsAuxDyn.nCells_Lr3_HiG", &PhotonsAuxDyn_nCells_Lr3_HiG, &b_PhotonsAuxDyn_nCells_Lr3_HiG);
   fChain->SetBranchAddress("PhotonsAuxDyn.nCells_Lr0_MedG", &PhotonsAuxDyn_nCells_Lr0_MedG, &b_PhotonsAuxDyn_nCells_Lr0_MedG);
   fChain->SetBranchAddress("PhotonsAuxDyn.author", &PhotonsAuxDyn_author, &b_PhotonsAuxDyn_author);
   fChain->SetBranchAddress("PhotonsAuxDyn.Loose", &PhotonsAuxDyn_Loose, &b_PhotonsAuxDyn_Loose);
   fChain->SetBranchAddress("PhotonsAuxDyn.nCells_Lr1_MedG", &PhotonsAuxDyn_nCells_Lr1_MedG, &b_PhotonsAuxDyn_nCells_Lr1_MedG);
   fChain->SetBranchAddress("PhotonsAuxDyn.nCells_Lr2_MedG", &PhotonsAuxDyn_nCells_Lr2_MedG, &b_PhotonsAuxDyn_nCells_Lr2_MedG);
   fChain->SetBranchAddress("PhotonsAuxDyn.nCells_Lr3_MedG", &PhotonsAuxDyn_nCells_Lr3_MedG, &b_PhotonsAuxDyn_nCells_Lr3_MedG);
   fChain->SetBranchAddress("PhotonsAuxDyn.Tight", &PhotonsAuxDyn_Tight, &b_PhotonsAuxDyn_Tight);
   fChain->SetBranchAddress("PhotonsAuxDyn.nCells_Lr0_LowG", &PhotonsAuxDyn_nCells_Lr0_LowG, &b_PhotonsAuxDyn_nCells_Lr0_LowG);
   fChain->SetBranchAddress("PhotonsAuxDyn.ambiguityLink", &PhotonsAuxDyn_ambiguityLink_, &b_PhotonsAuxDyn_ambiguityLink_);
   fChain->SetBranchAddress("PhotonsAuxDyn.ambiguityLink.m_persKey", PhotonsAuxDyn_ambiguityLink_m_persKey, &b_PhotonsAuxDyn_ambiguityLink_m_persKey);
   fChain->SetBranchAddress("PhotonsAuxDyn.ambiguityLink.m_persIndex", PhotonsAuxDyn_ambiguityLink_m_persIndex, &b_PhotonsAuxDyn_ambiguityLink_m_persIndex);
   fChain->SetBranchAddress("PhotonsAuxDyn.nCells_Lr1_LowG", &PhotonsAuxDyn_nCells_Lr1_LowG, &b_PhotonsAuxDyn_nCells_Lr1_LowG);
   fChain->SetBranchAddress("PhotonsAuxDyn.nCells_Lr2_LowG", &PhotonsAuxDyn_nCells_Lr2_LowG, &b_PhotonsAuxDyn_nCells_Lr2_LowG);
   fChain->SetBranchAddress("PhotonsAuxDyn.nCells_Lr3_LowG", &PhotonsAuxDyn_nCells_Lr3_LowG, &b_PhotonsAuxDyn_nCells_Lr3_LowG);
   fChain->SetBranchAddress("PhotonsAuxDyn.e233", &PhotonsAuxDyn_e233, &b_PhotonsAuxDyn_e233);
   fChain->SetBranchAddress("PhotonsAuxDyn.e237", &PhotonsAuxDyn_e237, &b_PhotonsAuxDyn_e237);
   fChain->SetBranchAddress("PhotonsAuxDyn.e2tsts1", &PhotonsAuxDyn_e2tsts1, &b_PhotonsAuxDyn_e2tsts1);
   fChain->SetBranchAddress("PhotonsAuxDyn.emaxs1", &PhotonsAuxDyn_emaxs1, &b_PhotonsAuxDyn_emaxs1);
   fChain->SetBranchAddress("PhotonsAuxDyn.emins1", &PhotonsAuxDyn_emins1, &b_PhotonsAuxDyn_emins1);
   fChain->SetBranchAddress("PhotonsAuxDyn.etcone20ptCorrection", &PhotonsAuxDyn_etcone20ptCorrection, &b_PhotonsAuxDyn_etcone20ptCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.etcone30ptCorrection", &PhotonsAuxDyn_etcone30ptCorrection, &b_PhotonsAuxDyn_etcone30ptCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.etcone40ptCorrection", &PhotonsAuxDyn_etcone40ptCorrection, &b_PhotonsAuxDyn_etcone40ptCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.ethad", &PhotonsAuxDyn_ethad, &b_PhotonsAuxDyn_ethad);
   fChain->SetBranchAddress("PhotonsAuxDyn.ethad1", &PhotonsAuxDyn_ethad1, &b_PhotonsAuxDyn_ethad1);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone20ptCorrection", &PhotonsAuxDyn_topoetcone20ptCorrection, &b_PhotonsAuxDyn_topoetcone20ptCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone30ptCorrection", &PhotonsAuxDyn_topoetcone30ptCorrection, &b_PhotonsAuxDyn_topoetcone30ptCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone40ptCorrection", &PhotonsAuxDyn_topoetcone40ptCorrection, &b_PhotonsAuxDyn_topoetcone40ptCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone40", &PhotonsAuxDyn_topoetcone40, &b_PhotonsAuxDyn_topoetcone40);
   fChain->SetBranchAddress("PhotonsAuxDyn.caloClusterLinks", &PhotonsAuxDyn_caloClusterLinks, &b_PhotonsAuxDyn_caloClusterLinks);
   fChain->SetBranchAddress("PhotonsAuxDyn.OQ", &PhotonsAuxDyn_OQ, &b_PhotonsAuxDyn_OQ);
   fChain->SetBranchAddress("PhotonsAuxDyn.f1", &PhotonsAuxDyn_f1, &b_PhotonsAuxDyn_f1);
   fChain->SetBranchAddress("PhotonsAuxDyn.f3", &PhotonsAuxDyn_f3, &b_PhotonsAuxDyn_f3);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.vertexType", &PrimaryVerticesAuxDyn_vertexType, &b_PrimaryVerticesAuxDyn_vertexType);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.sumPt2", &PrimaryVerticesAuxDyn_sumPt2, &b_PrimaryVerticesAuxDyn_sumPt2);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.neutralParticleLinks", &PrimaryVerticesAuxDyn_neutralParticleLinks, &b_PrimaryVerticesAuxDyn_neutralParticleLinks);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.x", &PrimaryVerticesAuxDyn_x, &b_PrimaryVerticesAuxDyn_x);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.y", &PrimaryVerticesAuxDyn_y, &b_PrimaryVerticesAuxDyn_y);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.z", &PrimaryVerticesAuxDyn_z, &b_PrimaryVerticesAuxDyn_z);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.trackParticleLinks", &PrimaryVerticesAuxDyn_trackParticleLinks, &b_PrimaryVerticesAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.shotPFOLinks", &TauJetsAuxDyn_shotPFOLinks, &b_TauJetsAuxDyn_shotPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.chargedPFOLinks", &TauJetsAuxDyn_chargedPFOLinks, &b_TauJetsAuxDyn_chargedPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.neutralPFOLinks", &TauJetsAuxDyn_neutralPFOLinks, &b_TauJetsAuxDyn_neutralPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.eta_combined", &TauJetsAuxDyn_eta_combined, &b_TauJetsAuxDyn_eta_combined);
   fChain->SetBranchAddress("TauJetsAuxDyn.pi0PFOLinks", &TauJetsAuxDyn_pi0PFOLinks, &b_TauJetsAuxDyn_pi0PFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.protoChargedPFOLinks", &TauJetsAuxDyn_protoChargedPFOLinks, &b_TauJetsAuxDyn_protoChargedPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.protoNeutralPFOLinks", &TauJetsAuxDyn_protoNeutralPFOLinks, &b_TauJetsAuxDyn_protoNeutralPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.protoPi0PFOLinks", &TauJetsAuxDyn_protoPi0PFOLinks, &b_TauJetsAuxDyn_protoPi0PFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.m_combined", &TauJetsAuxDyn_m_combined, &b_TauJetsAuxDyn_m_combined);
   fChain->SetBranchAddress("TauJetsAuxDyn.phi_combined", &TauJetsAuxDyn_phi_combined, &b_TauJetsAuxDyn_phi_combined);
   fChain->SetBranchAddress("TauJetsAuxDyn.pt_combined", &TauJetsAuxDyn_pt_combined, &b_TauJetsAuxDyn_pt_combined);
   fChain->SetBranchAddress("TauJetsAuxDyn.ptFinalCalib", &TauJetsAuxDyn_ptFinalCalib, &b_TauJetsAuxDyn_ptFinalCalib);
   fChain->SetBranchAddress("TauJetsAuxDyn.etaFinalCalib", &TauJetsAuxDyn_etaFinalCalib, &b_TauJetsAuxDyn_etaFinalCalib);
   fChain->SetBranchAddress("TauJetsAuxDyn.phiFinalCalib", &TauJetsAuxDyn_phiFinalCalib, &b_TauJetsAuxDyn_phiFinalCalib);
   fChain->SetBranchAddress("TauJetsAuxDyn.mFinalCalib", &TauJetsAuxDyn_mFinalCalib, &b_TauJetsAuxDyn_mFinalCalib);
   fChain->SetBranchAddress("TauJetsAuxDyn.pt", &TauJetsAuxDyn_pt, &b_TauJetsAuxDyn_pt);
   fChain->SetBranchAddress("TauJetsAuxDyn.eta", &TauJetsAuxDyn_eta, &b_TauJetsAuxDyn_eta);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTJetScore", &TauJetsAuxDyn_BDTJetScore, &b_TauJetsAuxDyn_BDTJetScore);
   fChain->SetBranchAddress("TauJetsAuxDyn.phi", &TauJetsAuxDyn_phi, &b_TauJetsAuxDyn_phi);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTEleScore", &TauJetsAuxDyn_BDTEleScore, &b_TauJetsAuxDyn_BDTEleScore);
   fChain->SetBranchAddress("TauJetsAuxDyn.m", &TauJetsAuxDyn_m, &b_TauJetsAuxDyn_m);
   fChain->SetBranchAddress("TauJetsAuxDyn.EleMatchLikelihoodScore", &TauJetsAuxDyn_EleMatchLikelihoodScore, &b_TauJetsAuxDyn_EleMatchLikelihoodScore);
   fChain->SetBranchAddress("TauJetsAuxDyn.charge", &TauJetsAuxDyn_charge, &b_TauJetsAuxDyn_charge);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTJetScoreSigTrans", &TauJetsAuxDyn_BDTJetScoreSigTrans, &b_TauJetsAuxDyn_BDTJetScoreSigTrans);
   fChain->SetBranchAddress("TauJetsAuxDyn.isTauFlags", &TauJetsAuxDyn_isTauFlags, &b_TauJetsAuxDyn_isTauFlags);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTEleScoreSigTrans", &TauJetsAuxDyn_BDTEleScoreSigTrans, &b_TauJetsAuxDyn_BDTEleScoreSigTrans);
   fChain->SetBranchAddress("TauJetsAuxDyn.tauTrackLinks", &TauJetsAuxDyn_tauTrackLinks, &b_TauJetsAuxDyn_tauTrackLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.jetLink", &TauJetsAuxDyn_jetLink_, &b_TauJetsAuxDyn_jetLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.jetLink.m_persKey", TauJetsAuxDyn_jetLink_m_persKey, &b_TauJetsAuxDyn_jetLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.jetLink.m_persIndex", TauJetsAuxDyn_jetLink_m_persIndex, &b_TauJetsAuxDyn_jetLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.vertexLink", &TauJetsAuxDyn_vertexLink_, &b_TauJetsAuxDyn_vertexLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.vertexLink.m_persKey", TauJetsAuxDyn_vertexLink_m_persKey, &b_TauJetsAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.vertexLink.m_persIndex", TauJetsAuxDyn_vertexLink_m_persIndex, &b_TauJetsAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.electronLink", &TauJetsAuxDyn_electronLink_, &b_TauJetsAuxDyn_electronLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.electronLink.m_persKey", TauJetsAuxDyn_electronLink_m_persKey, &b_TauJetsAuxDyn_electronLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.electronLink.m_persIndex", TauJetsAuxDyn_electronLink_m_persIndex, &b_TauJetsAuxDyn_electronLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.secondaryVertexLink", &TauJetsAuxDyn_secondaryVertexLink_, &b_TauJetsAuxDyn_secondaryVertexLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.secondaryVertexLink.m_persKey", TauJetsAuxDyn_secondaryVertexLink_m_persKey, &b_TauJetsAuxDyn_secondaryVertexLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.secondaryVertexLink.m_persIndex", TauJetsAuxDyn_secondaryVertexLink_m_persIndex, &b_TauJetsAuxDyn_secondaryVertexLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.hadronicPFOLinks", &TauJetsAuxDyn_hadronicPFOLinks, &b_TauJetsAuxDyn_hadronicPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.PanTau_DecayMode", &TauJetsAuxDyn_PanTau_DecayMode, &b_TauJetsAuxDyn_PanTau_DecayMode);
   fChain->SetBranchAddress("TauTracksAuxDyn.flagSet", &TauTracksAuxDyn_flagSet, &b_TauTracksAuxDyn_flagSet);
   fChain->SetBranchAddress("TauTracksAuxDyn.bdtScores", &TauTracksAuxDyn_bdtScores, &b_TauTracksAuxDyn_bdtScores);
   fChain->SetBranchAddress("TauTracksAuxDyn.trackLinks", &TauTracksAuxDyn_trackLinks, &b_TauTracksAuxDyn_trackLinks);
   fChain->SetBranchAddress("TauTracksAuxDyn.pt", &TauTracksAuxDyn_pt, &b_TauTracksAuxDyn_pt);
   fChain->SetBranchAddress("TauTracksAuxDyn.eta", &TauTracksAuxDyn_eta, &b_TauTracksAuxDyn_eta);
   fChain->SetBranchAddress("TauTracksAuxDyn.phi", &TauTracksAuxDyn_phi, &b_TauTracksAuxDyn_phi);
   fChain->SetBranchAddress("TopoClusterIsoCentralEventShapeAuxDyn.Density", &TopoClusterIsoCentralEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("TopoClusterIsoCentralEventShapeAuxDyn.DensitySigma", &TopoClusterIsoCentralEventShapeAuxDyn_DensitySigma, &b_DensitySigma);
   fChain->SetBranchAddress("TopoClusterIsoCentralEventShapeAuxDyn.DensityArea", &TopoClusterIsoCentralEventShapeAuxDyn_DensityArea, &b_DensityArea);
   fChain->SetBranchAddress("TopoClusterIsoForwardEventShapeAuxDyn.Density", &TopoClusterIsoForwardEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("TopoClusterIsoForwardEventShapeAuxDyn.DensitySigma", &TopoClusterIsoForwardEventShapeAuxDyn_DensitySigma, &b_DensitySigma);
   fChain->SetBranchAddress("TopoClusterIsoForwardEventShapeAuxDyn.DensityArea", &TopoClusterIsoForwardEventShapeAuxDyn_DensityArea, &b_DensityArea);
   fChain->SetBranchAddress("TruthEventsAuxDyn.XF2", &TruthEventsAuxDyn_XF2, &b_TruthEventsAuxDyn_XF2);
   fChain->SetBranchAddress("TruthEventsAuxDyn.signalProcessVertexLink", &TruthEventsAuxDyn_signalProcessVertexLink_, &b_TruthEventsAuxDyn_signalProcessVertexLink_);
   fChain->SetBranchAddress("TruthEventsAuxDyn.signalProcessVertexLink.m_persKey", TruthEventsAuxDyn_signalProcessVertexLink_m_persKey, &b_TruthEventsAuxDyn_signalProcessVertexLink_m_persKey);
   fChain->SetBranchAddress("TruthEventsAuxDyn.signalProcessVertexLink.m_persIndex", TruthEventsAuxDyn_signalProcessVertexLink_m_persIndex, &b_TruthEventsAuxDyn_signalProcessVertexLink_m_persIndex);
   fChain->SetBranchAddress("TruthEventsAuxDyn.beamParticle1Link", &TruthEventsAuxDyn_beamParticle1Link_, &b_TruthEventsAuxDyn_beamParticle1Link_);
   fChain->SetBranchAddress("TruthEventsAuxDyn.beamParticle1Link.m_persKey", TruthEventsAuxDyn_beamParticle1Link_m_persKey, &b_TruthEventsAuxDyn_beamParticle1Link_m_persKey);
   fChain->SetBranchAddress("TruthEventsAuxDyn.beamParticle1Link.m_persIndex", TruthEventsAuxDyn_beamParticle1Link_m_persIndex, &b_TruthEventsAuxDyn_beamParticle1Link_m_persIndex);
   fChain->SetBranchAddress("TruthEventsAuxDyn.beamParticle2Link", &TruthEventsAuxDyn_beamParticle2Link_, &b_TruthEventsAuxDyn_beamParticle2Link_);
   fChain->SetBranchAddress("TruthEventsAuxDyn.beamParticle2Link.m_persKey", TruthEventsAuxDyn_beamParticle2Link_m_persKey, &b_TruthEventsAuxDyn_beamParticle2Link_m_persKey);
   fChain->SetBranchAddress("TruthEventsAuxDyn.beamParticle2Link.m_persIndex", TruthEventsAuxDyn_beamParticle2Link_m_persIndex, &b_TruthEventsAuxDyn_beamParticle2Link_m_persIndex);
   fChain->SetBranchAddress("TruthEventsAuxDyn.truthParticleLinks", &TruthEventsAuxDyn_truthParticleLinks, &b_TruthEventsAuxDyn_truthParticleLinks);
   fChain->SetBranchAddress("TruthEventsAuxDyn.truthVertexLinks", &TruthEventsAuxDyn_truthVertexLinks, &b_TruthEventsAuxDyn_truthVertexLinks);
   fChain->SetBranchAddress("TruthEventsAuxDyn.weights", &TruthEventsAuxDyn_weights, &b_TruthEventsAuxDyn_weights);
   fChain->SetBranchAddress("TruthEventsAuxDyn.crossSection", &TruthEventsAuxDyn_crossSection, &b_TruthEventsAuxDyn_crossSection);
   fChain->SetBranchAddress("TruthEventsAuxDyn.crossSectionError", &TruthEventsAuxDyn_crossSectionError, &b_TruthEventsAuxDyn_crossSectionError);
   fChain->SetBranchAddress("TruthEventsAuxDyn.PDFID1", &TruthEventsAuxDyn_PDFID1, &b_TruthEventsAuxDyn_PDFID1);
   fChain->SetBranchAddress("TruthEventsAuxDyn.PDFID2", &TruthEventsAuxDyn_PDFID2, &b_TruthEventsAuxDyn_PDFID2);
   fChain->SetBranchAddress("TruthEventsAuxDyn.PDGID1", &TruthEventsAuxDyn_PDGID1, &b_TruthEventsAuxDyn_PDGID1);
   fChain->SetBranchAddress("TruthEventsAuxDyn.PDGID2", &TruthEventsAuxDyn_PDGID2, &b_TruthEventsAuxDyn_PDGID2);
   fChain->SetBranchAddress("TruthEventsAuxDyn.Q", &TruthEventsAuxDyn_Q, &b_TruthEventsAuxDyn_Q);
   fChain->SetBranchAddress("TruthEventsAuxDyn.X1", &TruthEventsAuxDyn_X1, &b_TruthEventsAuxDyn_X1);
   fChain->SetBranchAddress("TruthEventsAuxDyn.X2", &TruthEventsAuxDyn_X2, &b_TruthEventsAuxDyn_X2);
   fChain->SetBranchAddress("TruthEventsAuxDyn.XF1", &TruthEventsAuxDyn_XF1, &b_TruthEventsAuxDyn_XF1);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.px", &TruthParticlesAuxDyn_px, &b_TruthParticlesAuxDyn_px);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.polarizationPhi", &TruthParticlesAuxDyn_polarizationPhi, &b_TruthParticlesAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.py", &TruthParticlesAuxDyn_py, &b_TruthParticlesAuxDyn_py);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.polarizationTheta", &TruthParticlesAuxDyn_polarizationTheta, &b_TruthParticlesAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.prodVtxLink", &TruthParticlesAuxDyn_prodVtxLink_, &b_TruthParticlesAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.prodVtxLink.m_persKey", TruthParticlesAuxDyn_prodVtxLink_m_persKey, &b_TruthParticlesAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.prodVtxLink.m_persIndex", TruthParticlesAuxDyn_prodVtxLink_m_persIndex, &b_TruthParticlesAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.pz", &TruthParticlesAuxDyn_pz, &b_TruthParticlesAuxDyn_pz);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.decayVtxLink", &TruthParticlesAuxDyn_decayVtxLink_, &b_TruthParticlesAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.decayVtxLink.m_persKey", TruthParticlesAuxDyn_decayVtxLink_m_persKey, &b_TruthParticlesAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.decayVtxLink.m_persIndex", TruthParticlesAuxDyn_decayVtxLink_m_persIndex, &b_TruthParticlesAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.e", &TruthParticlesAuxDyn_e, &b_TruthParticlesAuxDyn_e);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.prodR", &TruthParticlesAuxDyn_prodR, &b_TruthParticlesAuxDyn_prodR);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.prodZ", &TruthParticlesAuxDyn_prodZ, &b_TruthParticlesAuxDyn_prodZ);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.pdgId", &TruthParticlesAuxDyn_pdgId, &b_TruthParticlesAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.barcode", &TruthParticlesAuxDyn_barcode, &b_TruthParticlesAuxDyn_barcode);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.z0st", &TruthParticlesAuxDyn_z0st, &b_TruthParticlesAuxDyn_z0st);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.status", &TruthParticlesAuxDyn_status, &b_TruthParticlesAuxDyn_status);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.d0", &TruthParticlesAuxDyn_d0, &b_TruthParticlesAuxDyn_d0);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.z0", &TruthParticlesAuxDyn_z0, &b_TruthParticlesAuxDyn_z0);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.theta", &TruthParticlesAuxDyn_theta, &b_TruthParticlesAuxDyn_theta);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.phi", &TruthParticlesAuxDyn_phi, &b_TruthParticlesAuxDyn_phi);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.m", &TruthParticlesAuxDyn_m, &b_TruthParticlesAuxDyn_m);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.qOverP", &TruthParticlesAuxDyn_qOverP, &b_TruthParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.incomingParticleLinks", &TruthVerticesAuxDyn_incomingParticleLinks, &b_TruthVerticesAuxDyn_incomingParticleLinks);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.outgoingParticleLinks", &TruthVerticesAuxDyn_outgoingParticleLinks, &b_TruthVerticesAuxDyn_outgoingParticleLinks);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.id", &TruthVerticesAuxDyn_id, &b_TruthVerticesAuxDyn_id);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.t", &TruthVerticesAuxDyn_t, &b_TruthVerticesAuxDyn_t);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.x", &TruthVerticesAuxDyn_x, &b_TruthVerticesAuxDyn_x);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.barcode", &TruthVerticesAuxDyn_barcode, &b_TruthVerticesAuxDyn_barcode);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.y", &TruthVerticesAuxDyn_y, &b_TruthVerticesAuxDyn_y);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.z", &TruthVerticesAuxDyn_z, &b_TruthVerticesAuxDyn_z);
   fChain->SetBranchAddress("egammaClustersAuxDyn.e_sampl", &egammaClustersAuxDyn_e_sampl, &b_egammaClustersAuxDyn_e_sampl);
   fChain->SetBranchAddress("egammaClustersAuxDyn.time", &egammaClustersAuxDyn_time, &b_egammaClustersAuxDyn_time);
   fChain->SetBranchAddress("egammaClustersAuxDyn.clusterSize", &egammaClustersAuxDyn_clusterSize, &b_egammaClustersAuxDyn_clusterSize);
   fChain->SetBranchAddress("egammaClustersAuxDyn.eta0", &egammaClustersAuxDyn_eta0, &b_egammaClustersAuxDyn_eta0);
   fChain->SetBranchAddress("egammaClustersAuxDyn.phi0", &egammaClustersAuxDyn_phi0, &b_egammaClustersAuxDyn_phi0);
   fChain->SetBranchAddress("egammaClustersAuxDyn.rawE", &egammaClustersAuxDyn_rawE, &b_egammaClustersAuxDyn_rawE);
   fChain->SetBranchAddress("egammaClustersAuxDyn.rawEta", &egammaClustersAuxDyn_rawEta, &b_egammaClustersAuxDyn_rawEta);
   fChain->SetBranchAddress("egammaClustersAuxDyn.rawPhi", &egammaClustersAuxDyn_rawPhi, &b_egammaClustersAuxDyn_rawPhi);
   fChain->SetBranchAddress("egammaClustersAuxDyn.rawM", &egammaClustersAuxDyn_rawM, &b_egammaClustersAuxDyn_rawM);
   fChain->SetBranchAddress("egammaClustersAuxDyn.altE", &egammaClustersAuxDyn_altE, &b_egammaClustersAuxDyn_altE);
   fChain->SetBranchAddress("egammaClustersAuxDyn.altEta", &egammaClustersAuxDyn_altEta, &b_egammaClustersAuxDyn_altEta);
   fChain->SetBranchAddress("egammaClustersAuxDyn.altPhi", &egammaClustersAuxDyn_altPhi, &b_egammaClustersAuxDyn_altPhi);
   fChain->SetBranchAddress("egammaClustersAuxDyn.altM", &egammaClustersAuxDyn_altM, &b_egammaClustersAuxDyn_altM);
   fChain->SetBranchAddress("egammaClustersAuxDyn.calE", &egammaClustersAuxDyn_calE, &b_egammaClustersAuxDyn_calE);
   fChain->SetBranchAddress("egammaClustersAuxDyn.calEta", &egammaClustersAuxDyn_calEta, &b_egammaClustersAuxDyn_calEta);
   fChain->SetBranchAddress("egammaClustersAuxDyn.calPhi", &egammaClustersAuxDyn_calPhi, &b_egammaClustersAuxDyn_calPhi);
   fChain->SetBranchAddress("egammaClustersAuxDyn.calM", &egammaClustersAuxDyn_calM, &b_egammaClustersAuxDyn_calM);
   fChain->SetBranchAddress("egammaClustersAuxDyn.BadChannelList", &egammaClustersAuxDyn_BadChannelList, &b_egammaClustersAuxDyn_BadChannelList);
   fChain->SetBranchAddress("egammaClustersAuxDyn.CellLink", &egammaClustersAuxDyn_CellLink_, &b_egammaClustersAuxDyn_CellLink_);
   fChain->SetBranchAddress("egammaClustersAuxDyn.CellLink.m_persKey", egammaClustersAuxDyn_CellLink_m_persKey, &b_egammaClustersAuxDyn_CellLink_m_persKey);
   fChain->SetBranchAddress("egammaClustersAuxDyn.CellLink.m_persIndex", egammaClustersAuxDyn_CellLink_m_persIndex, &b_egammaClustersAuxDyn_CellLink_m_persIndex);
   fChain->SetBranchAddress("egammaClustersAuxDyn.ETA1CALOFRAME", &egammaClustersAuxDyn_ETA1CALOFRAME, &b_egammaClustersAuxDyn_ETA1CALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.ETA2CALOFRAME", &egammaClustersAuxDyn_ETA2CALOFRAME, &b_egammaClustersAuxDyn_ETA2CALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.ETACALOFRAME", &egammaClustersAuxDyn_ETACALOFRAME, &b_egammaClustersAuxDyn_ETACALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.PHI1CALOFRAME", &egammaClustersAuxDyn_PHI1CALOFRAME, &b_egammaClustersAuxDyn_PHI1CALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.PHI2CALOFRAME", &egammaClustersAuxDyn_PHI2CALOFRAME, &b_egammaClustersAuxDyn_PHI2CALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.PHICALOFRAME", &egammaClustersAuxDyn_PHICALOFRAME, &b_egammaClustersAuxDyn_PHICALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.constituentClusterLinks", &egammaClustersAuxDyn_constituentClusterLinks, &b_egammaClustersAuxDyn_constituentClusterLinks);
   fChain->SetBranchAddress("egammaClustersAuxDyn.emax_sampl", &egammaClustersAuxDyn_emax_sampl, &b_egammaClustersAuxDyn_emax_sampl);
   fChain->SetBranchAddress("egammaClustersAuxDyn.eta_sampl", &egammaClustersAuxDyn_eta_sampl, &b_egammaClustersAuxDyn_eta_sampl);
   fChain->SetBranchAddress("egammaClustersAuxDyn.etamax_sampl", &egammaClustersAuxDyn_etamax_sampl, &b_egammaClustersAuxDyn_etamax_sampl);
   fChain->SetBranchAddress("egammaClustersAuxDyn.phi_sampl", &egammaClustersAuxDyn_phi_sampl, &b_egammaClustersAuxDyn_phi_sampl);
   fChain->SetBranchAddress("egammaClustersAuxDyn.phimax_sampl", &egammaClustersAuxDyn_phimax_sampl, &b_egammaClustersAuxDyn_phimax_sampl);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.px", &egammaTruthParticlesAuxDyn_px, &b_egammaTruthParticlesAuxDyn_px);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.py", &egammaTruthParticlesAuxDyn_py, &b_egammaTruthParticlesAuxDyn_py);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.prodVtxLink", &egammaTruthParticlesAuxDyn_prodVtxLink_, &b_egammaTruthParticlesAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.prodVtxLink.m_persKey", egammaTruthParticlesAuxDyn_prodVtxLink_m_persKey, &b_egammaTruthParticlesAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.prodVtxLink.m_persIndex", egammaTruthParticlesAuxDyn_prodVtxLink_m_persIndex, &b_egammaTruthParticlesAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.pz", &egammaTruthParticlesAuxDyn_pz, &b_egammaTruthParticlesAuxDyn_pz);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.decayVtxLink", &egammaTruthParticlesAuxDyn_decayVtxLink_, &b_egammaTruthParticlesAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.decayVtxLink.m_persKey", egammaTruthParticlesAuxDyn_decayVtxLink_m_persKey, &b_egammaTruthParticlesAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.decayVtxLink.m_persIndex", egammaTruthParticlesAuxDyn_decayVtxLink_m_persIndex, &b_egammaTruthParticlesAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.e", &egammaTruthParticlesAuxDyn_e, &b_egammaTruthParticlesAuxDyn_e);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.barcode", &egammaTruthParticlesAuxDyn_barcode, &b_egammaTruthParticlesAuxDyn_barcode);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.pdgId", &egammaTruthParticlesAuxDyn_pdgId, &b_egammaTruthParticlesAuxDyn_pdgId);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.status", &egammaTruthParticlesAuxDyn_status, &b_egammaTruthParticlesAuxDyn_status);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.recoElectronLink", &egammaTruthParticlesAuxDyn_recoElectronLink_, &b_egammaTruthParticlesAuxDyn_recoElectronLink_);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.recoElectronLink.m_persKey", egammaTruthParticlesAuxDyn_recoElectronLink_m_persKey, &b_egammaTruthParticlesAuxDyn_recoElectronLink_m_persKey);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.recoElectronLink.m_persIndex", egammaTruthParticlesAuxDyn_recoElectronLink_m_persIndex, &b_egammaTruthParticlesAuxDyn_recoElectronLink_m_persIndex);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.recoPhotonLink", &egammaTruthParticlesAuxDyn_recoPhotonLink_, &b_egammaTruthParticlesAuxDyn_recoPhotonLink_);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.recoPhotonLink.m_persKey", egammaTruthParticlesAuxDyn_recoPhotonLink_m_persKey, &b_egammaTruthParticlesAuxDyn_recoPhotonLink_m_persKey);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.recoPhotonLink.m_persIndex", egammaTruthParticlesAuxDyn_recoPhotonLink_m_persIndex, &b_egammaTruthParticlesAuxDyn_recoPhotonLink_m_persIndex);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.etcone20", &egammaTruthParticlesAuxDyn_etcone20, &b_egammaTruthParticlesAuxDyn_etcone20);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.truthOrigin", &egammaTruthParticlesAuxDyn_truthOrigin, &b_egammaTruthParticlesAuxDyn_truthOrigin);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.etcone30", &egammaTruthParticlesAuxDyn_etcone30, &b_egammaTruthParticlesAuxDyn_etcone30);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.truthParticleLink", &egammaTruthParticlesAuxDyn_truthParticleLink_, &b_egammaTruthParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.truthParticleLink.m_persKey", egammaTruthParticlesAuxDyn_truthParticleLink_m_persKey, &b_egammaTruthParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.truthParticleLink.m_persIndex", egammaTruthParticlesAuxDyn_truthParticleLink_m_persIndex, &b_egammaTruthParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.etcone40", &egammaTruthParticlesAuxDyn_etcone40, &b_egammaTruthParticlesAuxDyn_etcone40);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.truthType", &egammaTruthParticlesAuxDyn_truthType, &b_egammaTruthParticlesAuxDyn_truthType);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.ptcone20", &egammaTruthParticlesAuxDyn_ptcone20, &b_egammaTruthParticlesAuxDyn_ptcone20);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.m", &egammaTruthParticlesAuxDyn_m, &b_egammaTruthParticlesAuxDyn_m);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.ptcone30", &egammaTruthParticlesAuxDyn_ptcone30, &b_egammaTruthParticlesAuxDyn_ptcone30);
   fChain->SetBranchAddress("egammaTruthParticlesAuxDyn.ptcone40", &egammaTruthParticlesAuxDyn_ptcone40, &b_egammaTruthParticlesAuxDyn_ptcone40);
   fChain->SetBranchAddress("MuonsAuxDyn.cscEtaHits", &MuonsAuxDyn_cscEtaHits, &b_MuonsAuxDyn_cscEtaHits);
   fChain->SetBranchAddress("MuonsAuxDyn.cscUnspoiledEtaHits", &MuonsAuxDyn_cscUnspoiledEtaHits, &b_MuonsAuxDyn_cscUnspoiledEtaHits);
   fChain->SetBranchAddress("MuonsAuxDyn.etcone20", &MuonsAuxDyn_etcone20, &b_MuonsAuxDyn_etcone20);
   fChain->SetBranchAddress("MuonsAuxDyn.etcone30", &MuonsAuxDyn_etcone30, &b_MuonsAuxDyn_etcone30);
   fChain->SetBranchAddress("MuonsAuxDyn.etcone40", &MuonsAuxDyn_etcone40, &b_MuonsAuxDyn_etcone40);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone20", &MuonsAuxDyn_ptcone20, &b_MuonsAuxDyn_ptcone20);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone30", &MuonsAuxDyn_ptcone30, &b_MuonsAuxDyn_ptcone30);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone40", &MuonsAuxDyn_ptcone40, &b_MuonsAuxDyn_ptcone40);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone20", &MuonsAuxDyn_ptvarcone20, &b_MuonsAuxDyn_ptvarcone20);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone40", &MuonsAuxDyn_ptvarcone40, &b_MuonsAuxDyn_ptvarcone40);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone30", &MuonsAuxDyn_ptvarcone30, &b_MuonsAuxDyn_ptvarcone30);
   fChain->SetBranchAddress("MuonsAuxDyn.inDetTrackParticleLink", &MuonsAuxDyn_inDetTrackParticleLink_, &b_MuonsAuxDyn_inDetTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.inDetTrackParticleLink.m_persKey", MuonsAuxDyn_inDetTrackParticleLink_m_persKey, &b_MuonsAuxDyn_inDetTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.inDetTrackParticleLink.m_persIndex", MuonsAuxDyn_inDetTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_inDetTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.muonSpectrometerTrackParticleLink", &MuonsAuxDyn_muonSpectrometerTrackParticleLink_, &b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.muonSpectrometerTrackParticleLink.m_persKey", MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persKey, &b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.muonSpectrometerTrackParticleLink.m_persIndex", MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.muonSegmentLinks", &MuonsAuxDyn_muonSegmentLinks, &b_MuonsAuxDyn_muonSegmentLinks);
   fChain->SetBranchAddress("MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink", &MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_, &b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink.m_persKey", MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persKey, &b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink.m_persIndex", MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink", &MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_, &b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink.m_persKey", MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persKey, &b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink.m_persIndex", MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.combinedTrackParticleLink", &MuonsAuxDyn_combinedTrackParticleLink_, &b_MuonsAuxDyn_combinedTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.combinedTrackParticleLink.m_persKey", MuonsAuxDyn_combinedTrackParticleLink_m_persKey, &b_MuonsAuxDyn_combinedTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.combinedTrackParticleLink.m_persIndex", MuonsAuxDyn_combinedTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_combinedTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.pt", &MuonsAuxDyn_pt, &b_MuonsAuxDyn_pt);
   fChain->SetBranchAddress("MuonsAuxDyn.clusterLink", &MuonsAuxDyn_clusterLink_, &b_MuonsAuxDyn_clusterLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.clusterLink.m_persKey", MuonsAuxDyn_clusterLink_m_persKey, &b_MuonsAuxDyn_clusterLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.clusterLink.m_persIndex", MuonsAuxDyn_clusterLink_m_persIndex, &b_MuonsAuxDyn_clusterLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.spectrometerFieldIntegral", &MuonsAuxDyn_spectrometerFieldIntegral, &b_MuonsAuxDyn_spectrometerFieldIntegral);
   fChain->SetBranchAddress("MuonsAuxDyn.eta", &MuonsAuxDyn_eta, &b_MuonsAuxDyn_eta);
   fChain->SetBranchAddress("MuonsAuxDyn.scatteringCurvatureSignificance", &MuonsAuxDyn_scatteringCurvatureSignificance, &b_MuonsAuxDyn_scatteringCurvatureSignificance);
   fChain->SetBranchAddress("MuonsAuxDyn.phi", &MuonsAuxDyn_phi, &b_MuonsAuxDyn_phi);
   fChain->SetBranchAddress("MuonsAuxDyn.scatteringNeighbourSignificance", &MuonsAuxDyn_scatteringNeighbourSignificance, &b_MuonsAuxDyn_scatteringNeighbourSignificance);
   fChain->SetBranchAddress("MuonsAuxDyn.momentumBalanceSignificance", &MuonsAuxDyn_momentumBalanceSignificance, &b_MuonsAuxDyn_momentumBalanceSignificance);
   fChain->SetBranchAddress("MuonsAuxDyn.allAuthors", &MuonsAuxDyn_allAuthors, &b_MuonsAuxDyn_allAuthors);
   fChain->SetBranchAddress("MuonsAuxDyn.author", &MuonsAuxDyn_author, &b_MuonsAuxDyn_author);
   fChain->SetBranchAddress("MuonsAuxDyn.muonType", &MuonsAuxDyn_muonType, &b_MuonsAuxDyn_muonType);
   fChain->SetBranchAddress("MuonsAuxDyn.quality", &MuonsAuxDyn_quality, &b_MuonsAuxDyn_quality);
   fChain->SetBranchAddress("MuonsAuxDyn.energyLossType", &MuonsAuxDyn_energyLossType, &b_MuonsAuxDyn_energyLossType);
   fChain->SetBranchAddress("MuonsAuxDyn.CaloLRLikelihood", &MuonsAuxDyn_CaloLRLikelihood, &b_MuonsAuxDyn_CaloLRLikelihood);
   fChain->SetBranchAddress("MuonsAuxDyn.EnergyLoss", &MuonsAuxDyn_EnergyLoss, &b_MuonsAuxDyn_EnergyLoss);
   fChain->SetBranchAddress("MuonsAuxDyn.innerSmallHits", &MuonsAuxDyn_innerSmallHits, &b_MuonsAuxDyn_innerSmallHits);
   fChain->SetBranchAddress("MuonsAuxDyn.innerLargeHits", &MuonsAuxDyn_innerLargeHits, &b_MuonsAuxDyn_innerLargeHits);
   fChain->SetBranchAddress("MuonsAuxDyn.middleSmallHits", &MuonsAuxDyn_middleSmallHits, &b_MuonsAuxDyn_middleSmallHits);
   fChain->SetBranchAddress("MuonsAuxDyn.middleLargeHits", &MuonsAuxDyn_middleLargeHits, &b_MuonsAuxDyn_middleLargeHits);
   fChain->SetBranchAddress("MuonsAuxDyn.outerSmallHits", &MuonsAuxDyn_outerSmallHits, &b_MuonsAuxDyn_outerSmallHits);
   fChain->SetBranchAddress("MuonsAuxDyn.outerLargeHits", &MuonsAuxDyn_outerLargeHits, &b_MuonsAuxDyn_outerLargeHits);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedSmallHits", &MuonsAuxDyn_extendedSmallHits, &b_MuonsAuxDyn_extendedSmallHits);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedLargeHits", &MuonsAuxDyn_extendedLargeHits, &b_MuonsAuxDyn_extendedLargeHits);
   fChain->SetBranchAddress("MuonsAuxDyn.innerSmallHoles", &MuonsAuxDyn_innerSmallHoles, &b_MuonsAuxDyn_innerSmallHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.CaloMuonIDTag", &MuonsAuxDyn_CaloMuonIDTag, &b_MuonsAuxDyn_CaloMuonIDTag);
   fChain->SetBranchAddress("MuonsAuxDyn.innerLargeHoles", &MuonsAuxDyn_innerLargeHoles, &b_MuonsAuxDyn_innerLargeHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.middleSmallHoles", &MuonsAuxDyn_middleSmallHoles, &b_MuonsAuxDyn_middleSmallHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.middleLargeHoles", &MuonsAuxDyn_middleLargeHoles, &b_MuonsAuxDyn_middleLargeHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.outerSmallHoles", &MuonsAuxDyn_outerSmallHoles, &b_MuonsAuxDyn_outerSmallHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.outerLargeHoles", &MuonsAuxDyn_outerLargeHoles, &b_MuonsAuxDyn_outerLargeHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedSmallHoles", &MuonsAuxDyn_extendedSmallHoles, &b_MuonsAuxDyn_extendedSmallHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedLargeHoles", &MuonsAuxDyn_extendedLargeHoles, &b_MuonsAuxDyn_extendedLargeHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.charge", &MuonsAuxDyn_charge, &b_MuonsAuxDyn_charge);
   fChain->SetBranchAddress("MuonsAuxDyn.numberOfPrecisionLayers", &MuonsAuxDyn_numberOfPrecisionLayers, &b_MuonsAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("MuonsAuxDyn.numberOfPrecisionHoleLayers", &MuonsAuxDyn_numberOfPrecisionHoleLayers, &b_MuonsAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("MuonsAuxDyn.DFCommonGoodMuon", &MuonsAuxDyn_DFCommonGoodMuon, &b_MuonsAuxDyn_DFCommonGoodMuon);
   fChain->SetBranchAddress("MuonsAuxDyn.DFCommonMuonsPreselection", &MuonsAuxDyn_DFCommonMuonsPreselection, &b_MuonsAuxDyn_DFCommonMuonsPreselection);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPhiLayers", &CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPhiHoleLayers", &CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.chiSquared", &CombinedMuonTrackParticlesAuxDyn_chiSquared, &b_CombinedMuonTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberDoF", &CombinedMuonTrackParticlesAuxDyn_numberDoF, &b_CombinedMuonTrackParticlesAuxDyn_numberDoF);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfInnermostPixelLayerHits", &CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits, &b_CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPixelHits", &CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.phi", &CombinedMuonTrackParticlesAuxDyn_phi, &b_CombinedMuonTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPixelHoles", &CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPixelDeadSensors", &CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfSCTHits", &CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits, &b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfSCTHoles", &CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles, &b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfSCTDeadSensors", &CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.d0", &CombinedMuonTrackParticlesAuxDyn_d0, &b_CombinedMuonTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.z0", &CombinedMuonTrackParticlesAuxDyn_z0, &b_CombinedMuonTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.theta", &CombinedMuonTrackParticlesAuxDyn_theta, &b_CombinedMuonTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfTRTHits", &CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits, &b_CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.qOverP", &CombinedMuonTrackParticlesAuxDyn_qOverP, &b_CombinedMuonTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfTRTOutliers", &CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.definingParametersCovMatrix", &CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrix, &b_CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.vz", &CombinedMuonTrackParticlesAuxDyn_vz, &b_CombinedMuonTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.vertexLink", &CombinedMuonTrackParticlesAuxDyn_vertexLink_, &b_CombinedMuonTrackParticlesAuxDyn_vertexLink_);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.vertexLink.m_persKey", CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persKey, &b_CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.vertexLink.m_persIndex", CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex, &b_CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPrecisionLayers", &CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPrecisionHoleLayers", &CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPhiLayers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPhiHoleLayers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.chiSquared", &ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared, &b_ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberDoF", &ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPixelHits", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.phi", &ExtrapolatedMuonTrackParticlesAuxDyn_phi, &b_ExtrapolatedMuonTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPixelHoles", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPixelDeadSensors", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfSCTHits", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfSCTHoles", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfSCTDeadSensors", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.d0", &ExtrapolatedMuonTrackParticlesAuxDyn_d0, &b_ExtrapolatedMuonTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.z0", &ExtrapolatedMuonTrackParticlesAuxDyn_z0, &b_ExtrapolatedMuonTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.theta", &ExtrapolatedMuonTrackParticlesAuxDyn_theta, &b_ExtrapolatedMuonTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfTRTHits", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.qOverP", &ExtrapolatedMuonTrackParticlesAuxDyn_qOverP, &b_ExtrapolatedMuonTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfTRTOutliers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.definingParametersCovMatrix", &ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrix, &b_ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.vz", &ExtrapolatedMuonTrackParticlesAuxDyn_vz, &b_ExtrapolatedMuonTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.vertexLink", &ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_, &b_ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.vertexLink.m_persKey", ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persKey, &b_ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.vertexLink.m_persIndex", ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex, &b_ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPrecisionLayers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPrecisionHoleLayers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("MuonTruthParticlesAuxDyn.px", &MuonTruthParticlesAuxDyn_px, &b_MuonTruthParticlesAuxDyn_px);
   fChain->SetBranchAddress("MuonTruthParticlesAuxDyn.py", &MuonTruthParticlesAuxDyn_py, &b_MuonTruthParticlesAuxDyn_py);
   fChain->SetBranchAddress("MuonTruthParticlesAuxDyn.pz", &MuonTruthParticlesAuxDyn_pz, &b_MuonTruthParticlesAuxDyn_pz);
   fChain->SetBranchAddress("MuonTruthParticlesAuxDyn.e", &MuonTruthParticlesAuxDyn_e, &b_MuonTruthParticlesAuxDyn_e);
   fChain->SetBranchAddress("MuonTruthParticlesAuxDyn.pdgId", &MuonTruthParticlesAuxDyn_pdgId, &b_MuonTruthParticlesAuxDyn_pdgId);
   fChain->SetBranchAddress("MuonTruthParticlesAuxDyn.status", &MuonTruthParticlesAuxDyn_status, &b_MuonTruthParticlesAuxDyn_status);
   Notify();
}

Bool_t CollectionTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void CollectionTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t CollectionTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef CollectionTree_cxx
