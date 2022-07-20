---
title: 'file frontends/LibFirst_1_1.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Functions

|                | Name           |
| -------------- | -------------- |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) | **[BE_FUNCTION](/documentation/code/files/libfirst__1__1_8hpp/#function-be-function)**(someFunction , void , () , "_Z12someFunctionv" , "someFunction" , (NUHM1, WC) ) |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) double _Z11arrayarg_2DPA10_d | **[BE_FUNCTION](/documentation/code/files/libfirst__1__1_8hpp/#function-be-function)**(arrayarg_3D , double , (double(*)[10][10]) , "_Z11arrayarg_3DPA10_A10_d" , "example_be_array_3D" ) |
| | **[if](/documentation/code/files/libfirst__1__1_8hpp/#function-if)**(scan_level ) |
| | **[logger](/documentation/code/files/libfirst__1__1_8hpp/#function-logger)**() |

## Attributes

|                | Name           |
| -------------- | -------------- |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) | **[double](/documentation/code/files/libfirst__1__1_8hpp/#variable-double)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) double _Z11arrayarg_2DPA10_d | **[int](/documentation/code/files/libfirst__1__1_8hpp/#variable-int)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) double _Z11arrayarg_2DPA10_d | **[awesomeness](/documentation/code/files/libfirst__1__1_8hpp/#variable-awesomeness)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) double _Z11arrayarg_2DPA10_d | **[NUHM1](/documentation/code/files/libfirst__1__1_8hpp/#variable-nuhm1)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) double _Z11arrayarg_2DPA10_d ScalarSingletDM_Z3 | **[BE_INI_FUNCTION](/documentation/code/files/libfirst__1__1_8hpp/#variable-be-ini-function)**  |
| | **[scan_level](/documentation/code/files/libfirst__1__1_8hpp/#variable-scan-level)**  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/libfirst__1__1_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/libfirst__1__1_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/libfirst__1__1_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/libfirst__1__1_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/libfirst__1__1_8hpp/#define-reference)**  |

## Detailed Description


**Author**: 

  * Anders Kvellestad 
  * Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 


**Date**: 

  * 2013 Mar, Apr
  * 2013 Apr 
  * 2014 May


Example of how to use the macros in '[backend_macros.hpp](/documentation/code/files/backend__macros_8hpp/#file-backend-macros.hpp)' to set up a frontend for a specific library.



------------------

Authors (add name and date if you modify):



------------------


## Functions Documentation

### function BE_FUNCTION

```
LOAD_LIBRARY BE_FUNCTION(
    someFunction ,
    void ,
    () ,
    "_Z12someFunctionv" ,
    "someFunction" ,
    (NUHM1, WC) 
)
```


### function BE_FUNCTION

```
LOAD_LIBRARY double _Z11arrayarg_2DPA10_d BE_FUNCTION(
    arrayarg_3D ,
    double ,
    (double(*)[10][10]) ,
    "_Z11arrayarg_3DPA10_A10_d" ,
    "example_be_array_3D" 
)
```


### function if

```
if(
    scan_level 
)
```


### function logger

```
logger()
```



## Attributes Documentation

### variable double

```
LOAD_LIBRARY double;
```


### variable int

```
LOAD_LIBRARY double _Z11arrayarg_2DPA10_d int;
```


### variable awesomeness

```
LOAD_LIBRARY double _Z11arrayarg_2DPA10_d awesomeness;
```


### variable NUHM1

```
LOAD_LIBRARY double _Z11arrayarg_2DPA10_d NUHM1;
```


### variable BE_INI_FUNCTION

```
LOAD_LIBRARY double _Z11arrayarg_2DPA10_d ScalarSingletDM_Z3 BE_INI_FUNCTION {
  
  static bool scan_level = true;
```


### variable scan_level

```
scan_level = false;
```



## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME LibFirst
```


### define BACKENDLANG

```
#define BACKENDLANG CXX
```


### define VERSION

```
#define VERSION 1.1
```


### define SAFE_VERSION

```
#define SAFE_VERSION 1_1
```


### define REFERENCE

```
#define REFERENCE GAMBIT:2017yxo
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#define BACKENDNAME LibFirst
#define BACKENDLANG CXX
#define VERSION 1.1
#define SAFE_VERSION 1_1
#define REFERENCE GAMBIT:2017yxo

// Begin
LOAD_LIBRARY

// Set models that this backend can be used with.  If absent, all models are allowed.
BE_ALLOW_MODELS(NUHM1,ScalarSingletDM_Z3,WC,CMSSM)

// Functions
BE_FUNCTION(initialize, void, (int), "_Z10initializei", "initialize_capability")
BE_FUNCTION(someFunction, void, (), "_Z12someFunctionv", "someFunction", (NUHM1,WC))
BE_FUNCTION(returnResult, double, (), "_Z12returnResultv","returnResult_capability")
BE_FUNCTION(byRefExample, double, (double&), "_Z12byRefExampleRd", "refex")
BE_FUNCTION(byRefExample2, void, (double&, double), "_Z13byRefExample2Rdd", "refex2")
BE_FUNCTION(nastyExample, double, (int, etc), "_Z12nastyExampleiz", "varex")
BE_FUNCTION(arrayarg_1D, double, (double*), "_Z11arrayarg_1DPd", "example_be_array_1D")
BE_FUNCTION(arrayarg_2D, double, (double(*)[10]), "_Z11arrayarg_2DPA10_d", "example_be_array_2D")
BE_FUNCTION(arrayarg_3D, double, (double(*)[10][10]), "_Z11arrayarg_3DPA10_A10_d", "example_be_array_3D")

// Variables
BE_VARIABLE(SomeInt, int, "someInt", "SomeInt", (NUHM1))
BE_VARIABLE(SomeDouble, double, "someDouble", "SomeDouble")
BE_VARIABLE(SomeArray, dblarr, "someArray", "SomeArray")
BE_VARIABLE(SomeVector, std::vector<double>, "someVector", "test_vector")

// Initialisation function (dependencies)
BE_INI_DEPENDENCY(nevents, int)

// Convenience functions (registration)
BE_CONV_FUNCTION(awesomenessByAnders, double, (int), "awesomeness", (NUHM1,ScalarSingletDM_Z3))
BE_CONV_FUNCTION(variadicConvenience, double, (int, etc), "varex2")

// Initialisation function (definition)
BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    logger() << "Initialising backend LibFirst, v1.1.  My .so file is in " << backendDir << ".";
    logger() << (*InUse::awesomenessByAnders ? "Ready to bust out some awesomeness." : "No awesomeness shall be forthcoming.") << EOM;
  }
  scan_level = false;

  // Point-level initialisation
  if (*InUse::SomeDouble)
  {
    *SomeDouble = 2.1;
    logger() << "Initialised someDouble to " << *SomeDouble << EOM;
  }
  if (ModelInUse("CMSSM")) logger() << "M0 in libfirst v1.1 initialisation function: " << *Param["M0"] << EOM;
  awesomenessByAnders(*Dep::nevents);
}
END_BE_INI_FUNCTION

// Convenience functions (definitions)
BE_NAMESPACE
{
  #include <cstdarg>

  double awesomenessByAnders(int a)
  {
    logger().send("Message from 'awesomenessByAnders' backend convenience function in LibFirst v1.1 wrapper",LogTags::info);
    initialize(a);
    someFunction();
    return returnResult();
  }

  double variadicConvenience(int count, ...)
  {
    double result = *SomeDouble;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; ++i)
    {
      result += va_arg(args, double);
    }
    va_end(args);
    return result;
  }

}
END_BE_NAMESPACE

// End
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
