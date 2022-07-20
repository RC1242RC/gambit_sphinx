---
title: 'struct Gambit::Scanner::Plugins::pluginData'
description: 'Structure that holds all the data provided by plugins about themselves. '

---








Structure that holds all the data provided by plugins about themselves. 


`#include <plugin_defs.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[pluginData](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#function-plugindata)**(const std::string & name, const std::string & type, const std::string & version_in) |
| std::string | **[print](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#function-print)**() |
| | **[~pluginData](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#function-~plugindata)**() |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| std::string | **[name](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-name)**  |
| std::string | **[type](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-type)**  |
| std::string | **[version](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-version)**  |
| std::string | **[tag](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-tag)**  |
| YAML::Node | **[node](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-node)**  |
| [printer_interface](/documentation/code/namespaces/namespacegambit_1_1scanner/#typedef-printer-interface) * | **[printer](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-printer)**  |
| [prior_interface](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/) * | **[prior](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-prior)**  |
| std::vector< void * > | **[inputData](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-inputdata)**  |
| std::vector< void(*)([pluginData](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/) &)> | **[inits](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-inits)**  |
| std::map< std::string, [factoryBase](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1factorybase/) * > | **[outputFuncs](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-outputfuncs)**  |
| std::map< type_index, void * > | **[plugin_mains](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-plugin-mains)**  |
| void(* | **[deconstructor](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-deconstructor)**  |
| bool | **[loaded](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/#variable-loaded)**  |

## Public Functions Documentation

### function pluginData

```
inline pluginData(
    const std::string & name,
    const std::string & type,
    const std::string & version_in
)
```


### function print

```
inline std::string print()
```


### function ~pluginData

```
inline ~pluginData()
```


## Public Attributes Documentation

### variable name

```
std::string name;
```


### variable type

```
std::string type;
```


### variable version

```
std::string version;
```


### variable tag

```
std::string tag;
```


### variable node

```
YAML::Node node;
```


### variable printer

```
printer_interface * printer;
```


### variable prior

```
prior_interface * prior;
```


### variable inputData

```
std::vector< void * > inputData;
```


### variable inits

```
std::vector< void(*)(pluginData &)> inits;
```


### variable outputFuncs

```
std::map< std::string, factoryBase * > outputFuncs;
```


### variable plugin_mains

```
std::map< type_index, void * > plugin_mains;
```


### variable deconstructor

```
void(* deconstructor;
```


### variable loaded

```
bool loaded;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000