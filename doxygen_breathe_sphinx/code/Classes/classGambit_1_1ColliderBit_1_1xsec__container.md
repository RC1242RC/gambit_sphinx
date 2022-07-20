---
title: 'class Gambit::ColliderBit::xsec_container'
description: 'A base class for holding cross-section info within ColliderBit. '

---








A base class for holding cross-section info within ColliderBit. 


`#include <xsec.hpp>`

Inherited by [Gambit::ColliderBit::MC_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1mc__xsec__container/), [Gambit::ColliderBit::PID_pair_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1pid__pair__xsec__container/), [Gambit::ColliderBit::process_xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1process__xsec__container/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-xsec-container)**()<br>Constructor.  |
| virtual | **[~xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-~xsec-container)**() |
| void | **[reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-reset)**()<br>Reset this instance for reuse.  |
| double | **[operator()](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-operator())**() const<br>Return the full cross-section (in fb).  |
| double | **[xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-xsec)**() const |
| double | **[xsec_err](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-xsec-err)**() const<br>Return the cross-section error (in fb).  |
| double | **[xsec_relerr](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-xsec-relerr)**() const<br>Return the cross-section relative error.  |
| void | **[set_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-set-xsec)**(double xs, double xserr)<br>Set the cross-section and its error (in fb).  |
| void | **[average_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-average-xsec)**(double other_xsec, double other_xsecerr)<br>Average cross-sections and combine errors.  |
| void | **[average_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-average-xsec)**(const [xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/) & other) |
| void | **[sum_xsecs](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-sum-xsecs)**(double other_xsec, double other_xsecerr)<br>Sum cross-sections and add errors in quadrature.  |
| void | **[sum_xsecs](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-sum-xsecs)**(const [xsec_container](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/) & other) |
| std::map< std::string, double > | **[get_content_as_map](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-get-content-as-map)**() const<br>Get content as map <string,double> map (for easy printing).  |
| void | **[set_info_string](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-set-info-string)**(std::string info_string_in)<br>Set the info string.  |
| std::string | **[info_string](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-info-string)**() const<br>Get the info string.  |
| void | **[set_trust_level](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-set-trust-level)**(int trust_level_in)<br>Set the trust level.  |
| int | **[trust_level](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#function-trust-level)**() const<br>Get the trust level.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| const std::string | **[unit](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#variable-unit)** <br>String Let's make it clear that we work with fb as unit.  |

## Protected Attributes

|                | Name           |
| -------------- | -------------- |
| double | **[_xsec](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#variable--xsec)**  |
| double | **[_xsecerr](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#variable--xsecerr)**  |
| std::string | **[_info_string](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#variable--info-string)**  |
| int | **[_trust_level](/documentation/code/classes/classgambit_1_1colliderbit_1_1xsec__container/#variable--trust-level)**  |

## Public Functions Documentation

### function xsec_container

```
xsec_container()
```

Constructor. 

Definitions of xsec members 


### function ~xsec_container

```
inline virtual ~xsec_container()
```


### function reset

```
void reset()
```

Reset this instance for reuse. 

Public method to reset this instance for reuse, avoiding the need for "new" or "delete". 


### function operator()

```
double operator()() const
```

Return the full cross-section (in fb). 

Return the cross-section (in fb). 


### function xsec

```
double xsec() const
```


### function xsec_err

```
double xsec_err() const
```

Return the cross-section error (in fb). 

### function xsec_relerr

```
double xsec_relerr() const
```

Return the cross-section relative error. 

### function set_xsec

```
void set_xsec(
    double xs,
    double xserr
)
```

Set the cross-section and its error (in fb). 

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
    const xsec_container & other
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
    const xsec_container & other
)
```


### function get_content_as_map

```
std::map< std::string, double > get_content_as_map() const
```

Get content as map <string,double> map (for easy printing). 

Get content as a <string,double> map (for easy printing). 


### function set_info_string

```
void set_info_string(
    std::string info_string_in
)
```

Set the info string. 

### function info_string

```
std::string info_string() const
```

Get the info string. 

### function set_trust_level

```
void set_trust_level(
    int trust_level_in
)
```

Set the trust level. 

### function trust_level

```
int trust_level() const
```

Get the trust level. 

Get the info string. 


## Public Attributes Documentation

### variable unit

```
static const std::string unit = "fb";
```

String Let's make it clear that we work with fb as unit. 

Set the unit string. 


## Protected Attributes Documentation

### variable _xsec

```
double _xsec;
```


### variable _xsecerr

```
double _xsecerr;
```


### variable _info_string

```
std::string _info_string;
```


### variable _trust_level

```
int _trust_level;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000