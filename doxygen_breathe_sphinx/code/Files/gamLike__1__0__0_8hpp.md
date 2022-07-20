---
title: 'file frontends/gamLike_1_0_0.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/gamlike__1__0__0_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/gamlike__1__0__0_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/gamlike__1__0__0_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/gamlike__1__0__0_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/gamlike__1__0__0_8hpp/#define-reference)**  |

## Detailed Description


**Author**: 

  * Christoph Weniger ([c.weniger@uva.nl](mailto:c.weniger@uva.nl)) 
  * Sebastian Wild ([sebastian.wild@ph.tum.de](mailto:sebastian.wild@ph.tum.de)) 


**Date**: 

  * 2014 Sep, Oct 
  * 2016 Feb
  * 2016 Aug


Frontend header for the gamLike backend.

Compile-time registration of available functions and variables from this backend.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME gamLike
```


### define BACKENDLANG

```
#define BACKENDLANG CXX
```


### define VERSION

```
#define VERSION 1.0.0
```


### define SAFE_VERSION

```
#define SAFE_VERSION 1_0_0
```


### define REFERENCE

```
#define REFERENCE GAMBIT:2017fax
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

// Identify backend
#define BACKENDNAME gamLike
#define BACKENDLANG CXX
#define VERSION 1.0.0
#define SAFE_VERSION 1_0_0
#define REFERENCE GAMBIT:2017fax

#include <string>

// Load it
LOAD_LIBRARY

// Import functions
BE_FUNCTION(init, void, (int), "init", "init")
BE_FUNCTION(set_data_path, void, (const std::string &), "set_data_path", "set_data_path")
BE_FUNCTION(lnL, double, (int, const std::vector<double> &, const std::vector<double> &), "lnL", "lnL")
BE_FUNCTION(set_halo_profile, void, (int, const std::vector<double> &, const std::vector<double> &, double), "set_halo_profile", "set_halo_profile")

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
