---
title: 'file SpecBit/SpecBit_types.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::SpecBit](/documentation/code/namespaces/namespacegambit_1_1specbit/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::SpecBit::SpectrumEntry](/documentation/code/classes/structgambit_1_1specbit_1_1spectrumentry/)**  |
| class | **[Gambit::SpecBit::SpectrumEntriesForVevacious](/documentation/code/classes/classgambit_1_1specbit_1_1spectrumentriesforvevacious/)**  |
| class | **[Gambit::SpecBit::VevaciousResultContainer](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/)**  |

## Detailed Description


**Author**: Janina Renk ([janina.renk@fysik.su.se](mailto:janina.renk@fysik.su.se)) 

**Date**: 2019 July, Dec

Type definition header for module SpecBit.

Compile-time registration of type definitions required for the rest of the code to communicate with SpecBit.

Add to this if you want to define a new type for the functions in SpecBit to return, but you don't expect that type to be needed by any other modules.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#ifndef __SpecBit_types_hpp__
#define __SpecBit_types_hpp__

#include <string>
#include <vector>
#include "gambit/Utils/util_types.hpp"

namespace Gambit
{

  namespace SpecBit
  {

    // this vector of <int,double> pairs is the type the routine 'ReadLhaBlock' of vevacious uses to read
    // in the passed parameters
    typedef std::vector<std::pair<int,double>> vec_pair_int_dbl;

    // create a spectrum entry type storing all information necessary for the vevacious function 'ReadLhaBlock'
    // => store name, parameters & dimension of an entry
    struct SpectrumEntry
    {
        std::string name;
        vec_pair_int_dbl parameters;
        int dimension;
    };

    // typdef to avoid having to use 'struct SpectrumEntry' every time
    typedef struct SpectrumEntry SpectrumEntry;

    typedef std::map<std::string,SpectrumEntry> map_str_SpectrumEntry;


    class SpectrumEntriesForVevacious
    {
        public:
            SpectrumEntriesForVevacious(){};

            // setter functions for scale, inputPath and input Filenames
            void set_scale (double inScale) {scale = inScale;};
            void set_inputPath (std::string inPath) {inputPath = inPath;};
            void set_inputFilename (std::string inFile) {inputFilename = inFile;};

            // getter functions for scale, inputPath and input Filenames
            double get_scale () {return scale;};
            std::string get_inputFilename () {return inputFilename;};
            std::string get_inputPath () {return inputPath;};

            // adds an entry to the spec_entry_map
            void add_entry (std::string name, vec_pair_int_dbl vec, int dimension);

            // return spec_entry_map -> iterate through it to pass all entries to vevacious
            map_str_SpectrumEntry get_spec_entry_map() {return spec_entry_map;};

        private:
            double scale;
            std::string inputFilename;
            std::string inputPath;
            map_str_SpectrumEntry spec_entry_map;
    };


    /* Class that stores the results computed by vevacious that will be
    needed by other capabilites in GAMBIT  */
    class VevaciousResultContainer
    {

      public:
        // constructor initialises every member to -1 to avoid
        // problems when printing results when vevacious did not run
        VevaciousResultContainer(){};

        // clear all maps and set value of lifetime and thermalProbability to -1
        void clear_results(const str panic_vaccum, int pathFinder_number);

        // setter functions for results lifetime, thermal probability & bounce action vectors
        // straightPathGoodEnough checks wethere the action of drawing a straigh path between the
        // physical & panic vacuum is already below the action threshold.
        void set_results (str panic_vaccum, str name, double val);
        void add_straightPathGoodEnough(str panic_vacuum);

        // return map containing results for nearest/global run
        map_str_dbl get_nearest_results() {return result_map["nearest"];}
        map_str_dbl get_global_results() {return result_map["global"];}

        // return width, lifetime for nearest/global minimum
        double get_width(str panic_vacuum) { return result_map[panic_vacuum]["width"]; }
        double get_lifetime(str panic_vaccum) {return result_map[panic_vaccum]["lifetime"]; }

        // return thermal probability and width for nearest/global minimum
        double get_thermalProbability(str panic_vaccum) { return result_map[panic_vaccum]["thermalProbability"]; }
        double get_thermalWidth(str panic_vacuum) { return result_map[panic_vacuum]["thermalWidth"]; }

      private:
        map_str_map_str_dbl result_map;
    };
  }
}

#endif // defined __SpecBit_types_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
