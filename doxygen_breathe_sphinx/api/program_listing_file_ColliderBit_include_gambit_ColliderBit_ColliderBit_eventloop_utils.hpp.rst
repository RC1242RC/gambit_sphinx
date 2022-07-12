
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_ColliderBit_eventloop_utils.hpp:

Program Listing for File ColliderBit_eventloop_utils.hpp
========================================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_ColliderBit_eventloop_utils.hpp>` (``ColliderBit/include/gambit/ColliderBit/ColliderBit_eventloop_utils.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #pragma once
   
   #include <string>
   #include <iostream>
   
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
       enum specialIterations { BASE_INIT = -1,
                                COLLIDER_INIT = -2,
                                COLLIDER_INIT_OMP = -3,
                                XSEC_CALCULATION = -4,
                                START_SUBPROCESS = -5,
                                COLLECT_CONVERGENCE_DATA = -6,
                                CHECK_CONVERGENCE = -7,
                                END_SUBPROCESS = -8,
                                COLLIDER_FINALIZE = -9,
                                BASE_FINALIZE = -10};
     }
   
   }
