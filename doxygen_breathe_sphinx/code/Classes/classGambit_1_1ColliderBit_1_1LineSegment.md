---
title: 'class Gambit::ColliderBit::LineSegment'
description: 'A simple container for a line segment on an xy plane. '

---








A simple container for a line segment on an xy plane.  [More...](#detailed-description)


`#include <PointsAndLines.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-init)**(double x1, double y1, double x2, double y2, double extendFrac =-1.)<br>Coordinate initializer / recycler.  |
| void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-init)**(const [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & p1, const [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & p2, double extendFrac =-1.)<br>Point initializer / recycler.  |
| | **[LineSegment](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-linesegment)**()<br>Default constructor.  |
| | **[LineSegment](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-linesegment)**(double x1, double y1, double x2, double y2, double extendFrac =-1.)<br>Coordinate constructor.  |
| | **[LineSegment](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-linesegment)**(const [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & p1, const [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) & p2, double extendFrac =0.)<br>Point constructor.  |
| | **[LineSegment](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-linesegment)**(const [LineSegment](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/) & other)<br>Copy constructor.  |
| [LineSegment](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/) & | **[operator=](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-operator=)**(const [LineSegment](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/) & other)<br>Copy assignment operator.  |
| const [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) | **[getp1](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-getp1)**() const |
| const [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) | **[getp2](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-getp2)**() const |
| double | **[slope](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-slope)**() const<br>Get the slope of the line segment.  |
| double | **[m](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-m)**() const<br>Alias for slope.  |
| double | **[intercept](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-intercept)**() const<br>Get the y-intercept of the full line which contains this segment.  |
| double | **[b](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-b)**() const<br>Alias for intercept.  |
| double | **[abs](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-abs)**() const<br>Get the length of the vector from the origin to this point.  |
| double | **[r](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-r)**() const<br>Alias for abs.  |
| [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) | **[intersectsAt](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/#function-intersectsat)**(const [LineSegment](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/) & other) const<br>Determine if this intersects with other and where.  |

## Detailed Description

```
class Gambit::ColliderBit::LineSegment;
```

A simple container for a line segment on an xy plane. 

This class depends on the [P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/) class above. It has a built in algorithm to detect intersection with another [LineSegment](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/). 

## Public Functions Documentation

### function init

```
inline void init(
    double x1,
    double y1,
    double x2,
    double y2,
    double extendFrac =-1.
)
```

Coordinate initializer / recycler. 

### function init

```
inline void init(
    const P2 & p1,
    const P2 & p2,
    double extendFrac =-1.
)
```

Point initializer / recycler. 

### function LineSegment

```
inline LineSegment()
```

Default constructor. 

### function LineSegment

```
inline LineSegment(
    double x1,
    double y1,
    double x2,
    double y2,
    double extendFrac =-1.
)
```

Coordinate constructor. 

### function LineSegment

```
inline LineSegment(
    const P2 & p1,
    const P2 & p2,
    double extendFrac =0.
)
```

Point constructor. 

### function LineSegment

```
inline LineSegment(
    const LineSegment & other
)
```

Copy constructor. 

### function operator=

```
inline LineSegment & operator=(
    const LineSegment & other
)
```

Copy assignment operator. 

### function getp1

```
inline const P2 getp1() const
```


### function getp2

```
inline const P2 getp2() const
```


### function slope

```
inline double slope() const
```

Get the slope of the line segment. 

### function m

```
inline double m() const
```

Alias for slope. 

### function intercept

```
inline double intercept() const
```

Get the y-intercept of the full line which contains this segment. 

### function b

```
inline double b() const
```

Alias for intercept. 

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

### function intersectsAt

```
inline P2 intersectsAt(
    const LineSegment & other
) const
```

Determine if this intersects with other and where. 

-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000