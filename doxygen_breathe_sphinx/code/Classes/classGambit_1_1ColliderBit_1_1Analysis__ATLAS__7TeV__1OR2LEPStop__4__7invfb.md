---
title: 'class Gambit::ColliderBit::Analysis_ATLAS_7TeV_1OR2LEPStop_4_7invfb'

description: "[No description available]"

---








[No description available]

Inherits from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)

## Public Types

|                | Name           |
| -------------- | -------------- |
| enum| **[cutflowEnum](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#enum-cutflowenum)** { CUTFLOWMAP =(f)} |
| enum| **[varEnum](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#enum-varenum)** { VARMAP =(f)} |

## Public Functions

|                | Name           |
| -------------- | -------------- |
| std::vector< double > | **[calcNuPz](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#function-calcnupz)**(double Mw, P4 metMom, P4 lepMom) |
| P4 | **[getBestHadronicTop](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#function-getbesthadronictop)**(std::vector< const Jet * > bJets, std::vector< const Jet * > lightJets, const P4 & leptonMom, const P4 & metMom, double width, double mean) |
| double | **[calcMt](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#function-calcmt)**(P4 metVec, P4 lepVec) |
| double | **[calcSqrtSSubMin](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#function-calcsqrtssubmin)**(P4 visibleSubsystem, P4 invisbleSubsystem) |
| void | **[getBJets](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#function-getbjets)**(std::vector< const Jet * > & jets, std::vector< const Jet * > * bJets, std::vector< const Jet * > * lightJets) |
| | **[Analysis_ATLAS_7TeV_1OR2LEPStop_4_7invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#function-analysis-atlas-7tev-1or2lepstop-4-7invfb)**() |
| virtual void | **[run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#function-run)**(const HEPUtils::Event * event) |
| virtual void | **[combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#function-combine)**(const [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other)<br>Combine the variables of another copy of this analysis (typically on another thread) into this one.  |
| virtual void | **[collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#function-collect-results)**()<br>Gather together the info for likelihood calculation.  |

## Protected Functions

|                | Name           |
| -------------- | -------------- |
| virtual void | **[analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#function-analysis-specific-reset)**()<br>Reset the analysis-specific variables.  |
| void | **[incrementCut](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#function-incrementcut)**(int cutIndex) |
| void | **[saveCutFlow](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#function-savecutflow)**() |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| constexpr const char * | **[detector](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#variable-detector)**  |
| const std::vector< std::string > | **[cutflowNames](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#variable-cutflownames)**  |
| const std::vector< std::string > | **[varNames](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#variable-varnames)**  |
| std::map< std::string, std::vector< double > > | **[varResults](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#variable-varresults)**  |
| std::map< std::string, int > | **[cutflows](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#variable-cutflows)**  |
| double | **[num1LSR](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#variable-num1lsr)**  |
| double | **[num2LSR1](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#variable-num2lsr1)**  |
| double | **[num2LSR2](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__7tev__1or2lepstop__4__7invfb/#variable-num2lsr2)**  |

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


## Public Types Documentation

### enum cutflowEnum

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| CUTFLOWMAP | =(f)|   |




### enum varEnum

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| VARMAP | =(f)|   |




## Public Functions Documentation

### function calcNuPz

```
inline std::vector< double > calcNuPz(
    double Mw,
    P4 metMom,
    P4 lepMom
)
```


### function getBestHadronicTop

```
inline P4 getBestHadronicTop(
    std::vector< const Jet * > bJets,
    std::vector< const Jet * > lightJets,
    const P4 & leptonMom,
    const P4 & metMom,
    double width,
    double mean
)
```


### function calcMt

```
inline double calcMt(
    P4 metVec,
    P4 lepVec
)
```


### function calcSqrtSSubMin

```
inline double calcSqrtSSubMin(
    P4 visibleSubsystem,
    P4 invisbleSubsystem
)
```


### function getBJets

```
inline void getBJets(
    std::vector< const Jet * > & jets,
    std::vector< const Jet * > * bJets,
    std::vector< const Jet * > * lightJets
)
```


We assume that b jets have previously been 100% tagged


### function Analysis_ATLAS_7TeV_1OR2LEPStop_4_7invfb

```
inline Analysis_ATLAS_7TeV_1OR2LEPStop_4_7invfb()
```


The constructor that should initialize some variables 


### function run

```
inline virtual void run(
    const HEPUtils::Event * event
)
```


**Parameters**: 

  * **event** an event contain particle and jet information 


**Reimplements**: [Gambit::ColliderBit::Analysis::run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-run)


Performs the main part of the analysis 


### function combine

```
inline virtual void combine(
    const Analysis * other
)
```

Combine the variables of another copy of this analysis (typically on another thread) into this one. 

**Parameters**: 

  * **other** results from another thread 


**Reimplements**: [Gambit::ColliderBit::Analysis::combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-combine)


Adds results from other threads if OMP_NUM_THREAD != 1 


### function collect_results

```
inline virtual void collect_results()
```

Gather together the info for likelihood calculation. 

**Reimplements**: [Gambit::ColliderBit::Analysis::collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-collect-results)


## Protected Functions Documentation

### function analysis_specific_reset

```
inline virtual void analysis_specific_reset()
```

Reset the analysis-specific variables. 

**Reimplements**: [Gambit::ColliderBit::Analysis::analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analysis-specific-reset)


### function incrementCut

```
inline void incrementCut(
    int cutIndex
)
```


### function saveCutFlow

```
inline void saveCutFlow()
```


## Public Attributes Documentation

### variable detector

```
static constexpr const char * detector = "ATLAS";
```


### variable cutflowNames

```
const std::vector< std::string > cutflowNames = {CUTFLOWMAP(g)};
```


### variable varNames

```
const std::vector< std::string > varNames = {VARMAP(g)};
```


### variable varResults

```
std::map< std::string, std::vector< double > > varResults;
```


### variable cutflows

```
std::map< std::string, int > cutflows;
```


### variable num1LSR

```
double num1LSR =0;
```


### variable num2LSR1

```
double num2LSR1 =0;
```


### variable num2LSR2

```
double num2LSR2 =0;
```


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000