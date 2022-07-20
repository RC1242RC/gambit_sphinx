---
title: 'file Backends/python_macros.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BE_FUNCTION_I_PY](/documentation/code/files/python__macros_8hpp/#define-be-function-i-py)**(NAME, TYPE, ARGLIST, SYMBOLNAME, CAPABILITY, MODELS) <br>Backend function macro for Python backends.  |
|  | **[BE_VARIABLE_I_PY](/documentation/code/files/python__macros_8hpp/#define-be-variable-i-py)**(NAME, TYPE, SYMBOLNAME, CAPABILITY, MODELS) <br>Backend variable macro for Python.  |

## Detailed Description


**Author**: Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 

**Date**: 2017 Dec

Macros for creating Python backend functions and variables.



------------------

Authos (add name and date if you modify):



------------------




## Macros Documentation

### define BE_FUNCTION_I_PY

```
#define BE_FUNCTION_I_PY(
    NAME,
    TYPE,
    ARGLIST,
    SYMBOLNAME,
    CAPABILITY,
    MODELS
)
namespace Gambit                                                                              \
{                                                                                             \
  namespace Backends                                                                          \
  {                                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                               \
    {                                                                                         \
      /* Define a python_function object to hold all the nasty conversion internals. */       \
      python_function<TYPE INSERT_NONEMPTY(STRIP_VARIADIC_ARG(ARGLIST)) >                     \
       NAME##_function(STRINGIFY(BACKENDNAME), STRINGIFY(VERSION), SYMBOLNAME);               \
                                                                                              \
      /* Define a regular function wrapper to call the python_function object. */             \
      TYPE NAME##_function_wrapper FUNCTION_ARGS(ARGLIST)                                     \
      {                                                                                       \
        return NAME##_function FUNCTION_ARG_NAMES(ARGLIST);                                   \
      }                                                                                       \
                                                                                              \
      /* Define a type NAME_type to be a suitable function pointer. */                        \
      typedef TYPE (*NAME##_type) CONVERT_VARIADIC_ARG(ARGLIST);                              \
                                                                                              \
      extern const NAME##_type NAME = NAME##_function_wrapper;                                \
    }                                                                                         \
  }                                                                                           \
}
```

Backend function macro for Python backends. 

### define BE_VARIABLE_I_PY

```
#define BE_VARIABLE_I_PY(
    NAME,
    TYPE,
    SYMBOLNAME,
    CAPABILITY,
    MODELS
)
namespace Gambit                                                                              \
{                                                                                             \
  namespace Backends                                                                          \
  {                                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                               \
    {                                                                                         \
      extern python_variable<TYPE>* const NAME =                                              \
        new python_variable<TYPE>(STRINGIFY(BACKENDNAME),STRINGIFY(VERSION),SYMBOLNAME);      \
      python_variable<TYPE>* CAT(getptr,NAME)() { return NAME; }                              \
    }                                                                                         \
  }                                                                                           \
}
```

Backend variable macro for Python. 

## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __python_macros_hpp__
#define __python_macros_hpp__

#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/Utils/util_macros.hpp"
#include "gambit/Backends/python_function.hpp"
#include "gambit/Backends/python_variable.hpp"

#define BE_FUNCTION_I_PY(NAME, TYPE, ARGLIST, SYMBOLNAME, CAPABILITY, MODELS)                 \
namespace Gambit                                                                              \
{                                                                                             \
  namespace Backends                                                                          \
  {                                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                               \
    {                                                                                         \
      /* Define a python_function object to hold all the nasty conversion internals. */       \
      python_function<TYPE INSERT_NONEMPTY(STRIP_VARIADIC_ARG(ARGLIST)) >                     \
       NAME##_function(STRINGIFY(BACKENDNAME), STRINGIFY(VERSION), SYMBOLNAME);               \
                                                                                              \
      /* Define a regular function wrapper to call the python_function object. */             \
      TYPE NAME##_function_wrapper FUNCTION_ARGS(ARGLIST)                                     \
      {                                                                                       \
        return NAME##_function FUNCTION_ARG_NAMES(ARGLIST);                                   \
      }                                                                                       \
                                                                                              \
      /* Define a type NAME_type to be a suitable function pointer. */                        \
      typedef TYPE (*NAME##_type) CONVERT_VARIADIC_ARG(ARGLIST);                              \
                                                                                              \
      extern const NAME##_type NAME = NAME##_function_wrapper;                                \
    }                                                                                         \
  }                                                                                           \
}

#define BE_VARIABLE_I_PY(NAME, TYPE, SYMBOLNAME, CAPABILITY, MODELS)                          \
namespace Gambit                                                                              \
{                                                                                             \
  namespace Backends                                                                          \
  {                                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                               \
    {                                                                                         \
      extern python_variable<TYPE>* const NAME =                                              \
        new python_variable<TYPE>(STRINGIFY(BACKENDNAME),STRINGIFY(VERSION),SYMBOLNAME);      \
      python_variable<TYPE>* CAT(getptr,NAME)() { return NAME; }                              \
    }                                                                                         \
  }                                                                                           \
}

#endif // #defined __python_macros_hpp
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
