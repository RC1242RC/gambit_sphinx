---
title: 'file Backends/backend_macros.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BE_FUNCTION_5](/documentation/code/files/backend__macros_8hpp/#define-be-function-5)**(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY)  |
|  | **[BE_FUNCTION_6](/documentation/code/files/backend__macros_8hpp/#define-be-function-6)**(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, MODELS)  |
|  | **[BE_FUNCTION_7](/documentation/code/files/backend__macros_8hpp/#define-be-function-7)**(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)  |
|  | **[BE_FUNCTION](/documentation/code/files/backend__macros_8hpp/#define-be-function)**(...)  |
|  | **[BE_FUNCTION_I](/documentation/code/files/backend__macros_8hpp/#define-be-function-i)**(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)  |
|  | **[BE_FUNCTION_I_AUX](/documentation/code/files/backend__macros_8hpp/#define-be-function-i-aux)**(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS)  |
|  | **[BE_FUNCTION_I_OTHER](/documentation/code/files/backend__macros_8hpp/#define-be-function-i-other)**(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS) <br>Backend function macro for other backends (C/C++/Fortran)  |
|  | **[BE_FUNCTION_I_MAIN](/documentation/code/files/backend__macros_8hpp/#define-be-function-i-main)**(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF) <br>Main actual backend function macro.  |
|  | **[BE_FUNCTION_I_SUPP](/documentation/code/files/backend__macros_8hpp/#define-be-function-i-supp)**(NAME) <br>Supplemenentary backend function macro.  |
|  | **[BE_CONV_FUNCTION_FULL](/documentation/code/files/backend__macros_8hpp/#define-be-conv-function-full)**(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS, REF)  |
|  | **[BE_CONV_FUNCTION_MAIN](/documentation/code/files/backend__macros_8hpp/#define-be-conv-function-main)**(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS, REF)  |
|  | **[BE_CONV_FUNCTION_SUPP](/documentation/code/files/backend__macros_8hpp/#define-be-conv-function-supp)**(NAME)  |
|  | **[ARG_NAME](/documentation/code/files/backend__macros_8hpp/#define-arg-name)**(R, DATA, INDEX, ELEM) <br>Macros to add names to an argument list.  |
|  | **[FUNCTION_ARGS_SEQ](/documentation/code/files/backend__macros_8hpp/#define-function-args-seq)**(ARGLIST)  |
|  | **[FUNCTION_ARGS](/documentation/code/files/backend__macros_8hpp/#define-function-args)**(ARGLIST)  |
|  | **[ARG_NAME_ONLY](/documentation/code/files/backend__macros_8hpp/#define-arg-name-only)**(R, DATA, INDEX, ELEM) <br>Macros to get only the names corresponding to an argument list.  |
|  | **[FUNCTION_ARG_NAMES_SEQ](/documentation/code/files/backend__macros_8hpp/#define-function-arg-names-seq)**(ARGLIST)  |
|  | **[FUNCTION_ARG_NAMES](/documentation/code/files/backend__macros_8hpp/#define-function-arg-names)**(ARGLIST)  |
|  | **[MODULE](/documentation/code/files/backend__macros_8hpp/#define-module)** <br>Declare the backend initialisation module BackendIniBit.  |
|  | **[BE_INI_DEPENDENCY](/documentation/code/files/backend__macros_8hpp/#define-be-ini-dependency)**(DEP, TYPE) <br>Dependency macro for point-level backend initialisation functions (in BackendIniBit)  |
|  | **[BE_INI_CONDITIONAL_DEPENDENCY](/documentation/code/files/backend__macros_8hpp/#define-be-ini-conditional-dependency)**(DEP, TYPE, ...) <br>Model-conditional dependency macro for point-level backend initialisation functions (in BackendIniBit)  |
|  | **[BE_ALLOW_MODEL](/documentation/code/files/backend__macros_8hpp/#define-be-allow-model)**(MODEL) <br>Macro for assigning a single allowed model to an entire backend.  |
|  | **[SET_ALLOWED_MODELS](/documentation/code/files/backend__macros_8hpp/#define-set-allowed-models)**(NAME, MODELS) <br>Set all the allowed models for a given backend functor.  |
|  | **[MAKE_INUSE_POINTER](/documentation/code/files/backend__macros_8hpp/#define-make-inuse-pointer)**(NAME) <br>Make the inUse pipe for a given backend functor.  |
|  | **[LOAD_LIBRARY](/documentation/code/files/backend__macros_8hpp/#define-load-library)** <br>Macro containing initialization code.  |
|  | **[REGISTER_BACKEND](/documentation/code/files/backend__macros_8hpp/#define-register-backend)**(BE, VER, SAFEVER, REF) <br>Register this backend with the Core if not running in standalone mode.  |
|  | **[LOAD_ALL_FACTORIES](/documentation/code/files/backend__macros_8hpp/#define-load-all-factories)** <br>Load factory functions for classes provided by this backend.  |
|  | **[LOAD_FACTORIES_FOR_TYPE](/documentation/code/files/backend__macros_8hpp/#define-load-factories-for-type)**(r, data, elem) <br>Load all factory functions for a given type.  |
|  | **[LOAD_NTH_FACTORY_FOR_TYPE](/documentation/code/files/backend__macros_8hpp/#define-load-nth-factory-for-type)**(r, data, i, elem) <br>Redirector from within BOOST_PP_SEQ_FOR_EACH_I to LOAD_SINGLE_FACTORY.  |
|  | **[LOAD_SINGLE_FACTORY](/documentation/code/files/backend__macros_8hpp/#define-load-single-factory)**(BARENAME, NAME, ARGS, SYMBOLNAMES, ABSTRACT, PTRNAME) <br>Load a single factory function from a backend.  |
|  | **[BE_VARIABLE_I](/documentation/code/files/backend__macros_8hpp/#define-be-variable-i)**(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS, REF)  |
|  | **[BE_VARIABLE_I_AUX](/documentation/code/files/backend__macros_8hpp/#define-be-variable-i-aux)**(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS)  |
|  | **[BE_VARIABLE_I_OTHER](/documentation/code/files/backend__macros_8hpp/#define-be-variable-i-other)**(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS) <br>Backend variable macro for regular backends (C/C++/Fortran)  |
|  | **[BE_VARIABLE_I_MAIN](/documentation/code/files/backend__macros_8hpp/#define-be-variable-i-main)**(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS, REF) <br>Main actual backend variable macro.  |
|  | **[BE_VARIABLE_I_SUPP](/documentation/code/files/backend__macros_8hpp/#define-be-variable-i-supp)**(NAME) <br>Supplementary backend variable macro.  |

## Detailed Description


**Author**: 

  * Anders Kvellestad ([anders.kvellestad@fys.uio.no](mailto:anders.kvellestad@fys.uio.no)) 
  * Christoph Weniger ([c.weniger@uva.nl](mailto:c.weniger@uva.nl)) 
  * Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 
  * Lars A. Dal ([l.a.dal@fys.uio.no](mailto:l.a.dal@fys.uio.no)) 
  * Tomas Gonzalo ([t.e.gonzalo@fys.uio.no](mailto:t.e.gonzalo@fys.uio.no)) 


**Date**: 

  * 2013 Mar, Apr, Nov
  * 2013 June
  * 2013 July 
  * 2014 Jan, Mar, May 
  * 2015 Feb 
  * 2017 Dec
  * 2014 Jan, Mar 
  * 2015 Jan, Feb
  * 2016 Sep 
  * 2021 Sep


General macros for loading a shared library and constructing pointers to the variables and functions within the library.



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
    SYMBOLNAMES,
    CAPABILITY
)
BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, (), "")
```


### define BE_FUNCTION_6

```
#define BE_FUNCTION_6(
    NAME,
    TYPE,
    ARGSLIST,
    SYMBOLNAMES,
    CAPABILITY,
    MODELS
)
BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, MODELS, "")
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
    SYMBOLNAMES,
    CAPABILITY,
    MODELS,
    REF
)
          BE_FUNCTION_I_AUX(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS)               \
          BE_FUNCTION_I_MAIN(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)         \
          BE_FUNCTION_I_SUPP(NAME)
```


### define BE_FUNCTION_I_AUX

```
#define BE_FUNCTION_I_AUX(
    NAME,
    TYPE,
    ARGLIST,
    SYMBOLNAMES,
    CAPABILITY,
    MODELS
)
        IF_ELSEIF(USING_MATHEMATICA, BE_FUNCTION_I_MATH,                                        \
                  USING_PYTHON, BE_FUNCTION_I_PY,                                               \
                  BE_FUNCTION_I_OTHER)(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS)
```


### define BE_FUNCTION_I_OTHER

```
#define BE_FUNCTION_I_OTHER(
    NAME,
    TYPE,
    ARGLIST,
    SYMBOLNAMES,
    CAPABILITY,
    MODELS
)
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      /* Define a type NAME_type to be a suitable function pointer. */                          \
      typedef TYPE (*NAME##_type) CONVERT_VARIADIC_ARG(ARGLIST);                                \
                                                                                                \
      extern const NAME##_type NAME = load_backend_symbol<NAME##_type>(initVector<str>(         \
      STRIP_PARENS(SYMBOLNAMES)), STRINGIFY(BACKENDNAME), STRINGIFY(VERSION));                  \
                                                                                                \
    }                                                                                           \
  }                                                                                             \
}
```

Backend function macro for other backends (C/C++/Fortran) 

### define BE_FUNCTION_I_MAIN

```
#define BE_FUNCTION_I_MAIN(
    NAME,
    TYPE,
    ARGLIST,
    SYMBOLNAMES,
    CAPABILITY,
    MODELS,
    REF
)

```

Main actual backend function macro. 

### define BE_FUNCTION_I_SUPP

```
#define BE_FUNCTION_I_SUPP(
    NAME
)
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      int CAT(fptr_supp_,NAME) = register_backend_functor(Functown::NAME);                      \
    }                                                                                           \
  }                                                                                             \
}                                                                                               \
```

Supplemenentary backend function macro. 

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
          BE_CONV_FUNCTION_MAIN(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS, REF)                  \
          BE_CONV_FUNCTION_SUPP(NAME)
```


### define BE_CONV_FUNCTION_MAIN

```
#define BE_CONV_FUNCTION_MAIN(
    NAME,
    TYPE,
    ARGSLIST,
    CAPABILITY,
    MODELS,
    REF
)

```


### define BE_CONV_FUNCTION_SUPP

```
#define BE_CONV_FUNCTION_SUPP(
    NAME
)
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      int CAT(cfptr_supp_,NAME) = register_backend_functor(Functown::NAME);                     \
    }                                                                                           \
  }                                                                                             \
}                                                                                               \
```


### define ARG_NAME

```
#define ARG_NAME(
    R,
    DATA,
    INDEX,
    ELEM
)
(ELEM arg##INDEX)
```

Macros to add names to an argument list. 

### define FUNCTION_ARGS_SEQ

```
#define FUNCTION_ARGS_SEQ(
    ARGLIST
)
        BOOST_PP_IF(ISEMPTY(ARGLIST), (),                            \
        BOOST_PP_SEQ_FOR_EACH_I(ARG_NAME, , BOOST_PP_TUPLE_TO_SEQ(ARGLIST)))
```


### define FUNCTION_ARGS

```
#define FUNCTION_ARGS(
    ARGLIST
)
BOOST_PP_SEQ_TO_TUPLE(FUNCTION_ARGS_SEQ(ARGLIST))
```


### define ARG_NAME_ONLY

```
#define ARG_NAME_ONLY(
    R,
    DATA,
    INDEX,
    ELEM
)
(std::forward<ELEM>(arg##INDEX))
```

Macros to get only the names corresponding to an argument list. 

### define FUNCTION_ARG_NAMES_SEQ

```
#define FUNCTION_ARG_NAMES_SEQ(
    ARGLIST
)
        BOOST_PP_IF(ISEMPTY(ARGLIST), (),                       \
        BOOST_PP_SEQ_FOR_EACH_I(ARG_NAME_ONLY, , BOOST_PP_TUPLE_TO_SEQ(ARGLIST)))
```


### define FUNCTION_ARG_NAMES

```
#define FUNCTION_ARG_NAMES(
    ARGLIST
)
BOOST_PP_SEQ_TO_TUPLE(FUNCTION_ARG_NAMES_SEQ(ARGLIST))
```


### define MODULE

```
#define MODULE BackendIniBit
```

Declare the backend initialisation module BackendIniBit. 

### define BE_INI_DEPENDENCY

```
#define BE_INI_DEPENDENCY(
    DEP,
    TYPE
)
CORE_DEPENDENCY(DEP, TYPE, BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), NOT_MODEL)
```

Dependency macro for point-level backend initialisation functions (in BackendIniBit) 

### define BE_INI_CONDITIONAL_DEPENDENCY

```
#define BE_INI_CONDITIONAL_DEPENDENCY(
    DEP,
    TYPE,
    ...
)
  CORE_START_CONDITIONAL_DEPENDENCY(BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), DEP, TYPE, NOT_MODEL) \
  ACTIVATE_DEP_MODEL(BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), DEP, NOT_MODEL, #__VA_ARGS__)
```

Model-conditional dependency macro for point-level backend initialisation functions (in BackendIniBit) 

### define BE_ALLOW_MODEL

```
#define BE_ALLOW_MODEL(
    MODEL
)
BE_NAMESPACE                                                                \
{                                                                           \
  namespace                                                                 \
  {                                                                         \
    const int UNUSED_OK CAT(MODEL,_OK) =                                    \
     vectorstr_push_back(allowed_models,STRINGIFY(MODEL));                  \
  }                                                                         \
}                                                                           \
END_BE_NAMESPACE                                                            \
CORE_ALLOWED_MODEL(BackendIniBit,CAT_4(BACKENDNAME,_,SAFE_VERSION,_init),   \
 MODEL, NOT_MODEL)                                                          \
```

Macro for assigning a single allowed model to an entire backend. 

### define SET_ALLOWED_MODELS

```
#define SET_ALLOWED_MODELS(
    NAME,
    MODELS
)
int CAT(allowed_models_set_,NAME) =                                         \
 set_allowed_models(Functown::NAME, allowed_models, STRINGIFY(MODELS));
```

Set all the allowed models for a given backend functor. 

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
          safe_ptr<bool> NAME = Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION) \
                                ::Functown::NAME.inUsePtr();                \
        }                                                                   \
      }                                                                     \
    }                                                                       \
  }                                                                         \
```

Make the inUse pipe for a given backend functor. 

### define LOAD_LIBRARY

```
#define LOAD_LIBRARY 
```

Macro containing initialization code. 

### define REGISTER_BACKEND

```
#define REGISTER_BACKEND(
    BE,
    VER,
    SAFEVER,
    REF
)
   int CAT_4(BE,_,SAFEVER,_rego) =                                          \
    register_backend(STRINGIFY(BE), STRINGIFY(VER), SAFE_STRINGIFY(REF));
```

Register this backend with the Core if not running in standalone mode. 

### define LOAD_ALL_FACTORIES

```
#define LOAD_ALL_FACTORIES BOOST_PP_SEQ_FOR_EACH(LOAD_FACTORIES_FOR_TYPE, , CAT_4(BACKENDNAME,_,SAFE_VERSION,_all_data))
```

Load factory functions for classes provided by this backend. 

### define LOAD_FACTORIES_FOR_TYPE

```
#define LOAD_FACTORIES_FOR_TYPE(
    r,
    data,
    elem
)

```

Load all factory functions for a given type. 

### define LOAD_NTH_FACTORY_FOR_TYPE

```
#define LOAD_NTH_FACTORY_FOR_TYPE(
    r,
    data,
    i,
    elem
)
LOAD_SINGLE_FACTORY(data, CAT_3(data,factory,i), BOOST_PP_TUPLE_ELEM(2,1,elem),                \
 BOOST_PP_TUPLE_ELEM(2,0,elem), CAT(data,abstract), CAT(data,wrapper)::CAT(__factory,i) )       \
```

Redirector from within BOOST_PP_SEQ_FOR_EACH_I to LOAD_SINGLE_FACTORY. 

### define LOAD_SINGLE_FACTORY

```
#define LOAD_SINGLE_FACTORY(
    BARENAME,
    NAME,
    ARGS,
    SYMBOLNAMES,
    ABSTRACT,
    PTRNAME
)

```

Load a single factory function from a backend. 

### define BE_VARIABLE_I

```
#define BE_VARIABLE_I(
    NAME,
    TYPE,
    SYMBOLNAMES,
    CAPABILITY,
    MODELS,
    REF
)
          BE_VARIABLE_I_AUX(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS)            \
          BE_VARIABLE_I_MAIN(NAME, MATH_TYPE(TYPE), SYMBOLNAMES, CAPABILITY,        \
                             MODELS, REF)                                           \
          BE_VARIABLE_I_SUPP(NAME)
```


### define BE_VARIABLE_I_AUX

```
#define BE_VARIABLE_I_AUX(
    NAME,
    TYPE,
    SYMBOLNAMES,
    CAPABILITY,
    MODELS
)
        IF_ELSEIF(USING_MATHEMATICA, BE_VARIABLE_I_MATH,                            \
                  USING_PYTHON, BE_VARIABLE_I_PY,                                   \
                  BE_VARIABLE_I_OTHER)(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS)
```


### define BE_VARIABLE_I_OTHER

```
#define BE_VARIABLE_I_OTHER(
    NAME,
    TYPE,
    SYMBOLNAMES,
    CAPABILITY,
    MODELS
)
namespace Gambit                                                              \
{                                                                             \
  namespace Backends                                                          \
  {                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                               \
    {                                                                         \
                                                                              \
      /* Set the variable pointer and the getptr function. */                 \
      extern TYPE* const NAME =                                               \
       load_backend_symbol<TYPE*>(initVector<str>(STRIP_PARENS(SYMBOLNAMES)), \
       STRINGIFY(BACKENDNAME), STRINGIFY(VERSION));                           \
      TYPE* CAT(getptr,NAME)() { return NAME; }                               \
                                                                              \
    }                                                                         \
  }                                                                           \
}
```

Backend variable macro for regular backends (C/C++/Fortran) 

### define BE_VARIABLE_I_MAIN

```
#define BE_VARIABLE_I_MAIN(
    NAME,
    TYPE,
    SYMBOLNAMES,
    CAPABILITY,
    MODELS,
    REF
)

```

Main actual backend variable macro. 

### define BE_VARIABLE_I_SUPP

```
#define BE_VARIABLE_I_SUPP(
    NAME
)
namespace Gambit                                                              \
{                                                                             \
  namespace Backends                                                          \
  {                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                               \
    {                                                                         \
      int CAT(vptr_supp_,NAME) = register_backend_functor(Functown::NAME);    \
    }                                                                         \
  }                                                                           \
}                                                                             \
```

Supplementary backend variable macro. 

## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __BACKEND_MACROS_HPP__
#define __BACKEND_MACROS_HPP__

#include <iostream>
#include <string>
#include <map>
#include <sstream>

#include "gambit/Utils/util_macros.hpp"
#include "gambit/Utils/util_types.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Elements/module_macros_incore.hpp"
#include "gambit/Elements/functors.hpp"
#include "gambit/Elements/functor_definitions.hpp"
#include "gambit/Logs/logger.hpp"
#include "gambit/Backends/ini_functions.hpp"
#include "gambit/Backends/common_macros.hpp"
#include "gambit/Backends/interoperability.hpp"
#ifndef STANDALONE
  #include "gambit/Core/ini_functions.hpp"
#endif

#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/list/size.hpp>
#include <boost/preprocessor/punctuation/comma_if.hpp>
#include <boost/preprocessor/seq/seq.hpp>
#include <boost/preprocessor/seq/for_each_i.hpp>
#include <boost/preprocessor/seq/to_tuple.hpp>
#include <boost/preprocessor/tuple/to_seq.hpp>

#define ARG_NAME(R,DATA,INDEX,ELEM) (ELEM arg##INDEX)
#define FUNCTION_ARGS_SEQ(ARGLIST) BOOST_PP_IF(ISEMPTY(ARGLIST), (),                            \
        BOOST_PP_SEQ_FOR_EACH_I(ARG_NAME, , BOOST_PP_TUPLE_TO_SEQ(ARGLIST)))
#define FUNCTION_ARGS(ARGLIST) BOOST_PP_SEQ_TO_TUPLE(FUNCTION_ARGS_SEQ(ARGLIST))

#define ARG_NAME_ONLY(R,DATA,INDEX,ELEM) (std::forward<ELEM>(arg##INDEX))
#define FUNCTION_ARG_NAMES_SEQ(ARGLIST) BOOST_PP_IF(ISEMPTY(ARGLIST), (),                       \
        BOOST_PP_SEQ_FOR_EACH_I(ARG_NAME_ONLY, , BOOST_PP_TUPLE_TO_SEQ(ARGLIST)))
#define FUNCTION_ARG_NAMES(ARGLIST) BOOST_PP_SEQ_TO_TUPLE(FUNCTION_ARG_NAMES_SEQ(ARGLIST))

#define MODULE BackendIniBit
  START_MODULE
#undef MODULE

#define BE_INI_DEPENDENCY(DEP, TYPE) CORE_DEPENDENCY(DEP, TYPE, BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), NOT_MODEL)

#define BE_INI_CONDITIONAL_DEPENDENCY(DEP, TYPE, ...)                                                                                             \
  CORE_START_CONDITIONAL_DEPENDENCY(BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), DEP, TYPE, NOT_MODEL) \
  ACTIVATE_DEP_MODEL(BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), DEP, NOT_MODEL, #__VA_ARGS__)

#define BE_ALLOW_MODEL(MODEL)                                               \
BE_NAMESPACE                                                                \
{                                                                           \
  namespace                                                                 \
  {                                                                         \
    const int UNUSED_OK CAT(MODEL,_OK) =                                    \
     vectorstr_push_back(allowed_models,STRINGIFY(MODEL));                  \
  }                                                                         \
}                                                                           \
END_BE_NAMESPACE                                                            \
CORE_ALLOWED_MODEL(BackendIniBit,CAT_4(BACKENDNAME,_,SAFE_VERSION,_init),   \
 MODEL, NOT_MODEL)                                                          \

#define SET_ALLOWED_MODELS(NAME, MODELS)                                    \
int CAT(allowed_models_set_,NAME) =                                         \
 set_allowed_models(Functown::NAME, allowed_models, STRINGIFY(MODELS));

#define MAKE_INUSE_POINTER(NAME)                                            \
  namespace BackendIniBit                                                   \
  {                                                                         \
    namespace Pipes                                                         \
    {                                                                       \
      namespace CAT_4(BACKENDNAME,_,SAFE_VERSION,_init)                     \
      {                                                                     \
        namespace InUse                                                     \
        {                                                                   \
          safe_ptr<bool> NAME = Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION) \
                                ::Functown::NAME.inUsePtr();                \
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
      std::vector<str> allowed_models;                                      \
                                                                            \
      /* Load the library */                                                \
      int load = backendInfo().loadLibrary(STRINGIFY(BACKENDNAME),          \
                 STRINGIFY(VERSION), STRINGIFY(SAFE_VERSION),               \
                 DO_CLASSLOADING, STRINGIFY(BACKENDLANG));                  \
                                                                            \
      /* Register this backend with the Core if not running in standalone */\
      REGISTER_BACKEND(BACKENDNAME, VERSION, SAFE_VERSION, REFERENCE)       \
                                                                            \
      /* Register a LogTag for this backend with the logging system */      \
      int reg_log = register_backend_with_log(STRINGIFY(BACKENDNAME));      \
                                                                            \
      /* Make backend path easily available to convenience functions. */    \
      extern const str backendDir = backendInfo().                          \
       path_dir(STRINGIFY(BACKENDNAME), STRINGIFY(VERSION));                \
                                                                            \
      /* Make an easy reference to the actual backend module if it is a */  \
      /* Python backend. */                                                 \
      IF_USING_PYBIND11(pybind11::module& BACKENDNAME = backendInfo().      \
       getPythonBackend(STRINGIFY(BACKENDNAME), STRINGIFY(VERSION));)       \
    }                                                                       \
  }                                                                         \
}                                                                           \
                                                                            \
/* Register the factory functions for all classes loaded by this backend. */\
BOOST_PP_IIF(DO_CLASSLOADING, LOAD_ALL_FACTORIES, )                         \
                                                                            \
/* Only do the rest if this is not a data-only backend */                   \
BOOST_PP_IF(DATA_ONLY, ,                                                    \
                                                                            \
/* Register the initialisation function for this backend */                 \
CORE_START_CAPABILITY(BackendIniBit,                                        \
 CAT_4(BACKENDNAME,_,SAFE_VERSION,_init), NOT_MODEL)                        \
CORE_DECLARE_FUNCTION(BackendIniBit,                                        \
 CAT_4(BACKENDNAME,_,SAFE_VERSION,_init),                                   \
 CAT_4(BACKENDNAME,_,SAFE_VERSION,_init),                                   \
 void,2, NOT_MODEL)                                                         \
                                                                            \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                             \
    {                                                                       \
      /* Disable the initialisation function if the backend is missing */   \
      int ini_status = set_BackendIniBit_functor_status(                    \
       BackendIniBit::Functown::CAT_4(BACKENDNAME,_,SAFE_VERSION,_init),    \
       STRINGIFY(BACKENDNAME), STRINGIFY(VERSION));                         \
    }                                                                       \
  }                                                                         \
}                                                                           \
)


#ifndef STANDALONE
  #define REGISTER_BACKEND(BE, VER, SAFEVER, REF)                           \
   int CAT_4(BE,_,SAFEVER,_rego) =                                          \
    register_backend(STRINGIFY(BE), STRINGIFY(VER), SAFE_STRINGIFY(REF));
#else
  #define REGISTER_BACKEND(BE, VER, SAFEVER, REF) DUMMYARG(BE, VER, SAFEVER, REF)
#endif

#define LOAD_ALL_FACTORIES                                                                      \
 BOOST_PP_SEQ_FOR_EACH(LOAD_FACTORIES_FOR_TYPE, , CAT_4(BACKENDNAME,_,SAFE_VERSION,_all_data))

#define LOAD_FACTORIES_FOR_TYPE(r,data,elem)                                                    \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      /*Alias the namespace that the classes live in, to avoid macro issues with "::" */        \
      namespace my_ns = ::CAT_3(BACKENDNAME,_,SAFE_VERSION);                                    \
                                                                                                \
      /*Typedef the wrapper type to avoid expanding type seq inside BOOST_PP_SEQ_FOR_EACH_I*/   \
      typedef ::CAT_3(BACKENDNAME,_,SAFE_VERSION)::BOOST_PP_SEQ_FOR_EACH_I(TRAILING_NSQUALIFIER,\
               , BOOST_PP_SEQ_SUBSEQ(BOOST_PP_TUPLE_ELEM(2,0,elem),0,                           \
                BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(2,0,elem)),1)))              \
              BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(2,0,elem)),1)\
               ,BOOST_PP_TUPLE_ELEM(2,0,elem))                                                  \
              CAT(BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(APPEND_TOKEN,                         \
               NS_SEP, BOOST_PP_TUPLE_ELEM(2,0,elem))),wrapper);                                \
                                                                                                \
      /*Typedef the abstract type to avoid expanding type seq inside BOOST_PP_SEQ_FOR_EACH_I*/  \
      typedef ::CAT_3(BACKENDNAME,_,SAFE_VERSION)::BOOST_PP_SEQ_FOR_EACH_I(TRAILING_NSQUALIFIER,\
               , BOOST_PP_SEQ_SUBSEQ(BOOST_PP_TUPLE_ELEM(2,0,elem),0,                           \
                BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(2,0,elem)),1)))              \
              CAT(Abstract_,BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(                   \
               BOOST_PP_TUPLE_ELEM(2,0,elem)),1), BOOST_PP_TUPLE_ELEM(2,0,elem)))               \
              CAT(BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(APPEND_TOKEN,                         \
         NS_SEP, BOOST_PP_TUPLE_ELEM(2,0,elem))),abstract);                                     \
                                                                                                \
      /*Register the type with the backend info object*/                                        \
      int CAT(registered_type_,BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(APPEND_TOKEN,            \
       NS_SEP, BOOST_PP_TUPLE_ELEM(2,0,elem)))) =                                               \
       register_type(STRINGIFY(BACKENDNAME)STRINGIFY(VERSION),                                  \
         STRINGIFY(BOOST_PP_SEQ_FOR_EACH_I(TRAILING_NSQUALIFIER, ,                              \
         BOOST_PP_SEQ_SUBSEQ(BOOST_PP_TUPLE_ELEM(2,0,elem),0,                                   \
         BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(2,0,elem)),1)))                     \
         BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(2,0,elem)),1),    \
         BOOST_PP_TUPLE_ELEM(2,0,elem))));                                                      \
                                                                                                \
    } /* end namespace BACKENDNAME_SAFE_VERSION */                                              \
  } /* end namespace Backends */                                                                \
} /* end namespace Gambit*/                                                                     \
                                                                                                \
/*Load up each factory in turn for this type*/                                                  \
BOOST_PP_SEQ_FOR_EACH_I(LOAD_NTH_FACTORY_FOR_TYPE,                                              \
 BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(APPEND_TOKEN, NS_SEP,                                  \
 BOOST_PP_TUPLE_ELEM(2,0,elem))), BOOST_PP_TUPLE_ELEM(2,1,elem))                                \

#define LOAD_NTH_FACTORY_FOR_TYPE(r,data,i,elem)                                                \
 LOAD_SINGLE_FACTORY(data, CAT_3(data,factory,i), BOOST_PP_TUPLE_ELEM(2,1,elem),                \
 BOOST_PP_TUPLE_ELEM(2,0,elem), CAT(data,abstract), CAT(data,wrapper)::CAT(__factory,i) )       \

#define LOAD_SINGLE_FACTORY(BARENAME, NAME, ARGS, SYMBOLNAMES, ABSTRACT, PTRNAME)               \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
                                                                                                \
      /* Define a type NAME_type to be a suitable function pointer. */                          \
      typedef ABSTRACT*(*CAT(NAME,_type))CONVERT_VARIADIC_ARG(ARGS);                            \
                                                                                                \
      /* Get the pointer to the function in the shared library. */                              \
      extern const CAT(NAME,_type) NAME =                                                       \
       load_backend_symbol<CAT(NAME,_type)>(initVector<str>(STRIP_PARENS(SYMBOLNAMES)),         \
       STRINGIFY(BACKENDNAME), STRINGIFY(VERSION));                                             \
                                                                                                \
      /* Function to throw an error if a backend is absent. */                                  \
      ABSTRACT* CAT(backend_not_loaded_,NAME)CONVERT_VARIADIC_ARG(ARGS)                         \
      {                                                                                         \
        std::ostringstream err;                                                                 \
        err << "The backend library" << std::endl                                               \
            << STRINGIFY(BACKENDNAME) << " v" << STRINGIFY(VERSION) << "," << std::endl         \
            << "which is supposed to contain the factory for class " << std::endl               \
            << fixns(STRINGIFY(BARENAME) STRINGIFY(CONVERT_VARIADIC_ARG(ARGS)))<<", "<<std::endl\
            << "is missing or catastrophically broken." << std::endl                            \
            << "Fix or find that backend yo -- or don't use the type." << std::endl;            \
        backend_error().raise(LOCAL_INFO BOOST_PP_COMMA() err.str());                           \
        return NULL;                                                                            \
      }                                                                                         \
                                                                                                \
      /* Function to throw an error if a factory hasn't loaded properly. */                     \
      ABSTRACT* CAT(factory_not_loaded_,NAME)CONVERT_VARIADIC_ARG(ARGS)                         \
      {                                                                                         \
        std::ostringstream err;                                                                 \
        err << "Factory for class " << fixns(STRINGIFY(BARENAME)                                \
                STRINGIFY(CONVERT_VARIADIC_ARG(ARGS)))                                          \
            << " did not load properly from " << std::endl                                      \
            << STRINGIFY(BACKENDNAME) << " v" << STRINGIFY(VERSION) << std::endl                \
            << "...so you can't make an object with it." << std::endl;                          \
        backend_error().raise(LOCAL_INFO BOOST_PP_COMMA() err.str());                           \
        return NULL;                                                                            \
      }                                                                                         \
                                                                                                \
    }                                                                                           \
  }                                                                                             \
}                                                                                               \
                                                                                                \
namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                     \
{                                                                                               \
  /* Define the static function pointer in the wrapper class for this factory. */               \
  Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::CAT(NAME,_type)                          \
   Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::PTRNAME =                               \
   Gambit::Backends::handover_factory_pointer(STRINGIFY(BACKENDNAME), STRINGIFY(VERSION),       \
   STRINGIFY(NAME), STRINGIFY(BARENAME), STRINGIFY(CONVERT_VARIADIC_ARG(ARGS)),                 \
   Gambit::initVector<std::string>(STRIP_PARENS(SYMBOLNAMES)),                                  \
   Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::NAME,                                   \
   &Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::CAT(backend_not_loaded_,NAME),         \
   &Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::CAT(factory_not_loaded_,NAME));        \
}                                                                                               \


// Determine whether to make registration calls to the Core or not in BE_VARIABLE_I, depending on STANDALONE flag
#ifdef STANDALONE
  #define BE_VARIABLE_I(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS, REF)           \
          BE_VARIABLE_I_AUX(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS)            \
          BE_VARIABLE_I_MAIN(NAME, MATH_TYPE(TYPE), SYMBOLNAMES, CAPABILITY,        \
                             MODELS, REF)
#else
  #define BE_VARIABLE_I(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS, REF)           \
          BE_VARIABLE_I_AUX(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS)            \
          BE_VARIABLE_I_MAIN(NAME, MATH_TYPE(TYPE), SYMBOLNAMES, CAPABILITY,        \
                             MODELS, REF)                                           \
          BE_VARIABLE_I_SUPP(NAME)
#endif

#define BE_VARIABLE_I_AUX(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS)              \
        IF_ELSEIF(USING_MATHEMATICA, BE_VARIABLE_I_MATH,                            \
                  USING_PYTHON, BE_VARIABLE_I_PY,                                   \
                  BE_VARIABLE_I_OTHER)(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS)

#define BE_VARIABLE_I_OTHER(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS)      \
namespace Gambit                                                              \
{                                                                             \
  namespace Backends                                                          \
  {                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                               \
    {                                                                         \
                                                                              \
      /* Set the variable pointer and the getptr function. */                 \
      extern TYPE* const NAME =                                               \
       load_backend_symbol<TYPE*>(initVector<str>(STRIP_PARENS(SYMBOLNAMES)), \
       STRINGIFY(BACKENDNAME), STRINGIFY(VERSION));                           \
      TYPE* CAT(getptr,NAME)() { return NAME; }                               \
                                                                              \
    }                                                                         \
  }                                                                           \
}

#define BE_VARIABLE_I_MAIN(NAME, TYPE, SYMBOLNAMES, CAPABILITY, MODELS, REF)  \
namespace Gambit                                                              \
{                                                                             \
  namespace Backends                                                          \
  {                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                               \
    {                                                                         \
      /* Create functor objects */                                            \
      namespace Functown                                                      \
      {                                                                       \
        backend_functor<TYPE*(*)(), TYPE*> NAME(                              \
        Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::CAT(getptr,NAME),\
        STRINGIFY(NAME),   /* functor name */                                 \
        CAPABILITY,        /* functor capability */                           \
        SAFE_STRINGIFY(TYPE*),                                                \
        STRINGIFY(BACKENDNAME),                                               \
        STRINGIFY(VERSION),                                                   \
        STRINGIFY(SAFE_VERSION),                                              \
        SAFE_STRINGIFY(REF),                                                  \
        Models::ModelDB());                                                   \
      } /* end namespace Functown */                                          \
                                                                              \
      /* Set the allowed model properties of the functor. */                  \
      SET_ALLOWED_MODELS(NAME, MODELS)                                        \
                                                                              \
      /* Disable the functor if the library is missing or symbol not found. */\
      int CAT(vstatus_,NAME) = set_backend_functor_status(Functown::NAME,     \
       initVector<str>(STRIP_PARENS(SYMBOLNAMES)));                           \
                                                                              \
    } /* end namespace BACKENDNAME_SAFE_VERSION */                            \
  } /* end namespace Backends */                                              \
                                                                              \
  /* Create the safe pointer to the 'in use' flag of the functor. */          \
  MAKE_INUSE_POINTER(NAME)                                                    \
                                                                              \
} /* end namespace Gambit */                                                  \

#define BE_VARIABLE_I_SUPP(NAME)                                              \
namespace Gambit                                                              \
{                                                                             \
  namespace Backends                                                          \
  {                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                               \
    {                                                                         \
      int CAT(vptr_supp_,NAME) = register_backend_functor(Functown::NAME);    \
    }                                                                         \
  }                                                                           \
}                                                                             \



#define BE_FUNCTION_5(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY)                            \
  BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, (), "")

#define BE_FUNCTION_6(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, MODELS)                    \
  BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, MODELS, "")

#define BE_FUNCTION_7(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)               \
  BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)

#define BE_FUNCTION(...) VARARG(BE_FUNCTION, __VA_ARGS__)


// Determine whether to make registration calls to the Core or not in BE_FUNCTION_IMPL2, depending on STANDALONE flag
#ifdef STANDALONE
  #define BE_FUNCTION_I(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)              \
          BE_FUNCTION_I_AUX(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS)               \
          BE_FUNCTION_I_MAIN(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)
#else
  #define BE_FUNCTION_I(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)              \
          BE_FUNCTION_I_AUX(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS)               \
          BE_FUNCTION_I_MAIN(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)         \
          BE_FUNCTION_I_SUPP(NAME)
#endif

#define BE_FUNCTION_I_AUX(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS)                 \
        IF_ELSEIF(USING_MATHEMATICA, BE_FUNCTION_I_MATH,                                        \
                  USING_PYTHON, BE_FUNCTION_I_PY,                                               \
                  BE_FUNCTION_I_OTHER)(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS)

#define BE_FUNCTION_I_OTHER(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS)               \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      /* Define a type NAME_type to be a suitable function pointer. */                          \
      typedef TYPE (*NAME##_type) CONVERT_VARIADIC_ARG(ARGLIST);                                \
                                                                                                \
      extern const NAME##_type NAME = load_backend_symbol<NAME##_type>(initVector<str>(         \
      STRIP_PARENS(SYMBOLNAMES)), STRINGIFY(BACKENDNAME), STRINGIFY(VERSION));                  \
                                                                                                \
    }                                                                                           \
  }                                                                                             \
}

#define BE_FUNCTION_I_MAIN(NAME, TYPE, ARGLIST, SYMBOLNAMES, CAPABILITY, MODELS, REF)           \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
                                                                                                \
      /* Create functor object */                                                               \
      namespace Functown                                                                        \
      {                                                                                         \
        backend_functor<TYPE(*)CONVERT_VARIADIC_ARG(ARGLIST), TYPE                              \
         INSERT_NONEMPTY(STRIP_VARIADIC_ARG(ARGLIST))> NAME(                                    \
         Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::NAME,                             \
         STRINGIFY(NAME),                                                                       \
         CAPABILITY,                                                                            \
         STRINGIFY(TYPE) STRINGIFY(CONVERT_VARIADIC_ARG(ARGLIST)),                              \
         STRINGIFY(BACKENDNAME),                                                                \
         STRINGIFY(VERSION),                                                                    \
         STRINGIFY(SAFE_VERSION),                                                               \
         SAFE_STRINGIFY(REF),                                                                   \
         Models::ModelDB());                                                                    \
      } /* end namespace Functown */                                                            \
                                                                                                \
      /* Disable the functor if the library is not present or the symbol not found. */          \
      int CAT(fstatus_,NAME)=set_backend_functor_status(Functown::NAME,                         \
       initVector<str>(STRIP_PARENS(SYMBOLNAMES)));                                             \
                                                                                                \
      /* Set the allowed model properties of the functor. */                                    \
      SET_ALLOWED_MODELS(NAME, MODELS)                                                          \
                                                                                                \
    } /* end namespace BACKENDNAME_SAFE_VERSION */                                              \
  } /* end namespace Backends */                                                                \
                                                                                                \
  /* Create the safe pointer to the 'in use' flag of the functor. */                            \
  MAKE_INUSE_POINTER(NAME)                                                                      \
                                                                                                \
} /* end namespace Gambit*/


#define BE_FUNCTION_I_SUPP(NAME)                                                                \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      int CAT(fptr_supp_,NAME) = register_backend_functor(Functown::NAME);                      \
    }                                                                                           \
  }                                                                                             \
}                                                                                               \


// Determine whether to make registration calls to the Core or not in BE_CONV_FUNCTION, depending on STANDALONE flag
#ifdef STANDALONE
  #define BE_CONV_FUNCTION_FULL(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS, REF)                  \
          BE_CONV_FUNCTION_MAIN(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS, REF)
#else
  #define BE_CONV_FUNCTION_FULL(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS, REF)                  \
          BE_CONV_FUNCTION_MAIN(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS, REF)                  \
          BE_CONV_FUNCTION_SUPP(NAME)
#endif


#define BE_CONV_FUNCTION_MAIN(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS, REF)                    \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      /* Forward declare function */                                                            \
      TYPE NAME(STRIP_PARENS(CONVERT_VARIADIC_ARG(ARGSLIST)));                                  \
      /* Create functor object */                                                               \
      namespace Functown                                                                        \
      {                                                                                         \
        backend_functor<TYPE(*)CONVERT_VARIADIC_ARG(ARGSLIST), TYPE                             \
         INSERT_NONEMPTY(STRIP_VARIADIC_ARG(ARGSLIST))> NAME(                                   \
         Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::NAME,                             \
         STRINGIFY(NAME),                                                                       \
         CAPABILITY,                                                                            \
         STRINGIFY(TYPE) STRINGIFY(CONVERT_VARIADIC_ARG(ARGSLIST)),                             \
         STRINGIFY(BACKENDNAME),                                                                \
         STRINGIFY(VERSION),                                                                    \
         STRINGIFY(SAFE_VERSION)  BOOST_PP_COMMA()                                              \
         SAFE_STRINGIFY(REF),                                                                   \
         Models::ModelDB());                                                                    \
      } /* end namespace Functown */                                                            \
                                                                                                \
      /* Disable the functor if the library is not present or the symbol not found. */          \
      int CAT(fstatus_,NAME) = set_backend_functor_status(Functown::NAME,                       \
       initVector<str>("no_symbol"));                                                           \
                                                                                                \
      /* Set the allowed model properties of the functor. */                                    \
      SET_ALLOWED_MODELS(NAME, MODELS)                                                          \
    }                                                                                           \
  }                                                                                             \
  /* Create the safe pointer to the 'in use' flag of the functor. */                            \
  MAKE_INUSE_POINTER(NAME)                                                                      \
}                                                                                               \

#define BE_CONV_FUNCTION_SUPP(NAME)                                                             \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      int CAT(cfptr_supp_,NAME) = register_backend_functor(Functown::NAME);                     \
    }                                                                                           \
  }                                                                                             \
}                                                                                               \

#endif // __BACKEND_MACROS_HPP__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
