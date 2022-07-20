---
title: 'class Gambit::ColliderBit::Analysis_ATLAS_13TeV_0LEP_13invfb'
description: '[ATLAS]() Run 2 0-lepton jet+MET SUSY analysis, with 13/fb of data. '

---








[ATLAS]() Run 2 0-lepton jet+MET SUSY analysis, with 13/fb of data.  [More...](#detailed-description)

Inherits from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Analysis_ATLAS_13TeV_0LEP_13invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__0lep__13invfb/#function-analysis-atlas-13tev-0lep-13invfb)**() |
| void | **[run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__0lep__13invfb/#function-run)**(const Event * event) |
| virtual void | **[combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__0lep__13invfb/#function-combine)**(const [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other)<br>Combine the variables of another copy of this analysis (typically on another thread) into this one.  |
| virtual void | **[collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__0lep__13invfb/#function-collect-results)**()<br>Register results objects with the results for each SR; obs & bkg numbers from the CONF note.  |

## Protected Functions

|                | Name           |
| -------------- | -------------- |
| virtual void | **[analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__0lep__13invfb/#function-analysis-specific-reset)**()<br>Reset the analysis-specific variables.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| constexpr const char * | **[detector](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__0lep__13invfb/#variable-detector)**  |
| std::map< string, [EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/) > | **[_counters](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__0lep__13invfb/#variable--counters)**  |
| [Cutflows](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/) | **[_flows](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__0lep__13invfb/#variable--flows)**  |

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
class Gambit::ColliderBit::Analysis_ATLAS_13TeV_0LEP_13invfb;
```

[ATLAS]() Run 2 0-lepton jet+MET SUSY analysis, with 13/fb of data. 

Based on: [https://cds.cern.ch/record/2206252](https://cds.cern.ch/record/2206252)[https://atlas.web.cern.ch/Atlas/GROUPS/PHYSICS/CONFNOTES/ATLAS-CONF-2016-078/](https://atlas.web.cern.ch/Atlas/GROUPS/PHYSICS/CONFNOTES/ATLAS-CONF-2016-078/)

Recursive jigsaw reconstruction signal regions are currently not included 

## Public Functions Documentation

### function Analysis_ATLAS_13TeV_0LEP_13invfb

```
inline Analysis_ATLAS_13TeV_0LEP_13invfb()
```


### function run

```
inline void run(
    const Event * event
)
```


TodoDrop b-tag if pT < 50 GeV or |eta| > 2.5? 

TodoUnless b-tagged (and pT > 50 && abseta < 2.5) 

TodoActually only within 0.2&ndash;0.4... 

TodoActually only within 0.2&ndash;0.4... 

Within 0.2, discard the _jet_ based on jet track vs. muon criteria... can't be done here


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


## Public Attributes Documentation

### variable detector

```
static constexpr const char * detector = "ATLAS";
```


### variable _counters

```
std::map< string, EventCounter > _counters = {
        {"2j-0800", EventCounter("2j-0800")},
        {"2j-1200", EventCounter("2j-1200")},
        {"2j-1600", EventCounter("2j-1600")},
        {"2j-2000", EventCounter("2j-2000")},
        {"3j-1200", EventCounter("3j-1200")},
        {"4j-1000", EventCounter("4j-1000")},
        {"4j-1400", EventCounter("4j-1400")},
        {"4j-1800", EventCounter("4j-1800")},
        {"4j-2200", EventCounter("4j-2200")},
        {"4j-2600", EventCounter("4j-2600")},
        {"5j-1400", EventCounter("5j-1400")},
        {"6j-1800", EventCounter("6j-1800")},
        {"6j-2200", EventCounter("6j-2200")},
      };
```


### variable _flows

```
Cutflows _flows;
```


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000