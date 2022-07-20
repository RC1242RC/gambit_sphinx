---
title: 'class Gambit::Scanner::Plugins::Plugin_Interface< ret(args...)>'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

Inherits from [Gambit::Scanner::Plugins::Plugin_Interface_Base](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/), [Gambit::Scanner::Plugins::Plugin_Main_Interface_Base< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__main__interface__base_3_01ret_07args_8_8_8_08_4/)

Inherited by [Gambit::Scanner::Scanner_Plugin_Function< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1scanner__plugin__function_3_01ret_07args_8_8_8_08_4/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| template <typename... plug_args\> <br>| **[Plugin_Interface](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface_3_01ret_07args_8_8_8_08_4/#function-plugin-interface)**(const std::string & type, const std::string & name, const plug_args &... inputs) |
| ret | **[operator()](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface_3_01ret_07args_8_8_8_08_4/#function-operator())**(const args &... params) |

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

**Public Functions inherited from [Gambit::Scanner::Plugins::Plugin_Main_Interface_Base< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__main__interface__base_3_01ret_07args_8_8_8_08_4/)**

|                | Name           |
| -------------- | -------------- |
| | **[Plugin_Main_Interface_Base](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__main__interface__base_3_01ret_07args_8_8_8_08_4/#function-plugin-main-interface-base)**() |
| int | **[enterMain](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__main__interface__base_3_01ret_07args_8_8_8_08_4/#function-entermain)**(const std::string & name, const std::map< type_index, void * > & index_map) |


## Detailed Description

```
template <typename ret ,
typename... args>
class Gambit::Scanner::Plugins::Plugin_Interface< ret(args...)>;
```

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
inline ret operator()(
    const args &... params
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000