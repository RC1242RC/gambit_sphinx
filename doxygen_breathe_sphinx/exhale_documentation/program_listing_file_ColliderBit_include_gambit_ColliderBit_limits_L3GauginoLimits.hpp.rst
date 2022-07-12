
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_limits_L3GauginoLimits.hpp:

Program Listing for File L3GauginoLimits.hpp
============================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_limits_L3GauginoLimits.hpp>` (``ColliderBit/include/gambit/ColliderBit/limits/L3GauginoLimits.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"
   
   namespace Gambit {
     namespace ColliderBit {
   
   
       class L3CharginoAllChannelsLimitAt188pt6GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double mZ) const;
   
   
         public:
           L3CharginoAllChannelsLimitAt188pt6GeV();
       };
   
   
       class L3CharginoLeptonicLimitAt188pt6GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double mZ) const;
   
   
         public:
           L3CharginoLeptonicLimitAt188pt6GeV();
       };
   
   
       class L3NeutralinoAllChannelsLimitAt188pt6GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double mZ) const;
   
   
         public:
           L3NeutralinoAllChannelsLimitAt188pt6GeV();
       };
   
   
       class L3NeutralinoLeptonicLimitAt188pt6GeV : public BaseLimitContainer {
   
         public:
           P2 convertPt(double x, double y) const;
           bool isWithinExclusionRegion(double x, double y, double mZ) const;
   
   
         public:
           L3NeutralinoLeptonicLimitAt188pt6GeV();
       };
   
   
     }
   }
