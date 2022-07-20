---
title: 'class Gambit::SpecBit::MSSMSpec'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

## Public Types

|                | Name           |
| -------------- | -------------- |
| typedef [MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > | **[Self](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#typedef-self)**  |
| typedef Self::MTget | **[MTget](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#typedef-mtget)**  |
| typedef Self::MTset | **[MTset](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#typedef-mtset)**  |
| typedef Self::GetterMaps | **[GetterMaps](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#typedef-gettermaps)**  |
| typedef Self::SetterMaps | **[SetterMaps](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#typedef-settermaps)**  |
| typedef SpecTraits< [Self](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#typedef-self) >::Model | **[Model](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#typedef-model)**  |
| typedef SpecTraits< [Self](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#typedef-self) >::Input | **[Input](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#typedef-input)**  |

## Public Functions

|                | Name           |
| -------------- | -------------- |
| GetterMaps | **[fill_getter_maps](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-fill-getter-maps)**()<br>Map filler overrides.  |
| SetterMaps | **[fill_setter_maps](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-fill-setter-maps)**() |
| int | **[index_offset](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-index-offset)**()<br>Interface function overrides.  |
| virtual double | **[GetScale](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-getscale)**() const |
| virtual void | **[SetScale](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-setscale)**(double scale) |
| virtual void | **[RunToScaleOverride](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-runtoscaleoverride)**(double scale) |
| | **[MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-mssmspec)**() |
| | **[MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-mssmspec)**(MI mi, str backend_name, str backend_version) |
| virtual | **[~MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-~mssmspec)**() |
| Model & | **[get_Model](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-get-model)**() |
| Input & | **[get_Input](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-get-input)**() |
| const Model & | **[get_Model](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-get-model)**() const |
| const Input & | **[get_Input](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-get-input)**() const |
| virtual double | **[get_lsp_mass](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-get-lsp-mass)**(int & particle_type, int & row, int & col) const |
| virtual int | **[get_numbers_stable_particles](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-get-numbers-stable-particles)**() const |
| virtual std::string | **[AccessError](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-accesserror)**(std::string state) const |
| virtual void | **[add_to_SLHAea](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-add-to-slhaea)**(int slha_version, SLHAstruct & slha) const |
| template <class MSSMlike \> <br>void | **[get_lowe_data_from](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-get-lowe-data-from)**(MSSMlike & othermodel) |
| void | **[get_external_spectrum](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#function-get-external-spectrum)**(typename MI::Model & othermodel) |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| MI | **[model_interface](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#variable-model-interface)**  |
| DummyInput | **[dummyinput](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/#variable-dummyinput)**  |

## Detailed Description

```
template <class MI >
class Gambit::SpecBit::MSSMSpec;
```

## Public Types Documentation

### typedef Self

```
typedef MSSMSpec<MI> Gambit::SpecBit::MSSMSpec< MI >::Self;
```


These typedefs are inherited, but the name lookup doesn't work so smoothly in templated wrapper classes, so need to help them along: 


### typedef MTget

```
typedef Self::MTget Gambit::SpecBit::MSSMSpec< MI >::MTget;
```


### typedef MTset

```
typedef Self::MTset Gambit::SpecBit::MSSMSpec< MI >::MTset;
```


### typedef GetterMaps

```
typedef Self::GetterMaps Gambit::SpecBit::MSSMSpec< MI >::GetterMaps;
```


### typedef SetterMaps

```
typedef Self::SetterMaps Gambit::SpecBit::MSSMSpec< MI >::SetterMaps;
```


### typedef Model

```
typedef SpecTraits<Self>::Model Gambit::SpecBit::MSSMSpec< MI >::Model;
```


### typedef Input

```
typedef SpecTraits<Self>::Input Gambit::SpecBit::MSSMSpec< MI >::Input;
```


## Public Functions Documentation

### function fill_getter_maps

```
static GetterMaps fill_getter_maps()
```

Map filler overrides. 

Fillers for "Running" parameters. 


mass2 - mass dimension 2 parameters


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


### function MSSMSpec

```
MSSMSpec()
```


### function MSSMSpec

```
MSSMSpec(
    MI mi,
    str backend_name,
    str backend_version
)
```


### function ~MSSMSpec

```
virtual ~MSSMSpec()
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


### function get_lsp_mass

```
virtual double get_lsp_mass(
    int & particle_type,
    int & row,
    int & col
) const
```


sneutrinos 1

up squarks 2

down squarks 3

sleptons 4

charginos 5

gluino 6


### function get_numbers_stable_particles

```
virtual int get_numbers_stable_particles() const
```


### function AccessError

```
virtual std::string AccessError(
    std::string state
) const
```


### function add_to_SLHAea

```
virtual void add_to_SLHAea(
    int slha_version,
    SLHAstruct & slha
) const
```


### function get_lowe_data_from

```
template <class MSSMlike >
inline void get_lowe_data_from(
    MSSMlike & othermodel
)
```


TODO: Need to implement this properly... Copy low energy spectrum information from another model object 


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