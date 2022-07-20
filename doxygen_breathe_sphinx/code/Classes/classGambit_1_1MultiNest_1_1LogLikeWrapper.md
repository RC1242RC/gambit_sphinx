---
title: 'class Gambit::MultiNest::LogLikeWrapper'
description: 'Class to connect multinest log-likelihood function and ScannerBit likelihood function. '

---








Class to connect multinest log-likelihood function and ScannerBit likelihood function. 


`#include <multinest.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[LogLikeWrapper](/documentation/code/classes/classgambit_1_1multinest_1_1loglikewrapper/#function-loglikewrapper)**([scanPtr](/documentation/code/namespaces/namespacegambit_1_1multinest/#typedef-scanptr) loglike, printer_interface & printer)<br>Constructor.  |
| double | **[LogLike](/documentation/code/classes/classgambit_1_1multinest_1_1loglikewrapper/#function-loglike)**(double * Cube, int ndim, int )<br>Main interface function from MultiNest to ScannerBit-supplied loglikelihood function.  |
| void | **[dumper](/documentation/code/classes/classgambit_1_1multinest_1_1loglikewrapper/#function-dumper)**(int nSamples, int nlive, int nPar, double * physLive, double * posterior, double * , double , double , double )<br>Main interface to MultiNest dumper routine.  |

## Public Functions Documentation

### function LogLikeWrapper

```
LogLikeWrapper(
    scanPtr loglike,
    printer_interface & printer
)
```

Constructor. 

[LogLikeWrapper](/documentation/code/classes/classgambit_1_1multinest_1_1loglikewrapper/) Constructor. 


### function LogLike

```
double LogLike(
    double * Cube,
    int ndim,
    int 
)
```

Main interface function from MultiNest to ScannerBit-supplied loglikelihood function. 

Main interface function from MultiNest to ScannerBit-supplied loglikelihood function This is the function that will be passed to Multinest as the loglike callback routine

Input arguments ndim = dimensionality (total number of free parameters) of the problem npars = total number of free plus derived parameters context = void pointer, any additional information

Input/Output arguments Cube[npars] = on entry has the ndim parameters in unit-hypercube on exit, the physical parameters plus copy any derived parameters you want to store with the free parameters

Output arguments lnew = loglikelihood 


### function dumper

```
void dumper(
    int nSamples,
    int nlive,
    int nPar,
    double * physLive,
    double * posterior,
    double * ,
    double ,
    double ,
    double 
)
```

Main interface to MultiNest dumper routine. 

Main interface to MultiNest dumper routine The dumper routine will be called every updInt*10 iterations MultiNest does not need to the user to do anything. User can use the arguments in whichever way he/she wants

Arguments:

nSamples = total number of samples in posterior distribution nlive = total number of live points nPar = total number of parameters (free + derived) physLive[1][nlive * (nPar + 1)] = 2D array containing the last set of live points (physical parameters plus derived parameters) along with their loglikelihood values TODO: Multinest uses the likelihood of the lowest live point as the "threshold" for iterating, i.e. it throws out the live point if it finds a better one. So we can use this number to update the GAMBIT 'cutoff' threshold when evaluating the likelihood function. posterior[1][nSamples * (nPar + 2)] = posterior distribution containing nSamples points. Each sample has nPar parameters (physical + derived) along with the their loglike value & posterior probability paramConstr[0][0] to paramConstr[0][nPar - 1] = mean values of the parameters paramConstr[0][nPar] to paramConstr[0][2*nPar - 1] = standard deviation of the parameters paramConstr[0][nPar*2] to paramConstr[0][3*nPar - 1] = best-fit (maxlike) parameters paramConstr[0][nPar*4] to paramConstr[0][4*nPar - 1] = MAP (maximum-a-posteriori) parameters paramConstr[1][4*nPar] = ???? maxLogLike = maximum loglikelihood value logZ = log evidence value logZerr = error on log evidence value context = void pointer, any additional information 


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000