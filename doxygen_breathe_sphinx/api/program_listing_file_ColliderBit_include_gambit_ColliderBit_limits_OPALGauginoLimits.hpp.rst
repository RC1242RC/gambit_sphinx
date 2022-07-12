
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_limits_OPALGauginoLimits.hpp:

Program Listing for File OPALGauginoLimits.hpp
==============================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_limits_OPALGauginoLimits.hpp>` (``ColliderBit/include/gambit/ColliderBit/limits/OPALGauginoLimits.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #pragma once
   #include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"
   
   namespace Gambit {
     namespace ColliderBit {
   
   
       class OPALCharginoHadronicLimitAt208GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double) const;
   
   
         public:
           OPALCharginoHadronicLimitAt208GeV();
       };
   
   
       class OPALCharginoSemiLeptonicLimitAt208GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double) const;
   
   
         public:
           OPALCharginoSemiLeptonicLimitAt208GeV();
       };
   
   
       class OPALCharginoLeptonicLimitAt208GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double) const;
   
   
         public:
           OPALCharginoLeptonicLimitAt208GeV();
       };
   
   
       class OPALCharginoAllChannelsLimitAt208GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double) const;
   
   
         public:
           OPALCharginoAllChannelsLimitAt208GeV();
       };
   
   
       class OPALNeutralinoHadronicLimitAt208GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double) const;
   
   
         public:
           OPALNeutralinoHadronicLimitAt208GeV();
       };
   
   
       class OPALNeutralinoHadronicViaZLimitAt208GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double) const;
   
   
         public:
           OPALNeutralinoHadronicViaZLimitAt208GeV();
       };
   
   
     }
   }
