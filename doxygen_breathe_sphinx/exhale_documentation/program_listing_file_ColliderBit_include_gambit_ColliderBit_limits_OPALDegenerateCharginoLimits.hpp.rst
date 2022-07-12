
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_limits_OPALDegenerateCharginoLimits.hpp:

Program Listing for File OPALDegenerateCharginoLimits.hpp
=========================================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_limits_OPALDegenerateCharginoLimits.hpp>` (``ColliderBit/include/gambit/ColliderBit/limits/OPALDegenerateCharginoLimits.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #pragma once
   #include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"
   
   namespace Gambit
   {
     namespace ColliderBit 
     {
       class OPALDegenerateCharginoLimitAt208GeV : public BaseLimitContainer {
   
         public:
   
           P2 convertPt(double, double) const;
   
           std::vector<P2> dataFromLimit(double);
   
           bool isWithinExclusionRegion(double x, double y, double) const;
   
         public:
           OPALDegenerateCharginoLimitAt208GeV();
       };
   
     }
   }
