
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_models_SUSY_extras.hpp:

Program Listing for File SUSY_extras.hpp
========================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_models_SUSY_extras.hpp>` (``ColliderBit/include/gambit/ColliderBit/models/SUSY_extras.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #pragma once
   
   #define MODULE ColliderBit
   
     // Get Monte Carlo event generator based on SLHA file input
     #define CAPABILITY HardScatteringSim
   
       #define FUNCTION getPythia_SLHA
       START_FUNCTION(Py8Collider_defaultversion)
       NEEDS_MANAGER(RunMC, MCLoopInfo)
       NEEDS_CLASSES_FROM(Pythia, default)
       ALLOW_MODELS(ColliderBit_SLHA_file_model, ColliderBit_SLHA_scan_model)
       DEPENDENCY(SLHAFileNameAndContent, pair_str_SLHAstruct)
       #undef FUNCTION
   
     #undef CAPABILITY
   
   
   
   
   
     #define CAPABILITY PIDPairCrossSectionsMap
   
       #ifdef HAVE_PYBIND11
         #define FUNCTION getPIDPairCrossSectionsMap_xsecBE
         START_FUNCTION(map_PID_pair_PID_pair_xsec)
         NEEDS_MANAGER(RunMC, MCLoopInfo)
         DEPENDENCY(ActivePIDPairs, vec_PID_pair)
         DEPENDENCY(SLHA1Spectrum, SLHAstruct)
         ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)
         ALLOW_MODELS(MSSM63atQ_mA, MSSM63atMGUT_mA)
         ALLOW_MODELS(ColliderBit_SLHA_file_model, ColliderBit_SLHA_scan_model)
         BACKEND_REQ(xsecBE_import_slha_string, (), void, (std::string&))
         BACKEND_REQ(xsecBE_set_parameters, (), void, (PyDict&))
         BACKEND_REQ(xsecBE_get_xsection, (), PyDict, (iipair&))
         #undef FUNCTION
       #endif
   
       #define FUNCTION getPIDPairCrossSectionsMap_prospino
       START_FUNCTION(map_PID_pair_PID_pair_xsec)
       NEEDS_MANAGER(RunMC, MCLoopInfo)
       DEPENDENCY(ActivePIDPairs, vec_PID_pair)
       DEPENDENCY(SLHA1Spectrum, SLHAstruct)
       ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)
       ALLOW_MODELS(MSSM63atQ_mA, MSSM63atMGUT_mA)
       BACKEND_REQ(prospino_run, (libprospino), map_str_dbl, (const PID_pair&, const Options&))
       BACKEND_REQ(prospino_read_slha1_input, (libprospino), void, (const SLHAstruct&))
       #undef FUNCTION
   
       #ifdef HAVE_PYBIND11
         #define FUNCTION getPIDPairCrossSectionsMap_salami
         START_FUNCTION(map_PID_pair_PID_pair_xsec)
         NEEDS_MANAGER(RunMC, MCLoopInfo)
         DEPENDENCY(ActivePIDPairs, vec_PID_pair)
         DEPENDENCY(SLHA1Spectrum, SLHAstruct)
         ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)
         ALLOW_MODELS(MSSM63atQ_mA, MSSM63atMGUT_mA)
         ALLOW_MODELS(ColliderBit_SLHA_file_model, ColliderBit_SLHA_scan_model)
         BACKEND_REQ(salami_import_slha_string, (), void, (std::string&))
         BACKEND_REQ(salami_set_parameters, (), void, (PyDict&))
         BACKEND_REQ(salami_get_xsection, (), PyDict, (iipair&, double&, double&))
         // Needs Prospino to get LO cross-section
         BACKEND_REQ(prospino_run_alloptions, (libprospino), map_str_dbl, (const PID_pair&, const int&, const int&, const int&, const double&, const int&, const bool&))
         BACKEND_REQ(prospino_read_slha1_input, (libprospino), void, (const SLHAstruct&))
         #undef FUNCTION
       #endif
   
     #undef CAPABILITY
   
   
     #define CAPABILITY SLHAFileNameAndContent
     START_CAPABILITY
   
       #define FUNCTION getNextSLHAFileNameAndContent
       START_FUNCTION(pair_str_SLHAstruct)
       ALLOW_MODELS(ColliderBit_SLHA_file_model)
       #undef FUNCTION
   
       #define FUNCTION getAndReplaceSLHAContent
       START_FUNCTION(pair_str_SLHAstruct)
       ALLOW_MODELS(ColliderBit_SLHA_scan_model)
       #undef FUNCTION
   
     #undef CAPABILITY
   
   
     #define CAPABILITY SLHAFileElements
     START_CAPABILITY
       #define FUNCTION getSLHAFileElements
       START_FUNCTION(map_str_dbl)
       ALLOW_MODELS(ColliderBit_SLHA_file_model, ColliderBit_SLHA_scan_model)
       DEPENDENCY(SLHAFileNameAndContent, pair_str_SLHAstruct)
       #undef FUNCTION
     #undef CAPABILITY
   
   
     #define CAPABILITY SLHA1Spectrum
     START_CAPABILITY
       #define FUNCTION getSLHA1Spectrum
       START_FUNCTION(SLHAstruct)
       ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)
       ALLOW_MODELS(MSSM63atQ_mA, MSSM63atMGUT_mA)
       ALLOW_MODELS(ColliderBit_SLHA_file_model, ColliderBit_SLHA_scan_model)
       MODEL_CONDITIONAL_DEPENDENCY(SLHAFileNameAndContent, pair_str_SLHAstruct, ColliderBit_SLHA_file_model, ColliderBit_SLHA_scan_model)
       MODEL_CONDITIONAL_DEPENDENCY(MSSM_spectrum, Spectrum, MSSM63atQ, MSSM63atMGUT, MSSM63atQ_mA, MSSM63atMGUT_mA)
       #undef FUNCTION
     #undef CAPABILITY
   
     #define CAPABILITY SLHA2Spectrum
     START_CAPABILITY
       #define FUNCTION getSLHA2Spectrum
       START_FUNCTION(SLHAstruct)
       ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)
       ALLOW_MODELS(MSSM63atQ_mA, MSSM63atMGUT_mA)
       ALLOW_MODELS(ColliderBit_SLHA_file_model, ColliderBit_SLHA_scan_model)
       MODEL_CONDITIONAL_DEPENDENCY(SLHAFileNameAndContent, pair_str_SLHAstruct, ColliderBit_SLHA_file_model, ColliderBit_SLHA_scan_model)
       MODEL_CONDITIONAL_DEPENDENCY(MSSM_spectrum, Spectrum, MSSM63atQ, MSSM63atMGUT, MSSM63atQ_mA, MSSM63atMGUT_mA)
       #undef FUNCTION
     #undef CAPABILITY
   
   
     #define CAPABILITY susy_spectrum_scan_guide
     START_CAPABILITY
       #define FUNCTION calc_susy_spectrum_scan_guide
       START_FUNCTION(double)
       ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)
       ALLOW_MODELS(MSSM63atQ_mA, MSSM63atMGUT_mA)
       DEPENDENCY(SLHA_pseudonyms, mass_es_pseudonyms)
       MODEL_CONDITIONAL_DEPENDENCY(MSSM_spectrum, Spectrum, MSSM63atQ, MSSM63atMGUT, MSSM63atQ_mA, MSSM63atMGUT_mA)
       #undef FUNCTION
     #undef CAPABILITY
   
   
   #undef MODULE
