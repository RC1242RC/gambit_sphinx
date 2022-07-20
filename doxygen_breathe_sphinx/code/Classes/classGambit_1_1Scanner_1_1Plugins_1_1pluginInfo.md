---
title: 'class Gambit::Scanner::Plugins::pluginInfo'
description: 'Container for all the plugin info from the inifile and Scannerbit. '

---








Container for all the plugin info from the inifile and Scannerbit. 


`#include <plugin_loader.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[pluginInfo](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-plugininfo)**() |
| void | **[iniFile](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-inifile)**(const Options & options_in)<br>Enter plugin inifile.  |
| void | **[printer_prior](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-printer-prior)**([printer_interface](/documentation/code/namespaces/namespacegambit_1_1scanner/#typedef-printer-interface) & printerIn, [Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/) & prior_in) |
| bool | **[keep_running](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-keep-running)**() const |
| void | **[set_running](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-set-running)**(bool b) |
| bool | **[func_calculating](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-func-calculating)**() const |
| void | **[set_calculating](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-set-calculating)**(bool b) |
| void | **[set_early_shutdown_in_progress](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-set-early-shutdown-in-progress)**() |
| bool | **[early_shutdown_in_progress](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-early-shutdown-in-progress)**() const |
| bool | **[resume_mode](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-resume-mode)**() const |
| std::string | **[temp_file_path](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-temp-file-path)**() |
| int | **[getRank](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-getrank)**() |
| template <typename... T\> <br>void | **[resume](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-resume)**(const std::string & name, T &... data)<br>resume function  |
| void | **[dump](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-dump)**()<br>Dump contents for resume.  |
| void | **[dump](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-dump)**(const std::string & name)<br>Dump contents for one plugin.  |
| void | **[save_alt_min_LogL_state](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-save-alt-min-logl-state)**() const<br>Save persistence file to record that the alternative min_LogL value is in use for this scan.  |
| void | **[clear_alt_min_LogL_state](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-clear-alt-min-logl-state)**() const<br>Delete the persistence file if it exists (e.g. when starting a new run)  |
| bool | **[check_alt_min_LogL_state](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-check-alt-min-logl-state)**() const<br>Check persistence file to see if we should be using the alternative min_LogL value.  |
| const [Plugin_Loader](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/) & | **[operator()](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-operator())**()<br>Retrieve plugin data.  |
| [Plugin_Interface_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__interface__details/) | **[operator()](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-operator())**(const std::string & type, const std::string & tag)<br>Get plugin data for single plugin.  |
| | **[~pluginInfo](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/#function-~plugininfo)**() |

## Public Functions Documentation

### function pluginInfo

```
pluginInfo()
```


### function iniFile

```
void iniFile(
    const Options & options_in
)
```

Enter plugin inifile. 

### function printer_prior

```
void printer_prior(
    printer_interface & printerIn,
    Priors::BasePrior & prior_in
)
```


### function keep_running

```
inline bool keep_running() const
```


### function set_running

```
inline void set_running(
    bool b
)
```


### function func_calculating

```
inline bool func_calculating() const
```


### function set_calculating

```
inline void set_calculating(
    bool b
)
```


### function set_early_shutdown_in_progress

```
inline void set_early_shutdown_in_progress()
```


### function early_shutdown_in_progress

```
inline bool early_shutdown_in_progress() const
```


### function resume_mode

```
inline bool resume_mode() const
```


### function temp_file_path

```
inline std::string temp_file_path()
```


### function getRank

```
inline int getRank()
```


### function resume

```
template <typename... T>
inline void resume(
    const std::string & name,
    T &... data
)
```

resume function 

### function dump

```
void dump()
```

Dump contents for resume. 

### function dump

```
void dump(
    const std::string & name
)
```

Dump contents for one plugin. 

### function save_alt_min_LogL_state

```
void save_alt_min_LogL_state() const
```

Save persistence file to record that the alternative min_LogL value is in use for this scan. 

### function clear_alt_min_LogL_state

```
void clear_alt_min_LogL_state() const
```

Delete the persistence file if it exists (e.g. when starting a new run) 

### function check_alt_min_LogL_state

```
bool check_alt_min_LogL_state() const
```

Check persistence file to see if we should be using the alternative min_LogL value. 

### function operator()

```
inline const Plugin_Loader & operator()()
```

Retrieve plugin data. 

### function operator()

```
Plugin_Interface_Details operator()(
    const std::string & type,
    const std::string & tag
)
```

Get plugin data for single plugin. 

### function ~pluginInfo

```
~pluginInfo()
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000