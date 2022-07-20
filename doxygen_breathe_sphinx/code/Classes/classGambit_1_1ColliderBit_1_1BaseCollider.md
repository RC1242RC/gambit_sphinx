---
title: 'class Gambit::ColliderBit::BaseCollider'
description: 'An abstract base class for collider simulators within ColliderBit. '

---








An abstract base class for collider simulators within ColliderBit. 


`#include <BaseCollider.hpp>`

Inherited by [Gambit::ColliderBit::Py8Collider< PythiaT, EventT, hepmc_writerT >](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| virtual double | **[xsec_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsec-fb)**() const =0 |
| virtual double | **[xsec_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsec-fb)**(int ) const =0 |
| virtual double | **[xsec_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsec-pb)**() const =0 |
| virtual double | **[xsec_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsec-pb)**(int ) const =0 |
| virtual double | **[xsecErr_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsecerr-fb)**() const =0<br>Report the uncertainty in the total or process-specific cross section (in fb or pb).  |
| virtual double | **[xsecErr_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsecerr-fb)**(int ) const =0 |
| virtual double | **[xsecErr_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsecerr-pb)**() const =0 |
| virtual double | **[xsecErr_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsecerr-pb)**(int ) const =0 |
| virtual int | **[process_code](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-process-code)**() const =0<br>Report an integer process code for the last generated event.  |
| virtual std::vector< int > | **[all_active_process_codes](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-all-active-process-codes)**() const =0<br>Report the list of all active process codes.  |
| virtual void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-init)**(const std::vector< std::string > & ) |
| virtual void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-init)**()<br>General init for any collider of this type - no settings version.  |
| | **[BaseCollider](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-basecollider)**()<br>Constructor.  |
| virtual | **[~BaseCollider](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-~basecollider)**()<br>Destructor.  |
| virtual void | **[clear](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-clear)**()<br>Reset this instance for reuse, avoiding the need for "new" or "delete".  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| bool | **[partonOnly](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#variable-partononly)** <br>Flag indicating if events from this collider should be processed as parton-only or full events.  |
| double | **[antiktR](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#variable-antiktr)** <br>The jet radius used for the anti-kt jet clustering.  |

## Public Functions Documentation

### function xsec_fb

```
virtual double xsec_fb() const =0
```


**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::xsec_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsec-fb)


### function xsec_fb

```
virtual double xsec_fb(
    int 
) const =0
```


**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::xsec_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsec-fb)


### function xsec_pb

```
virtual double xsec_pb() const =0
```


**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::xsec_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsec-pb)


### function xsec_pb

```
virtual double xsec_pb(
    int 
) const =0
```


**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::xsec_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsec-pb)


### function xsecErr_fb

```
virtual double xsecErr_fb() const =0
```

Report the uncertainty in the total or process-specific cross section (in fb or pb). 

**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::xsecErr_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsecerr-fb)


### function xsecErr_fb

```
virtual double xsecErr_fb(
    int 
) const =0
```


**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::xsecErr_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsecerr-fb)


### function xsecErr_pb

```
virtual double xsecErr_pb() const =0
```


**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::xsecErr_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsecerr-pb)


### function xsecErr_pb

```
virtual double xsecErr_pb(
    int 
) const =0
```


**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::xsecErr_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsecerr-pb)


### function process_code

```
virtual int process_code() const =0
```

Report an integer process code for the last generated event. 

**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::process_code](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-process-code)


### function all_active_process_codes

```
virtual std::vector< int > all_active_process_codes() const =0
```

Report the list of all active process codes. 

**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::all_active_process_codes](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-all-active-process-codes)


### function init

```
inline virtual void init(
    const std::vector< std::string > & 
)
```


**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::init](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-init)


### function init

```
inline virtual void init()
```

General init for any collider of this type - no settings version. 

**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::init](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-init)


### function BaseCollider

```
inline BaseCollider()
```

Constructor. 

### function ~BaseCollider

```
inline virtual ~BaseCollider()
```

Destructor. 

### function clear

```
inline virtual void clear()
```

Reset this instance for reuse, avoiding the need for "new" or "delete". 

**Reimplemented by**: [Gambit::ColliderBit::Py8Collider::clear](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-clear)


## Public Attributes Documentation

### variable partonOnly

```
bool partonOnly;
```

Flag indicating if events from this collider should be processed as parton-only or full events. 

### variable antiktR

```
double antiktR;
```

The jet radius used for the anti-kt jet clustering. 

-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000