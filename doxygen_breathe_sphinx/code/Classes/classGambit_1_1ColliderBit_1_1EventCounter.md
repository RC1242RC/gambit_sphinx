---
title: 'class Gambit::ColliderBit::EventCounter'
description: 'A simple class for counting events of type HEPUtils::Event. '

---








A simple class for counting events of type HEPUtils::Event. 


`#include <EventCounter.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-eventcounter)**() |
| | **[EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-eventcounter)**(const std::string name) |
| void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-init)**(const std::string name) |
| void | **[reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-reset)**() |
| void | **[set_name](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-set-name)**(const std::string name) |
| std::string | **[name](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-name)**() const |
| void | **[set_sum](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-set-sum)**(int sum) |
| int | **[sum](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-sum)**() const |
| void | **[set_weight_sum](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-set-weight-sum)**(double weight_sum) |
| double | **[weight_sum](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-weight-sum)**() const |
| void | **[set_weight_sum_err](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-set-weight-sum-err)**(double weight_sum_err) |
| double | **[weight_sum_err](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-weight-sum-err)**() const |
| void | **[add_event](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-add-event)**(double w =1.0, double werr =0.0) |
| void | **[add_event](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-add-event)**(const HEPUtils::Event & event) |
| void | **[add_event](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-add-event)**(const HEPUtils::Event * event_ptr) |
| [EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/) & | **[operator+=](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-operator+=)**(const HEPUtils::Event & event) |
| [EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/) & | **[operator+=](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-operator+=)**(const [EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/) & rhs) |
| [EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/) & | **[combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/#function-combine)**(const [EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/) & other) |

## Public Functions Documentation

### function EventCounter

```
inline EventCounter()
```


### function EventCounter

```
inline EventCounter(
    const std::string name
)
```


### function init

```
inline void init(
    const std::string name
)
```


### function reset

```
inline void reset()
```


### function set_name

```
inline void set_name(
    const std::string name
)
```


### function name

```
inline std::string name() const
```


### function set_sum

```
inline void set_sum(
    int sum
)
```


### function sum

```
inline int sum() const
```


### function set_weight_sum

```
inline void set_weight_sum(
    double weight_sum
)
```


### function weight_sum

```
inline double weight_sum() const
```


### function set_weight_sum_err

```
inline void set_weight_sum_err(
    double weight_sum_err
)
```


### function weight_sum_err

```
inline double weight_sum_err() const
```


### function add_event

```
inline void add_event(
    double w =1.0,
    double werr =0.0
)
```


### function add_event

```
inline void add_event(
    const HEPUtils::Event & event
)
```


### function add_event

```
inline void add_event(
    const HEPUtils::Event * event_ptr
)
```


### function operator+=

```
inline EventCounter & operator+=(
    const HEPUtils::Event & event
)
```


### function operator+=

```
inline EventCounter & operator+=(
    const EventCounter & rhs
)
```


### function combine

```
inline EventCounter & combine(
    const EventCounter & other
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000