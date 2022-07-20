---
title: 'class Gambit::DarkBit::Interpolator2D'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Interpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/#function-interpolator2d)**() |
| | **[Interpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/#function-interpolator2d)**(const std::vector< double > & xin, const std::vector< double > & yin, const std::vector< double > & zin) |
| [Interpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/) & | **[operator=](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/#function-operator=)**([Interpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/) && interp) |
| | **[~Interpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/#function-~interpolator2d)**() |
| | **[Interpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/#function-interpolator2d)**(const [Interpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/) & ) =delete |
| [Interpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/) | **[operator=](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/#function-operator=)**(const [Interpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/) & ) =delete |
| double | **[interpolate](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/#function-interpolate)**(double x, double y) const |
| bool | **[is_inside_box](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/#function-is-inside-box)**(double x, double y) const |

## Public Functions Documentation

### function Interpolator2D

```
Interpolator2D()
```


### function Interpolator2D

```
Interpolator2D(
    const std::vector< double > & xin,
    const std::vector< double > & yin,
    const std::vector< double > & zin
)
```


### function operator=

```
Interpolator2D & operator=(
    Interpolator2D && interp
)
```


### function ~Interpolator2D

```
~Interpolator2D()
```


### function Interpolator2D

```
Interpolator2D(
    const Interpolator2D & 
) =delete
```


### function operator=

```
Interpolator2D operator=(
    const Interpolator2D & 
) =delete
```


### function interpolate

```
double interpolate(
    double x,
    double y
) const
```


### function is_inside_box

```
bool is_inside_box(
    double x,
    double y
) const
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000