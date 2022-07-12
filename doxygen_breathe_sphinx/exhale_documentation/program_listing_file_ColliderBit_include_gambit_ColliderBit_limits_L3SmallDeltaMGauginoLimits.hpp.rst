
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_limits_L3SmallDeltaMGauginoLimits.hpp:

Program Listing for File L3SmallDeltaMGauginoLimits.hpp
=======================================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_limits_L3SmallDeltaMGauginoLimits.hpp>` (``ColliderBit/include/gambit/ColliderBit/limits/L3SmallDeltaMGauginoLimits.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #pragma once
   #include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"
   
   namespace Gambit {
     namespace ColliderBit {
   
   
       class L3ChargedGauginoSmallDeltaMWithHeavySneutrinoLimitAt188pt6GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double) const;
   
   
         public:
           L3ChargedGauginoSmallDeltaMWithHeavySneutrinoLimitAt188pt6GeV();
       };
   
   
       class L3ChargedGauginoSmallDeltaMAnySneutrinoLimitAt188pt6GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double) const;
   
   
         public:
           L3ChargedGauginoSmallDeltaMAnySneutrinoLimitAt188pt6GeV();
       };
   
   
       class L3ChargedHiggsinoSmallDeltaMLimitAt188pt6GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double) const;
   
   
         public:
           L3ChargedHiggsinoSmallDeltaMLimitAt188pt6GeV();
       };
   
   
     }
   }
