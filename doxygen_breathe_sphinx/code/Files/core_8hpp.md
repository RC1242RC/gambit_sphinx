---
title: 'file Core/core.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::gambit_core](/documentation/code/classes/classgambit_1_1gambit__core/)** <br>Master driver class for a GAMBIT scan.  |

## Detailed Description


**Author**: 

  * Pat Scott 
  * Tomas Gonzalo ([gonzalo@physik.rwth-aachen.de](mailto:gonzalo@physik.rwth-aachen.de)) 


**Date**: 

  * 2013 Aug 
  * 2014 Feb, Aug
  * 2021 Sep


GAMBIT Core driver class.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __gambit_core_hpp__
#define __gambit_core_hpp__

#include <map>
#include <vector>

#include "gambit/Backends/backend_info.hpp"
#include "gambit/Core/yaml_description_database.hpp"
#include "gambit/Elements/functors.hpp"
#include "gambit/Models/models.hpp"
#include "gambit/Utils/util_types.hpp"

#include "yaml-cpp/yaml.h"

namespace Gambit
{

  class gambit_core
  {

  private:
    typedef std::vector<functor *> fVec;
    typedef std::vector<primary_model_functor *> pmfVec;
    typedef std::map<str, primary_model_functor *> pmfMap;

    const Models::ModelFunctorClaw *modelInfo;

    const Backends::backend_info *backendData;

    std::set<str> modules;

    std::map<str, str> module_citation_keys;

    std::map<str, std::set<str>> backend_versions;

    std::map<sspair, str> backend_citation_keys;

    std::set<str> capabilities;

    std::set<str> models;

    fVec functorList;

    fVec nestedFunctorList;

    fVec backendFunctorList;

    pmfVec primaryModelFunctorList;

    pmfMap activeModelFunctorList;

    const str input_capability_descriptions;
    const str input_model_descriptions;

    const int outprec;

    bool processed_options;

    void module_diagnostic();
    void backend_diagnostic();
    void capability_diagnostic();
    void model_diagnostic();
    void scanner_diagnostic();
    void test_function_diagnostic();
    void prior_diagnostic();

    void ff_module_diagnostic(const str &);
    void ff_backend_diagnostic(const str &);
    void ff_capability_diagnostic(const str &);
    void ff_model_diagnostic(const str &);
    void ff_scanner_diagnostic(const str &);
    void ff_test_function_diagnostic(const str &);
    void ff_prior_diagnostic(const str &);

    str backend_status(const str &, const str &, bool &);

    int launch_diagnostic_MPI();

    void quit_diagnostic_MPI();

  public:
    gambit_core(const Models::ModelFunctorClaw &, const Backends::backend_info &);

    ~gambit_core() {}

    int show_runorder;

    int show_backends;

    bool resume;

    // Set 'true' by '--verbose'
    bool verbose_flag;

    bool found_inifile;

    void bail(int mpirank = -1);

    str process_primary_options(int, char **);

    str run_diagnostic(int, char **);

    void registerModule(str, str);

    void registerBackend(str, str, str);

    void registerModuleFunctor(functor &);

    void registerNestedModuleFunctor(functor &);

    void registerBackendFunctor(functor &);

    void registerPrimaryModelFunctor(primary_model_functor &);

    void registerActiveModelFunctors(const pmfVec &);

    const fVec &getModuleFunctors() const;

    const fVec &getNestedModuleFunctors() const;

    const fVec &getBackendFunctors() const;

    const pmfVec &getPrimaryModelFunctors() const;

    const pmfMap &getActiveModelFunctors() const;

    const std::map<str,str> &getModuleCitationKeys() const;

    const std::map<sspair, str> &getBackendCitationKeys() const;

    void accountForMissingClasses() const;

    capability_info get_capability_info(const str &) const;

    model_info get_model_info(const str &) const;

    int get_outprec() const;

    void check_databases();

    bool missing_capability_description;

    void check_capability_descriptions();

    std::vector<capability_info> capability_dbase;

    std::vector<model_info> model_dbase;
  };

} // namespace Gambit

#endif // defined __gambit_core_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
