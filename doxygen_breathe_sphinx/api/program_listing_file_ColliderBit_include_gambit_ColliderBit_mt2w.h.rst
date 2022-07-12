
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_mt2w.h:

Program Listing for File mt2w.h
===============================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_mt2w.h>` (``ColliderBit/include/gambit/ColliderBit/mt2w.h``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #include "mt2w_bisect.h"
   #include <vector>
   #include "HEPUtils/MathUtils.h"
   #include "HEPUtils/Event.h"
   using namespace std;
   
   
   double calculateMT2wHepUtils(vector<HEPUtils::P4>& jets, vector<bool>& btag, HEPUtils::P4& lep, float met, float metphi);
   
   double mt2wWrapperHepUtils(HEPUtils::P4& lep, HEPUtils::P4& jet_o, HEPUtils::P4& jet_b, float met, float metphi);
