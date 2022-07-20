---
title: 'struct Gambit::DarkBit::SimpleHist'
description: 'Histogram class for cascade decays. '

---








Histogram class for cascade decays. 


`#include <SimpleHist.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[SimpleHist](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-simplehist)**() |
| | **[SimpleHist](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-simplehist)**(int nBins, double Emin, double Emax, bool logscale) |
| | **[SimpleHist](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-simplehist)**(std::vector< double > binLower) |
| void | **[addEvent](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-addevent)**(double E, double weight =1.0)<br>Add an entry to histogram.  |
| void | **[addToBin](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-addtobin)**(int bin, double weight =1.0)<br>Add an entry to a specified bin.  |
| void | **[addBox](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-addbox)**(double Emin, double Emax, double weight =1.0)<br>Add a box spectrum to the histogram.  |
| void | **[addHistAsWeights_sameBin](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-addhistasweights-samebin)**([SimpleHist](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/) & in) |
| double | **[getError](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-geterror)**(int bin) const<br>Get error for a specified bin.  |
| double | **[getRelError](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-getrelerror)**(int bin) const<br>Get relative error for a specified bin.  |
| void | **[divideByBinSize](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-dividebybinsize)**()<br>Divide all histogram bins by the respective bin size.  |
| void | **[multiply](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-multiply)**(double x)<br>Multiply all bin contents by x.  |
| int | **[findIndex](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-findindex)**(double val) const<br>Find bin index for given value.  |
| double | **[binSize](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-binsize)**(int bin) const<br>Retrieve size of given bins.  |
| double | **[binCenter](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-bincenter)**(int bin) const<br>Get central value of bin.  |
| std::vector< double > | **[getBinCenters](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-getbincenters)**() const<br>Double get central values of all bins.  |
| const std::vector< double > & | **[getBinValues](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-getbinvalues)**() const |
| void | **[getEdges](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#function-getedges)**(double & lower, double & upper) const |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| std::vector< double > | **[binLower](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#variable-binlower)**  |
| std::vector< double > | **[binVals](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#variable-binvals)**  |
| std::vector< double > | **[wtSq](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#variable-wtsq)** <br>Sum of the squares of all weights.  |
| int | **[nBins](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/#variable-nbins)**  |

## Public Functions Documentation

### function SimpleHist

```
inline SimpleHist()
```


### function SimpleHist

```
SimpleHist(
    int nBins,
    double Emin,
    double Emax,
    bool logscale
)
```


### function SimpleHist

```
SimpleHist(
    std::vector< double > binLower
)
```


Constructor taking lower bins edges as input. Last element will be used as upper bin edge for upper bin (Vector with N elements will give N-1 bins). 


### function addEvent

```
void addEvent(
    double E,
    double weight =1.0
)
```

Add an entry to histogram. 

### function addToBin

```
void addToBin(
    int bin,
    double weight =1.0
)
```

Add an entry to a specified bin. 

### function addBox

```
void addBox(
    double Emin,
    double Emax,
    double weight =1.0
)
```

Add a box spectrum to the histogram. 

### function addHistAsWeights_sameBin

```
void addHistAsWeights_sameBin(
    SimpleHist & in
)
```


Add content of input histogram as weights. Important: Input histogram MUST have identical binning for this to give correct results. 


### function getError

```
double getError(
    int bin
) const
```

Get error for a specified bin. 

### function getRelError

```
double getRelError(
    int bin
) const
```

Get relative error for a specified bin. 

### function divideByBinSize

```
void divideByBinSize()
```

Divide all histogram bins by the respective bin size. 

### function multiply

```
void multiply(
    double x
)
```

Multiply all bin contents by x. 

### function findIndex

```
int findIndex(
    double val
) const
```

Find bin index for given value. 

### function binSize

```
double binSize(
    int bin
) const
```

Retrieve size of given bins. 

### function binCenter

```
double binCenter(
    int bin
) const
```

Get central value of bin. 

### function getBinCenters

```
std::vector< double > getBinCenters() const
```

Double get central values of all bins. 

### function getBinValues

```
const std::vector< double > & getBinValues() const
```


### function getEdges

```
void getEdges(
    double & lower,
    double & upper
) const
```


## Public Attributes Documentation

### variable binLower

```
std::vector< double > binLower;
```


### variable binVals

```
std::vector< double > binVals;
```


### variable wtSq

```
std::vector< double > wtSq;
```

Sum of the squares of all weights. 

### variable nBins

```
int nBins;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000