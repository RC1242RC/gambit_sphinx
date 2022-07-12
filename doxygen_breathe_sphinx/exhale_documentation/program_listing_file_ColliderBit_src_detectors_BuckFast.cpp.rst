
.. _program_listing_file_ColliderBit_src_detectors_BuckFast.cpp:

Program Listing for File BuckFast.cpp
=====================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_src_detectors_BuckFast.cpp>` (``ColliderBit/src/detectors/BuckFast.cpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //  *********************************************
   
   #include "gambit/ColliderBit/detectors/BuckFast.hpp"
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
       void BuckFast::processEvent(HEPUtils::Event& event) const
       {
         // Electron smearing
         if (smearElectronEnergy != NULL) smearElectronEnergy(event.electrons());
   
         // Muon smearing
         if (smearMuonMomentum != NULL) smearMuonMomentum(event.muons());
   
         // Smear taus
         if (smearTaus != NULL) smearTaus(event.taus());
   
         // Smear jet momenta
         if (smearJets != NULL) smearJets(event.jets());
   
         // Unset b-tags outside |eta|=2.5
         for (HEPUtils::Jet* j : event.jets())
         {
           if (j->abseta() > 2.5) j->set_btag(false);
         }
       }
   
     }
   
   }
