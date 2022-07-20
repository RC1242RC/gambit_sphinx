---
title: 'struct Gambit::ColliderBit::AnalysisData'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <AnalysisData.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-analysisdata)**()<br>Default constructor.  |
| | **[AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-analysisdata)**(const std::string & name)<br>Constructor with analysis name.  |
| | **[AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-analysisdata)**(const std::vector< [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/) > & srds, const Eigen::MatrixXd & cov =Eigen::MatrixXd())<br>Constructor from a list of [SignalRegionData]() and an optional correlation (or covariance?) matrix.  |
| void | **[clear](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-clear)**() |
| size_t | **[size](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-size)**() const<br>Number of analyses.  |
| bool | **[empty](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-empty)**() const<br>Is this container empty of signal regions?  |
| bool | **[hasCorrs](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-hascorrs)**() const<br>Is there non-null correlation data?  |
| void | **[add](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-add)**(const [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/) & srd)<br>Add a [SignalRegionData]().  |
| bool | **[check](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-check)**() const<br>Check that the SRData list and the covariance matrix are consistent.  |
| void | **[pythonize_me](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-pythonize-me)**() const |
| [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/) & | **[operator[]](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-operator[])**(size_t i)<br>Access the i'th signal region's data.  |
| const [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/) & | **[operator[]](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-operator[])**(size_t i) const<br>Access the i'th signal region's data (const)  |
| std::vector< [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/) >::iterator | **[begin](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-begin)**()<br>Iterators (sugar for direct access to this->srdata)  |
| std::vector< [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/) >::const_iterator | **[begin](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-begin)**() const |
| std::vector< [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/) >::iterator | **[end](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-end)**() |
| std::vector< [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/) >::const_iterator | **[end](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#function-end)**() const |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| bool | **[event_gen_BYPASS](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#variable-event-gen-bypass)**  |
| std::string | **[analysis_name](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#variable-analysis-name)** <br>[Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) name.  |
| std::vector< [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/) > | **[srdata](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#variable-srdata)** <br>List of signal regions' data summaries.  |
| std::map< std::string, int > | **[srdata_identifiers](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#variable-srdata-identifiers)** <br>Map of names and indices of all entries in srdata, for easy lookup.  |
| Eigen::MatrixXd | **[srcov](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/#variable-srcov)** <br>Optional covariance matrix between SRs (0x0 null matrix = no correlation info)  |

## Detailed Description

```
struct Gambit::ColliderBit::AnalysisData;
```


**Todo**: Access by name? 

Guarantee ordering? 

How to combine covariance matrices &ndash; require? 

A container for the result of an analysis, potentially with many signal regions and correlations

## Public Functions Documentation

### function AnalysisData

```
inline AnalysisData()
```

Default constructor. 

### function AnalysisData

```
inline AnalysisData(
    const std::string & name
)
```

Constructor with analysis name. 

### function AnalysisData

```
inline AnalysisData(
    const std::vector< SignalRegionData > & srds,
    const Eigen::MatrixXd & cov =Eigen::MatrixXd()
)
```

Constructor from a list of [SignalRegionData]() and an optional correlation (or covariance?) matrix. 

If corrs is a null matrix (the default), this [AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/) is to be interpreted as having no correlation information, and hence the likelihood calculation should use the single best-expected-limit SR. 


### function clear

```
inline void clear()
```


**Todo**: It'd be good to _not_ have to re-enter most of the SRData and the covariance on every point: they don't change 

Clear the list of [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/), and nullify the covariance matrix 


### function size

```
inline size_t size() const
```

Number of analyses. 

### function empty

```
inline bool empty() const
```

Is this container empty of signal regions? 

### function hasCorrs

```
inline bool hasCorrs() const
```

Is there non-null correlation data? 

### function add

```
inline void add(
    const SignalRegionData & srd
)
```

Add a [SignalRegionData](). 

**Todo**: Allow naming the SRs? 

### function check

```
inline bool check() const
```

Check that the SRData list and the covariance matrix are consistent. 

### function pythonize_me

```
void pythonize_me() const
```


bjf> Experimental! But already useful for helping me convert the key numbers from these analyses to Python for the p-value calculuations.

bjf> Experimental! But already useful for helping me convert the key numbers from these analyses to Python for the p-value calculuations. This is a dumb place to define this, but there is no cpp file for [AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/) and I can't be bothered making one. 


Could record or something, but for now just dump to stdout


### function operator[]

```
inline SignalRegionData & operator[](
    size_t i
)
```

Access the i'th signal region's data. 

### function operator[]

```
inline const SignalRegionData & operator[](
    size_t i
) const
```

Access the i'th signal region's data (const) 

### function begin

```
inline std::vector< SignalRegionData >::iterator begin()
```

Iterators (sugar for direct access to this->srdata) 

### function begin

```
inline std::vector< SignalRegionData >::const_iterator begin() const
```


### function end

```
inline std::vector< SignalRegionData >::iterator end()
```


### function end

```
inline std::vector< SignalRegionData >::const_iterator end() const
```


## Public Attributes Documentation

### variable event_gen_BYPASS

```
bool event_gen_BYPASS = false;
```


### variable analysis_name

```
std::string analysis_name;
```

[Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) name. 

### variable srdata

```
std::vector< SignalRegionData > srdata;
```

List of signal regions' data summaries. 

### variable srdata_identifiers

```
std::map< std::string, int > srdata_identifiers;
```

Map of names and indices of all entries in srdata, for easy lookup. 

### variable srcov

```
Eigen::MatrixXd srcov;
```

Optional covariance matrix between SRs (0x0 null matrix = no correlation info) 

-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000