---
title: 'class TransformRandomBasis'

description: "[No description available]"

---








[No description available]

Inherits from [RandomBasis](/documentation/code/classes/classrandombasis/), [Cholesky](/documentation/code/classes/classcholesky/), [BasicDevs](/documentation/code/classes/classbasicdevs/), [Ran](/documentation/code/classes/classran/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[TransformRandomBasis](/documentation/code/classes/classtransformrandombasis/#function-transformrandombasis)**(double ** vvar, int nin, unsigned long long iin) |
| virtual void | **[operator++](/documentation/code/classes/classtransformrandombasis/#function-operator++)**(int ) |
| | **[TransformRandomBasis](/documentation/code/classes/classtransformrandombasis/#function-transformrandombasis)**(double ** vvar, int nin, unsigned long long iin) |
| virtual void | **[operator++](/documentation/code/classes/classtransformrandombasis/#function-operator++)**(int ) |

## Additional inherited members

**Public Functions inherited from [RandomBasis](/documentation/code/classes/classrandombasis/)**

|                | Name           |
| -------------- | -------------- |
| | **[RandomBasis](/documentation/code/classes/classrandombasis/#function-randombasis)**(int nin, unsigned long long iin) |
| void | **[ChangeDim](/documentation/code/classes/classrandombasis/#function-changedim)**(const int nin) |
| void | **[RandRot](/documentation/code/classes/classrandombasis/#function-randrot)**() |
| double | **[RanMult](/documentation/code/classes/classrandombasis/#function-ranmult)**(double ** cin) |
| void | **[RanMult](/documentation/code/classes/classrandombasis/#function-ranmult)**(const double in, double * out) |
| void | **[RanMult](/documentation/code/classes/classrandombasis/#function-ranmult)**(double * in, const double w, double * out) |
| double | **[Mag](/documentation/code/classes/classrandombasis/#function-mag)**(double * a, double * a0) |
| void | **[Adjust](/documentation/code/classes/classrandombasis/#function-adjust)**(double * a, const double lim, const int iin) |
| virtual | **[~RandomBasis](/documentation/code/classes/classrandombasis/#function-~randombasis)**() |
| | **[RandomBasis](/documentation/code/classes/classrandombasis/#function-randombasis)**(int nin, unsigned long long iin) |
| void | **[ChangeDim](/documentation/code/classes/classrandombasis/#function-changedim)**(const int nin) |
| void | **[RandRot](/documentation/code/classes/classrandombasis/#function-randrot)**() |
| double | **[RanMult](/documentation/code/classes/classrandombasis/#function-ranmult)**(double ** cin) |
| void | **[RanMult](/documentation/code/classes/classrandombasis/#function-ranmult)**(const double in, double * out) |
| void | **[RanMult](/documentation/code/classes/classrandombasis/#function-ranmult)**(double * in, const double w, double * out) |
| double | **[Mag](/documentation/code/classes/classrandombasis/#function-mag)**(double * a, double * a0) |
| void | **[Adjust](/documentation/code/classes/classrandombasis/#function-adjust)**(double * a, const double lim, const int iin) |
| virtual | **[~RandomBasis](/documentation/code/classes/classrandombasis/#function-~randombasis)**() |

**Protected Attributes inherited from [RandomBasis](/documentation/code/classes/classrandombasis/)**

|                | Name           |
| -------------- | -------------- |
| double ** | **[currentVec](/documentation/code/classes/classrandombasis/#variable-currentvec)**  |
| double ** | **[endVec](/documentation/code/classes/classrandombasis/#variable-endvec)**  |

**Public Functions inherited from [Cholesky](/documentation/code/classes/classcholesky/)**

|                | Name           |
| -------------- | -------------- |
| | **[Cholesky](/documentation/code/classes/classcholesky/#function-cholesky)**(const int nin) |
| | **[Cholesky](/documentation/code/classes/classcholesky/#function-cholesky)**(double ** a, const int nin) |
| bool | **[EnterMatM](/documentation/code/classes/classcholesky/#function-entermatm)**(double ** a, const int min) |
| bool | **[EnterMat](/documentation/code/classes/classcholesky/#function-entermat)**(double ** a) |
| void | **[EnterMat](/documentation/code/classes/classcholesky/#function-entermat)**(double ** a, int nin) |
| void | **[ElMult](/documentation/code/classes/classcholesky/#function-elmult)**(double * y, double * b) |
| void | **[ElMult](/documentation/code/classes/classcholesky/#function-elmult)**(double * y) |
| void | **[Solve](/documentation/code/classes/classcholesky/#function-solve)**(double * b, double * x) |
| double | **[Square](/documentation/code/classes/classcholesky/#function-square)**(double * y, double * y0) |
| double | **[Square](/documentation/code/classes/classcholesky/#function-square)**(double * y, double * y0, int * map) |
| void | **[Inverse](/documentation/code/classes/classcholesky/#function-inverse)**(double ** ainv) |
| double | **[DetSqrt](/documentation/code/classes/classcholesky/#function-detsqrt)**() |
| | **[~Cholesky](/documentation/code/classes/classcholesky/#function-~cholesky)**() |
| | **[Cholesky](/documentation/code/classes/classcholesky/#function-cholesky)**(const int nin) |
| | **[Cholesky](/documentation/code/classes/classcholesky/#function-cholesky)**(double ** a, const int nin) |
| bool | **[EnterMatM](/documentation/code/classes/classcholesky/#function-entermatm)**(double ** a, const int min) |
| bool | **[EnterMat](/documentation/code/classes/classcholesky/#function-entermat)**(double ** a) |
| bool | **[EnterMat](/documentation/code/classes/classcholesky/#function-entermat)**(const std::vector< std::vector< double >> & a) |
| void | **[EnterMat](/documentation/code/classes/classcholesky/#function-entermat)**(double ** a, int nin) |
| void | **[ElMult](/documentation/code/classes/classcholesky/#function-elmult)**(double * y, double * b) |
| void | **[ElMult](/documentation/code/classes/classcholesky/#function-elmult)**(double * y) |
| void | **[Solve](/documentation/code/classes/classcholesky/#function-solve)**(double * b, double * x) |
| double | **[Square](/documentation/code/classes/classcholesky/#function-square)**(double * y, double * y0) |
| double | **[Square](/documentation/code/classes/classcholesky/#function-square)**(double * y, double * y0, int * map) |
| void | **[Inverse](/documentation/code/classes/classcholesky/#function-inverse)**(double ** ainv) |
| double | **[DetSqrt](/documentation/code/classes/classcholesky/#function-detsqrt)**() |
| | **[~Cholesky](/documentation/code/classes/classcholesky/#function-~cholesky)**() |

**Public Functions inherited from [BasicDevs](/documentation/code/classes/classbasicdevs/)**

|                | Name           |
| -------------- | -------------- |
| | **[BasicDevs](/documentation/code/classes/classbasicdevs/#function-basicdevs)**(unsigned long long i) |
| double | **[Dev](/documentation/code/classes/classbasicdevs/#function-dev)**() |
| double | **[ExpDev](/documentation/code/classes/classbasicdevs/#function-expdev)**() |
| | **[BasicDevs](/documentation/code/classes/classbasicdevs/#function-basicdevs)**(unsigned long long i) |
| double | **[Dev](/documentation/code/classes/classbasicdevs/#function-dev)**() |
| double | **[ExpDev](/documentation/code/classes/classbasicdevs/#function-expdev)**() |

**Public Functions inherited from [Ran](/documentation/code/classes/classran/)**

|                | Name           |
| -------------- | -------------- |
| | **[Ran](/documentation/code/classes/classran/#function-ran)**(unsigned long long int ) |
| double | **[Doub](/documentation/code/classes/classran/#function-doub)**() |
| | **[Ran](/documentation/code/classes/classran/#function-ran)**(unsigned long long int ) |
| double | **[Doub](/documentation/code/classes/classran/#function-doub)**() |


## Public Functions Documentation

### function TransformRandomBasis

```
inline TransformRandomBasis(
    double ** vvar,
    int nin,
    unsigned long long iin
)
```


### function operator++

```
inline virtual void operator++(
    int 
)
```


**Reimplements**: [RandomBasis::operator++](/documentation/code/classes/classrandombasis/#function-operator++)


### function TransformRandomBasis

```
inline TransformRandomBasis(
    double ** vvar,
    int nin,
    unsigned long long iin
)
```


### function operator++

```
inline virtual void operator++(
    int 
)
```


**Reimplements**: [RandomBasis::operator++](/documentation/code/classes/classrandombasis/#function-operator++)


-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000