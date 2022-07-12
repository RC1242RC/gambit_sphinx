
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_limits_ALEPHSleptonLimits.hpp:

Program Listing for File ALEPHSleptonLimits.hpp
===============================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_limits_ALEPHSleptonLimits.hpp>` (``ColliderBit/include/gambit/ColliderBit/limits/ALEPHSleptonLimits.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #pragma once
   #include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"
   
   namespace Gambit {
     namespace ColliderBit {
   
   
       class ALEPHSelectronLimitAt208GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double mZ) const;
   
   
         public:
           ALEPHSelectronLimitAt208GeV();
       };
   
   
       class ALEPHSmuonLimitAt208GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double mZ) const;
   
   
         public:
           ALEPHSmuonLimitAt208GeV();
       };
   
   
       class ALEPHStauLimitAt208GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double mZ) const;
   
   
         public:
           ALEPHStauLimitAt208GeV();
       };
   
   
     }
   }
