---
title: 'struct Lester::EllipseParams'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[EllipseParams](/documentation/code/classes/structlester_1_1ellipseparams/#function-ellipseparams)**(const double c_xx2, const double c_yy2, const double c_xy2, const double c_x2, const double c_y2, const double c2) |
| | **[EllipseParams](/documentation/code/classes/structlester_1_1ellipseparams/#function-ellipseparams)**() |
| void | **[setDet](/documentation/code/classes/structlester_1_1ellipseparams/#function-setdet)**() |
| | **[EllipseParams](/documentation/code/classes/structlester_1_1ellipseparams/#function-ellipseparams)**(const double x0, const double y0) |
| double | **[lesterFactor](/documentation/code/classes/structlester_1_1ellipseparams/#function-lesterfactor)**(const [EllipseParams](/documentation/code/classes/structlester_1_1ellipseparams/) & e2) const |
| bool | **[operator==](/documentation/code/classes/structlester_1_1ellipseparams/#function-operator==)**(const [EllipseParams](/documentation/code/classes/structlester_1_1ellipseparams/) & other) const |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| double | **[c_xx](/documentation/code/classes/structlester_1_1ellipseparams/#variable-c-xx)**  |
| double | **[c_yy](/documentation/code/classes/structlester_1_1ellipseparams/#variable-c-yy)**  |
| double | **[c_xy](/documentation/code/classes/structlester_1_1ellipseparams/#variable-c-xy)**  |
| double | **[c_x](/documentation/code/classes/structlester_1_1ellipseparams/#variable-c-x)**  |
| double | **[c_y](/documentation/code/classes/structlester_1_1ellipseparams/#variable-c-y)**  |
| double | **[c](/documentation/code/classes/structlester_1_1ellipseparams/#variable-c)**  |
| double | **[det](/documentation/code/classes/structlester_1_1ellipseparams/#variable-det)**  |

## Public Functions Documentation

### function EllipseParams

```
inline EllipseParams(
    const double c_xx2,
    const double c_yy2,
    const double c_xy2,
    const double c_x2,
    const double c_y2,
    const double c2
)
```


### function EllipseParams

```
inline EllipseParams()
```


### function setDet

```
inline void setDet()
```


### function EllipseParams

```
inline EllipseParams(
    const double x0,
    const double y0
)
```


### function lesterFactor

```
inline double lesterFactor(
    const EllipseParams & e2
) const
```


### function operator==

```
inline bool operator==(
    const EllipseParams & other
) const
```


## Public Attributes Documentation

### variable c_xx

```
double c_xx;
```


### variable c_yy

```
double c_yy;
```


### variable c_xy

```
double c_xy;
```


### variable c_x

```
double c_x;
```


### variable c_y

```
double c_y;
```


### variable c

```
double c;
```


### variable det

```
double det;
```


-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000