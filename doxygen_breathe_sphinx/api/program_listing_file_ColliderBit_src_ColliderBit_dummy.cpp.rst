
.. _program_listing_file_ColliderBit_src_ColliderBit_dummy.cpp:

Program Listing for File ColliderBit_dummy.cpp
==============================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_src_ColliderBit_dummy.cpp>` (``ColliderBit/src/ColliderBit_dummy.cpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #include <cmath>
   #include <string>
   #include <iostream>
   #include <fstream>
   #include <memory>
   #include <numeric>
   #include <sstream>
   #include <vector>
   
   #include "gambit/Elements/gambit_module_headers.hpp"
   #include "gambit/ColliderBit/ColliderBit_rollcall.hpp"
   
   namespace Gambit
   {
     namespace ColliderBit
     {
   
   
       void getDummyColliderObservable(double& result)
       {
         result = 0.0;
       }
   
   
     }
   }
