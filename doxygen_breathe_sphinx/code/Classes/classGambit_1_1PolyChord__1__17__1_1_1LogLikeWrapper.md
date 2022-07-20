---
title: 'class Gambit::PolyChord_1_17_1::LogLikeWrapper'
description: 'Class to connect PolyChord log-likelihood function and ScannerBit likelihood function. '

---








Class to connect PolyChord log-likelihood function and ScannerBit likelihood function. 


`#include <polychord.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[LogLikeWrapper](/documentation/code/classes/classgambit_1_1polychord__1__17__1_1_1loglikewrapper/#function-loglikewrapper)**([scanPtr](/documentation/code/namespaces/namespacegambit_1_1polychord__1__17__1/#typedef-scanptr) loglike, printer_interface & printer)<br>Constructor.  |
| double | **[LogLike](/documentation/code/classes/classgambit_1_1polychord__1__17__1_1_1loglikewrapper/#function-loglike)**(double * Cube, int ndim, double * phi, int nderived)<br>Main interface function from PolyChord to ScannerBit-supplied loglikelihood function.  |
| void | **[dumper](/documentation/code/classes/classgambit_1_1polychord__1__17__1_1_1loglikewrapper/#function-dumper)**(int ndead, int nlive, int npars, double * live, double * dead, double * logweights, double , double )<br>Main interface to PolyChord dumper routine  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| std::unordered_map< std::string, int > | **[index_map](/documentation/code/classes/classgambit_1_1polychord__1__17__1_1_1loglikewrapper/#variable-index-map)**  |
| [Settings](/documentation/code/classes/structsettings/) | **[boundSettings](/documentation/code/classes/classgambit_1_1polychord__1__17__1_1_1loglikewrapper/#variable-boundsettings)** <br>copy of the settings in use.  |
| int | **[printer_speed_threshold](/documentation/code/classes/classgambit_1_1polychord__1__17__1_1_1loglikewrapper/#variable-printer-speed-threshold)**  |

## Public Functions Documentation

### function LogLikeWrapper

```
LogLikeWrapper(
    scanPtr loglike,
    printer_interface & printer
)
```

Constructor. 

[LogLikeWrapper](/documentation/code/classes/classgambit_1_1polychord__1__17__1_1_1loglikewrapper/) Constructor. 


### function LogLike

```
double LogLike(
    double * Cube,
    int ndim,
    double * phi,
    int nderived
)
```

Main interface function from PolyChord to ScannerBit-supplied loglikelihood function. 

Main interface function from PolyChord to ScannerBit-supplied loglikelihood function This is the function that will be passed to PolyChord as the loglike callback routine

Input arguments ndim = dimensionality (total number of free parameters) of the problem nderived = total number of derived parameters Cube[ndim] = ndim parameters

Output arguments phi[nderived] = nderived devired parameters lnew = loglikelihood 


### function dumper

```
void dumper(
    int ndead,
    int nlive,
    int npars,
    double * live,
    double * dead,
    double * logweights,
    double ,
    double 
)
```

Main interface to PolyChord dumper routine 

Main interface to PolyChord dumper routine The dumper routine will be called every time the live points compress by a factor compression_factor PolyChord does not need to the user to do anything. User can use the arguments in whichever way they want

Arguments:

ndead = total number of discarded points for posterior usage nlive = total number of live points nPar = total number of parameters + 2 (free + derived + 2) live[nlive*npars] = 2D array containing the last set of live points (physical parameters plus derived parameters + birth contour + death contour) dead[ndead*npars] = posterior distribution containing nSamples points. Each sample has nPar parameters (physical + derived) along with the their loglike value & posterior probability logweights[ndead] = log of posterior weighting of dead points. Use this to turn them into posterior weighted samples logZ = log evidence value logZerr = error on log evidence value 


## Public Attributes Documentation

### variable index_map

```
std::unordered_map< std::string, int > index_map;
```


### variable boundSettings

```
Settings boundSettings;
```

copy of the settings in use. 

### variable printer_speed_threshold

```
int printer_speed_threshold = -1;
```


Disable printing for speeds greater and equal than Speeds start at 0 A value of -1 means that all evaluations are printed 


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000