
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_lhef2heputils.hpp:

Program Listing for File lhef2heputils.hpp
==========================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_lhef2heputils.hpp>` (``ColliderBit/include/gambit/ColliderBit/lhef2heputils.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   // -*- C++ -*-
   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #include "gambit/cmake/cmake_variables.hpp"
   
   #ifndef EXCLUDE_HEPMC
   
   #include "HEPUtils/Event.h"
   
   namespace LHEF { class Reader; }
   
   void get_HEPUtils_event(const LHEF::Reader&, HEPUtils::Event&, double);
   
   #endif
