---
title: 'class Gambit::gambit_core'
description: 'Master driver class for a GAMBIT scan. '

---








Master driver class for a GAMBIT scan. 


`#include <core.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[gambit_core](/documentation/code/classes/classgambit_1_1gambit__core/#function-gambit-core)**(const Models::ModelFunctorClaw & claw, const [Backends::backend_info](/documentation/code/classes/structgambit_1_1backends_1_1backend__info/) & beinfo)<br>Constructor.  |
| | **[~gambit_core](/documentation/code/classes/classgambit_1_1gambit__core/#function-~gambit-core)**()<br>Destructor.  |
| void | **[bail](/documentation/code/classes/classgambit_1_1gambit__core/#function-bail)**(int mpirank =-1)<br>Command-line info function.  |
| str | **[process_primary_options](/documentation/code/classes/classgambit_1_1gambit__core/#function-process-primary-options)**(int argc, char ** argv)<br>Process default command line options.  |
| str | **[run_diagnostic](/documentation/code/classes/classgambit_1_1gambit__core/#function-run-diagnostic)**(int argc, char ** argv)<br>Diagnostics function.  |
| void | **[registerModule](/documentation/code/classes/classgambit_1_1gambit__core/#function-registermodule)**(str module, str ref)<br>Add a new module to modules list.  |
| void | **[registerBackend](/documentation/code/classes/classgambit_1_1gambit__core/#function-registerbackend)**(str be, str version, str ref)<br>Register a new backend.  |
| void | **[registerModuleFunctor](/documentation/code/classes/classgambit_1_1gambit__core/#function-registermodulefunctor)**(functor & f)<br>Add a new module functor to functorList.  |
| void | **[registerNestedModuleFunctor](/documentation/code/classes/classgambit_1_1gambit__core/#function-registernestedmodulefunctor)**(functor & f)<br>Add a new module functor to nestFunctorList.  |
| void | **[registerBackendFunctor](/documentation/code/classes/classgambit_1_1gambit__core/#function-registerbackendfunctor)**(functor & f)<br>Add a new backend functor to backendFunctorList.  |
| void | **[registerPrimaryModelFunctor](/documentation/code/classes/classgambit_1_1gambit__core/#function-registerprimarymodelfunctor)**(primary_model_functor & f)<br>Add a new primary model functor to primaryModelFunctorList.  |
| void | **[registerActiveModelFunctors](/documentation/code/classes/classgambit_1_1gambit__core/#function-registeractivemodelfunctors)**(const pmfVec & fvec)<br>Add entries to the map of activated primary model functors.  |
| const fVec & | **[getModuleFunctors](/documentation/code/classes/classgambit_1_1gambit__core/#function-getmodulefunctors)**() const<br>Get a reference to the list of module functors.  |
| const fVec & | **[getNestedModuleFunctors](/documentation/code/classes/classgambit_1_1gambit__core/#function-getnestedmodulefunctors)**() const<br>Get a reference to the list of nested module functors.  |
| const fVec & | **[getBackendFunctors](/documentation/code/classes/classgambit_1_1gambit__core/#function-getbackendfunctors)**() const<br>Get a reference to the list of backend model functors.  |
| const pmfVec & | **[getPrimaryModelFunctors](/documentation/code/classes/classgambit_1_1gambit__core/#function-getprimarymodelfunctors)**() const<br>Get a reference to the list of primary model functors.  |
| const pmfMap & | **[getActiveModelFunctors](/documentation/code/classes/classgambit_1_1gambit__core/#function-getactivemodelfunctors)**() const<br>Get a reference to the map of all user-activated primary model functors.  |
| const std::map< str, str > & | **[getModuleCitationKeys](/documentation/code/classes/classgambit_1_1gambit__core/#function-getmodulecitationkeys)**() const<br>Get a reference to the map of module citation keys.  |
| const std::map< sspair, str > & | **[getBackendCitationKeys](/documentation/code/classes/classgambit_1_1gambit__core/#function-getbackendcitationkeys)**() const<br>Get a reference to the map of backend citation keys.  |
| void | **[accountForMissingClasses](/documentation/code/classes/classgambit_1_1gambit__core/#function-accountformissingclasses)**() const<br>Tell the module functors which backends are actually present.  |
| [capability_info](/documentation/code/classes/structgambit_1_1capability__info/) | **[get_capability_info](/documentation/code/classes/classgambit_1_1gambit__core/#function-get-capability-info)**(const str & name) const<br>Get the description (and other info) of the named item from the capability database.  |
| [model_info](/documentation/code/classes/structgambit_1_1model__info/) | **[get_model_info](/documentation/code/classes/classgambit_1_1gambit__core/#function-get-model-info)**(const str & name) const<br>Get the description (and other info) of the named item from the model database.  |
| int | **[get_outprec](/documentation/code/classes/classgambit_1_1gambit__core/#function-get-outprec)**() const<br>Getter for precision to use for cout.  |
| void | **[check_databases](/documentation/code/classes/classgambit_1_1gambit__core/#function-check-databases)**()<br>Check the named database for conflicts and missing descriptions.  |
| void | **[check_capability_descriptions](/documentation/code/classes/classgambit_1_1gambit__core/#function-check-capability-descriptions)**()<br>Check for missing capability descriptions (after reading in runtime flags)  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| int | **[show_runorder](/documentation/code/classes/classgambit_1_1gambit__core/#variable-show-runorder)**  |
| int | **[show_backends](/documentation/code/classes/classgambit_1_1gambit__core/#variable-show-backends)** <br>Flag to show the list of required backends.  |
| bool | **[resume](/documentation/code/classes/classgambit_1_1gambit__core/#variable-resume)** <br>Flag to trigger "resume" mode.  |
| bool | **[verbose_flag](/documentation/code/classes/classgambit_1_1gambit__core/#variable-verbose-flag)** <br>Verbosity mode.  |
| bool | **[found_inifile](/documentation/code/classes/classgambit_1_1gambit__core/#variable-found-inifile)** <br>Flag recording whether an inifile has been supplied.  |
| bool | **[missing_capability_description](/documentation/code/classes/classgambit_1_1gambit__core/#variable-missing-capability-description)** <br>set to true if capability descriptions missing  |
| std::vector< [capability_info](/documentation/code/classes/structgambit_1_1capability__info/) > | **[capability_dbase](/documentation/code/classes/classgambit_1_1gambit__core/#variable-capability-dbase)** <br>Vector of all [capability_info](/documentation/code/classes/structgambit_1_1capability__info/) objects.  |
| std::vector< [model_info](/documentation/code/classes/structgambit_1_1model__info/) > | **[model_dbase](/documentation/code/classes/classgambit_1_1gambit__core/#variable-model-dbase)** <br>Vector of all [model_info]() objects.  |

## Public Functions Documentation

### function gambit_core

```
gambit_core(
    const Models::ModelFunctorClaw & claw,
    const Backends::backend_info & beinfo
)
```

Constructor. 

Definitions of public methods in GAMBIT core class.

Constructor 


### function ~gambit_core

```
inline ~gambit_core()
```

Destructor. 

### function bail

```
void bail(
    int mpirank =-1
)
```

Command-line info function. 

Inform the user of the ways to invoke GAMBIT, then die. 


### function process_primary_options

```
str process_primary_options(
    int argc,
    char ** argv
)
```

Process default command line options. 

Process default mode command line options and return filename. 


[Gambit](/documentation/code/namespaces/namespacegambit/) 'standard mode' command line option definitions (needed by getopt)


### function run_diagnostic

```
str run_diagnostic(
    int argc,
    char ** argv
)
```

Diagnostics function. 

Launch non-interactive command-line diagnostic mode, for printing info about current GAMBIT configuration. 


### function registerModule

```
void registerModule(
    str module,
    str ref
)
```

Add a new module to modules list. 

### function registerBackend

```
void registerBackend(
    str be,
    str version,
    str ref
)
```

Register a new backend. 

### function registerModuleFunctor

```
void registerModuleFunctor(
    functor & f
)
```

Add a new module functor to functorList. 

### function registerNestedModuleFunctor

```
void registerNestedModuleFunctor(
    functor & f
)
```

Add a new module functor to nestFunctorList. 

### function registerBackendFunctor

```
void registerBackendFunctor(
    functor & f
)
```

Add a new backend functor to backendFunctorList. 

### function registerPrimaryModelFunctor

```
void registerPrimaryModelFunctor(
    primary_model_functor & f
)
```

Add a new primary model functor to primaryModelFunctorList. 

### function registerActiveModelFunctors

```
void registerActiveModelFunctors(
    const pmfVec & fvec
)
```

Add entries to the map of activated primary model functors. 

### function getModuleFunctors

```
const fVec & getModuleFunctors() const
```

Get a reference to the list of module functors. 

### function getNestedModuleFunctors

```
const fVec & getNestedModuleFunctors() const
```

Get a reference to the list of nested module functors. 

### function getBackendFunctors

```
const fVec & getBackendFunctors() const
```

Get a reference to the list of backend model functors. 

Get a reference to the list of backend functors. 


### function getPrimaryModelFunctors

```
const pmfVec & getPrimaryModelFunctors() const
```

Get a reference to the list of primary model functors. 

### function getActiveModelFunctors

```
const pmfMap & getActiveModelFunctors() const
```

Get a reference to the map of all user-activated primary model functors. 

### function getModuleCitationKeys

```
const std::map< str, str > & getModuleCitationKeys() const
```

Get a reference to the map of module citation keys. 

Get a reference to the map of module citaton keys. 


### function getBackendCitationKeys

```
const std::map< sspair, str > & getBackendCitationKeys() const
```

Get a reference to the map of backend citation keys. 

### function accountForMissingClasses

```
void accountForMissingClasses() const
```

Tell the module functors which backends are actually present. 

Tell the module functors which backends are actually present, so that they can deactivate themselves if they require a class that is supposed to be provided by a backend that is AWOL. 


### function get_capability_info

```
capability_info get_capability_info(
    const str & name
) const
```

Get the description (and other info) of the named item from the capability database. 

Get the description of the named capability from the description database. 


### function get_model_info

```
model_info get_model_info(
    const str & name
) const
```

Get the description (and other info) of the named item from the model database. 

### function get_outprec

```
int get_outprec() const
```

Getter for precision to use for cout. 

### function check_databases

```
void check_databases()
```

Check the named database for conflicts and missing descriptions. 

Check the capability and model databases for conflicts and missing descriptions. 


### function check_capability_descriptions

```
void check_capability_descriptions()
```

Check for missing capability descriptions (after reading in runtime flags) 

## Public Attributes Documentation

### variable show_runorder

```
int show_runorder;
```


Flags set by command line options Flag to trigger dependency resolver to report functor run order 


### variable show_backends

```
int show_backends;
```

Flag to show the list of required backends. 

### variable resume

```
bool resume;
```

Flag to trigger "resume" mode. 

### variable verbose_flag

```
bool verbose_flag;
```

Verbosity mode. 

### variable found_inifile

```
bool found_inifile;
```

Flag recording whether an inifile has been supplied. 

### variable missing_capability_description

```
bool missing_capability_description;
```

set to true if capability descriptions missing 

### variable capability_dbase

```
std::vector< capability_info > capability_dbase;
```

Vector of all [capability_info](/documentation/code/classes/structgambit_1_1capability__info/) objects. 

### variable model_dbase

```
std::vector< model_info > model_dbase;
```

Vector of all [model_info]() objects. 

-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000