---
title: 'struct Gambit::Scanner::Plugins::Plugin_Interface_Details'
description: 'Plugin info to be given to the interface class. '

---








Plugin info to be given to the interface class. 


`#include <plugin_loader.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Plugin_Interface_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__interface__details/#function-plugin-interface-details)**([Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/) & details, [printer_interface](/documentation/code/namespaces/namespacegambit_1_1scanner/#typedef-printer-interface) * printer, [Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/) * prior, const YAML::Node & node) |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| [Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/) & | **[details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__interface__details/#variable-details)**  |
| [printer_interface](/documentation/code/namespaces/namespacegambit_1_1scanner/#typedef-printer-interface) * | **[printer](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__interface__details/#variable-printer)**  |
| [Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/) * | **[prior](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__interface__details/#variable-prior)**  |
| YAML::Node | **[flags](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__interface__details/#variable-flags)**  |
| YAML::Node | **[node](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__interface__details/#variable-node)**  |

## Public Functions Documentation

### function Plugin_Interface_Details

```
inline Plugin_Interface_Details(
    Plugin_Details & details,
    printer_interface * printer,
    Priors::BasePrior * prior,
    const YAML::Node & node
)
```


## Public Attributes Documentation

### variable details

```
Plugin_Details & details;
```


### variable printer

```
printer_interface * printer;
```


### variable prior

```
Priors::BasePrior * prior;
```


### variable flags

```
YAML::Node flags;
```


### variable node

```
YAML::Node node;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000