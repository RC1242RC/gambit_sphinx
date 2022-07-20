---
title: 'class Gambit::ColliderBit::Analysis_CMS_13TeV_MONOJET_36invfb'
description: '[CMS]() Run 2 monojet analysis (no W/Z region) with 36/fb of data. '

---








[CMS]() Run 2 monojet analysis (no W/Z region) with 36/fb of data.  [More...](#detailed-description)

Inherits from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Analysis_CMS_13TeV_MONOJET_36invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__13tev__monojet__36invfb/#function-analysis-cms-13tev-monojet-36invfb)**() |
| void | **[run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__13tev__monojet__36invfb/#function-run)**(const Event * event) |
| virtual void | **[combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__13tev__monojet__36invfb/#function-combine)**(const [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other)<br>Combine the variables of another copy of this analysis (typically on another thread) into this one.  |
| virtual void | **[collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__13tev__monojet__36invfb/#function-collect-results)**()<br>Register results objects with the results for each SR; obs & bkg numbers from the CONF note.  |

## Protected Functions

|                | Name           |
| -------------- | -------------- |
| virtual void | **[analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__13tev__monojet__36invfb/#function-analysis-specific-reset)**()<br>Reset the analysis-specific variables.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| constexpr const char * | **[detector](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__13tev__monojet__36invfb/#variable-detector)**  |
| const size_t | **[NUMSR](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__13tev__monojet__36invfb/#variable-numsr)**  |
| std::map< string, [EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/) > | **[_counters](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__13tev__monojet__36invfb/#variable--counters)**  |
| [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) | **[_cutflow](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__13tev__monojet__36invfb/#variable--cutflow)**  |

## Additional inherited members

**Public Functions inherited from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)**

|                | Name           |
| -------------- | -------------- |
| void | **[analyze](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analyze)**(const HEPUtils::Event & e)<br>Analyze the event (accessed by reference).  |
| void | **[analyze](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analyze)**(const HEPUtils::Event * e)<br>Analyze the event (accessed by pointer).  |
| void | **[add](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-add)**([Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other)<br>Add the results of another analysis to this one. Argument is not const, because the other needs to be able to gather its results if necessary.  |
| | **[Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analysis)**()<br>Construction.  |
| virtual | **[~Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-~analysis)**()<br>Destruction.  |
| void | **[reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-reset)**()<br>Public method to reset this instance for reuse, avoiding the need for "new" or "delete".  |
| double | **[luminosity](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-luminosity)**() const<br>Return the integrated luminosity.  |
| void | **[set_luminosity](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-set-luminosity)**(double lumi)<br>Set the integrated luminosity.  |
| void | **[set_analysis_name](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-set-analysis-name)**(str aname)<br>Set the analysis name.  |
| str | **[analysis_name](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analysis-name)**()<br>Get the analysis name.  |
| const [AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/) & | **[get_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-get-results)**()<br>Get the collection of [SignalRegionData]() for likelihood computation.  |
| const [AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/) & | **[get_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-get-results)**(str & warning)<br>An overload of [get_results()](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-get-results) with some additional consistency checks.  |
| [AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/) * | **[get_results_ptr](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-get-results-ptr)**()<br>Get a (non-const!) pointer to _results.  |
| [AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/) * | **[get_results_ptr](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-get-results-ptr)**(str & warning)<br>An overload of [get_results_ptr()](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-get-results-ptr) with some additional consistency checks.  |
| void | **[scale](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-scale)**(double xsec_per_event)<br>Scale by xsec per event.  |

**Protected Functions inherited from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)**

|                | Name           |
| -------------- | -------------- |
| void | **[add_result](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-add-result)**(const [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/) & sr)<br>Add the given result to the internal results list.  |
| void | **[set_covariance](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-set-covariance)**(const Eigen::MatrixXd & srcov)<br>Set the covariance matrix, expressing SR correlations.  |
| void | **[set_covariance](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-set-covariance)**(const std::vector< std::vector< double >> & srcov)<br>A convenience function for setting the SR covariance from a nested vector/initialiser list.  |


## Detailed Description

```
class Gambit::ColliderBit::Analysis_CMS_13TeV_MONOJET_36invfb;
```

[CMS]() Run 2 monojet analysis (no W/Z region) with 36/fb of data. 

**Todo**: Add W/Z region with AKT8 jets and 2/1 n-subjettiness ratio cut 
## Public Functions Documentation

### function Analysis_CMS_13TeV_MONOJET_36invfb

```
inline Analysis_CMS_13TeV_MONOJET_36invfb()
```


### function run

```
inline void run(
    const Event * event
)
```


### function combine

```
inline virtual void combine(
    const Analysis * other
)
```

Combine the variables of another copy of this analysis (typically on another thread) into this one. 

**Reimplements**: [Gambit::ColliderBit::Analysis::combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-combine)


### function collect_results

```
inline virtual void collect_results()
```

Register results objects with the results for each SR; obs & bkg numbers from the CONF note. 

**Reimplements**: [Gambit::ColliderBit::Analysis::collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-collect-results)


## Protected Functions Documentation

### function analysis_specific_reset

```
inline virtual void analysis_specific_reset()
```

Reset the analysis-specific variables. 

**Reimplements**: [Gambit::ColliderBit::Analysis::analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analysis-specific-reset)


TodoNeed to also clear/reset cutflow, but it currently has no method for that 


## Public Attributes Documentation

### variable detector

```
static constexpr const char * detector = "CMS";
```


### variable NUMSR

```
static const size_t NUMSR = 22;
```


### variable _counters

```
std::map< string, EventCounter > _counters = {
        {"SR-0", EventCounter("SR-0")},
        {"SR-1", EventCounter("SR-1")},
        {"SR-2", EventCounter("SR-2")},
        {"SR-3", EventCounter("SR-3")},
        {"SR-4", EventCounter("SR-4")},
        {"SR-5", EventCounter("SR-5")},
        {"SR-6", EventCounter("SR-6")},
        {"SR-7", EventCounter("SR-7")},
        {"SR-8", EventCounter("SR-8")},
        {"SR-9", EventCounter("SR-9")},
        {"SR-10", EventCounter("SR-10")},
        {"SR-11", EventCounter("SR-11")},
        {"SR-12", EventCounter("SR-12")},
        {"SR-13", EventCounter("SR-13")},
        {"SR-14", EventCounter("SR-14")},
        {"SR-15", EventCounter("SR-15")},
        {"SR-16", EventCounter("SR-16")},
        {"SR-17", EventCounter("SR-17")},
        {"SR-18", EventCounter("SR-18")},
        {"SR-19", EventCounter("SR-19")},
        {"SR-20", EventCounter("SR-20")},
        {"SR-21", EventCounter("SR-21")},
      };
```


### variable _cutflow

```
Cutflow _cutflow;
```


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000