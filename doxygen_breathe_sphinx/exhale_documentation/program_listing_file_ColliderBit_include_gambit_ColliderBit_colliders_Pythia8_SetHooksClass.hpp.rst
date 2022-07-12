
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_colliders_Pythia8_SetHooksClass.hpp:

Program Listing for File SetHooksClass.hpp
==========================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_colliders_Pythia8_SetHooksClass.hpp>` (``ColliderBit/include/gambit/ColliderBit/colliders/Pythia8/SetHooksClass.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #pragma once
   
   #include <ostream>
   #include <stdexcept>
   #include "gambit/Elements/shared_types.hpp"
   #include "gambit/ColliderBit/colliders/BaseCollider.hpp"
   #include "SLHAea/slhaea.h"
   
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
       template <typename PythiaT, typename EventT>
       class SetHooks
       {
   
         public:
           //Constructor and Destructor
           SetHooks() {}
           ~SetHooks() {}
   
           //Function to set the UserHook.
           bool SetupHook(PythiaT*)
           {
             return false;
           }
       };
   
   
     }
   }
