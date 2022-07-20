---
title: 'class my_Nelder_Mead'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[my_Nelder_Mead](/documentation/code/classes/classmy__nelder__mead/#function-my-nelder-mead)**(int dd, double alpha, double beta, double gamma, int NNtry, double eeps, [my_func](/documentation/code/classes/structmy__func/) * ff) |
| bool | **[one_cycle](/documentation/code/classes/classmy__nelder__mead/#function-one-cycle)**([my_simplex](/documentation/code/classes/classmy__simplex/) * s) |
| bool | **[find_global_min](/documentation/code/classes/classmy__nelder__mead/#function-find-global-min)**(double xin[DMAX *(DMAX+1)]) |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| [my_func](/documentation/code/classes/structmy__func/) * | **[f](/documentation/code/classes/classmy__nelder__mead/#variable-f)**  |
| [my_simplex](/documentation/code/classes/classmy__simplex/) | **[simplex](/documentation/code/classes/classmy__nelder__mead/#variable-simplex)**  |
| bool | **[convergeYes](/documentation/code/classes/classmy__nelder__mead/#variable-convergeyes)**  |
| double | **[yfinal](/documentation/code/classes/classmy__nelder__mead/#variable-yfinal)**  |
| double | **[xfinal](/documentation/code/classes/classmy__nelder__mead/#variable-xfinal)**  |

## Public Functions Documentation

### function my_Nelder_Mead

```
my_Nelder_Mead(
    int dd,
    double alpha,
    double beta,
    double gamma,
    int NNtry,
    double eeps,
    my_func * ff
)
```


### function one_cycle

```
bool one_cycle(
    my_simplex * s
)
```


### function find_global_min

```
bool find_global_min(
    double xin[DMAX *(DMAX+1)]
)
```


## Public Attributes Documentation

### variable f

```
my_func * f;
```


### variable simplex

```
my_simplex simplex;
```


### variable convergeYes

```
bool convergeYes;
```


### variable yfinal

```
double yfinal;
```


### variable xfinal

```
double xfinal;
```


-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000