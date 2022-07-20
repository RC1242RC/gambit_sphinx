---
title: 'class Gambit::Scanner::resume_params_func'
description: 'class to interface with the plugin manager resume functions. '

---








class to interface with the plugin manager resume functions. 


`#include <plugin_defs.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[resume_params_func](/documentation/code/classes/classgambit_1_1scanner_1_1resume__params__func/#function-resume-params-func)**(const std::string & name_in) |
| std::string | **[get_name](/documentation/code/classes/classgambit_1_1scanner_1_1resume__params__func/#function-get-name)**() const |
| void | **[set_resume_mode](/documentation/code/classes/classgambit_1_1scanner_1_1resume__params__func/#function-set-resume-mode)**(const bool & mode) |
| bool | **[resume_mode](/documentation/code/classes/classgambit_1_1scanner_1_1resume__params__func/#function-resume-mode)**() const |
| std::string | **[get_temp_file_name](/documentation/code/classes/classgambit_1_1scanner_1_1resume__params__func/#function-get-temp-file-name)**(const std::string & temp_file) |
| void | **[dump](/documentation/code/classes/classgambit_1_1scanner_1_1resume__params__func/#function-dump)**() |
| int | **[Rank](/documentation/code/classes/classgambit_1_1scanner_1_1resume__params__func/#function-rank)**() const |
| int | **[NumTasks](/documentation/code/classes/classgambit_1_1scanner_1_1resume__params__func/#function-numtasks)**() const |
| template <typename... T\> <br>void | **[operator()](/documentation/code/classes/classgambit_1_1scanner_1_1resume__params__func/#function-operator())**(T &... params) |

## Public Functions Documentation

### function resume_params_func

```
inline resume_params_func(
    const std::string & name_in
)
```


### function get_name

```
inline std::string get_name() const
```


### function set_resume_mode

```
inline void set_resume_mode(
    const bool & mode
)
```


### function resume_mode

```
inline bool resume_mode() const
```


### function get_temp_file_name

```
inline std::string get_temp_file_name(
    const std::string & temp_file
)
```


### function dump

```
inline void dump()
```


### function Rank

```
inline int Rank() const
```


### function NumTasks

```
inline int NumTasks() const
```


### function operator()

```
template <typename... T>
inline void operator()(
    T &... params
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000