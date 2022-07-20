---
title: 'class Gambit::Scanner::Plugins::Plugin_Interface'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <plugin_interface.hpp>`

Inherits from [Gambit::Scanner::Plugins::Plugin_Interface_Base](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/), [Gambit::Scanner::Plugins::Plugin_Main_Interface_Base< T >](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__main__interface__base/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| template <typename... plug_args\> <br>| **[Plugin_Interface](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface/#function-plugin-interface)**(const std::string & type, const std::string & name, const plug_args &... inputs) |
| template <typename... args\> <br>auto | **[operator()](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface/#function-operator())**(args &... params) |

## Additional inherited members

**Public Functions inherited from [Gambit::Scanner::Plugins::Plugin_Interface_Base](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/)**

|                | Name           |
| -------------- | -------------- |
| | **[Plugin_Interface_Base](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/#function-plugin-interface-base)**() |
| YAML::Node | **[operator[]](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/#function-operator[])**(const std::string & key) |
| | **[~Plugin_Interface_Base](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/#function-~plugin-interface-base)**() |

**Protected Functions inherited from [Gambit::Scanner::Plugins::Plugin_Interface_Base](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/)**

|                | Name           |
| -------------- | -------------- |
| template <typename... plug_args\> <br>const std::map< type_index, void * > & | **[initPlugin](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/#function-initplugin)**(const std::string & type, const std::string & name, const plug_args &... inputs) |


## Detailed Description

```
template <typename... T>
class Gambit::Scanner::Plugins::Plugin_Interface;
```


Interface for a ScannerBit plugin. Called like: Plugins::Plugin_Interface<int ()> interface("scanner", pluginName, dim, *factory); interface(); 

## Public Functions Documentation

### function Plugin_Interface

```
template <typename... plug_args>
inline Plugin_Interface(
    const std::string & type,
    const std::string & name,
    const plug_args &... inputs
)
```


### function operator()

```
template <typename... args>
inline auto operator()(
    args &... params
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000