---
title: 'class Gambit::ColliderBit::Analysis_CMS_8TeV_MultiLEP_3Lep_20invfb'

description: "[No description available]"

---








[No description available]

Inherits from [Gambit::ColliderBit::Analysis_CMS_8TeV_MultiLEP_20invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__20invfb/), [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Analysis_CMS_8TeV_MultiLEP_3Lep_20invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__3lep__20invfb/#function-analysis-cms-8tev-multilep-3lep-20invfb)**() |
| virtual void | **[collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__3lep__20invfb/#function-collect-results)**()<br>Gather together the info for likelihood calculation.  |

## Additional inherited members

**Public Functions inherited from [Gambit::ColliderBit::Analysis_CMS_8TeV_MultiLEP_20invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__20invfb/)**

|                | Name           |
| -------------- | -------------- |
| | **[Analysis_CMS_8TeV_MultiLEP_20invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__20invfb/#function-analysis-cms-8tev-multilep-20invfb)**() |
| virtual void | **[run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__20invfb/#function-run)**(const HEPUtils::Event * event) |
| virtual void | **[combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__20invfb/#function-combine)**(const [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other)<br>Combine the variables of another copy of this analysis (typically on another thread) into this one.  |

**Protected Functions inherited from [Gambit::ColliderBit::Analysis_CMS_8TeV_MultiLEP_20invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__20invfb/)**

|                | Name           |
| -------------- | -------------- |
| virtual void | **[analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__20invfb/#function-analysis-specific-reset)**()<br>Reset the analysis-specific variables.  |

**Public Attributes inherited from [Gambit::ColliderBit::Analysis_CMS_8TeV_MultiLEP_20invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__20invfb/)**

|                | Name           |
| -------------- | -------------- |
| constexpr const char * | **[detector](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__20invfb/#variable-detector)**  |

**Protected Attributes inherited from [Gambit::ColliderBit::Analysis_CMS_8TeV_MultiLEP_20invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__20invfb/)**

|                | Name           |
| -------------- | -------------- |
| std::map< string, double > | **[_numSR](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__20invfb/#variable--numsr)**  |

**Public Functions inherited from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)**

|                | Name           |
| -------------- | -------------- |
| void | **[analyze](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analyze)**(const HEPUtils::Event & e)<br>Analyze the event (accessed by reference).  |
| void | **[analyze](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analyze)**(const HEPUtils::Event * e)<br>Analyze the event (accessed by pointer).  |
| void | **[add](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-add)**([Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other)<br>Add the results of another analysis to this one. Argument is not const, because the other needs to be able to gather its results if necessary.  |
| virtual void | **[combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-combine)**(const [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other) =0<br>Add the analysis-specific variables of another analysis to this one.  |
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
| virtual void | **[run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-run)**(const HEPUtils::Event * ) =0 |
| void | **[add_result](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-add-result)**(const [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/) & sr)<br>Add the given result to the internal results list.  |
| void | **[set_covariance](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-set-covariance)**(const Eigen::MatrixXd & srcov)<br>Set the covariance matrix, expressing SR correlations.  |
| void | **[set_covariance](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-set-covariance)**(const std::vector< std::vector< double >> & srcov)<br>A convenience function for setting the SR covariance from a nested vector/initialiser list.  |
| virtual void | **[analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analysis-specific-reset)**() =0<br>Reset the analysis-specific variables.  |


## Public Functions Documentation

### function Analysis_CMS_8TeV_MultiLEP_3Lep_20invfb

```
inline Analysis_CMS_8TeV_MultiLEP_3Lep_20invfb()
```


### function collect_results

```
inline virtual void collect_results()
```

Gather together the info for likelihood calculation. 

**Reimplements**: [Gambit::ColliderBit::Analysis_CMS_8TeV_MultiLEP_20invfb::collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__cms__8tev__multilep__20invfb/#function-collect-results)


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000