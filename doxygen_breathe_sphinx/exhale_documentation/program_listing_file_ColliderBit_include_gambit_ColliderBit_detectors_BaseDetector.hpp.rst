
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_detectors_BaseDetector.hpp:

Program Listing for File BaseDetector.hpp
=========================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_detectors_BaseDetector.hpp>` (``ColliderBit/include/gambit/ColliderBit/detectors/BaseDetector.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #pragma once
   
   #include <string>
   #include <vector>
   #include <exception>
   #include <memory>
   
   #include "HEPUtils/Event.h"
   
   #include "gambit/Elements/shared_types.hpp"
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
       class BaseDetector
       {
   
         public:
   
           BaseDetector() {}
           virtual ~BaseDetector() {}
           virtual void clear() {}
   
           virtual void processEvent(HEPUtils::Event&) const = 0;
   
           virtual void init(const std::vector<std::string>&) {}
           virtual void init() {};
   
       };
   
     }
   }
