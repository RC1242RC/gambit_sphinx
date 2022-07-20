---
title: 'class Gambit::ColliderBit::P2'
description: 'A simple container for a point on an xy plane. '

---








A simple container for a point on an xy plane.  [More...](#detailed-description)


`#include <PointsAndLines.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-p2)**()<br>Default constructor.  |
| | **[P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-p2)**(double x, double y)<br>Coordinate constructor.  |
| | **[P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-p2)**(const [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & other)<br>Copy constructor.  |
| [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & | **[operator=](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-operator=)**(const [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & other)<br>Copy assignment operator.  |
| [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & | **[setx](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-setx)**(double x) |
| [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & | **[sety](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-sety)**(double y) |
| [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & | **[setxy](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-setxy)**(double x, double y) |
| double | **[getx](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-getx)**() const |
| double | **[gety](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-gety)**() const |
| double | **[abs](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-abs)**() const<br>Get the length of the vector from the origin to this point.  |
| double | **[r](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-r)**() const<br>Alias for abs.  |
| [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & | **[operator+=](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-operator+=)**(const [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & other) |
| [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & | **[operator-=](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-operator-=)**(const [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & other) |
| [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & | **[operator*=](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-operator*=)**(double a) |
| [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & | **[operator/=](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/#function-operator/=)**(double a) |

## Detailed Description

```
class Gambit::ColliderBit::P2;
```

A simple container for a point on an xy plane. 

This class is largely based upon the structure of the P4 class which is part of HEPUtils &ndash;[https://bitbucket.org/andybuckley/heputils](https://bitbucket.org/andybuckley/heputils) Copyright (C) 2013-2015 Andy Buckley [andy.buckley@cern.ch](mailto:andy.buckley@cern.ch)

Modified to a simple point on a 2d-plane by Abram Krislock [a.m.b.krislock@fys.uio.no](mailto:a.m.b.krislock@fys.uio.no)

## Public Functions Documentation

### function P2

```
inline P2()
```

Default constructor. 

### function P2

```
inline P2(
    double x,
    double y
)
```

Coordinate constructor. 

### function P2

```
inline P2(
    const P2 & other
)
```

Copy constructor. 

### function operator=

```
inline P2 & operator=(
    const P2 & other
)
```

Copy assignment operator. 

### function setx

```
inline P2 & setx(
    double x
)
```


### function sety

```
inline P2 & sety(
    double y
)
```


### function setxy

```
inline P2 & setxy(
    double x,
    double y
)
```


### function getx

```
inline double getx() const
```


### function gety

```
inline double gety() const
```


### function abs

```
inline double abs() const
```

Get the length of the vector from the origin to this point. 

### function r

```
inline double r() const
```

Alias for abs. 

### function operator+=

```
inline P2 & operator+=(
    const P2 & other
)
```


### function operator-=

```
inline P2 & operator-=(
    const P2 & other
)
```


### function operator*=

```
inline P2 & operator*=(
    double a
)
```


### function operator/=

```
inline P2 & operator/=(
    double a
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000