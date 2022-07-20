---
title: 'class Gambit::DarkBit::AxionInterpolator2D'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[AxionInterpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/#function-axioninterpolator2d)**() |
| | **[AxionInterpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/#function-axioninterpolator2d)**(std::string file, [InterpolationOptions2D](/documentation/code/namespaces/namespacegambit_1_1darkbit/#enum-interpolationoptions2d) type =InterpolationOptions2D::bilinear) |
| [AxionInterpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/) & | **[operator=](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/#function-operator=)**([AxionInterpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/) && interp) |
| | **[~AxionInterpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/#function-~axioninterpolator2d)**() |
| | **[AxionInterpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/#function-axioninterpolator2d)**(const [AxionInterpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/) & ) =delete |
| [AxionInterpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/) | **[operator=](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/#function-operator=)**(const [AxionInterpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/) & ) =delete |
| double | **[interpolate](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/#function-interpolate)**(double x, double y) |
| bool | **[is_inside_box](/documentation/code/classes/classgambit_1_1darkbit_1_1axioninterpolator2d/#function-is-inside-box)**(double x, double y) |

## Public Functions Documentation

### function AxionInterpolator2D

```
AxionInterpolator2D()
```


### function AxionInterpolator2D

```
AxionInterpolator2D(
    std::string file,
    InterpolationOptions2D type =InterpolationOptions2D::bilinear
)
```


### function operator=

```
AxionInterpolator2D & operator=(
    AxionInterpolator2D && interp
)
```


### function ~AxionInterpolator2D

```
~AxionInterpolator2D()
```


### function AxionInterpolator2D

```
AxionInterpolator2D(
    const AxionInterpolator2D & 
) =delete
```


### function operator=

```
AxionInterpolator2D operator=(
    const AxionInterpolator2D & 
) =delete
```


### function interpolate

```
double interpolate(
    double x,
    double y
)
```


### function is_inside_box

```
bool is_inside_box(
    double x,
    double y
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000