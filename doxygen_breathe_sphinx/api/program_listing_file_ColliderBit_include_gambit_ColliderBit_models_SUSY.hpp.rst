
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_models_SUSY.hpp:

Program Listing for File SUSY.hpp
=================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_models_SUSY.hpp>` (``ColliderBit/include/gambit/ColliderBit/models/SUSY.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #pragma once
   
   #define MODULE ColliderBit
   
   
     // Construct an SLHAea object with spectrum and decays for Pythia
     #define CAPABILITY SpectrumAndDecaysForPythia
   
       #define FUNCTION getSpectrumAndDecaysForPythia
       START_FUNCTION(SLHAstruct)
       DEPENDENCY(decay_rates, DecayTable)
       DEPENDENCY(MSSM_spectrum, Spectrum)
       DEPENDENCY(SLHA_pseudonyms, mass_es_pseudonyms)
       ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT, MSSM63atQ_mA, MSSM63atMGUT_mA)
       #undef FUNCTION
   
     #undef CAPABILITY
   
   
     // Get Monte Carlo event generator
     #define CAPABILITY HardScatteringSim
   
       #define FUNCTION getPythia
       START_FUNCTION(Py8Collider_defaultversion)
       NEEDS_MANAGER(RunMC, MCLoopInfo)
       NEEDS_CLASSES_FROM(Pythia, default)
       ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT, MSSM63atQ_mA, MSSM63atMGUT_mA)
       DEPENDENCY(SpectrumAndDecaysForPythia, SLHAstruct)
       #undef FUNCTION
   
       #define FUNCTION getPythiaAsBase
       START_FUNCTION(const BaseCollider*)
       NEEDS_MANAGER(RunMC, MCLoopInfo)
       NEEDS_CLASSES_FROM(Pythia, default)
       DEPENDENCY(HardScatteringSim, Py8Collider_defaultversion)
       ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT, MSSM63atQ_mA, MSSM63atMGUT_mA)
       ALLOW_MODELS(ColliderBit_SLHA_file_model, ColliderBit_SLHA_scan_model)
       #undef FUNCTION
   
     #undef CAPABILITY
   
   
     // Run event generator
     #define CAPABILITY HardScatteringEvent
       #define FUNCTION generateEventPythia
       START_FUNCTION(HEPUtils::Event)
       NEEDS_MANAGER(RunMC, MCLoopInfo)
       NEEDS_CLASSES_FROM(Pythia, default)
       DEPENDENCY(HardScatteringSim, Py8Collider_defaultversion)
       DEPENDENCY(EventWeighterFunction, EventWeighterFunctionType)
       ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT, MSSM63atQ_mA, MSSM63atMGUT_mA)
       ALLOW_MODELS(ColliderBit_SLHA_file_model, ColliderBit_SLHA_scan_model)
       #undef FUNCTION
     #undef CAPABILITY
   
   
   #undef MODULE
