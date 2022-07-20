---
title: 'namespace Gambit::PolyChord_1_17_1'

description: "[No description available]"

---






[No description available]

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::PolyChord_1_17_1::LogLikeWrapper](/documentation/code/classes/classgambit_1_1polychord__1__17__1_1_1loglikewrapper/)** <br>Class to connect PolyChord log-likelihood function and ScannerBit likelihood function.  |

## Types

|                | Name           |
| -------------- | -------------- |
| typedef [Gambit::Scanner::like_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/) | **[scanPtr](/documentation/code/namespaces/namespacegambit_1_1polychord__1__17__1/#typedef-scanptr)** <br>Typedef for the ScannerBit pointer to the external loglikelihood function.  |

## Functions

|                | Name           |
| -------------- | -------------- |
| double | **[callback_loglike](/documentation/code/namespaces/namespacegambit_1_1polychord__1__17__1/#function-callback-loglike)**(double * Cube, int ndim, double * phi, int nderived)<br>C-functions to pass to PolyChord for the callbacks.  |
| void | **[callback_dumper](/documentation/code/namespaces/namespacegambit_1_1polychord__1__17__1/#function-callback-dumper)**(int ndead, int nlive, int npars, double * live, double * dead, double * logweights, double logZ, double logZerr) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| [LogLikeWrapper](/documentation/code/classes/classgambit_1_1polychord__1__17__1_1_1loglikewrapper/) * | **[global_loglike_object](/documentation/code/namespaces/namespacegambit_1_1polychord__1__17__1/#variable-global-loglike-object)** <br>Global pointer to loglikelihood wrapper object, for use in the PolyChord callback functions.  |

## Types Documentation

### typedef scanPtr

```
typedef Gambit::Scanner::like_ptr Gambit::PolyChord_1_17_1::scanPtr;
```

Typedef for the ScannerBit pointer to the external loglikelihood function. 


## Functions Documentation

### function callback_loglike

```
double callback_loglike(
    double * Cube,
    int ndim,
    double * phi,
    int nderived
)
```

C-functions to pass to PolyChord for the callbacks. 

Plain-vanilla functions to pass to PolyChord for the callback. 


### function callback_dumper

```
void callback_dumper(
    int ndead,
    int nlive,
    int npars,
    double * live,
    double * dead,
    double * logweights,
    double logZ,
    double logZerr
)
```



## Attributes Documentation

### variable global_loglike_object

```
LogLikeWrapper * global_loglike_object;
```

Global pointer to loglikelihood wrapper object, for use in the PolyChord callback functions. 




-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000