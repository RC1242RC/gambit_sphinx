---
title: 'class Gambit::Scanner::Plugins::Plugin_Main_Interface_Base< ret(args...)>'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

Inherited by [Gambit::Scanner::Plugins::Plugin_Interface< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface_3_01ret_07args_8_8_8_08_4/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Plugin_Main_Interface_Base](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__main__interface__base_3_01ret_07args_8_8_8_08_4/#function-plugin-main-interface-base)**() |
| int | **[enterMain](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__main__interface__base_3_01ret_07args_8_8_8_08_4/#function-entermain)**(const std::string & name, const std::map< type_index, void * > & index_map) |
| ret | **[operator()](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__main__interface__base_3_01ret_07args_8_8_8_08_4/#function-operator())**(const args &... params) |

## Detailed Description

```
template <typename ret ,
typename... args>
class Gambit::Scanner::Plugins::Plugin_Main_Interface_Base< ret(args...)>;
```

## Public Functions Documentation

### function Plugin_Main_Interface_Base

```
inline Plugin_Main_Interface_Base()
```


### function enterMain

```
inline int enterMain(
    const std::string & name,
    const std::map< type_index, void * > & index_map
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