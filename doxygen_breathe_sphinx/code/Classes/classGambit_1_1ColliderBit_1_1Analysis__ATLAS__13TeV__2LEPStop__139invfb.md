---
title: 'class Gambit::ColliderBit::Analysis_ATLAS_13TeV_2LEPStop_139invfb'

description: "[No description available]"

---








[No description available]

Inherits from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)

Inherited by [Gambit::ColliderBit::Analysis_ATLAS_13TeV_2LEPStop_exclusive_139invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__2lepstop__exclusive__139invfb/), [Gambit::ColliderBit::Analysis_ATLAS_13TeV_2LEPStop_inclusive_139invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__2lepstop__inclusive__139invfb/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Analysis_ATLAS_13TeV_2LEPStop_139invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__2lepstop__139invfb/#function-analysis-atlas-13tev-2lepstop-139invfb)**() |
| virtual void | **[run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__2lepstop__139invfb/#function-run)**(const HEPUtils::Event * event) |
| virtual void | **[combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__2lepstop__139invfb/#function-combine)**(const [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other)<br>Combine the variables of another copy of this analysis (typically on another thread) into this one.  |
| virtual void | **[collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__2lepstop__139invfb/#function-collect-results)**()<br>Gather together the info for likelihood calculation.  |

## Protected Functions

|                | Name           |
| -------------- | -------------- |
| virtual void | **[analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__2lepstop__139invfb/#function-analysis-specific-reset)**()<br>Reset the analysis-specific variables.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| std::map< string, [EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/) > | **[_counters](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__2lepstop__139invfb/#variable--counters)**  |
| constexpr const char * | **[detector](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__2lepstop__139invfb/#variable-detector)**  |

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


## Public Functions Documentation

### function Analysis_ATLAS_13TeV_2LEPStop_139invfb

```
inline Analysis_ATLAS_13TeV_2LEPStop_139invfb()
```


### function run

```
inline virtual void run(
    const HEPUtils::Event * event
)
```


**Reimplements**: [Gambit::ColliderBit::Analysis::run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-run)


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

Gather together the info for likelihood calculation. 

**Reimplements**: [Gambit::ColliderBit::Analysis::collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-collect-results)


**Reimplemented by**: [Gambit::ColliderBit::Analysis_ATLAS_13TeV_2LEPStop_inclusive_139invfb::collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__2lepstop__inclusive__139invfb/#function-collect-results), [Gambit::ColliderBit::Analysis_ATLAS_13TeV_2LEPStop_exclusive_139invfb::collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__2lepstop__exclusive__139invfb/#function-collect-results)


## Protected Functions Documentation

### function analysis_specific_reset

```
inline virtual void analysis_specific_reset()
```

Reset the analysis-specific variables. 

**Reimplements**: [Gambit::ColliderBit::Analysis::analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analysis-specific-reset)


## Public Attributes Documentation

### variable _counters

```
std::map< string, EventCounter > _counters = {
            {"SR2bSF110", EventCounter("SR2bSF110")},
            {"SR2bSF120", EventCounter("SR2bSF120")},
            {"SR2bSF140", EventCounter("SR2bSF140")},
            {"SR2bSF160", EventCounter("SR2bSF160")},
            {"SR2bSF180", EventCounter("SR2bSF180")},
            {"SR2bSF220", EventCounter("SR2bSF220")},
            
            {"SR2bDF110", EventCounter("SR2bDF110")},
            {"SR2bDF120", EventCounter("SR2bDF120")},
            {"SR2bDF140", EventCounter("SR2bDF140")},
            {"SR2bDF160", EventCounter("SR2bDF160")},
            {"SR2bDF180", EventCounter("SR2bDF180")},
            {"SR2bDF220", EventCounter("SR2bDF220")},
            
            {"SR2bInc110", EventCounter("SR2bInc110")},
            {"SR2bInc120", EventCounter("SR2bInc120")},
            {"SR2bInc140", EventCounter("SR2bInc140")},
            {"SR2bInc160", EventCounter("SR2bInc160")},
            {"SR2bInc180", EventCounter("SR2bInc180")},
            {"SR2bInc200", EventCounter("SR2bInc200")},
            {"SR2bInc220", EventCounter("SR2bInc220")},
        };
```


### variable detector

```
static constexpr const char * detector = "ATLAS";
```


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000