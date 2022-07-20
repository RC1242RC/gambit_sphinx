---
title: 'class Gambit::Cholesky'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Cholesky](/documentation/code/classes/classgambit_1_1cholesky/#function-cholesky)**() |
| | **[Cholesky](/documentation/code/classes/classgambit_1_1cholesky/#function-cholesky)**(const int num) |
| bool | **[EnterMat](/documentation/code/classes/classgambit_1_1cholesky/#function-entermat)**(std::vector< std::vector< double >> & a) |
| void | **[ElMult](/documentation/code/classes/classgambit_1_1cholesky/#function-elmult)**(std::vector< double > & y) const |
| std::vector< double > | **[invElMult](/documentation/code/classes/classgambit_1_1cholesky/#function-invelmult)**(const std::vector< double > & y) const<br>x = L^-1 y where L is the lower-diagonal [Cholesky](/documentation/code/classes/classgambit_1_1cholesky/) matrix  |
| double | **[Square](/documentation/code/classes/classgambit_1_1cholesky/#function-square)**(const std::vector< double > & y, const std::vector< double > & y0) |
| double | **[DetSqrt](/documentation/code/classes/classgambit_1_1cholesky/#function-detsqrt)**() |

## Public Functions Documentation

### function Cholesky

```
inline Cholesky()
```


### function Cholesky

```
inline Cholesky(
    const int num
)
```


### function EnterMat

```
inline bool EnterMat(
    std::vector< std::vector< double >> & a
)
```


### function ElMult

```
inline void ElMult(
    std::vector< double > & y
) const
```


### function invElMult

```
inline std::vector< double > invElMult(
    const std::vector< double > & y
) const
```

x = L^-1 y where L is the lower-diagonal [Cholesky](/documentation/code/classes/classgambit_1_1cholesky/) matrix 

Found by forward substituion since L is lower-diagonal. 


### function Square

```
inline double Square(
    const std::vector< double > & y,
    const std::vector< double > & y0
)
```


### function DetSqrt

```
inline double DetSqrt()
```


-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000