---
title: 'class Gambit::CosmoBit::SM_time_evo'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[SM_time_evo](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-sm-time-evo)**(size_t grid_size, double t0, double tf, double Neff_SM, double rnu, double dNeff) |
| | **[~SM_time_evo](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-~sm-time-evo)**() |
| const std::vector< double > & | **[get_t_grid](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-get-t-grid)**() const |
| const std::vector< double > & | **[get_T_grid](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-get-t-grid)**() const |
| const std::vector< double > & | **[get_Tnu_grid](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-get-tnu-grid)**() const |
| const std::vector< double > & | **[get_H_grid](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-get-h-grid)**() const |
| const std::vector< double > & | **[get_lnR_grid](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-get-lnr-grid)**() const |
| double | **[T_at_t](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-t-at-t)**(double t) const |
| double | **[Tnu_at_t](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-tnu-at-t)**(double t) const |
| double | **[H_at_t](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-h-at-t)**(double t) const |
| double | **[lnR_at_t](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-lnr-at-t)**(double t) const |
| double | **[t0](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-t0)**() const |
| double | **[tf](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-tf)**() const |
| size_t | **[size](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-size)**() const |
| void | **[update_grid](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/#function-update-grid)**(const std::vector< double > & T_grid_new, const std::vector< double > & Tnu_grid_new, const bool & unchecked =true) |

## Public Functions Documentation

### function SM_time_evo

```
SM_time_evo(
    size_t grid_size,
    double t0,
    double tf,
    double Neff_SM,
    double rnu,
    double dNeff
)
```


### function ~SM_time_evo

```
~SM_time_evo()
```


### function get_t_grid

```
inline const std::vector< double > & get_t_grid() const
```


### function get_T_grid

```
inline const std::vector< double > & get_T_grid() const
```


### function get_Tnu_grid

```
inline const std::vector< double > & get_Tnu_grid() const
```


### function get_H_grid

```
inline const std::vector< double > & get_H_grid() const
```


### function get_lnR_grid

```
inline const std::vector< double > & get_lnR_grid() const
```


### function T_at_t

```
inline double T_at_t(
    double t
) const
```


### function Tnu_at_t

```
inline double Tnu_at_t(
    double t
) const
```


### function H_at_t

```
inline double H_at_t(
    double t
) const
```


### function lnR_at_t

```
inline double lnR_at_t(
    double t
) const
```


### function t0

```
inline double t0() const
```


### function tf

```
inline double tf() const
```


### function size

```
inline size_t size() const
```


### function update_grid

```
void update_grid(
    const std::vector< double > & T_grid_new,
    const std::vector< double > & Tnu_grid_new,
    const bool & unchecked =true
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000