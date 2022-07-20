---
title: 'namespace Gambit::MultiNest'

description: "[No description available]"

---






[No description available]

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::MultiNest::LogLikeWrapper](/documentation/code/classes/classgambit_1_1multinest_1_1loglikewrapper/)** <br>Class to connect multinest log-likelihood function and ScannerBit likelihood function.  |

## Types

|                | Name           |
| -------------- | -------------- |
| typedef [Gambit::Scanner::like_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/) | **[scanPtr](/documentation/code/namespaces/namespacegambit_1_1multinest/#typedef-scanptr)** <br>Typedef for the ScannerBit pointer to the external loglikelihood function.  |

## Functions

|                | Name           |
| -------------- | -------------- |
| double | **[callback_loglike](/documentation/code/namespaces/namespacegambit_1_1multinest/#function-callback-loglike)**(double * Cube, int ndim, int npars, void * )<br>Plain-vanilla C-functions to pass to Multinest for the callbacks.  |
| void | **[callback_dumper](/documentation/code/namespaces/namespacegambit_1_1multinest/#function-callback-dumper)**(int nSamples, int nlive, int nPar, double * physLive, double * posterior, double * paramConstr, double maxLogLike, double logZ, double logZerr, void * ) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| [LogLikeWrapper](/documentation/code/classes/classgambit_1_1multinest_1_1loglikewrapper/) * | **[global_loglike_object](/documentation/code/namespaces/namespacegambit_1_1multinest/#variable-global-loglike-object)** <br>Global pointer to loglikelihood wrapper object, for use in the MultiNest callback functions.  |

## Types Documentation

### typedef scanPtr

```
typedef Gambit::Scanner::like_ptr Gambit::MultiNest::scanPtr;
```

Typedef for the ScannerBit pointer to the external loglikelihood function. 


## Functions Documentation

### function callback_loglike

```
double callback_loglike(
    double * Cube,
    int ndim,
    int npars,
    void * 
)
```

Plain-vanilla C-functions to pass to Multinest for the callbacks. 

Plain-vanilla functions to pass to Multinest for the callback. 


### function callback_dumper

```
void callback_dumper(
    int nSamples,
    int nlive,
    int nPar,
    double * physLive,
    double * posterior,
    double * paramConstr,
    double maxLogLike,
    double logZ,
    double logZerr,
    void * 
)
```



## Attributes Documentation

### variable global_loglike_object

```
LogLikeWrapper * global_loglike_object;
```

Global pointer to loglikelihood wrapper object, for use in the MultiNest callback functions. 




-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000