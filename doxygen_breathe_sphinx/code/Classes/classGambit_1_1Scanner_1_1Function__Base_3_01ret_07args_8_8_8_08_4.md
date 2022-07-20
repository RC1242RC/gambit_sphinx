---
title: 'class Gambit::Scanner::Function_Base< ret(args...)>'
description: 'Base function for the object that is upputed by "set_purpose". '

---








Base function for the object that is upputed by "set_purpose".  [More...](#detailed-description)


`#include <factory_defs.hpp>`

Inherits from boost::enable_shared_from_this< Function_Base< ret(args...)> >

Inherited by [Gambit::Scanner::Multi_Scanner_Plugin_Function< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1multi__scanner__plugin__function_3_01ret_07args_8_8_8_08_4/), [Gambit::Scanner::Scanner_Plugin_Function< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1scanner__plugin__function_3_01ret_07args_8_8_8_08_4/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Function_Base](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-function-base)**(double offset =0.) |
| virtual double | **[purposeModifier](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-purposemodifier)**(double ret_val) |
| virtual ret | **[main](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#function-main)**(const args & ...) =0 |
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

## Friends

|                | Name           |
| -------------- | -------------- |
| class | **[Function_Deleter< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#friend-function-deleter<-ret(args...)>)**  |
| class | **[scan_ptr< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1function__base_3_01ret_07args_8_8_8_08_4/#friend-scan-ptr<-ret(args...)>)**  |

## Detailed Description

```
template <typename ret ,
typename... args>
class Gambit::Scanner::Function_Base< ret(args...)>;
```

Base function for the object that is upputed by "set_purpose". 
## Public Functions Documentation

### function Function_Base

```
inline Function_Base(
    double offset =0.
)
```


### function purposeModifier

```
inline virtual double purposeModifier(
    double ret_val
)
```


### function main

```
virtual ret main(
    const args & ...
) =0
```


### function ~Function_Base

```
inline virtual ~Function_Base()
```


### function operator()

```
inline ret operator()(
    const args &... params
)
```


### function setPurpose

```
inline void setPurpose(
    const std::string p
)
```


### function setPrinter

```
inline void setPrinter(
    printer * p
)
```


### function setPrior

```
inline void setPrior(
    Priors::BasePrior * p
)
```


### function getPrinter

```
inline printer & getPrinter()
```


### function getPrinter

```
inline printer & getPrinter() const
```


### function getPrior

```
inline Priors::BasePrior & getPrior()
```


### function getParameters

```
inline std::vector< std::string > getParameters()
```


### function getShownParameters

```
inline std::vector< std::string > getShownParameters()
```


### function getPurpose

```
inline std::string getPurpose() const
```


### function getRank

```
inline int getRank() const
```


### function setRank

```
inline void setRank(
    int r
)
```


### function getPurposeOffset

```
inline double getPurposeOffset() const
```


### function setPurposeOffset

```
inline void setPurposeOffset(
    double os
)
```


### function getPtID

```
inline unsigned long long int getPtID() const
```


### function setPtID

```
inline void setPtID(
    unsigned long long int pID
)
```


### function getNextPtID

```
inline unsigned long long int getNextPtID() const
```


### function tell_scanner_early_shutdown_in_progress

```
inline void tell_scanner_early_shutdown_in_progress()
```

Tell ScannerBit that we are aborting the scan and it should tell the scanner plugin to stop, and return control to the calling code. 

### function disable_external_shutdown

```
inline void disable_external_shutdown()
```


Tells log-likelihood function (defined by driver code) not to use its own shutdown system (e.g the GAMBIT soft shutdown procedure) and instead to trust that the scanner plugin will safely terminate executions upon checking that shutdown is in progress (via the shutdown_in_progress flag set in plugin_info) 


### function scanner_can_quit

```
inline bool scanner_can_quit()
```

Check whether likelihood container is supposed to control early shutdown of scan. 

### function switch_to_alternate_min_LogL

```
inline void switch_to_alternate_min_LogL()
```


Tell log-likelihood function (defined by driver code) to switch to an alternate value for the minimum log-likelihood. Called by e.g. MultiNest scanner plugin. 


### function check_for_switch_to_alternate_min_LogL

```
inline bool check_for_switch_to_alternate_min_LogL()
```

Checks if some process has triggered the 'switch_to_alternate_min_LogL' function. 

## Friends

### friend Function_Deleter< ret(args...)>

```
friend class Function_Deleter< ret(args...)>;
```


### friend scan_ptr< ret(args...)>

```
friend class scan_ptr< ret(args...)>;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000