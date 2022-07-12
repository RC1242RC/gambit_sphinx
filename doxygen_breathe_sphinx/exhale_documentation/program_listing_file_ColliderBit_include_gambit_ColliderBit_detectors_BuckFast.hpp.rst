
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_detectors_BuckFast.hpp:

Program Listing for File BuckFast.hpp
=====================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_detectors_BuckFast.hpp>` (``ColliderBit/include/gambit/ColliderBit/detectors/BuckFast.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //  *********************************************
   
   #pragma once
   
   #include "gambit/ColliderBit/detectors/BaseDetector.hpp"
   
   #include "HEPUtils/Event.h"
   #include "HEPUtils/Particle.h"
   #include "HEPUtils/Jet.h"
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
       class BuckFast : public BaseDetector
       {
   
         public:
   
           void(*smearElectronEnergy)(std::vector<HEPUtils::Particle*>&);
           void(*smearMuonMomentum)(std::vector<HEPUtils::Particle*>&);
           void(*smearTaus)(std::vector<HEPUtils::Particle*>&);
           void(*smearJets)(std::vector<HEPUtils::Jet*>&);
   
           void processEvent(HEPUtils::Event&) const;
   
   
           BuckFast() : smearElectronEnergy(NULL)
                      , smearMuonMomentum(NULL)
                      , smearTaus(NULL)
                      , smearJets(NULL)
           {}
   
           virtual ~BuckFast() {}
   
   
           virtual void init(const std::vector<std::string>&) {};
   
           virtual void init() {};
   
   
       };
   
     }
   }
