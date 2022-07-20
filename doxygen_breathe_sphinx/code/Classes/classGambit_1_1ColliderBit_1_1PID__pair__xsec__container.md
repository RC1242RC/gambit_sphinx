---
title: 'class Gambit::ColliderBit::PID_pair_xsec_container'
description: 'A class for holding the production cross-section for final state identified by the pair of PID codes. '

---








A class for holding the production cross-section for final state identified by the pair of PID codes. 


`#include <xsec.hpp>`

Inherits from [Gambit::ColliderBit::xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[PID_pair_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-pid-pair-xsec-container)**()<br>Constructor.  |
| virtual | **[~PID_pair_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-~pid-pair-xsec-container)**() |
| void | **[reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-reset)**()<br>Reset this instance for reuse.  |
| void | **[average_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-average-xsec)**(double other_xsec, double other_xsecerr)<br>Average cross-sections and combine errors.  |
| void | **[average_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-average-xsec)**(const [PID_pair_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/) & other) |
| void | **[sum_xsecs](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-sum-xsecs)**(double other_xsec, double other_xsecerr)<br>Sum cross-sections and add errors in quadrature.  |
| void | **[sum_xsecs](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-sum-xsecs)**(const [PID_pair_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/) & other) |
| const PID_pair & | **[pid_pair](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-pid-pair)**() const<br>Return the PID pair.  |
| void | **[set_pid_pair](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-set-pid-pair)**(const PID_pair & pid_pair_in)<br>Set the PID pair.  |
| const std::vector< PID_pair > & | **[pid_pairs_sharing_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-pid-pairs-sharing-xsec)**() const |
| void | **[register_pid_pair_sharing_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-register-pid-pair-sharing-xsec)**(PID_pair pid_pair_in)<br>Add a PID pair to the list of PID pairs sharing this cross-section.  |
| const std::vector< int > & | **[related_processes](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-related-processes)**() const<br>Return the list of process codes related to this cross-section.  |
| void | **[register_related_process](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/#function-register-related-process)**(int process_code_in)<br>Add a process code to the list of processes related to this cross-section.  |

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

### function PID_pair_xsec_container

```
PID_pair_xsec_container()
```

Constructor. 

Definitions of [PID_pair_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/) members 


### function ~PID_pair_xsec_container

```
inline virtual ~PID_pair_xsec_container()
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
    const PID_pair_xsec_container & other
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
    const PID_pair_xsec_container & other
)
```


### function pid_pair

```
const PID_pair & pid_pair() const
```

Return the PID pair. 

### function set_pid_pair

```
void set_pid_pair(
    const PID_pair & pid_pair_in
)
```

Set the PID pair. 

### function pid_pairs_sharing_xsec

```
const std::vector< PID_pair > & pid_pairs_sharing_xsec() const
```


Return the list of PID pairs that share this cross-section (This is due to the many-to-many mapping between Pythia process codes and the PID pairs we use as basis for external cross-section calculations) 


### function register_pid_pair_sharing_xsec

```
void register_pid_pair_sharing_xsec(
    PID_pair pid_pair_in
)
```

Add a PID pair to the list of PID pairs sharing this cross-section. 

### function related_processes

```
const std::vector< int > & related_processes() const
```

Return the list of process codes related to this cross-section. 

### function register_related_process

```
void register_related_process(
    int process_code_in
)
```

Add a process code to the list of processes related to this cross-section. 

-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000