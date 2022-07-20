---
title: 'file frontends/xsecBE_1_0_2.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/xsecbe__1__0__2_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/xsecbe__1__0__2_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/xsecbe__1__0__2_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/xsecbe__1__0__2_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/xsecbe__1__0__2_8hpp/#define-reference)**  |

## Detailed Description


**Author**: Anders Kvellestad ([a.kvellestad@imperial.ac.uk](mailto:a.kvellestad@imperial.ac.uk)) 

**Date**: 

  * 2019 Sep 
  * 2020 Dec


Frontend header for the xsecBE backend



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME xsecBE
```


### define BACKENDLANG

```
#define BACKENDLANG Python
```


### define VERSION

```
#define VERSION 1.0.2
```


### define SAFE_VERSION

```
#define SAFE_VERSION 1_0_2
```


### define REFERENCE

```
#define REFERENCE Buckley:2020bxg
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#define BACKENDNAME xsecBE
#define BACKENDLANG Python
#define VERSION 1.0.2
#define SAFE_VERSION 1_0_2
#define REFERENCE Buckley:2020bxg

/* The following macro imports the modude in the Python interpreter
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

BE_FUNCTION(import_slha_string, void, (std::string&), "import_slha_string", "xsecBE_import_slha_string")
BE_FUNCTION(set_parameters, void, (PyDict&), "set_parameters", "xsecBE_set_parameters")
BE_FUNCTION(get_xsection, PyDict, (iipair&), "get_xsection", "xsecBE_get_xsection")



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
