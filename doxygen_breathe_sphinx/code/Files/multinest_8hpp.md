---
title: 'file multinest/multinest.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::MultiNest](/documentation/code/namespaces/namespacegambit_1_1multinest/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::MultiNest::LogLikeWrapper](/documentation/code/classes/classgambit_1_1multinest_1_1loglikewrapper/)** <br>Class to connect multinest log-likelihood function and ScannerBit likelihood function.  |

## Functions

|                | Name           |
| -------------- | -------------- |
| void | **[run](/documentation/code/files/multinest_8hpp/#function-run)**(bool , bool , bool , int , double , double , int , int , int , int , int , double , char [], int , int [], bool , bool , bool , bool , double , int , double(*)(double *, int, int, void *) , void(*)(int, int, int, double *, double *, double *, double, double, double, void *) , void * ) |

## Detailed Description


**Author**: Ben Farmer ([ben.farmer@gmail.com](mailto:ben.farmer@gmail.com)) 

**Date**: 2015 January

ScannerBit interface to Multinest 3.10

Header file



------------------

Authors (add name and date if you modify):



------------------


## Functions Documentation

### function run

```
void run(
    bool ,
    bool ,
    bool ,
    int ,
    double ,
    double ,
    int ,
    int ,
    int ,
    int ,
    int ,
    double ,
    char [],
    int ,
    int [],
    bool ,
    bool ,
    bool ,
    bool ,
    double ,
    int ,
    double(*)(double *, int, int, void *) ,
    void(*)(int, int, int, double *, double *, double *, double, double, double, void *) ,
    void * 
)
```




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************

#ifndef __multinest_hpp__
#define __multinest_hpp__

#include "gambit/ScannerBit/scanner_plugin.hpp"

// Auxilliary classes and functions needed by multinest
// (cloned largely from eggbox.cc, and modified to use cwrapper.f90 interface
//  instead of multinest.h)

// C++ prototypes for the main run function for multinest, as well as the
// loglike and dumper functions
extern "C"
{
        void run(bool, bool, bool, int, double, double, int, int, int, int, int,
                    double, char[], int, int[], bool, bool, bool, bool, double, int,
                    double (*)(double*,int,int,void*),
                    void (*)(int,int,int,double*,double*,double*,double,double,
                      double,void*),
                    void *);
}
//extern "C" double loglike(double*, int, int, void *);
//extern "C" void dumper(int, int, int, double*, double*, double*,
//                       double, double, double, void*);

namespace Gambit
{

   namespace MultiNest
   {

      typedef Gambit::Scanner::like_ptr scanPtr;

      using Gambit::Scanner::printer_interface;
      using Gambit::Scanner::printer;

      class LogLikeWrapper
      {
         private:
            scanPtr boundLogLike;

            printer_interface& boundPrinter;

            bool dumper_runonce;

         public:
            LogLikeWrapper(scanPtr, printer_interface&);

            double LogLike(double*, int, int);

            void dumper(int, int, int, double*, double*, double*, double, double, double);
      };

      // Note: we are using the c interface from cwrapper.f90, so the function
      // signature is a little different than in the multinest examples.
      double callback_loglike(double*, int, int, void*);

      void callback_dumper(int, int, int, double*, double*, double*, double, double, double, void*);

   } // End Multinest namespace

} // End Gambit namespace

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
