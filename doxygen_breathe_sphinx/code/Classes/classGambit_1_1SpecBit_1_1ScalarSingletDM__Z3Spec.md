---
title: 'class Gambit::SpecBit::ScalarSingletDM_Z3Spec'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

## Public Types

|                | Name           |
| -------------- | -------------- |
| typedef [ScalarSingletDM_Z3Spec](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/)< MI > | **[Self](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#typedef-self)**  |
| typedef Self::MTget | **[MTget](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#typedef-mtget)**  |
| typedef Self::MTset | **[MTset](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#typedef-mtset)**  |
| typedef Self::GetterMaps | **[GetterMaps](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#typedef-gettermaps)**  |
| typedef Self::SetterMaps | **[SetterMaps](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#typedef-settermaps)**  |
| typedef SpecTraits< [Self](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#typedef-self) >::Model | **[Model](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#typedef-model)**  |
| typedef SpecTraits< [Self](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#typedef-self) >::Input | **[Input](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#typedef-input)**  |

## Public Functions

|                | Name           |
| -------------- | -------------- |
| SetterMaps | **[fill_setter_maps](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-fill-setter-maps)**() |
| int | **[index_offset](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-index-offset)**()<br>Interface function overrides.  |
| GetterMaps | **[fill_getter_maps](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-fill-getter-maps)**()<br>Map filler overrides.  |
| virtual double | **[GetScale](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-getscale)**() const |
| virtual void | **[SetScale](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-setscale)**(double scale) |
| virtual void | **[RunToScaleOverride](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-runtoscaleoverride)**(double scale) |
| | **[ScalarSingletDM_Z3Spec](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-scalarsingletdm-z3spec)**() |
| | **[ScalarSingletDM_Z3Spec](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-scalarsingletdm-z3spec)**(MI mi, str backend_name, str backend_version) |
| virtual | **[~ScalarSingletDM_Z3Spec](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-~scalarsingletdm-z3spec)**() |
| Model & | **[get_Model](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-get-model)**() |
| Input & | **[get_Input](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-get-input)**() |
| const Model & | **[get_Model](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-get-model)**() const |
| const Input & | **[get_Input](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-get-input)**() const |
| virtual std::string | **[AccessError](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-accesserror)**(std::string state) const |
| template <class ScalarSingletDM_Z3like \> <br>void | **[get_lowe_data_from](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-get-lowe-data-from)**(ScalarSingletDM_Z3like & othermodel) |
| void | **[get_external_spectrum](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#function-get-external-spectrum)**(typename MI::Model & othermodel) |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| MI | **[model_interface](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#variable-model-interface)**  |
| DummyInput | **[dummyinput](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/#variable-dummyinput)**  |

## Detailed Description

```
template <class MI >
class Gambit::SpecBit::ScalarSingletDM_Z3Spec;
```

## Public Types Documentation

### typedef Self

```
typedef ScalarSingletDM_Z3Spec<MI> Gambit::SpecBit::ScalarSingletDM_Z3Spec< MI >::Self;
```


These typedefs are inherited, but the name lookup doesn't work so smoothly in templated wrapper classes, so need to help them along: 


### typedef MTget

```
typedef Self::MTget Gambit::SpecBit::ScalarSingletDM_Z3Spec< MI >::MTget;
```


### typedef MTset

```
typedef Self::MTset Gambit::SpecBit::ScalarSingletDM_Z3Spec< MI >::MTset;
```


### typedef GetterMaps

```
typedef Self::GetterMaps Gambit::SpecBit::ScalarSingletDM_Z3Spec< MI >::GetterMaps;
```


### typedef SetterMaps

```
typedef Self::SetterMaps Gambit::SpecBit::ScalarSingletDM_Z3Spec< MI >::SetterMaps;
```


### typedef Model

```
typedef SpecTraits<Self>::Model Gambit::SpecBit::ScalarSingletDM_Z3Spec< MI >::Model;
```


### typedef Input

```
typedef SpecTraits<Self>::Input Gambit::SpecBit::ScalarSingletDM_Z3Spec< MI >::Input;
```


## Public Functions Documentation

### function fill_setter_maps

```
static SetterMaps fill_setter_maps()
```


mass2 - mass dimension 2 parameters


### function index_offset

```
static inline int index_offset()
```

Interface function overrides. 

### function fill_getter_maps

```
static GetterMaps fill_getter_maps()
```

Map filler overrides. 

### function GetScale

```
virtual double GetScale() const
```


### function SetScale

```
virtual void SetScale(
    double scale
)
```


### function RunToScaleOverride

```
virtual void RunToScaleOverride(
    double scale
)
```


### function ScalarSingletDM_Z3Spec

```
ScalarSingletDM_Z3Spec()
```


### function ScalarSingletDM_Z3Spec

```
ScalarSingletDM_Z3Spec(
    MI mi,
    str backend_name,
    str backend_version
)
```


### function ~ScalarSingletDM_Z3Spec

```
virtual ~ScalarSingletDM_Z3Spec()
```


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


### function AccessError

```
virtual std::string AccessError(
    std::string state
) const
```


### function get_lowe_data_from

```
template <class ScalarSingletDM_Z3like >
inline void get_lowe_data_from(
    ScalarSingletDM_Z3like & othermodel
)
```


### function get_external_spectrum

```
inline void get_external_spectrum(
    typename MI::Model & othermodel
)
```


## Public Attributes Documentation

### variable model_interface

```
MI model_interface;
```


### variable dummyinput

```
DummyInput dummyinput;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000