---
title: 'file frontends/MultiModeCode_2_0_0.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Functions

|                | Name           |
| -------------- | -------------- |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) | **[BE_FUNCTION](/documentation/code/files/multimodecode__2__0__0_8hpp/#function-be-function)**(multimodecode_primordial_ps , gambit_inflation_observables , (int &, int &, int &, int &, double *, double *, double *, double &, double &, double &, int &, double &, double &, int &, int &, int &, int &, int &) , ("__multimodecode_gambit_MOD_multimodecode_gambit_driver","multimodecode_gambit_mp_multimodecode_gambit_driver_") , "multimodecode_primordial_ps" ) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) | **[gambit_inflation_observables](/documentation/code/files/multimodecode__2__0__0_8hpp/#variable-gambit-inflation-observables)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) int int int int double double double double double double int int int int int | **[__multimodecode_gambit_MOD_multimodecode_parametrised_ps](/documentation/code/files/multimodecode__2__0__0_8hpp/#variable---multimodecode-gambit-mod-multimodecode-parametrised-ps)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) int int int int double double double double double double int int int int int | **[multimodecode_gambit_mp_multimodecode_parametrised_ps_](/documentation/code/files/multimodecode__2__0__0_8hpp/#variable-multimodecode-gambit-mp-multimodecode-parametrised-ps-)**  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/multimodecode__2__0__0_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/multimodecode__2__0__0_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/multimodecode__2__0__0_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/multimodecode__2__0__0_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/multimodecode__2__0__0_8hpp/#define-reference)**  |

## Detailed Description


**Author**: 

  * Selim C. Hotinli ([selim.hotinli14@pimperial.ac.uk](mailto:selim.hotinli14@pimperial.ac.uk)) 
  * Tomas Gonzalo ([tomas.gonzalo@monash.edu](mailto:tomas.gonzalo@monash.edu)) 


**Date**: 

  * 2017 Jul
  * 2020 Feb


Frontend header for the MultiModeCode backend.

Compile-time registration of available functions and variables from this backend.



------------------

Authors (add name and date if you modify):



------------------


## Functions Documentation

### function BE_FUNCTION

```
LOAD_LIBRARY BE_FUNCTION(
    multimodecode_primordial_ps ,
    gambit_inflation_observables ,
    (int &, int &, int &, int &, double *, double *, double *, double &, double &, double &, int &, double &, double &, int &, int &, int &, int &, int &) ,
    ("__multimodecode_gambit_MOD_multimodecode_gambit_driver","multimodecode_gambit_mp_multimodecode_gambit_driver_") ,
    "multimodecode_primordial_ps" 
)
```



## Attributes Documentation

### variable gambit_inflation_observables

```
LOAD_LIBRARY gambit_inflation_observables;
```


### variable __multimodecode_gambit_MOD_multimodecode_parametrised_ps

```
LOAD_LIBRARY int int int int double double double double double double int int int int int __multimodecode_gambit_MOD_multimodecode_parametrised_ps;
```


### variable multimodecode_gambit_mp_multimodecode_parametrised_ps_

```
LOAD_LIBRARY int int int int double double double double double double int int int int int multimodecode_gambit_mp_multimodecode_parametrised_ps_;
```



## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME MultiModeCode
```


### define BACKENDLANG

```
#define BACKENDLANG FORTRAN
```


### define VERSION

```
#define VERSION 2.0.0
```


### define SAFE_VERSION

```
#define SAFE_VERSION 2_0_0
```


### define REFERENCE

```
#define REFERENCE Mortonson:2010er,Price:2014xpa
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#define BACKENDNAME MultiModeCode
#define BACKENDLANG FORTRAN
#define VERSION 2.0.0
#define SAFE_VERSION 2_0_0
#define REFERENCE Mortonson:2010er,Price:2014xpa

// Load it
LOAD_LIBRARY

BE_FUNCTION(multimodecode_primordial_ps, gambit_inflation_observables,
            (int&,int&,int&,int&,double*,double*,double*,double&,double&,double&,int&,double&,double&,int&,int&,int&,int&,int&),
            ("__multimodecode_gambit_MOD_multimodecode_gambit_driver","multimodecode_gambit_mp_multimodecode_gambit_driver_"), "multimodecode_primordial_ps")

BE_FUNCTION(multimodecode_parametrised_ps, gambit_inflation_observables,
            (int&,int&,int&,int&,double*,double*,double*,double&,double&,double&,int&,int&,int&,int&,int&),
            ("__multimodecode_gambit_MOD_multimodecode_parametrised_ps","multimodecode_gambit_mp_multimodecode_parametrised_ps_"), "multimodecode_parametrised_ps")

// Fortran error handling issue
BE_VARIABLE(ErrorHandler_cptr, fptr_void,
            ("__modpk_errorhandling_MOD_errorhandler_cptr","modpk_errorhandling_mp_errorhandler_cptr_"), "multimode_internal")

// Variable to silence MultiModeCode output
BE_VARIABLE(SilenceOutput, Flogical, ("__multimodecode_gambit_MOD_silenceoutput", "multimodecode_gambit_mp_silenceoutput_"), "multimode_internal")

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
