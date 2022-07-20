---
title: 'namespace create_SDSSDR7_fid'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| def | **[remove_bao](/documentation/code/namespaces/namespacecreate__sdssdr7__fid/#function-remove-bao)**(k_in k_in, pk_in pk_in) |
| def | **[get_flat_fid](/documentation/code/namespaces/namespacecreate__sdssdr7__fid/#function-get-flat-fid)**(cosmo cosmo, kh kh, z z, sigma2bao sigma2bao, h h) |
| def | **[sdss_lrgDR7_fiducial_setup](/documentation/code/namespaces/namespacecreate__sdssdr7__fid/#function-sdss-lrgdr7-fiducial-setup)**(path path, cosmo cosmo, h h) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| bool | **[PYTHON3](/documentation/code/namespaces/namespacecreate__sdssdr7__fid/#variable-python3)**  |
| | **[path_to_classy](/documentation/code/namespaces/namespacecreate__sdssdr7__fid/#variable-path-to-classy)**  |
| | **[classy_version](/documentation/code/namespaces/namespacecreate__sdssdr7__fid/#variable-classy-version)**  |
| | **[cosmo](/documentation/code/namespaces/namespacecreate__sdssdr7__fid/#variable-cosmo)**  |
| float | **[h](/documentation/code/namespaces/namespacecreate__sdssdr7__fid/#variable-h)**  |
| dictionary | **[cosmo_arguments](/documentation/code/namespaces/namespacecreate__sdssdr7__fid/#variable-cosmo-arguments)**  |


## Functions Documentation

### function remove_bao

```
def remove_bao(
    k_in k_in,
    pk_in pk_in
)
```




```
From MontePython 3.3.0, minor changes to work as stand-alone function
```


### function get_flat_fid

```
def get_flat_fid(
    cosmo cosmo,
    kh kh,
    z z,
    sigma2bao sigma2bao,
    h h
)
```




```
From MontePython 3.3.0, minor changes to work as stand-alone function
```


### function sdss_lrgDR7_fiducial_setup

```
def sdss_lrgDR7_fiducial_setup(
    path path,
    cosmo cosmo,
    h h
)
```




```
From MontePython 3.3.0, minor changes to work as stand-alone function
    and fix of use with python3
```



## Attributes Documentation

### variable PYTHON3

```
bool PYTHON3 =  True;
```


### variable path_to_classy

```
path_to_classy =  sys.argv[1];
```


### variable classy_version

```
classy_version =  sys.argv[2];
```


### variable cosmo

```
cosmo =  None;
```


### variable h

```
float h =  0.701;
```


### variable cosmo_arguments

```
dictionary cosmo_arguments =  {'P_k_max_h/Mpc': 1.5, 'ln10^{10}A_s': 3.0, 'N_ur': 3.04, 'h': h,
                                'omega_b': 0.035*0.701**2, 'non linear': ' halofit ', 'YHe': 0.24, 'k_pivot': 0.05,
                                'n_s': 0.96, 'tau_reio': 0.084, 'z_max_pk': 0.5, 'output': ' mPk ',
                                'omega_cdm': 0.215*0.701**2, 'T_cmb': 2.726};
```





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000