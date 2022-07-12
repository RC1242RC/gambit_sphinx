
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_lep_mssm_xsecs.hpp:

Program Listing for File lep_mssm_xsecs.hpp
===========================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_lep_mssm_xsecs.hpp>` (``ColliderBit/include/gambit/ColliderBit/lep_mssm_xsecs.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #include <vector>
   
   
   namespace Gambit
   {
       
     namespace ColliderBit
     {
       
       typedef std::vector< std::vector<double> > MixMatrix;
       
       void get_sigma_ee_ll(triplet<double>& result, const double sqrts, const int generation, const int l_chirality, 
                            const int lbar_chirality, const double gtol, const double ftol, const bool gpt_error,
                            const bool fpt_error, const Spectrum& spec, const double gammaZ, const bool l_are_gauge_es);
       void get_sigma_ee_chi00(triplet<double>& result, const double sqrts, const int chi_first, const int chi_second,
                               const double tol, const bool pt_error, const Spectrum& spec, const double gammaZ);
       void get_sigma_ee_chipm(triplet<double>& result, const double sqrts, const int chi_plus, const int chi_minus,
                               const double tol, const bool pt_error, const Spectrum& spec, const double gammaZ);    
   
       double xsec_sleislej(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix F, 
                            MixMatrix N, const double mN[4], double alpha, double mZ, double gZ,
                            double sin2thetaW, bool warn_on_CP_violating_masses = true);
       double xsec_neuineuj(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix N,
                            const double mS[2], double tanb, double alpha, double mZ, double gZ, double sin2thetaW);
       double xsec_chaichaj(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix V, 
                            MixMatrix U, double msn, double alpha, double mZ, double gZ, double sin2thetaW);
       
       void SLHA2BFM_NN(MixMatrix &NN, double tanb, double sin2thetaW);
       void SLHA2BFM_VV(MixMatrix &VV);
       void BFM2SLHA_NN(MixMatrix &NN, double tanb, double sin2thetaW);
       void BFM2SLHA_VV(MixMatrix &VV);
       MixMatrix multiply(MixMatrix A, MixMatrix B);
       MixMatrix transpose(MixMatrix A);
       void print(MixMatrix A);
           
     }
     
   }
