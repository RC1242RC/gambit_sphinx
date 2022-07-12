
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_MC_convergence.hpp:

Program Listing for File MC_convergence.hpp
===========================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_MC_convergence.hpp>` (``ColliderBit/include/gambit/ColliderBit/MC_convergence.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #ifndef __MC_convergence_hpp__
   #define __MC_convergence_hpp__
   
   #include "gambit/Utils/util_types.hpp"
   
   namespace Gambit
   {
     namespace ColliderBit
     {
   
       class AnalysisContainer;
   
       struct convergence_settings
       {
         double target_stat;
         bool stop_at_sys;
         bool all_analyses_must_converge;
         bool all_SR_must_converge;
       };
   
       class MC_convergence_checker
       {
         private:
   
           const convergence_settings* _settings;
   
           std::vector<int>* n_signals;
   
           int n_threads;
   
           bool converged;
   
           static std::map<const MC_convergence_checker* const, bool> convergence_map;
   
         public:
   
           MC_convergence_checker();
   
           ~MC_convergence_checker();
   
           void init(const convergence_settings&);
   
           void set_settings(const convergence_settings&);
   
           void clear();
   
           void update(const AnalysisContainer&);
   
           bool achieved(const AnalysisContainer& ac);
       };
   
   
     }
   }
   
   #endif
