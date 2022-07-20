---
title: 'class Gambit::ColliderBit::BaseDetector'
description: 'An abstract base class for detector simulators within ColliderBit. '

---








An abstract base class for detector simulators within ColliderBit. 


`#include <BaseDetector.hpp>`

Inherited by [Gambit::ColliderBit::BuckFast](/documentation/code/classes/classgambit_1_1colliderbit_1_1buckfast/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| virtual void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1basedetector/#function-init)**(const std::vector< std::string > & ) |
| virtual void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1basedetector/#function-init)**()<br>General init for any collider of this type - no settings version.  |
| | **[BaseDetector](/documentation/code/classes/classgambit_1_1colliderbit_1_1basedetector/#function-basedetector)**()<br>Constructor.  |
| virtual | **[~BaseDetector](/documentation/code/classes/classgambit_1_1colliderbit_1_1basedetector/#function-~basedetector)**()<br>Destructor.  |
| virtual void | **[clear](/documentation/code/classes/classgambit_1_1colliderbit_1_1basedetector/#function-clear)**()<br>Reset this instance for reuse, avoiding the need for "new" or "delete".  |
| virtual void | **[processEvent](/documentation/code/classes/classgambit_1_1colliderbit_1_1basedetector/#function-processevent)**(HEPUtils::Event & ) const =0<br>Perform the actual simulation on the next collider event.  |

## Public Functions Documentation

### function init

```
inline virtual void init(
    const std::vector< std::string > & 
)
```


**Reimplemented by**: [Gambit::ColliderBit::BuckFast::init](/documentation/code/classes/classgambit_1_1colliderbit_1_1buckfast/#function-init)


### function init

```
inline virtual void init()
```

General init for any collider of this type - no settings version. 

**Reimplemented by**: [Gambit::ColliderBit::BuckFast::init](/documentation/code/classes/classgambit_1_1colliderbit_1_1buckfast/#function-init)


### function BaseDetector

```
inline BaseDetector()
```

Constructor. 

### function ~BaseDetector

```
inline virtual ~BaseDetector()
```

Destructor. 

### function clear

```
inline virtual void clear()
```

Reset this instance for reuse, avoiding the need for "new" or "delete". 

### function processEvent

```
virtual void processEvent(
    HEPUtils::Event & 
) const =0
```

Perform the actual simulation on the next collider event. 

**Reimplemented by**: [Gambit::ColliderBit::BuckFast::processEvent](/documentation/code/classes/classgambit_1_1colliderbit_1_1buckfast/#function-processevent)


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000