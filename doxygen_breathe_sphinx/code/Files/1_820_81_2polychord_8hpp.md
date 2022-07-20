---
title: 'file 1.20.1/1.20.1/polychord.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::PolyChord_1_20_1](/documentation/code/namespaces/namespacegambit_1_1polychord__1__20__1/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Settings](/documentation/code/classes/structsettings/)**  |
| class | **[Gambit::PolyChord_1_20_1::LogLikeWrapper](/documentation/code/classes/classgambit_1_1polychord__1__20__1_1_1loglikewrapper/)** <br>Class to connect PolyChord log-likelihood function and ScannerBit likelihood function.  |

## Functions

|                | Name           |
| -------------- | -------------- |
| void | **[run_polychord](/documentation/code/files/1_820_81_2polychord_8hpp/#function-run-polychord)**(double(*)(double *, int, double *, int) loglikelihood, void(*)(int, int, int, double *, double *, double *, double, double) dumper, [Settings](/documentation/code/classes/structsettings/) ) |

## Detailed Description


**Author**: 

  * Ben Farmer ([ben.farmer@gmail.com](mailto:ben.farmer@gmail.com)) 
  * Will Handley ([wh260@cam.ac.uk](mailto:wh260@cam.ac.uk)) 
  * Patrick Stoecker ([stoecker@physik.rwth-aachen.de](mailto:stoecker@physik.rwth-aachen.de)) 
  * Anders Kvellestad ([anders.kvellestad@fys.uio.no](mailto:anders.kvellestad@fys.uio.no)) 


**Date**: 

  * 2015 January
  * 2018 May
  * May 2020
  * June 2022


ScannerBit interface to PolyChord 1.20.1

Header file



------------------

Authors (add name and date if you modify):



------------------


## Functions Documentation

### function run_polychord

```
void run_polychord(
    double(*)(double *, int, double *, int) loglikelihood,
    void(*)(int, int, int, double *, double *, double *, double, double) dumper,
    Settings 
)
```




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************

#ifndef __polychord_hpp__
#define __polychord_hpp__

#include "gambit/ScannerBit/scanner_plugin.hpp"

// Auxilliary classes and functions needed by polychord

struct Settings
{
   int nDims;
   int nDerived;
   int nlive;
   int num_repeats;
   int nprior;
   int nfail;
   bool do_clustering;
   int feedback;
   double precision_criterion;
   double logzero;
   int max_ndead;
   double boost_posterior;
   bool posteriors;
   bool equals;
   bool cluster_posteriors;
   bool write_resume;
   bool write_paramnames;
   bool read_resume;
   bool write_stats;
   bool write_live;
   bool write_dead;
   bool write_prior;
   bool maximise;
   double compression_factor;
   bool synchronous;
   std::string base_dir;
   std::string file_root;
   std::vector<double> grade_frac;
   std::vector<int> grade_dims;
   std::vector<double> loglikes;
   std::vector<int> nlives;
   int seed;

   Settings(int _nDims=0,int _nDerived=0);
};


void run_polychord( 
         double (*loglikelihood)(double*,int,double*,int),
         void (*dumper)(int,int,int,double*,double*,double*,double,double), 
         Settings);


namespace Gambit
{

   namespace PolyChord_1_20_1
   {

      typedef Gambit::Scanner::like_ptr scanPtr;

      using Gambit::Scanner::printer_interface;
      using Gambit::Scanner::printer;

      class LogLikeWrapper
      {
         private:
            scanPtr boundLogLike;

            printer_interface& boundPrinter;

         public:
            LogLikeWrapper(scanPtr, printer_interface&);
   
            double LogLike(double*, int, double*, int);

            void dumper(int, int, int, double*, double*, double*, double, double);

            // PolyChord Hypercube index location for each parameter
            // gambit_hypercube[paramname] = polychord_hypercube[index_map[paramname]]
            // This is required because PolyChord needs parameters to be
            // ordered slow-to-fast to exploit a speed hierarchy
            std::unordered_map<std::string, int> index_map;

            Settings boundSettings;

            int printer_speed_threshold = -1;
      };

      double callback_loglike(double*, int, double*, int);
      void callback_dumper(int, int, int, double*, double*, double*, double, double);

   } // End PolyChord namespace

} // End Gambit namespace

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
