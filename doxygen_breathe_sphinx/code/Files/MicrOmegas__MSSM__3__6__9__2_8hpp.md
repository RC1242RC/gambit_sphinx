---
title: 'file frontends/MicrOmegas_MSSM_3_6_9_2.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Functions

|                | Name           |
| -------------- | -------------- |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) | **[BE_FUNCTION](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#function-be-function)**(oneChannel , double , (double, double, char *, char *, char *, char *) , "oneChannel" , "get_oneChannel" , (MSSM63atQ) ) |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) char MSSM63atQ | **[BE_FUNCTION](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#function-be-function)**(vSigma , double , (double, double, int) , "vSigma" , "vSigma" , (MSSM63atQ) ) |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) char MSSM63atQ double MSSM63atQ | **[BE_FUNCTION](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#function-be-function)**(suspectSUGRA , int , (double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double) , "suspectSUGRA" , "suspectSUGRA" , (MSSM63atQ) ) |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) char MSSM63atQ double MSSM63atQ char MSSM63atQ | **[BE_FUNCTION](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#function-be-function)**(sortOddParticles , int , (char *) , "sortOddParticles" , "mass_spectrum" , (MSSM63atQ) ) |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) char MSSM63atQ double MSSM63atQ char MSSM63atQ MSSM63atQ | **[BE_FUNCTION](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#function-be-function)**(nucleonAmplitudes , int , (double(*)(double, double, double, double), double *, double *, double *, double *) , "nucleonAmplitudes" , "nucleonAmplitudes" , (MSSM63atQ) ) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) | **[int](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#variable-int)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) char | **[double](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#variable-double)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) char | **[assignVal](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#variable-assignval)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) char MSSM63atQ double | **[darkOmega](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#variable-darkomega)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) char MSSM63atQ double | **[oh2](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#variable-oh2)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) char MSSM63atQ double MSSM63atQ char | **[lesHinput](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#variable-leshinput)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) char MSSM63atQ double MSSM63atQ char MSSM63atQ | **[void](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#variable-void)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) char MSSM63atQ double MSSM63atQ char MSSM63atQ | **[cleanDecayTable](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#variable-cleandecaytable)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) char MSSM63atQ double MSSM63atQ char MSSM63atQ MSSM63atQ | **[FeScLoop](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#variable-fescloop)**  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/micromegas__mssm__3__6__9__2_8hpp/#define-reference)**  |

## Detailed Description


**Author**: 

  * Jonathan Cornell 
  * Sebastian Wild 


**Date**: 

  * Oct 2013
  * Aug 2016


Frontend for MicrOmegas MSSM backend



------------------

Authors (add name and date if you modify):



------------------


## Functions Documentation

### function BE_FUNCTION

```
LOAD_LIBRARY BE_FUNCTION(
    oneChannel ,
    double ,
    (double, double, char *, char *, char *, char *) ,
    "oneChannel" ,
    "get_oneChannel" ,
    (MSSM63atQ) 
)
```


### function BE_FUNCTION

```
LOAD_LIBRARY char MSSM63atQ BE_FUNCTION(
    vSigma ,
    double ,
    (double, double, int) ,
    "vSigma" ,
    "vSigma" ,
    (MSSM63atQ) 
)
```


### function BE_FUNCTION

```
LOAD_LIBRARY char MSSM63atQ double MSSM63atQ BE_FUNCTION(
    suspectSUGRA ,
    int ,
    (double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double) ,
    "suspectSUGRA" ,
    "suspectSUGRA" ,
    (MSSM63atQ) 
)
```


### function BE_FUNCTION

```
LOAD_LIBRARY char MSSM63atQ double MSSM63atQ char MSSM63atQ BE_FUNCTION(
    sortOddParticles ,
    int ,
    (char *) ,
    "sortOddParticles" ,
    "mass_spectrum" ,
    (MSSM63atQ) 
)
```


### function BE_FUNCTION

```
LOAD_LIBRARY char MSSM63atQ double MSSM63atQ char MSSM63atQ MSSM63atQ BE_FUNCTION(
    nucleonAmplitudes ,
    int ,
    (double(*)(double, double, double, double), double *, double *, double *, double *) ,
    "nucleonAmplitudes" ,
    "nucleonAmplitudes" ,
    (MSSM63atQ) 
)
```



## Attributes Documentation

### variable int

```
LOAD_LIBRARY int;
```


### variable double

```
LOAD_LIBRARY char double;
```


### variable assignVal

```
LOAD_LIBRARY char assignVal;
```


### variable darkOmega

```
LOAD_LIBRARY char MSSM63atQ double darkOmega;
```


### variable oh2

```
LOAD_LIBRARY char MSSM63atQ double oh2;
```


### variable lesHinput

```
LOAD_LIBRARY char MSSM63atQ double MSSM63atQ char lesHinput;
```


### variable void

```
LOAD_LIBRARY char MSSM63atQ double MSSM63atQ char MSSM63atQ void;
```


### variable cleanDecayTable

```
LOAD_LIBRARY char MSSM63atQ double MSSM63atQ char MSSM63atQ cleanDecayTable;
```


### variable FeScLoop

```
LOAD_LIBRARY char MSSM63atQ double MSSM63atQ char MSSM63atQ MSSM63atQ FeScLoop;
```



## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME MicrOmegas_MSSM
```


### define BACKENDLANG

```
#define BACKENDLANG CC
```


### define VERSION

```
#define VERSION 3.6.9.2
```


### define SAFE_VERSION

```
#define SAFE_VERSION 3_6_9_2
```


### define REFERENCE

```
#define REFERENCE Belanger:2001fz,Belanger:2004yn,Belanger:2006is,Belanger:2008sj,Belanger:2010gh,Belanger:2013oya,Belanger:2014vza
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#define BACKENDNAME MicrOmegas_MSSM
#define BACKENDLANG CC
#define VERSION 3.6.9.2
#define SAFE_VERSION 3_6_9_2
#define REFERENCE Belanger:2001fz,Belanger:2004yn,Belanger:2006is,Belanger:2008sj,Belanger:2010gh,Belanger:2013oya,Belanger:2014vza

LOAD_LIBRARY

BE_ALLOW_MODELS(MSSM63atQ, Halo_gNFW, Halo_gNFW_rho0, Halo_gNFW_rhos, Halo_Einasto, Halo_Einasto_rho0, Halo_Einasto_rhos)
// The presence of the various halo models is just a workaround to allow initializing MO without MSSM model

BE_FUNCTION(oneChannel, double, (double,double,char*,char*,char*,char*), "oneChannel", "get_oneChannel", (MSSM63atQ))

BE_FUNCTION(assignVal, int, (char*,double),"assignVal","assignVal", (MSSM63atQ))
BE_FUNCTION(vSigma, double, (double, double, int), "vSigma","vSigma", (MSSM63atQ))
BE_FUNCTION(darkOmega, double, (double*, int, double), "darkOmega", "oh2", (MSSM63atQ))
BE_FUNCTION(suspectSUGRA, int, (double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double), "suspectSUGRA", "suspectSUGRA", (MSSM63atQ))
BE_FUNCTION(lesHinput, int, (char*), "lesHinput", "lesHinput", (MSSM63atQ))
BE_FUNCTION(sortOddParticles, int, (char*), "sortOddParticles","mass_spectrum", (MSSM63atQ))
BE_FUNCTION(cleanDecayTable, void, (), "cleanDecayTable", "cleanDecayTable", (MSSM63atQ))
BE_FUNCTION(nucleonAmplitudes, int, (double(*)(double,double,double,double), double*, double*, double*, double*), "nucleonAmplitudes", "nucleonAmplitudes", (MSSM63atQ))
BE_FUNCTION(FeScLoop, double, (double, double, double, double), "FeScLoop", "FeScLoop", (MSSM63atQ))
BE_FUNCTION(calcScalarQuarkFF, void, (double, double, double, double), "calcScalarQuarkFF", "calcScalarQuarkFF", (MSSM63atQ))
BE_FUNCTION(calcSpectrum, double, (int, double*, double*, double*, double*, double*, double*, int*), "calcSpectrum", "calcSpectrum")

BE_FUNCTION(mInterp, int, (double,int,int,double*) , "mInterp", "mInterp")
BE_FUNCTION(zInterp, double, (double,double*) , "zInterp", "zInterp")
BE_FUNCTION(readSpectra, int, (), "readSpectra", "readSpectra")

BE_VARIABLE(mocommon_, MicrOmegas::MOcommonSTR, "mocommon_", "MOcommon", (MSSM63atQ))
BE_VARIABLE(ForceUG, int, "ForceUG", "ForceUG", (MSSM63atQ))
BE_VARIABLE(VZdecay, int, "VZdecay", "VZdecay", (MSSM63atQ))
BE_VARIABLE(VWdecay, int, "VWdecay", "VWdecay", (MSSM63atQ))

BE_CONV_FUNCTION(dNdE, double, (double,double,int,int), "dNdE")

BE_INI_CONDITIONAL_DEPENDENCY(MSSM_spectrum, Spectrum, MSSM63atQ)
BE_INI_CONDITIONAL_DEPENDENCY(SLHA_pseudonyms, mass_es_pseudonyms, MSSM63atQ)
BE_INI_DEPENDENCY(decay_rates, DecayTable)

#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
