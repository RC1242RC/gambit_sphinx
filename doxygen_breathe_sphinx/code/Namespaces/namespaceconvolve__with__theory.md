---
title: 'namespace convolve_with_theory'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Functions

|                | Name           |
| -------------- | -------------- |
| def | **[convolve](/documentation/code/namespaces/namespaceconvolve__with__theory/#function-convolve)**(file_name file_name, frac_error frac_error =0.1, min_ min_ =0., max_ max_ =1., log_normal log_normal =True) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| | **[FILE_NAME](/documentation/code/namespaces/namespaceconvolve__with__theory/#variable-file-name)**  |
| | **[ARGS](/documentation/code/namespaces/namespaceconvolve__with__theory/#variable-args)**  |

## Detailed Description




```
Convolve chi-squared in a data file with a fractional theory error
==================================================================

python convolve_with_theory.py <file> <frac-error> <min> <max>

prints (parameter, convolved chi-squared) from a file containing
(parameter, chi-squared).
```


## Functions Documentation

### function convolve

```
def convolve(
    file_name file_name,
    frac_error frac_error =0.1,
    min_ min_ =0.,
    max_ max_ =1.,
    log_normal log_normal =True
)
```




```
Convolve chi-squared in a data file with a fractional theory error

Args:
    file_name (str): Data file with columns (parameter, chi-squared).
    frac_error (float, optional): Fractional theory error on the parameter.
    min_ (float, optional): Minimum value of parameter.
    max_ (float, optional): Maximum value of parameter.
    log_normal (bool, optional): Whether to use log-normal or normal error.

Returns:
    list(tuples): List of (parameter, convolved chi-squared)
```



## Attributes Documentation

### variable FILE_NAME

```
FILE_NAME =  sys.argv[1];
```


### variable ARGS

```
ARGS =  map(float, sys.argv[2:]);
```





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000