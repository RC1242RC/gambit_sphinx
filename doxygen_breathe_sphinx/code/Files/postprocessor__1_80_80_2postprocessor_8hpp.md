---
title: 'file postprocessor_1.0.0/postprocessor_1.0.0/postprocessor.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::PostProcessor](/documentation/code/namespaces/namespacegambit_1_1postprocessor/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::PostProcessor::PPOptions](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/)**  |
| class | **[Gambit::PostProcessor::PPDriver](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/)** <br>Driver class to handle the actual postprocessing tasks.  |

## Detailed Description


"Postprocessing" scanner plugin. Header file



------------------

Authors (add name and date if you modify): 




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//

#include "gambit/ScannerBit/scanner_plugin.hpp"
#include "gambit/ScannerBit/scanners/postprocessor_1.0.0/chunks.hpp"

#ifndef __postprocessor_1_0_0_hpp__
#define __postprocessor_1_0_0_hpp__

// Forward declare this template specialisation as extern so that we use the definition compiled into baseprinter.cpp
extern template std::size_t Gambit::Printers::getTypeID<double>();

namespace Gambit
{
  namespace PostProcessor
  {

      bool point_done(const ChunkSet done_chunks, size_t index);
      
      Chunk get_effective_chunk(const std::size_t total_length, const unsigned int rank, const unsigned int numtasks);
      
      Chunk get_my_chunk(const std::size_t dset_length, const ChunkSet& done_chunks, const int rank, const int numtasks);
      
      ChunkSet get_done_points(const std::string& filebase);
     
      ChunkSet merge_chunks(const ChunkSet&);
 
      void record_done_points(const ChunkSet& done_chunks, const Chunk& mydone, const std::string& filebase, unsigned int rank, unsigned int size);

      // Gather a bunch of ints from all processes (COLLECTIVE OPERATION)
      #ifdef WITH_MPI
      std::vector<int> allgather_int(int myval, GMPI::Comm& comm);
      #endif

      struct PPOptions
      {
         std::set<std::string> all_params;
         std::set<std::string> data_labels;
         std::set<std::string> data_labels_copy;
         std::vector<std::string> add_to_logl;
         std::vector<std::string> subtract_from_logl;
         std::map<std::string,std::string> renaming_scheme;
         std::map<std::string,double> cut_less_than;
         std::map<std::string,double> cut_greater_than;
         bool discard_points_outside_cuts;
         std::size_t update_interval;
         bool discard_old_logl;
         std::string logl_purpose_name;
         std::string reweighted_loglike_name;
         std::string root;
         unsigned int numtasks;
         unsigned int rank;
         #ifdef WITH_MPI
         GMPI::Comm* comm;
         PPOptions() : comm(NULL) {}
         #endif
      };
 
      class PPDriver
      {
         public:
            PPDriver();
            PPDriver(Printers::BaseBaseReader* const, Printers::BaseBasePrinter* const, Scanner::like_ptr const, const PPOptions&);
            void check_settings();
            int run_main_loop(const ChunkSet& done_chunks);
            bool get_ModelParameters(std::unordered_map<std::string, double>& outputMap);
            bool check_for_redistribution_request();
            void send_redistribution_request();
            void clear_redistribution_requests();

            // Message tags
            static const int REDIST_REQ = 0;

         private:
            Printers::BaseBaseReader& getReader();
            Printers::BaseBasePrinter& getPrinter();
            Scanner::like_ptr getLogLike();

            Printers::BaseBaseReader* reader;

            Printers::BaseBasePrinter* printer;

            Scanner::like_ptr LogLike;
            
            std::set<std::string> new_params;

            std::map<std::string,std::vector<std::string>> req_models;

            std::map<std::string,std::map<std::string,std::string>> longname;

            std::set<std::string> all_params;

            std::set<std::string> data_labels;

            std::set<std::string> data_labels_copy;

            std::vector<std::string> add_to_logl;

            std::vector<std::string> subtract_from_logl;

            std::map<std::string,std::string> renaming_scheme;

            std::map<std::string,double> cut_less_than;
            std::map<std::string,double> cut_greater_than;

            bool discard_points_outside_cuts;

            std::size_t update_interval;
       
            bool discard_old_logl;
 
            std::string logl_purpose_name;

            std::string reweighted_loglike_name;

            std::string root;

            unsigned int numtasks;
            unsigned int rank;
            #ifdef WITH_MPI
            GMPI::Comm* comm;
            #endif
      };

  }
}

#endif

//o.all_params
//o.data_labels
//o.data_labels_copy
//o.add_to_logl
//o.subtract_from_logl
//o.renaming_scheme
//o.cut_less_than
//o.cut_greater_than
//o.discard_points_outside_cuts
//o.update_interval
//o.numtasks
//o.rank
//
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
