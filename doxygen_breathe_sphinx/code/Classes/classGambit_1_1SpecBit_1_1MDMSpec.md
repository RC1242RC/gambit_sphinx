---
title: 'class Gambit::SpecBit::MDMSpec'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

## Public Types

|                | Name           |
| -------------- | -------------- |
| typedef [MDMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/)< MI > | **[Self](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#typedef-self)**  |
| typedef Self::MTget | **[MTget](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#typedef-mtget)**  |
| typedef Self::MTset | **[MTset](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#typedef-mtset)**  |
| typedef Self::GetterMaps | **[GetterMaps](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#typedef-gettermaps)**  |
| typedef Self::SetterMaps | **[SetterMaps](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#typedef-settermaps)**  |
| typedef SpecTraits< [Self](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#typedef-self) >::Model | **[Model](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#typedef-model)**  |
| typedef SpecTraits< [Self](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#typedef-self) >::Input | **[Input](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#typedef-input)**  |

## Public Functions

|                | Name           |
| -------------- | -------------- |
| SetterMaps | **[fill_setter_maps](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-fill-setter-maps)**() |
| int | **[index_offset](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-index-offset)**()<br>Interface function overrides.  |
| GetterMaps | **[fill_getter_maps](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-fill-getter-maps)**()<br>Map filler overrides.  |
| virtual double | **[GetScale](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-getscale)**() const |
| virtual void | **[SetScale](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-setscale)**(double scale) |
| virtual void | **[RunToScaleOverride](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-runtoscaleoverride)**(double scale) |
| | **[MDMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-mdmspec)**() |
| | **[MDMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-mdmspec)**(MI mi, str backend_name, str backend_version) |
| virtual | **[~MDMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-~mdmspec)**() |
| Model & | **[get_Model](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-get-model)**() |
| Input & | **[get_Input](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-get-input)**() |
| const Model & | **[get_Model](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-get-model)**() const |
| const Input & | **[get_Input](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-get-input)**() const |
| virtual std::string | **[AccessError](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-accesserror)**(std::string state) const |
| template <class MDMlike \> <br>void | **[get_lowe_data_from](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-get-lowe-data-from)**(MDMlike & othermodel) |
| void | **[get_external_spectrum](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#function-get-external-spectrum)**(typename MI::Model & othermodel) |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| MI | **[model_interface](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#variable-model-interface)**  |
| DummyInput | **[dummyinput](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/#variable-dummyinput)**  |

## Detailed Description

```
template <class MI >
class Gambit::SpecBit::MDMSpec;
```

## Public Types Documentation

### typedef Self

```
typedef MDMSpec<MI> Gambit::SpecBit::MDMSpec< MI >::Self;
```


These typedefs are inherited, but the name lookup doesn't work so smoothly in templated wrapper classes, so need to help them along: 


### typedef MTget

```
typedef Self::MTget Gambit::SpecBit::MDMSpec< MI >::MTget;
```


### typedef MTset

```
typedef Self::MTset Gambit::SpecBit::MDMSpec< MI >::MTset;
```


### typedef GetterMaps

```
typedef Self::GetterMaps Gambit::SpecBit::MDMSpec< MI >::GetterMaps;
```


### typedef SetterMaps

```
typedef Self::SetterMaps Gambit::SpecBit::MDMSpec< MI >::SetterMaps;
```


### typedef Model

```
typedef SpecTraits<Self>::Model Gambit::SpecBit::MDMSpec< MI >::Model;
```


### typedef Input

```
typedef SpecTraits<Self>::Input Gambit::SpecBit::MDMSpec< MI >::Input;
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


### function MDMSpec

```
MDMSpec()
```


### function MDMSpec

```
MDMSpec(
    MI mi,
    str backend_name,
    str backend_version
)
```


### function ~MDMSpec

```
virtual ~MDMSpec()
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
template <class MDMlike >
inline void get_lowe_data_from(
    MDMlike & othermodel
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