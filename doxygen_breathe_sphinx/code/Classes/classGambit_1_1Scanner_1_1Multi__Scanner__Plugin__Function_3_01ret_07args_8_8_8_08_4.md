---
title: 'class Gambit::Scanner::Multi_Scanner_Plugin_Function< ret(args...)>'
description: 'Objective functor made up of multiple plugins. '

---








Objective functor made up of multiple plugins.  [More...](#detailed-description)


`#include <plugin_factory.hpp>`

Inherits from [Gambit::Scanner::Function_Base< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/), boost::enable_shared_from_this< Function_Base< ret(args...)> >

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Multi_Scanner_Plugin_Function](/documentation/code/classes/classgambit_1_1scanner_1_1multi__scanner__plugin__function_3_01ret_07args_8_8_8_08_4/#function-multi-scanner-plugin-function)**(const std::map< std::string, std::vector< std::string > > & params, const std::vector< std::pair< std::string, std::string >> & names) |
| ret | **[main](/documentation/code/classes/classgambit_1_1scanner_1_1multi__scanner__plugin__function_3_01ret_07args_8_8_8_08_4/#function-main)**(const args &... in) |

## Additional inherited members

**Public Functions inherited from [Gambit::Scanner::Function_Base< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/)**

|                | Name           |
| -------------- | -------------- |
| | **[Function_Base](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-function-base)**(double offset =0.) |
| virtual double | **[purposeModifier](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-purposemodifier)**(double ret_val) |
| virtual | **[~Function_Base](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-~function-base)**() |
| ret | **[operator()](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-operator())**(const args &... params) |
| void | **[setPurpose](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-setpurpose)**(const std::string p) |
| void | **[setPrinter](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-setprinter)**([printer](/documentation/code/namespaces/namespacegambit_1_1scanner/#typedef-printer) * p) |
| void | **[setPrior](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-setprior)**([Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/) * p) |
| [printer](/documentation/code/namespaces/namespacegambit_1_1scanner/#typedef-printer) & | **[getPrinter](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-getprinter)**() |
| [printer](/documentation/code/namespaces/namespacegambit_1_1scanner/#typedef-printer) & | **[getPrinter](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-getprinter)**() const |
| [Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/) & | **[getPrior](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-getprior)**() |
| std::vector< std::string > | **[getParameters](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-getparameters)**() |
| std::vector< std::string > | **[getShownParameters](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-getshownparameters)**() |
| std::string | **[getPurpose](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-getpurpose)**() const |
| int | **[getRank](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-getrank)**() const |
| void | **[setRank](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-setrank)**(int r) |
| double | **[getPurposeOffset](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-getpurposeoffset)**() const |
| void | **[setPurposeOffset](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-setpurposeoffset)**(double os) |
| unsigned long long int | **[getPtID](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-getptid)**() const |
| void | **[setPtID](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-setptid)**(unsigned long long int pID) |
| unsigned long long int | **[getNextPtID](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-getnextptid)**() const |
| void | **[tell_scanner_early_shutdown_in_progress](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-tell-scanner-early-shutdown-in-progress)**()<br>Tell ScannerBit that we are aborting the scan and it should tell the scanner plugin to stop, and return control to the calling code.  |
| void | **[disable_external_shutdown](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-disable-external-shutdown)**() |
| bool | **[scanner_can_quit](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-scanner-can-quit)**()<br>Check whether likelihood container is supposed to control early shutdown of scan.  |
| void | **[switch_to_alternate_min_LogL](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-switch-to-alternate-min-logl)**() |
| bool | **[check_for_switch_to_alternate_min_LogL](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-check-for-switch-to-alternate-min-logl)**()<br>Checks if some process has triggered the 'switch_to_alternate_min_LogL' function.  |

**Friends inherited from [Gambit::Scanner::Function_Base< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/)**

|                | Name           |
| -------------- | -------------- |
| class | **[Function_Deleter< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#friend-function-deleter<-ret(args...)>)**  |
| class | **[scan_ptr< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#friend-scan-ptr<-ret(args...)>)**  |


## Detailed Description

```
template <typename ret ,
typename... args>
class Gambit::Scanner::Multi_Scanner_Plugin_Function< ret(args...)>;
```

Objective functor made up of multiple plugins. 
## Public Functions Documentation

### function Multi_Scanner_Plugin_Function

```
inline Multi_Scanner_Plugin_Function(
    const std::map< std::string, std::vector< std::string > > & params,
    const std::vector< std::pair< std::string, std::string >> & names
)
```


### function main

```
inline ret main(
    const args &... in
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000