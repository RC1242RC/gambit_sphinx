---
title: 'class Gambit::DarkBit::CAST_SolarModel_Interpolator'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[CAST_SolarModel_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1cast__solarmodel__interpolator/#function-cast-solarmodel-interpolator)**(std::string solar_model_gagg, std::string solar_model_gaee, std::string data_set) |
| | **[CAST_SolarModel_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1cast__solarmodel__interpolator/#function-cast-solarmodel-interpolator)**([CAST_SolarModel_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1cast__solarmodel__interpolator/) && interp) |
| | **[~CAST_SolarModel_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1cast__solarmodel__interpolator/#function-~cast-solarmodel-interpolator)**() |
| | **[CAST_SolarModel_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1cast__solarmodel__interpolator/#function-cast-solarmodel-interpolator)**(const [CAST_SolarModel_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1cast__solarmodel__interpolator/) & ) =delete |
| [CAST_SolarModel_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1cast__solarmodel__interpolator/) | **[operator=](/documentation/code/classes/classgambit_1_1darkbit_1_1cast__solarmodel__interpolator/#function-operator=)**(const [CAST_SolarModel_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1cast__solarmodel__interpolator/) & ) =delete |
| std::vector< double > | **[evaluate_gagg_contrib](/documentation/code/classes/classgambit_1_1darkbit_1_1cast__solarmodel__interpolator/#function-evaluate-gagg-contrib)**(double m_ax) |
| std::vector< double > | **[evaluate_gaee_contrib](/documentation/code/classes/classgambit_1_1darkbit_1_1cast__solarmodel__interpolator/#function-evaluate-gaee-contrib)**(double m_ax) |

## Public Functions Documentation

### function CAST_SolarModel_Interpolator

```
CAST_SolarModel_Interpolator(
    std::string solar_model_gagg,
    std::string solar_model_gaee,
    std::string data_set
)
```


### function CAST_SolarModel_Interpolator

```
CAST_SolarModel_Interpolator(
    CAST_SolarModel_Interpolator && interp
)
```


### function ~CAST_SolarModel_Interpolator

```
~CAST_SolarModel_Interpolator()
```


### function CAST_SolarModel_Interpolator

```
CAST_SolarModel_Interpolator(
    const CAST_SolarModel_Interpolator & 
) =delete
```


### function operator=

```
CAST_SolarModel_Interpolator operator=(
    const CAST_SolarModel_Interpolator & 
) =delete
```


### function evaluate_gagg_contrib

```
std::vector< double > evaluate_gagg_contrib(
    double m_ax
)
```


### function evaluate_gaee_contrib

```
std::vector< double > evaluate_gaee_contrib(
    double m_ax
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000