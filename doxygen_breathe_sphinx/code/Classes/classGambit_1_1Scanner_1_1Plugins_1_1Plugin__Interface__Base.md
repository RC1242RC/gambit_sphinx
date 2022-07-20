---
title: 'class Gambit::Scanner::Plugins::Plugin_Interface_Base'

description: "[No description available]"

---








[No description available]

Inherited by [Gambit::Scanner::Plugins::Plugin_Interface< T >](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface/), [Gambit::Scanner::Plugins::Plugin_Interface< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface_3_01ret_07args_8_8_8_08_4/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Plugin_Interface_Base](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/#function-plugin-interface-base)**() |
| YAML::Node | **[operator[]](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/#function-operator[])**(const std::string & key) |
| | **[~Plugin_Interface_Base](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/#function-~plugin-interface-base)**() |

## Protected Functions

|                | Name           |
| -------------- | -------------- |
| template <typename... plug_args\> <br>const std::map< type_index, void * > & | **[initPlugin](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/#function-initplugin)**(const std::string & type, const std::string & name, const plug_args &... inputs) |

## Public Functions Documentation

### function Plugin_Interface_Base

```
inline Plugin_Interface_Base()
```


### function operator[]

```
inline YAML::Node operator[](
    const std::string & key
)
```


### function ~Plugin_Interface_Base

```
inline ~Plugin_Interface_Base()
```


## Protected Functions Documentation

### function initPlugin

```
template <typename... plug_args>
inline const std::map< type_index, void * > & initPlugin(
    const std::string & type,
    const std::string & name,
    const plug_args &... inputs
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000