---
title: 'struct Gambit::DRes::Rule'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <depresolver.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Rule](/documentation/code/classes/structgambit_1_1dres_1_1rule/#function-rule)**(std::string function, std::string module) |
| | **[Rule](/documentation/code/classes/structgambit_1_1dres_1_1rule/#function-rule)**([IniParser::ObservableType](/documentation/code/classes/structgambit_1_1iniparser_1_1types_1_1observable/) t) |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| std::string | **[function](/documentation/code/classes/structgambit_1_1dres_1_1rule/#variable-function)**  |
| std::string | **[module](/documentation/code/classes/structgambit_1_1dres_1_1rule/#variable-module)**  |

## Detailed Description

```
struct Gambit::DRes::Rule;
```


A simple rule for dependency resolution (aka constraints on module and function name). 

## Public Functions Documentation

### function Rule

```
inline Rule(
    std::string function,
    std::string module
)
```


### function Rule

```
inline Rule(
    IniParser::ObservableType t
)
```


## Public Attributes Documentation

### variable function

```
std::string function;
```


### variable module

```
std::string module;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000