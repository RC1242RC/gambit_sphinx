---
title: 'namespace Gambit::Scanner::Plugins'

description: "[No description available]"

---






[No description available]

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::Scanner::Plugins::__plugin_resume__](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1____plugin__resume____/)** <br>Container class to store plugin values for resume function.  |
| class | **[Gambit::Scanner::Plugins::__plugin_resume_base__](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1____plugin__resume__base____/)** <br>Virtual container base class to store plugin values for resume function.  |
| class | **[Gambit::Scanner::Plugins::classFactory](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1classfactory/)**  |
| class | **[Gambit::Scanner::Plugins::factoryBase](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1factorybase/)**  |
| class | **[Gambit::Scanner::Plugins::funcFactory](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1funcfactory/)**  |
| struct | **[Gambit::Scanner::Plugins::Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/)** <br>container info for a specific plugin  |
| class | **[Gambit::Scanner::Plugins::Plugin_Details_Ref](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__details__ref/)**  |
| class | **[Gambit::Scanner::Plugins::Plugin_Interface](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface/)**  |
| class | **[Gambit::Scanner::Plugins::Plugin_Interface< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface_3_01ret_07args_8_8_8_08_4/)**  |
| class | **[Gambit::Scanner::Plugins::Plugin_Interface_Base](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__interface__base/)**  |
| struct | **[Gambit::Scanner::Plugins::Plugin_Interface_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__interface__details/)** <br>Plugin info to be given to the interface class.  |
| class | **[Gambit::Scanner::Plugins::Plugin_Loader](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/)** <br>container class for the actual plugins detected by ScannerBit  |
| class | **[Gambit::Scanner::Plugins::Plugin_Main_Interface_Base](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__main__interface__base/)**  |
| class | **[Gambit::Scanner::Plugins::Plugin_Main_Interface_Base< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__main__interface__base_3_01ret_07args_8_8_8_08_4/)**  |
| struct | **[Gambit::Scanner::Plugins::pluginData](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugindata/)** <br>Structure that holds all the data provided by plugins about themselves.  |
| class | **[Gambit::Scanner::Plugins::pluginInfo](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/)** <br>Container for all the plugin info from the inifile and Scannerbit.  |
| struct | **[Gambit::Scanner::Plugins::Proto_Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1proto__plugin__details/)** <br>Plugin info from inifile.  |
| class | **[Gambit::Scanner::Plugins::VersionCompare](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1versioncompare/)**  |
| class | **[Gambit::Scanner::Plugins::VersionCompareBase](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1versioncomparebase/)** <br>Base class for comparing scanner plugins.  |
| class | **[Gambit::Scanner::Plugins::VersionCompareBottom](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1versioncomparebottom/)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| bool | **[operator==](/documentation/code/namespaces/namespacegambit_1_1scanner_1_1plugins/#function-operator==)**(const [Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/) & plug1, const [Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/) & plug2) |
| bool | **[Plugin_Version_Supersedes](/documentation/code/namespaces/namespacegambit_1_1scanner_1_1plugins/#function-plugin-version-supersedes)**(const [Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/) & plug1, const [Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/) & plug2)<br>compares the user defined plugin version to the actual plugin version.  |
| const std::map< type_index, void * > & | **[error_map_return](/documentation/code/namespaces/namespacegambit_1_1scanner_1_1plugins/#function-error-map-return)**() |
| std::string | **[print_plugins](/documentation/code/namespaces/namespacegambit_1_1scanner_1_1plugins/#function-print-plugins)**(std::map< std::string, std::map< std::string, std::vector< [Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/) > > >::const_iterator plugins) |
| bool | **[is_new_plugin](/documentation/code/namespaces/namespacegambit_1_1scanner_1_1plugins/#function-is-new-plugin)**(std::map< str, std::map< str, std::vector< [Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/) >>> & pmap, [Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/) & cand)<br>Check a plugin map and return a flag indicating if a candidate plugin is already in the map or not.  |

## Attributes

|                | Name           |
| -------------- | -------------- |
| EXPORT_SYMBOLS [pluginInfo](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/) | **[plugin_info](/documentation/code/namespaces/namespacegambit_1_1scanner_1_1plugins/#variable-plugin-info)**  |


## Functions Documentation

### function operator==

```
inline bool operator==(
    const Plugin_Details & plug1,
    const Plugin_Details & plug2
)
```


### function Plugin_Version_Supersedes

```
bool Plugin_Version_Supersedes(
    const Plugin_Details & plug1,
    const Plugin_Details & plug2
)
```

compares the user defined plugin version to the actual plugin version. 

### function error_map_return

```
inline const std::map< type_index, void * > & error_map_return()
```


### function print_plugins

```
inline std::string print_plugins(
    std::map< std::string, std::map< std::string, std::vector< Plugin_Details > > >::const_iterator plugins
)
```


### function is_new_plugin

```
bool is_new_plugin(
    std::map< str, std::map< str, std::vector< Plugin_Details >>> & pmap,
    Plugin_Details & cand
)
```

Check a plugin map and return a flag indicating if a candidate plugin is already in the map or not. 


## Attributes Documentation

### variable plugin_info

```
EXPORT_SYMBOLS pluginInfo plugin_info;
```


Access Functor for plugin info. This will manage all the plugins including stored and writing resume info. 





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000