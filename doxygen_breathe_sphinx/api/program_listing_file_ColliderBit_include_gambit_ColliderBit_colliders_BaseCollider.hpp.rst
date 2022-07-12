
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_colliders_BaseCollider.hpp:

Program Listing for File BaseCollider.hpp
=========================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_colliders_BaseCollider.hpp>` (``ColliderBit/include/gambit/ColliderBit/colliders/BaseCollider.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #pragma once
   
   #include <string>
   #include <vector>
   
   namespace Gambit
   {
     namespace ColliderBit
     {
   
       class BaseCollider
       {
   
         public:
   
           BaseCollider() : partonOnly(false), antiktR(0.4) {}
           virtual ~BaseCollider() {}
           virtual void clear() {}
   
           virtual double xsec_fb() const = 0;
           virtual double xsec_fb(int) const = 0;
           virtual double xsec_pb() const = 0;
           virtual double xsec_pb(int) const = 0;
           virtual double xsecErr_fb() const = 0;
           virtual double xsecErr_fb(int) const = 0;
           virtual double xsecErr_pb() const = 0;
           virtual double xsecErr_pb(int) const = 0;
           virtual int process_code() const = 0;
           virtual std::vector<int> all_active_process_codes() const = 0;
   
           virtual void init(const std::vector<std::string>&) {}
           virtual void init() {}
   
           bool partonOnly;
           double antiktR;
   
       };
   
     }
   }
