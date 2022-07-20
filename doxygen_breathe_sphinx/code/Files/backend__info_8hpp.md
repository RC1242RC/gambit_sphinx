---
title: 'file Backends/backend_info.hpp'

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
| struct | **[Gambit::Backends::backend_info](/documentation/code/classes/structgambit_1_1backends_1_1backend__info/)** <br>Structure providing some basic info on backend libraries.  |

## Detailed Description


**Author**: 

  * Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 
  * Tomas Gonzalo ([t.e.gonzalo@fys.uio.no](mailto:t.e.gonzalo@fys.uio.no)) 
  * Patrick Stoecker ([stoecker@physik.rwth-aachen.de](mailto:stoecker@physik.rwth-aachen.de)) 


**Date**: 

  * 2014 Aug 
  * 2015 May 
  * 2017 Dec
  * 2017 Jun
  * 2019 Jun


Container used for storing info about backends during initialisation time.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __backend_info_hpp__
#define __backend_info_hpp__

#include <map>

#include "gambit/Utils/util_types.hpp"
#include "gambit/cmake/cmake_variables.hpp"
#include "yaml-cpp/yaml.h"

// Forward declarations
#ifdef HAVE_MATHEMATICA
  #if MATHEMATICA_WSTP_VERSION_MAJOR > 4 || (MATHEMATICA_WSTP_VERSION_MAJOR == 4 && MATHEMATICA_WSTP_VERSION_MINOR > 25)
    #ifndef __MLINK__
      typedef struct MLink* WSLINK;
      #define __MLINK__
    #endif
  #else
    #ifndef __WSLINK__
      typedef struct WSLink* WSLINK;
      #define __WSLINK__
    #endif
  #endif
#endif
#ifdef HAVE_PYBIND11
  namespace pybind11
  {
    class scoped_interpreter;
  }
  #include "gambit/Utils/begin_ignore_warnings_pybind11.hpp"
  #include <pybind11/pybind11.h>
  #include "gambit/Utils/end_ignore_warnings.hpp"
#endif


namespace Gambit
{

  namespace Backends
  {

    struct backend_info
    {

      public:

        backend_info();

        ~backend_info();

        bool custom_locations_exist() const;

        str backend_locations() const;

        str default_backend_locations() const;

        str path(str, str) const;

        str corrected_path(str, str) const;

        str path_dir(str, str) const;

        str lib_name(str, str) const;

        std::map<str,str> dlerrors;

        std::map<str, str> default_safe_versions;

        std::map<str,bool> works;

        std::map<str,bool> needsMathematica;

        std::map<str,bool> needsPython;

        std::map<str,int> missingPythonVersion;

        std::map<str,bool> classloader;

        std::map<str,bool> classes_OK;

        std::map<str,std::set<str> > classes;

        std::map<str,std::set<str> > factory_args;

        std::map<str,str> constructor_status;

        str version_from_safe_version (str, str) const;

        str safe_version_from_version (str, str) const;

        void link_versions(str, str, str);

        void override_path(const str&, const str&, str);

        str default_version(const str& be) const;

        std::vector<str> working_versions(const str&);

        std::vector<str> working_safe_versions(const str&);

        void attempt_backend_path_override(const str&, const str&, const char*);

        int loadLibrary(const str&, const str&, const str&, bool, const str&);

        std::map<str, void*> loaded_C_CXX_Fortran_backends;

        #ifdef HAVE_MATHEMATICA
          std::map<str, WSLINK> loaded_mathematica_backends;
        #endif

        #ifdef HAVE_PYBIND11
          std::map<str, pybind11::module*> loaded_python_backends;

          pybind11::module& getPythonBackend(const str&, const str&);
        #endif

      private:

        std::map<str,std::pair<std::map<str,str>,std::map<str,str> > > safe_version_map;

        std::map<str, std::map<str, str> > bepathoverrides;

        const str filename;

        const str default_filename;

        YAML::Node bepathfile;

        YAML::Node default_bepathfile;

        bool custom_bepathfile_exists;

        void loadLibrary_C_CXX_Fortran(const str&, const str&, const str&, bool with_BOSS);

        void loadLibrary_data(const str&, const str&, const str&);

        #ifdef HAVE_MATHEMATICA
          void loadLibrary_Mathematica(const str&, const str&, const str&);
        #endif

        #ifdef HAVE_PYBIND11
          void loadLibrary_Python(const str&, const str&, const str&, const str&);

          pybind11::module* sys;

          pybind11::module* os;

          pybind11::scoped_interpreter* python_interpreter;

          bool python_started;

          void start_python();
        #endif

    };

  }

}


#endif // defined __backend_info_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
