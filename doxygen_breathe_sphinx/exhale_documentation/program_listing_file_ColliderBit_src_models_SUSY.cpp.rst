
.. _program_listing_file_ColliderBit_src_models_SUSY.cpp:

Program Listing for File SUSY.cpp
=================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_src_models_SUSY.cpp>` (``ColliderBit/src/models/SUSY.cpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #include "gambit/ColliderBit/getPy8Collider.hpp"
   #include "gambit/ColliderBit/generateEventPy8Collider.hpp"
   
   namespace Gambit
   {
     namespace ColliderBit
     {
   
       // Get spectrum and decays for Pythia
       GET_SPECTRUM_AND_DECAYS_FOR_PYTHIA_SUSY(getSpectrumAndDecaysForPythia, MSSM_spectrum)
   
       // Get Monte Carlo event generator
       GET_SPECIFIC_PYTHIA(getPythia, Pythia_default, /* blank MODEL_EXTENSION argument */ )
       GET_PYTHIA_AS_BASE_COLLIDER(getPythiaAsBase)
   
       // Run event generator
       GET_PYTHIA_EVENT(generateEventPythia)
   
     }
   }
