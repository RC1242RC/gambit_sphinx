---
title: 'class Gambit::SpecBit::QedQcdWrapper'

description: "[No description available]"

---








[No description available]

Inherits from Spec< QedQcdWrapper >

## Public Functions

|                | Name           |
| -------------- | -------------- |
| virtual double | **[hard_upper](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-hard-upper)**() const |
| virtual double | **[soft_upper](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-soft-upper)**() const |
| virtual double | **[soft_lower](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-soft-lower)**() const |
| virtual double | **[hard_lower](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-hard-lower)**() const |
| | **[QedQcdWrapper](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-qedqcdwrapper)**()<br>[QedQcdWrapper](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/) member functions.  |
| | **[QedQcdWrapper](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-qedqcdwrapper)**(const softsusy::QedQcd & model, const SMInputs & input) |
| virtual int | **[get_numbers_stable_particles](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-get-numbers-stable-particles)**() const |
| GetterMaps | **[fill_getter_maps](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-fill-getter-maps)**()<br>Map fillers.  |
| SetterMaps | **[fill_setter_maps](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-fill-setter-maps)**() |
| virtual | **[~QedQcdWrapper](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-~qedqcdwrapper)**()<br>Destructor.  |
| Model & | **[get_Model](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-get-model)**() |
| Input & | **[get_Input](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-get-input)**() |
| const Model & | **[get_Model](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-get-model)**() const |
| const Input & | **[get_Input](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-get-input)**() const |
| virtual void | **[add_to_SLHAea](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-add-to-slhaea)**(int , SLHAstruct & slha) const<br>Add QEDQCD information to an SLHAea object.  |
| virtual double | **[GetScale](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-getscale)**() const<br>RunningPars interface overrides.  |
| virtual void | **[SetScale](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-setscale)**(double scale)<br>Manually define the current renormalisation scale (do this at own risk!)  |
| virtual void | **[RunToScaleOverride](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#function-runtoscaleoverride)**(double end_scale)<br>Run masses and couplings to end_scale.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| double | **[hardup](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#variable-hardup)**  |
| double | **[softup](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#variable-softup)**  |
| double | **[softlow](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#variable-softlow)**  |
| double | **[hardlow](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/#variable-hardlow)**  |

## Public Functions Documentation

### function hard_upper

```
inline virtual double hard_upper() const
```


### function soft_upper

```
inline virtual double soft_upper() const
```


### function soft_lower

```
inline virtual double soft_lower() const
```


### function hard_lower

```
inline virtual double hard_lower() const
```


### function QedQcdWrapper

```
QedQcdWrapper()
```

[QedQcdWrapper](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/) member functions. 

Constructors 


### function QedQcdWrapper

```
QedQcdWrapper(
    const softsusy::QedQcd & model,
    const SMInputs & input
)
```


### function get_numbers_stable_particles

```
virtual int get_numbers_stable_particles() const
```


Currently unused virtual functions 


### function fill_getter_maps

```
static GetterMaps fill_getter_maps()
```

Map fillers. 

mass1 - mass dimension 1 parameters


### function fill_setter_maps

```
static SetterMaps fill_setter_maps()
```


Pole_Mass - Pole mass parameters

Functions utilising the "extraI" signature (Zero-index, "Inputs" object used as argument)


### function ~QedQcdWrapper

```
virtual ~QedQcdWrapper()
```

Destructor. 

### function get_Model

```
inline Model & get_Model()
```


### function get_Input

```
inline Input & get_Input()
```


### function get_Model

```
inline const Model & get_Model() const
```


### function get_Input

```
inline const Input & get_Input() const
```


### function add_to_SLHAea

```
virtual void add_to_SLHAea(
    int ,
    SLHAstruct & slha
) const
```

Add QEDQCD information to an SLHAea object. 

Add QED x QCD information to an SLHAea object. 


### function GetScale

```
virtual double GetScale() const
```

RunningPars interface overrides. 

Retrieve the current renormalisation scale at which running parameters are defined. 


### function SetScale

```
virtual void SetScale(
    double scale
)
```

Manually define the current renormalisation scale (do this at own risk!) 

### function RunToScaleOverride

```
virtual void RunToScaleOverride(
    double end_scale
)
```

Run masses and couplings to end_scale. 

## Public Attributes Documentation

### variable hardup

```
double hardup;
```


Limits for running 


### variable softup

```
double softup;
```


### variable softlow

```
double softlow;
```


### variable hardlow

```
double hardlow;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000