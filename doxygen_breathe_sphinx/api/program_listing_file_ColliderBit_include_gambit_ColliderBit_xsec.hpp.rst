
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_xsec.hpp:

Program Listing for File xsec.hpp
=================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_xsec.hpp>` (``ColliderBit/include/gambit/ColliderBit/xsec.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #include <vector>
   #include <map>
   #include <string>
   #include "gambit/Utils/PID_pair.hpp"
   
   
   #pragma once
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
   
       class xsec_container
       {
         public:
   
           xsec_container();
           virtual ~xsec_container() { }
   
           void reset();
   
           double operator()() const;
           double xsec() const;
   
           double xsec_err() const;
   
           double xsec_relerr() const;
   
           void set_xsec(double, double);
   
           void average_xsec(double, double);
           void average_xsec(const xsec_container&);
   
           void sum_xsecs(double, double);
           void sum_xsecs(const xsec_container&);
   
           std::map<std::string, double> get_content_as_map() const;
   
           void set_info_string(std::string);
   
           std::string info_string() const;
   
           void set_trust_level(int);
   
           int trust_level() const;
   
           static const std::string unit;
   
         protected:
   
           double _xsec;
           double _xsecerr;
           std::string _info_string;
           int _trust_level;
       };
   
   
       class MC_xsec_container : public xsec_container
       {
   
         public:
   
           MC_xsec_container();
           virtual ~MC_xsec_container() { }
   
           void reset();
   
           void log_event();
   
           long long num_events() const;
   
           double xsec_per_event() const;
   
           void set_num_events(long long);
   
   
           void average_xsec(double, double, long long);
           void average_xsec(const MC_xsec_container&);
   
           void sum_xsecs(double, double, long long);
           void sum_xsecs(const MC_xsec_container&);
   
           void gather_xsecs();
   
           void gather_num_events();
   
           std::map<std::string, double> get_content_as_map() const;
   
         private:
   
           long long _ntot;
   
           static std::map<int, const MC_xsec_container*> instances_map;
       };
   
   
   
       class process_xsec_container : public xsec_container
       {
   
         public:
           process_xsec_container();
           virtual ~process_xsec_container() { }
   
           void reset();
   
           void average_xsec(double, double);
           void average_xsec(const process_xsec_container&);
   
           void sum_xsecs(double, double);
           void sum_xsecs(const process_xsec_container&);
   
           int process_code() const;
   
           void set_process_code(int);
   
           const std::vector<int>& processes_sharing_xsec() const;
   
           void register_process_sharing_xsec(int);
   
           const std::vector<PID_pair>& related_pid_pairs() const; 
   
           void register_related_pid_pair(PID_pair); 
   
         private:
           int _process_code;
           std::vector<int> _processes_sharing_xsec;
           std::vector<PID_pair> _related_pid_pairs;
       };
   
   
   
       class PID_pair_xsec_container : public xsec_container
       {
   
         public:
           PID_pair_xsec_container();
           virtual ~PID_pair_xsec_container() { }
   
           void reset();
   
           void average_xsec(double, double);
           void average_xsec(const PID_pair_xsec_container&);
   
           void sum_xsecs(double, double);
           void sum_xsecs(const PID_pair_xsec_container&);
   
           const PID_pair& pid_pair() const;
   
           void set_pid_pair(const PID_pair&);
   
           const std::vector<PID_pair>& pid_pairs_sharing_xsec() const;
   
           void register_pid_pair_sharing_xsec(PID_pair);
   
           const std::vector<int>& related_processes() const; 
   
           void register_related_process(int); 
   
         private:
           PID_pair _pid_pair;
           std::vector<PID_pair> _pid_pairs_sharing_xsec;
           std::vector<int> _related_processes;
       };
   
     }
   }
