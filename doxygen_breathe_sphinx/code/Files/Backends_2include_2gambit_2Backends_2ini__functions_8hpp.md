---
title: 'file Backends/Backends/include/gambit/Backends/ini_functions.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Backends](/documentation/code/namespaces/namespacegambit_1_1backends/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| union | **[Gambit::Backends::void_voidFptr](/documentation/code/classes/uniongambit_1_1backends_1_1void__voidfptr/)**  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[NS_SEP](/documentation/code/files/backends_2include_2gambit_2backends_2ini__functions_8hpp/#define-ns-sep)** <br>Define the separator to use instead of "::" when macros get gnarly.  |

## Detailed Description


Functions specifically for triggering backend initialisation code.



------------------


# Authors

(add name and date if you modify)

Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 

2015 Feb



------------------




## Macros Documentation

### define NS_SEP

```
#define NS_SEP ___no_apologies_for_rocking_macros___
```

Define the separator to use instead of "::" when macros get gnarly. 

## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __ini_functions_backends_hpp__
#define __ini_functions_backends_hpp__

#include <vector>
#include <exception>
#include <dlfcn.h>

#include "gambit/Utils/util_types.hpp"
#include "gambit/Backends/backend_singleton.hpp"
#include "gambit/Elements/ini_catch.hpp"

#define NS_SEP ___no_apologies_for_rocking_macros___


namespace Gambit
{
  // Forward declarations
  class functor;
  class module_functor_common;

  str fixns(str);

  int vectorstr_push_back(std::vector<str>&, str);

  int set_allowed_models(functor&, std::vector<str>&, str);

  int register_backend_with_log(str);

  int register_type(str bever, str classname);

  int set_backend_functor_status(functor&, const std::vector<str>&);

  int set_BackendIniBit_functor_status(functor&, str, str);

  int get_ctor_status(str, str, str, str, str, const std::vector<str>&);

  int set_backend_rule_for_model(module_functor_common&, str, str);

  int set_classload_requirements(module_functor_common&, str, str, str);

  namespace Backends
  {

    typedef void(*voidFptr)();

    union void_voidFptr
    {
      void *ptr;      // Use this for objects
      voidFptr fptr;  // Use this for functions
    };

    template <typename T>
    T load_backend_symbol(const std::vector<str>& symbol_names, str be, str ver)
    {
      T result = nullptr;
      try
      {
        // Get the pointer to the backend
        bool works = backendInfo().works.at(be+ver);
        void* pHandle = works ? backendInfo().loaded_C_CXX_Fortran_backends.at(be+ver) : NULL ;
        // Clear error code by calling dlerror()
        dlerror();
        // Attempt to obtain a void pointer (pSym) to one of the library symbols.
        void_voidFptr pSym;
        for (auto& name : symbol_names)
        {
          pSym.ptr = dlsym(pHandle, name.c_str());
          if (pSym.ptr != NULL) break;
        }
        // If using backwards systems missing dlinfo(), like OSX, determine the path to the library with dladdr()
        #ifndef HAVE_LINK_H
          // Don't bother trying if the symbol wasn't found in the library anyway.
          if (pSym.ptr != NULL)
          {
            Dl_info info;
            int dladdr_result = dladdr(pSym.ptr, &info);
            // Try overriding the path to the library if dladdr seemed to return OK.
            if (dladdr_result) backendInfo().attempt_backend_path_override(be, ver, info.dli_fname);
          }
        #else
          // Do something inconsequential with the last two args to skip compiler warnings.
          (void)be;
          (void)ver;
        #endif
        // Hand over the pointer
        result = reinterpret_cast<T>(pSym.fptr);
      }
      catch (std::exception& e) { ini_catch(e); }
      return result;
    }

    template <typename T>
    T handover_factory_pointer(str be, str ver, str name, str barename,
                               str args, const std::vector<str>& symbol_names, T factory,
                               T missing_backend, T missing_factory)
    {
      try
      {
        int status = get_ctor_status(be, ver, name, barename, args, symbol_names);
        switch(status)
        {
          case  0: return factory;
          case -1: return missing_backend;
          case -2: return missing_factory;
        }
      }
      catch (std::exception& e) { ini_catch(e); }
      return missing_factory;
    }

  }

}

#endif // #defined __ini_functions_backends_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
