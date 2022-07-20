---
title: 'class Gambit::Scanner::Plugins::Plugin_Loader'
description: 'container class for the actual plugins detected by ScannerBit '

---








container class for the actual plugins detected by ScannerBit 


`#include <plugin_loader.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Plugin_Loader](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-plugin-loader)**() |
| const std::vector< [Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/) > & | **[getPluginsVec](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-getpluginsvec)**() const |
| const std::map< std::string, std::map< std::string, std::vector< [Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/) > > > & | **[getPluginsMap](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-getpluginsmap)**() const |
| void | **[loadLibrary](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-loadlibrary)**(const std::string & p_str, const std::string & plug ="") |
| std::vector< std::string > | **[print_plugin_names](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-print-plugin-names)**(const std::string & plug_type ="") const |
| std::string | **[print_all](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-print-all)**(const std::string & plug_type ="") const |
| int | **[print_all_to_screen](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-print-all-to-screen)**(const std::string & plug_type ="") const |
| std::string | **[print_plugin](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-print-plugin)**(const std::string & name) const |
| std::string | **[print_plugin](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-print-plugin)**(const std::string & type, const std::string & plugin) const |
| std::vector< std::string > | **[list_prior_groups](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-list-prior-groups)**() const |
| std::string | **[print_priors](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-print-priors)**(const std::string & prior_group ="priors") const |
| int | **[print_plugin_to_screen](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-print-plugin-to-screen)**(const std::string & name) const |
| int | **[print_plugin_to_screen](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-print-plugin-to-screen)**(const std::string & type, const std::string & name) const |
| int | **[print_plugin_to_screen](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-print-plugin-to-screen)**(const std::vector< std::string > & names) const |
| [Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/) & | **[find](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/#function-find)**(const std::string & type, const std::string & plugin, const std::string & version, const std::string & lib) const |

## Public Functions Documentation

### function Plugin_Loader

```
Plugin_Loader()
```


### function getPluginsVec

```
inline const std::vector< Plugin_Details > & getPluginsVec() const
```


### function getPluginsMap

```
inline const std::map< std::string, std::map< std::string, std::vector< Plugin_Details > > > & getPluginsMap() const
```


### function loadLibrary

```
void loadLibrary(
    const std::string & p_str,
    const std::string & plug =""
)
```


### function print_plugin_names

```
std::vector< std::string > print_plugin_names(
    const std::string & plug_type =""
) const
```


### function print_all

```
std::string print_all(
    const std::string & plug_type =""
) const
```


### function print_all_to_screen

```
int print_all_to_screen(
    const std::string & plug_type =""
) const
```


### function print_plugin

```
std::string print_plugin(
    const std::string & name
) const
```


### function print_plugin

```
std::string print_plugin(
    const std::string & type,
    const std::string & plugin
) const
```


### function list_prior_groups

```
std::vector< std::string > list_prior_groups() const
```


### function print_priors

```
std::string print_priors(
    const std::string & prior_group ="priors"
) const
```


### function print_plugin_to_screen

```
int print_plugin_to_screen(
    const std::string & name
) const
```


### function print_plugin_to_screen

```
int print_plugin_to_screen(
    const std::string & type,
    const std::string & name
) const
```


### function print_plugin_to_screen

```
int print_plugin_to_screen(
    const std::vector< std::string > & names
) const
```


### function find

```
Plugin_Details & find(
    const std::string & type,
    const std::string & plugin,
    const std::string & version,
    const std::string & lib
) const
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000