---
title: 'file Backends/frontend_macros.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BE_FUNCTION_5](/documentation/code/files/frontend__macros_8hpp/#define-be-function-5)**(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY)  |
|  | **[BE_FUNCTION_6](/documentation/code/files/frontend__macros_8hpp/#define-be-function-6)**(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, MODELS)  |
|  | **[BE_FUNCTION_7](/documentation/code/files/frontend__macros_8hpp/#define-be-function-7)**(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)  |
|  | **[BE_FUNCTION](/documentation/code/files/frontend__macros_8hpp/#define-be-function)**(...)  |
|  | **[BE_FUNCTION_I](/documentation/code/files/frontend__macros_8hpp/#define-be-function-i)**(NAME, TYPE, ARGLIST, SYMBOLNAME, CAPABILITY, MODELS, REF) <br>Main actual backend function macro.  |
|  | **[BE_CONV_FUNCTION_FULL](/documentation/code/files/frontend__macros_8hpp/#define-be-conv-function-full)**(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS, REF)  |
|  | **[BACKEND_SPECIFIC_COMPILE_UNIT](/documentation/code/files/frontend__macros_8hpp/#define-backend-specific-compile-unit)** <br>Indicate that this is all occuring in some compile unit other than the main executable.  |
|  | **[BE_INI_DEPENDENCY](/documentation/code/files/frontend__macros_8hpp/#define-be-ini-dependency)**(DEP, TYPE) <br>Dependency macro for point-level backend initialisation functions (in BackendIniBit)  |
|  | **[BE_INI_CONDITIONAL_DEPENDENCY](/documentation/code/files/frontend__macros_8hpp/#define-be-ini-conditional-dependency)**(DEP, TYPE, ...) <br>Model-conditional dependency macro for point-level backend initialisation functions (in BackendIniBit)  |
|  | **[BE_ALLOW_MODEL](/documentation/code/files/frontend__macros_8hpp/#define-be-allow-model)**(MODEL) <br>Macro for assigning a single allowed model to an entire backend.  |
|  | **[MAKE_INUSE_POINTER](/documentation/code/files/frontend__macros_8hpp/#define-make-inuse-pointer)**(NAME) <br>Make the inUse pipe for a given backend functor.  |
|  | **[LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library)** <br>Macro containing initialization code.  |
|  | **[BE_VARIABLE_I](/documentation/code/files/frontend__macros_8hpp/#define-be-variable-i)**(NAME, TYPE, SYMBOLNAME, CAPABILITY, MODELS, REF) <br>Main actual backend variable macro.  |

## Detailed Description


**Author**: 

  * Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 
  * Tomas Gonzalo ([t.e.gonzalo@fys.uio.no](mailto:t.e.gonzalo@fys.uio.no)) 


**Date**: 

  * 2015 May
  * 2016 Dec 
  * 2021 Sep


Macros for making things from frontend headers accessible from within source files that define backend convenience and initialisation functions.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BE_FUNCTION_5

```
#define BE_FUNCTION_5(
    NAME,
    TYPE,
    ARGSLIST,
    SYMBOLNAME,
    CAPABILITY
)
BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, (), "")
```


### define BE_FUNCTION_6

```
#define BE_FUNCTION_6(
    NAME,
    TYPE,
    ARGSLIST,
    SYMBOLNAME,
    CAPABILITY,
    MODELS
)
BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, MODELS, "")
```


### define BE_FUNCTION_7

```
#define BE_FUNCTION_7(
    NAME,
    TYPE,
    ARGSLIST,
    SYMBOLNAMES,
    CAPABILITY,
    MODELS,
    REF
)
BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)
```


### define BE_FUNCTION

```
#define BE_FUNCTION(
    ...
)
VARARG(BE_FUNCTION, __VA_ARGS__)
```


### define BE_FUNCTION_I

```
#define BE_FUNCTION_I(
    NAME,
    TYPE,
    ARGLIST,
    SYMBOLNAME,
    CAPABILITY,
    MODELS,
    REF
)
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      /* Define a type NAME_type to be a suitable function pointer. */                          \
      typedef TYPE (*NAME##_type) CONVERT_VARIADIC_ARG(ARGLIST);                                \
      /* Get the pointer to the function in the shared library. */                              \
      extern const NAME##_type NAME;                                                            \
    }                                                                                           \
  }                                                                                             \
                                                                                                \
  /* Create the safe pointer to the 'in use' flag of the functor. */                            \
  MAKE_INUSE_POINTER(NAME)                                                                      \
                                                                                                \
}                                                                                               \
```

Main actual backend function macro. 

### define BE_CONV_FUNCTION_FULL

```
#define BE_CONV_FUNCTION_FULL(
    NAME,
    TYPE,
    ARGSLIST,
    CAPABILITY,
    MODELS,
    REF
)
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      /* Forward declare function */                                                            \
      TYPE NAME(STRIP_PARENS(CONVERT_VARIADIC_ARG(ARGSLIST)));                                  \
    }                                                                                           \
  }                                                                                             \
  /* Create the safe pointer to the 'in use' flag of the functor. */                            \
  MAKE_INUSE_POINTER(NAME)                                                                      \
}                                                                                               \
```


### define BACKEND_SPECIFIC_COMPILE_UNIT

```
#define BACKEND_SPECIFIC_COMPILE_UNIT 1
```

Indicate that this is all occuring in some compile unit other than the main executable. 

### define BE_INI_DEPENDENCY

```
#define BE_INI_DEPENDENCY(
    DEP,
    TYPE
)
MODULE_DEPENDENCY(DEP, TYPE, BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), NOT_MODEL)
```

Dependency macro for point-level backend initialisation functions (in BackendIniBit) 

### define BE_INI_CONDITIONAL_DEPENDENCY

```
#define BE_INI_CONDITIONAL_DEPENDENCY(
    DEP,
    TYPE,
    ...
)
MODULE_DEPENDENCY(DEP, TYPE, BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), NOT_MODEL)
```

Model-conditional dependency macro for point-level backend initialisation functions (in BackendIniBit) 

### define BE_ALLOW_MODEL

```
#define BE_ALLOW_MODEL(
    MODEL
)
 MODULE_ALLOWED_MODEL(BackendIniBit,           \
 CAT_4(BACKENDNAME,_,SAFE_VERSION,_init), MODEL, NOT_MODEL)                 \
```

Macro for assigning a single allowed model to an entire backend. 

### define MAKE_INUSE_POINTER

```
#define MAKE_INUSE_POINTER(
    NAME
)
  namespace BackendIniBit                                                   \
  {                                                                         \
    namespace Pipes                                                         \
    {                                                                       \
      namespace CAT_4(BACKENDNAME,_,SAFE_VERSION,_init)                     \
      {                                                                     \
        namespace InUse                                                     \
        {                                                                   \
          extern safe_ptr<bool> NAME;                                       \
        }                                                                   \
      }                                                                     \
    }                                                                       \
  }                                                                         \
```

Make the inUse pipe for a given backend functor. 

### define LOAD_LIBRARY

```
#define LOAD_LIBRARY namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                             \
    {                                                                       \
      extern std::vector<str> allowed_models;                               \
      /* Make backend path easily available to convenience functions. */    \
      extern const str backendDir;                                          \
      /* Make an easy reference to the actual backend module if it is a */  \
      /* Python backend. */                                                 \
      IF_USING_PYBIND11(extern pybind11::module& BACKENDNAME;)              \
    }                                                                       \
  }                                                                         \
}                                                                           \
                                                                            \
/* Register the initialisation function for this backend */                 \
MODULE_START_CAPABILITY(BackendIniBit)                                      \
MODULE_DECLARE_FUNCTION(BackendIniBit,                                      \
 CAT_4(BACKENDNAME,_,SAFE_VERSION,_init),                                   \
 void,2,NOT_MODEL)                                                          \
```

Macro containing initialization code. 

### define BE_VARIABLE_I

```
#define BE_VARIABLE_I(
    NAME,
    TYPE,
    SYMBOLNAME,
    CAPABILITY,
    MODELS,
    REF
)
namespace Gambit                                                              \
{                                                                             \
  namespace Backends                                                          \
  {                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                               \
    {                                                                         \
      /* Choose the type to define the variable pointer */                    \
      typedef MATH_TYPE(TYPE) NAME##_type;                                    \
      /* Set the variable pointer and the getptr function. */                 \
      extern NAME##_type* const NAME;                                         \
    }                                                                         \
  }                                                                           \
                                                                              \
  /* Create the safe pointer to the 'in use' flag of the functor. */          \
  MAKE_INUSE_POINTER(NAME)                                                    \
                                                                              \
} /* end namespace Gambit */                                                  \
```

Main actual backend variable macro. 

## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __FRONTEND_MACROS_HPP__
#define __FRONTEND_MACROS_HPP__

#include "gambit/Elements/module_macros_inmodule.hpp"
#include "gambit/Backends/common_macros.hpp"
#include "gambit/Backends/interoperability.hpp"
#include "gambit/Backends/backend_singleton.hpp"


#define BACKEND_SPECIFIC_COMPILE_UNIT 1

#define BE_INI_DEPENDENCY(DEP, TYPE) MODULE_DEPENDENCY(DEP, TYPE, BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), NOT_MODEL)

#define BE_INI_CONDITIONAL_DEPENDENCY(DEP, TYPE, ...) MODULE_DEPENDENCY(DEP, TYPE, BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), NOT_MODEL)

#define BE_ALLOW_MODEL(MODEL) MODULE_ALLOWED_MODEL(BackendIniBit,           \
 CAT_4(BACKENDNAME,_,SAFE_VERSION,_init), MODEL, NOT_MODEL)                 \

#define MAKE_INUSE_POINTER(NAME)                                            \
  namespace BackendIniBit                                                   \
  {                                                                         \
    namespace Pipes                                                         \
    {                                                                       \
      namespace CAT_4(BACKENDNAME,_,SAFE_VERSION,_init)                     \
      {                                                                     \
        namespace InUse                                                     \
        {                                                                   \
          extern safe_ptr<bool> NAME;                                       \
        }                                                                   \
      }                                                                     \
    }                                                                       \
  }                                                                         \

#define LOAD_LIBRARY                                                        \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                             \
    {                                                                       \
      extern std::vector<str> allowed_models;                               \
      /* Make backend path easily available to convenience functions. */    \
      extern const str backendDir;                                          \
      /* Make an easy reference to the actual backend module if it is a */  \
      /* Python backend. */                                                 \
      IF_USING_PYBIND11(extern pybind11::module& BACKENDNAME;)              \
    }                                                                       \
  }                                                                         \
}                                                                           \
                                                                            \
/* Register the initialisation function for this backend */                 \
MODULE_START_CAPABILITY(BackendIniBit)                                      \
MODULE_DECLARE_FUNCTION(BackendIniBit,                                      \
 CAT_4(BACKENDNAME,_,SAFE_VERSION,_init),                                   \
 void,2,NOT_MODEL)                                                          \

#define BE_VARIABLE_I(NAME, TYPE, SYMBOLNAME, CAPABILITY, MODELS, REF)        \
namespace Gambit                                                              \
{                                                                             \
  namespace Backends                                                          \
  {                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                               \
    {                                                                         \
      /* Choose the type to define the variable pointer */                    \
      typedef MATH_TYPE(TYPE) NAME##_type;                                    \
      /* Set the variable pointer and the getptr function. */                 \
      extern NAME##_type* const NAME;                                         \
    }                                                                         \
  }                                                                           \
                                                                              \
  /* Create the safe pointer to the 'in use' flag of the functor. */          \
  MAKE_INUSE_POINTER(NAME)                                                    \
                                                                              \
} /* end namespace Gambit */                                                  \



#define BE_FUNCTION_5(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY)                             \
  BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, (), "")

#define BE_FUNCTION_6(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, MODELS)                     \
  BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, MODELS, "")

#define BE_FUNCTION_7(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)               \
  BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)

#define BE_FUNCTION(...) VARARG(BE_FUNCTION, __VA_ARGS__)


#define BE_FUNCTION_I(NAME, TYPE, ARGLIST, SYMBOLNAME, CAPABILITY, MODELS, REF)                 \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      /* Define a type NAME_type to be a suitable function pointer. */                          \
      typedef TYPE (*NAME##_type) CONVERT_VARIADIC_ARG(ARGLIST);                                \
      /* Get the pointer to the function in the shared library. */                              \
      extern const NAME##_type NAME;                                                            \
    }                                                                                           \
  }                                                                                             \
                                                                                                \
  /* Create the safe pointer to the 'in use' flag of the functor. */                            \
  MAKE_INUSE_POINTER(NAME)                                                                      \
                                                                                                \
}                                                                                               \


#define BE_CONV_FUNCTION_FULL(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS, REF)                    \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      /* Forward declare function */                                                            \
      TYPE NAME(STRIP_PARENS(CONVERT_VARIADIC_ARG(ARGSLIST)));                                  \
    }                                                                                           \
  }                                                                                             \
  /* Create the safe pointer to the 'in use' flag of the functor. */                            \
  MAKE_INUSE_POINTER(NAME)                                                                      \
}                                                                                               \

#endif // __FRONTEND_MACROS_HPP__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
