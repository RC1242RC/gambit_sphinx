---
title: 'struct Gambit::ColliderBit::Cutflows'
description: 'A container for several [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) objects, with some convenient batch access. '

---








A container for several [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) objects, with some convenient batch access. 


`#include <Cutflow.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Cutflows](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-cutflows)**()<br>Do-nothing default constructor.  |
| | **[Cutflows](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-cutflows)**(const vector< [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) > & cutflows)<br>Populating constructor.  |
| void | **[addCutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-addcutflow)**(const [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) & cf)<br>Append a provided [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) to the list.  |
| void | **[addCutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-addcutflow)**(const string & cfname, const vector< string > & cutnames)<br>Append a newly constructed [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) to the list.  |
| [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) & | **[operator[]](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-operator[])**(size_t i)<br>Access the _i'th_[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/).  |
| const [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) & | **[operator[]](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-operator[])**(size_t i) const<br>Access the _i'th_[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) (const)  |
| [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) & | **[operator[]](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-operator[])**(const string & name)<br>Access the [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) whose name is _name_.  |
| const [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) & | **[operator[]](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-operator[])**(const string & name) const<br>Access the _i'th_[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) (const)  |
| void | **[fillinit](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-fillinit)**(double weight =1.)<br>Fill the pre-cuts state counter for all contained {[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/)}s.  |
| bool | **[fill](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-fill)**(size_t icut, bool cutresult =true, double weight =1.)<br>Fill the _{icut}'th_ post-cut counter, starting at icut=1 for first cut, with the same result for all {[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/)}s.  |
| bool | **[fill](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-fill)**(size_t icut, double weight)<br>Fill the _{icut}'th_ post-cut counter, starting at icut=1 for first cut, with the same result for all {[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/)}s (cutresult=true overload)  |
| bool | **[fill](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-fill)**(size_t icut, const vector< bool > & cutresults, double weight =1.)<br>Fill cut-state counters from an n-element results vector, starting at icut.  |
| bool | **[fillall](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-fillall)**(const vector< bool > & cutresults, double weight =1.)<br>Fill all cut-state counters from an Ncut-element results vector, starting at icut=1.  |
| bool | **[fillnext](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-fillnext)**(bool cutresult, double weight =1.)<br>Fill the next post-cut counter.  |
| bool | **[fillnext](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-fillnext)**(double weight =1.)<br>Fill the next post-cut counter, assuming a true result.  |
| bool | **[fillnext](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-fillnext)**(const vector< bool > & cutresults, double weight =1.)<br>Fill the next cut-state counters from an n-element results vector.  |
| void | **[scale](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-scale)**(double factor)<br>Scale the contained {[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/)}s by the given factor.  |
| void | **[normalize](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-normalize)**(double norm, size_t icut =0) |
| string | **[str](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-str)**() const<br>Create a string representation.  |
| void | **[print](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#function-print)**(std::ostream & os) const<br>Print string representation to a stream.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| vector< [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) > | **[cfs](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/#variable-cfs)**  |

## Public Functions Documentation

### function Cutflows

```
inline Cutflows()
```

Do-nothing default constructor. 

### function Cutflows

```
inline Cutflows(
    const vector< Cutflow > & cutflows
)
```

Populating constructor. 

### function addCutflow

```
inline void addCutflow(
    const Cutflow & cf
)
```

Append a provided [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) to the list. 

### function addCutflow

```
inline void addCutflow(
    const string & cfname,
    const vector< string > & cutnames
)
```

Append a newly constructed [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) to the list. 

### function operator[]

```
inline Cutflow & operator[](
    size_t i
)
```

Access the _i'th_[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/). 

### function operator[]

```
inline const Cutflow & operator[](
    size_t i
) const
```

Access the _i'th_[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) (const) 

### function operator[]

```
inline Cutflow & operator[](
    const string & name
)
```

Access the [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) whose name is _name_. 

### function operator[]

```
inline const Cutflow & operator[](
    const string & name
) const
```

Access the _i'th_[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) (const) 

### function fillinit

```
inline void fillinit(
    double weight =1.
)
```

Fill the pre-cuts state counter for all contained {[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/)}s. 

### function fill

```
inline bool fill(
    size_t icut,
    bool cutresult =true,
    double weight =1.
)
```

Fill the _{icut}'th_ post-cut counter, starting at icut=1 for first cut, with the same result for all {[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/)}s. 

### function fill

```
inline bool fill(
    size_t icut,
    double weight
)
```

Fill the _{icut}'th_ post-cut counter, starting at icut=1 for first cut, with the same result for all {[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/)}s (cutresult=true overload) 

**Note**: Returns the cut result to allow 'side-effect' cut-flow filling in an if-statement 

This version exists to allow calling fill(i, weight) without the weight getting cast to a bool, or having to explicitly add a 'true' middle arg.


### function fill

```
inline bool fill(
    size_t icut,
    const vector< bool > & cutresults,
    double weight =1.
)
```

Fill cut-state counters from an n-element results vector, starting at icut. 

**Note**: Returns the overall cut result to allow 'side-effect' cut-flow filling in an if-statement 

### function fillall

```
inline bool fillall(
    const vector< bool > & cutresults,
    double weight =1.
)
```

Fill all cut-state counters from an Ncut-element results vector, starting at icut=1. 

### function fillnext

```
inline bool fillnext(
    bool cutresult,
    double weight =1.
)
```

Fill the next post-cut counter. 

**Note**: Returns the cut result to allow 'side-effect' cut-flow filling in an if-statement 

### function fillnext

```
inline bool fillnext(
    double weight =1.
)
```

Fill the next post-cut counter, assuming a true result. 

**Note**: Returns the cut result to allow 'side-effect' cut-flow filling in an if-statement 

### function fillnext

```
inline bool fillnext(
    const vector< bool > & cutresults,
    double weight =1.
)
```

Fill the next cut-state counters from an n-element results vector. 

**Note**: Returns the cut result to allow 'side-effect' cut-flow filling in an if-statement 

### function scale

```
inline void scale(
    double factor
)
```

Scale the contained {[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/)}s by the given factor. 

### function normalize

```
inline void normalize(
    double norm,
    size_t icut =0
)
```


**Todo**: Provide a version that takes a vector of norms? 

Scale the cutflow weights so that all the weight counts after cut _icut_ are _norm_


### function str

```
inline string str() const
```

Create a string representation. 

### function print

```
inline void print(
    std::ostream & os
) const
```

Print string representation to a stream. 

## Public Attributes Documentation

### variable cfs

```
vector< Cutflow > cfs;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000