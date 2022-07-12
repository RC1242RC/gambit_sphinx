
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_limits_L3SleptonLimits.hpp:

Program Listing for File L3SleptonLimits.hpp
============================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_limits_L3SleptonLimits.hpp>` (``ColliderBit/include/gambit/ColliderBit/limits/L3SleptonLimits.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #pragma once
   #include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"
   
   namespace Gambit {
     namespace ColliderBit {
   
   
           static constexpr double sqrtsGeV = 205;
       class L3SelectronLimitAt205GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double mZ) const;
   
   
         public:
           L3SelectronLimitAt205GeV();
       };
   
   
       class L3SmuonLimitAt205GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double mZ) const;
   
   
         public:
           L3SmuonLimitAt205GeV();
       };
   
   
       class L3StauLimitAt205GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double mZ) const;
   
   
         public:
           L3StauLimitAt205GeV();
       };
   
   
     }
   }
