---
title: 'class Gambit::ColliderBit::process_xsec_container'
description: 'A class for holding the cross-section of a single Pythia process (identified by the Pythia process code) '

---








A class for holding the cross-section of a single Pythia process (identified by the Pythia process code) 


`#include <xsec.hpp>`

Inherits from [Gambit::ColliderBit::xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[process_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-process-xsec-container)**()<br>Constructor.  |
| virtual | **[~process_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-~process-xsec-container)**() |
| void | **[reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-reset)**()<br>Reset this instance for reuse.  |
| void | **[average_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-average-xsec)**(double other_xsec, double other_xsecerr)<br>Average cross-sections and combine errors.  |
| void | **[average_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-average-xsec)**(const [process_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/) & other) |
| void | **[sum_xsecs](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-sum-xsecs)**(double other_xsec, double other_xsecerr)<br>Sum cross-sections and add errors in quadrature.  |
| void | **[sum_xsecs](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-sum-xsecs)**(const [process_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/) & other) |
| int | **[process_code](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-process-code)**() const<br>Return the process code.  |
| void | **[set_process_code](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-set-process-code)**(int process_code_in)<br>Set the process code.  |
| const std::vector< int > & | **[processes_sharing_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-processes-sharing-xsec)**() const |
| void | **[register_process_sharing_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-register-process-sharing-xsec)**(int process_code_in)<br>Add a process code to the list of processes sharing this cross-section.  |
| const std::vector< PID_pair > & | **[related_pid_pairs](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-related-pid-pairs)**() const<br>Return the list of PID pairs related to this cross-section.  |
| void | **[register_related_pid_pair](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/#function-register-related-pid-pair)**(PID_pair pid_pair_in)<br>Add a PID pair to the list of processes related to this cross-section.  |

## Additional inherited members

**Public Functions inherited from [Gambit::ColliderBit::xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/)**

|                | Name           |
| -------------- | -------------- |
| | **[xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-xsec-container)**()<br>Constructor.  |
| virtual | **[~xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-~xsec-container)**() |
| double | **[operator()](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-operator())**() const<br>Return the full cross-section (in fb).  |
| double | **[xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-xsec)**() const |
| double | **[xsec_err](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-xsec-err)**() const<br>Return the cross-section error (in fb).  |
| double | **[xsec_relerr](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-xsec-relerr)**() const<br>Return the cross-section relative error.  |
| void | **[set_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-set-xsec)**(double xs, double xserr)<br>Set the cross-section and its error (in fb).  |
| std::map< std::string, double > | **[get_content_as_map](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-get-content-as-map)**() const<br>Get content as map <string,double> map (for easy printing).  |
| void | **[set_info_string](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-set-info-string)**(std::string info_string_in)<br>Set the info string.  |
| std::string | **[info_string](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-info-string)**() const<br>Get the info string.  |
| void | **[set_trust_level](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-set-trust-level)**(int trust_level_in)<br>Set the trust level.  |
| int | **[trust_level](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-trust-level)**() const<br>Get the trust level.  |

**Public Attributes inherited from [Gambit::ColliderBit::xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/)**

|                | Name           |
| -------------- | -------------- |
| const std::string | **[unit](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#variable-unit)** <br>String Let's make it clear that we work with fb as unit.  |

**Protected Attributes inherited from [Gambit::ColliderBit::xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/)**

|                | Name           |
| -------------- | -------------- |
| double | **[_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#variable--xsec)**  |
| double | **[_xsecerr](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#variable--xsecerr)**  |
| std::string | **[_info_string](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#variable--info-string)**  |
| int | **[_trust_level](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#variable--trust-level)**  |


## Public Functions Documentation

### function process_xsec_container

```
process_xsec_container()
```

Constructor. 

Definitions of [process_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/) members 


### function ~process_xsec_container

```
inline virtual ~process_xsec_container()
```


### function reset

```
void reset()
```

Reset this instance for reuse. 

Public method to reset this instance for reuse, avoiding the need for "new" or "delete". 


### function average_xsec

```
void average_xsec(
    double other_xsec,
    double other_xsecerr
)
```

Average cross-sections and combine errors. 

### function average_xsec

```
void average_xsec(
    const process_xsec_container & other
)
```


### function sum_xsecs

```
void sum_xsecs(
    double other_xsec,
    double other_xsecerr
)
```

Sum cross-sections and add errors in quadrature. 

### function sum_xsecs

```
void sum_xsecs(
    const process_xsec_container & other
)
```


### function process_code

```
int process_code() const
```

Return the process code. 

### function set_process_code

```
void set_process_code(
    int process_code_in
)
```

Set the process code. 

### function processes_sharing_xsec

```
const std::vector< int > & processes_sharing_xsec() const
```


Return the list of process codes that share this cross-section (This is due to the many-to-many mapping between Pythia process codes and the PID pairs we use as basis for external cross-section calculations) 


### function register_process_sharing_xsec

```
void register_process_sharing_xsec(
    int process_code_in
)
```

Add a process code to the list of processes sharing this cross-section. 

Add a process code to the list of processes sharing this cross-section,. 


### function related_pid_pairs

```
const std::vector< PID_pair > & related_pid_pairs() const
```

Return the list of PID pairs related to this cross-section. 

### function register_related_pid_pair

```
void register_related_pid_pair(
    PID_pair pid_pair_in
)
```

Add a PID pair to the list of processes related to this cross-section. 

Add a PID pair to the list of PID pairs related to this cross-section. 


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000