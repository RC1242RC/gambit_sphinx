---
title: 'file frontends/salami_0_1_0.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/salami__0__1__0_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/salami__0__1__0_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/salami__0__1__0_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/salami__0__1__0_8hpp/#define-safe-version)**  |

## Detailed Description


**Author**: Anders Kvellestad ([anders.kvellestad@fys.uio.no](mailto:anders.kvellestad@fys.uio.no)) 

**Date**: 2019 Dec

Frontend header for the salami backend



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME salami
```


### define BACKENDLANG

```
#define BACKENDLANG Python3
```


### define VERSION

```
#define VERSION 0.1.0
```


### define SAFE_VERSION

```
#define SAFE_VERSION 0_1_0
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#define BACKENDNAME salami
#define BACKENDLANG Python3
#define VERSION 0.1.0
#define SAFE_VERSION 0_1_0

/* The following macro imports the module in the Python interpreter
 * when this header file is included somewhere. */

LOAD_LIBRARY

/* Next we use macros BE_VARIABLE and BE_FUNCTION to extract pointers
 * to the variables and functions within the Python module.
 *
 * The macros create functors that wrap the library variables and functions.
 * These are used by the Core for dependency resolution and to set up a suitable
 * interface to the library functions/variables at module level. */

/* Syntax for BE_FUNCTION (same as for any other backend):
 * BE_FUNCTION([choose function name], [type], [arguement types], "[exact symbol name]", "[choose capability name]")
 */

BE_FUNCTION(import_slha_string, void, (std::string&), "import_slha_string", "salami_import_slha_string")
BE_FUNCTION(set_parameters, void, (PyDict&), "set_parameters", "salami_set_parameters")
BE_FUNCTION(get_xsection, PyDict, (iipair&, double&, double&), "get_xsection", "salami_get_xsection")
// TODO: add double& first arg to get_xsection


/* At this point we have a minimal interface to the loaded library.
 * Any additional convenience functions could be constructed below
 * using the available pointers. All convenience functions must be
 * registred/wrapped via the macro BE_CONV_FUNCTION (see below). */

// BE_NAMESPACE
// {
  /* Convenience functions go here */
// }
// END_BE_NAMESPACE

/* Now register any convenience functions and wrap them in functors.
 *
 * Syntax for BE_CONV_FUNCTION:
 * BE_CONV_FUNCTION([function name], type, (arguments), "[choose capability name]") */

// BE_INI_FUNCTION {}
// END_BE_INI_FUNCTION

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
