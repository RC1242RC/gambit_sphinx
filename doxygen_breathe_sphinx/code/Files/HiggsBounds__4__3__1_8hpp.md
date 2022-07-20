---
title: 'file frontends/HiggsBounds_4_3_1.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Functions

|                | Name           |
| -------------- | -------------- |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) | **[BE_FUNCTION](/documentation/code/files/higgsbounds__4__3__1_8hpp/#function-be-function)**(HiggsBounds_neutral_input_part , void , (double *, double *, int *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *) , "higgsbounds_neutral_input_part_" , "HiggsBounds_neutral_input_part" ) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) | **[void](/documentation/code/files/higgsbounds__4__3__1_8hpp/#variable-void)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) double double double double double double double double | **[higgsbounds_charged_input_](/documentation/code/files/higgsbounds__4__3__1_8hpp/#variable-higgsbounds-charged-input-)**  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/higgsbounds__4__3__1_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/higgsbounds__4__3__1_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/higgsbounds__4__3__1_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/higgsbounds__4__3__1_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/higgsbounds__4__3__1_8hpp/#define-reference)**  |

## Detailed Description


**Author**: 

  * Christopher Rogan 
  * Pat Scott 


**Date**: 

  * Aug 2014
  * Aug 2016


Frontend for HiggsBounds backend



------------------

Authors (add name and date if you modify):



------------------


## Functions Documentation

### function BE_FUNCTION

```
LOAD_LIBRARY BE_FUNCTION(
    HiggsBounds_neutral_input_part ,
    void ,
    (double *, double *, int *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double *) ,
    "higgsbounds_neutral_input_part_" ,
    "HiggsBounds_neutral_input_part" 
)
```



## Attributes Documentation

### variable void

```
LOAD_LIBRARY void;
```


### variable higgsbounds_charged_input_

```
LOAD_LIBRARY double double double double double double double double higgsbounds_charged_input_;
```



## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME HiggsBounds
```


### define BACKENDLANG

```
#define BACKENDLANG FORTRAN
```


### define VERSION

```
#define VERSION 4.3.1
```


### define SAFE_VERSION

```
#define SAFE_VERSION 4_3_1
```


### define REFERENCE

```
#define REFERENCE Bechtle:2008jh,Bechtle:2011sb,Bechtle:2013wla
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#define BACKENDNAME HiggsBounds
#define BACKENDLANG FORTRAN
#define VERSION 4.3.1
#define SAFE_VERSION 4_3_1
#define REFERENCE Bechtle:2008jh,Bechtle:2011sb,Bechtle:2013wla

/* The following macro loads the library using dlopen
 * when this header file is included somewhere. */

LOAD_LIBRARY

/* Next we use macros BE_VARIABLE and BE_FUNCTION to load pointers
 * (using dlsym) to the variables and functions within the library.
 *
 * The macros also set up a minimal interface providing 'get/set'
 * functions for the library variables and function pointers
 * for the library functions.
 *
 * These functions are then wrapped in functors that the core can connect
 * to the modules via the rollcall system */

/* Syntax for BE_FUNCTION:
 * BE_FUNCTION([choose function name], [type], [arguement types], "[exact symbol name]", "[choose capability name]") */

BE_FUNCTION(initialize_HiggsBounds_int, void, (int&, int&, int&), "initialize_higgsbounds_int_", "initialize_HiggsBounds_int")
BE_FUNCTION(run_HiggsBounds_classic, void, (int&, int&, double&, int&), "run_higgsbounds_classic_", "run_HiggsBounds_classic")
BE_FUNCTION(finish_HiggsBounds, void, (), "finish_higgsbounds_", "finish_HiggsBounds")
BE_FUNCTION(HiggsBounds_set_mass_uncertainties, void, (double*, double*), "higgsbounds_set_mass_uncertainties_", "HiggsBounds_set_mass_uncertainties")

// LEP chisq extension specific
BE_FUNCTION(initialize_HiggsBounds_chisqtables, void, (), "initialize_higgsbounds_chisqtables_", "initialize_HiggsBounds_chisqtables")
BE_FUNCTION(HB_calc_stats, void, (double&, double&, double&, int&), "hb_calc_stats_", "HB_calc_stats")
BE_FUNCTION(finish_HiggsBounds_chisqtables, void, (), "finish_higgsbounds_chisqtables_","finish_HiggsBounds_chisqtables")

// Input sub-routines
BE_FUNCTION(HiggsBounds_input_SLHA, void, (const char&), "higgsbounds_input_slha_", "HiggsBounds_input_SLHA")
BE_FUNCTION(HiggsBounds_neutral_input_part, void, (double*, double*, int*, double*, double*, double*, double*,
               double*, double*, double*, double*, double*, double*, double*,
               double*, double*, double*, double*, double*, double*, double*,
               double*, double*, double*, double*, double*, double*, double*,
               double*, double*, double*, double*, double*, double*, double*,
               double*, double*, double*), "higgsbounds_neutral_input_part_", "HiggsBounds_neutral_input_part")
BE_FUNCTION(HiggsBounds_charged_input, void, (double*, double*, double*, double*,
                double*, double*, double*, double*), "higgsbounds_charged_input_", "HiggsBounds_charged_input")

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
