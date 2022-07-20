---
title: 'struct Gambit::ColliderBit::Cutflow'
description: 'A tracker of numbers & fractions of events passing sequential cuts. '

---








A tracker of numbers & fractions of events passing sequential cuts. 


`#include <Cutflow.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-cutflow)**()<br>Default constructor.  |
| | **[Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-cutflow)**(const string & cfname, const vector< string > & cutnames)<br>Proper constructor.  |
| void | **[fillinit](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-fillinit)**(double weight =1.)<br>Fill the pre-cut counter.  |
| bool | **[fill](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-fill)**(size_t icut, bool cutresult =true, double weight =1.)<br>Fill the _{icut}'th_ post-cut counter, starting at icut=1 for first cut.  |
| bool | **[fill](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-fill)**(size_t icut, double weight)<br>Fill the _{icut}'th_ post-cut counter, starting at icut=1 for first cut (cutvalue=true overload)  |
| bool | **[fill](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-fill)**(size_t icut, const vector< bool > & cutresults, double weight =1.)<br>Fill cut-state counters from an n-element results vector, starting at icut.  |
| bool | **[fillall](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-fillall)**(const vector< bool > & cutresults, double weight =1.)<br>Fill all cut-state counters from an Ncut-element results vector, starting at icut=1.  |
| bool | **[fillnext](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-fillnext)**(bool cutresult, double weight =1.)<br>Fill the next post-cut counter.  |
| bool | **[fillnext](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-fillnext)**(double weight =1.)<br>Fill the next post-cut counter, assuming a true result.  |
| bool | **[fillnext](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-fillnext)**(const vector< bool > & cutresults, double weight =1.)<br>Fill the next cut-state counters from an n-element results vector.  |
| bool | **[filltail](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-filltail)**(const vector< bool > & cutresults, double weight =1.)<br>Fill the N trailing post-cut counters, when supplied with an N-element results vector.  |
| void | **[scale](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-scale)**(double factor)<br>Scale the cutflow weights by the given factor.  |
| void | **[normalize](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-normalize)**(double norm, size_t icut =0)<br>Scale the cutflow weights so that the weight count after cut _icut_ is _norm_.  |
| string | **[str](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-str)**() const<br>Create a string representation.  |
| void | **[print](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-print)**(std::ostream & os) const<br>Print string representation to a stream.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| string | **[name](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#variable-name)**  |
| size_t | **[ncuts](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#variable-ncuts)**  |
| vector< string > | **[cuts](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#variable-cuts)**  |
| vector< double > | **[counts](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#variable-counts)**  |
| size_t | **[icurr](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#variable-icurr)**  |

## Public Functions Documentation

### function Cutflow

```
inline Cutflow()
```

Default constructor. 

Does nothing! Just to allow storage in STL containers and use as a member variable without using the init list 


### function Cutflow

```
inline Cutflow(
    const string & cfname,
    const vector< string > & cutnames
)
```

Proper constructor. 

### function fillinit

```
inline void fillinit(
    double weight =1.
)
```

Fill the pre-cut counter. 

### function fill

```
inline bool fill(
    size_t icut,
    bool cutresult =true,
    double weight =1.
)
```

Fill the _{icut}'th_ post-cut counter, starting at icut=1 for first cut. 

**Note**: Returns the cut result to allow 'side-effect' cut-flow filling in an if-statement 

### function fill

```
inline bool fill(
    size_t icut,
    double weight
)
```

Fill the _{icut}'th_ post-cut counter, starting at icut=1 for first cut (cutvalue=true overload) 

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

### function filltail

```
inline bool filltail(
    const vector< bool > & cutresults,
    double weight =1.
)
```

Fill the N trailing post-cut counters, when supplied with an N-element results vector. 

**Deprecated**: 

Now prefer to use vector [fillnext()](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/#function-fillnext)

**Note**: Returns the overall cut result to allow 'side-effect' cut-flow filling in an if-statement 

The _cutresults_ vector represents the boolean results of the last N cuts. This function allows mixing of cut-flow filling with higher-level analyze() function escapes such as the vetoEvent directive. The initial state (state 0) is not incremented.


### function scale

```
inline void scale(
    double factor
)
```

Scale the cutflow weights by the given factor. 

### function normalize

```
inline void normalize(
    double norm,
    size_t icut =0
)
```

Scale the cutflow weights so that the weight count after cut _icut_ is _norm_. 

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

### variable name

```
string name;
```


### variable ncuts

```
size_t ncuts;
```


### variable cuts

```
vector< string > cuts;
```


### variable counts

```
vector< double > counts;
```


### variable icurr

```
size_t icurr;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000