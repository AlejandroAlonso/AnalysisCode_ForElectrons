#ifndef MyAnalysis_MyxAODAnalysis_H
#define MyAnalysis_MyxAODAnalysis_H

#include <EventLoop/Algorithm.h>
#include <TTree.h>


class MyxAODAnalysis : public EL::Algorithm
{
  // put your configuration variables here as public variables.
  // that way they can be set directly from CINT and python.
public:
  // float cutValue;



  // variables that don't get filled at submission time should be
  // protected from being send from the submission node to the worker
  // node (done by the //!)
public:
  std::string m_outputName;
  TTree *m_tree; //!
  int m_EventNumber; //!
  std::vector<float> m_El_pt;  //!
  std::vector<float> m_El_e;  //!
  std::vector<float> m_El_eta; //!
  std::vector<float> m_El_phi; //!

  std::vector<int>   m_El_type; //!
  std::vector<int>   m_El_origin; //!
  std::vector<int>   m_El_truthPdgId; //!
  
  std::vector<int>   m_El_LHLoose; //!
  std::vector<int>   m_El_LHMedium; //!
  std::vector<int>   m_El_LHTight; //!
  std::vector<float> m_El_LHValue; //!

  std::vector<int>   m_El_Loose; //!
  std::vector<int>   m_El_Medium; //!
  std::vector<int>   m_El_Tight; //!
  std::vector<float> m_El_Value; //!

  std::vector<std::vector<float>> m_El_energy_Cells ;//! 
  std::vector<std::vector<int>>   m_El_gain_Cells ;//! 
  std::vector<std::vector<int>>   m_El_provenance_Cells ;//! 
  std::vector<std::vector<int>>   m_El_sampling_Cells ;//! 

  std::vector<std::vector<float>> m_El_time_Cells ;//! 
  std::vector<std::vector<float>> m_El_x_Cells ;//! 
  std::vector<std::vector<float>> m_El_dx_Cells ;//! 
  std::vector<std::vector<float>> m_El_y_Cells ;//! 
  std::vector<std::vector<float>> m_El_dy_Cells ;//! 
  std::vector<std::vector<float>> m_El_z_Cells ;//! 
  std::vector<std::vector<float>> m_El_dz_Cells ;//! 
  std::vector<std::vector<float>> m_El_eta_Cells ;//! 
  std::vector<std::vector<float>> m_El_deta_Cells ;//! 
  std::vector<std::vector<float>> m_El_etasize_Cells ;//! 
  std::vector<std::vector<float>> m_El_phi_Cells ;//! 
  std::vector<std::vector<float>> m_El_dphi_Cells ;//! 
  std::vector<std::vector<float>> m_El_phisize_Cells ;//! 

  // Tree *myTree; //!
  // TH1 *myHist; //!



  // this is a standard constructor
  MyxAODAnalysis ();

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

  // this is needed to distribute the algorithm to the workers
  ClassDef(MyxAODAnalysis, 1);
};

#endif
