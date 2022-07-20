---
title: 'class MontePythonLike::Likelihood_isw'

description: "[No description available]"

---








[No description available]

Inherits from [MontePythonLike.Likelihood](/documentation/code/classes/classmontepythonlike_1_1likelihood/), object

## Public Functions

|                | Name           |
| -------------- | -------------- |
| def | **[__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function---init--)**(self self, path path, data data, command_line command_line) |
| def | **[bin_cl](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function-bin-cl)**(self self, l l, cl cl, bins bins, cov cov =None) |
| def | **[integrand_cross](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function-integrand-cross)**(self self, z z, cosmo cosmo, l l) |
| def | **[integrand_auto](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function-integrand-auto)**(self self, z z, cosmo cosmo, l l) |
| def | **[compute_loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function-compute-loglkl)**(self self, cosmo cosmo, data data, b b) |
| def | **[__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function---init--)**(self self, path path, data data, command_line command_line) |
| def | **[bin_cl](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function-bin-cl)**(self self, l l, cl cl, bins bins, cov cov =None) |
| def | **[integrand_cross](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function-integrand-cross)**(self self, z z, cosmo cosmo, l l) |
| def | **[integrand_auto](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function-integrand-auto)**(self self, z z, cosmo cosmo, l l) |
| def | **[compute_loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function-compute-loglkl)**(self self, cosmo cosmo, data data, b b) |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| | **[l_cross](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#variable-l-cross)**  |
| | **[l_auto](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#variable-l-auto)**  |
| | **[bins_cross](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#variable-bins-cross)**  |
| | **[bins_auto](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#variable-bins-auto)**  |
| | **[cov_binned_cross](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#variable-cov-binned-cross)**  |
| | **[cov_binned_auto](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#variable-cov-binned-auto)**  |
| | **[dndz](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#variable-dndz)**  |
| | **[norm](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#variable-norm)**  |

## Additional inherited members

**Public Functions inherited from [MontePythonLike.Likelihood](/documentation/code/classes/classmontepythonlike_1_1likelihood/)**

|                | Name           |
| -------------- | -------------- |
| def | **[loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-loglkl)**(self self, cosmo cosmo, data data) |
| def | **[raise_fiducial_model_err](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-raise-fiducial-model-err)**(self self) |
| def | **[read_from_file](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-read-from-file)**(self self, path path, data data, command_line command_line) |
| def | **[get_cl](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-get-cl)**(self self, cosmo cosmo, l_max l_max =-1) |
| def | **[get_unlensed_cl](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-get-unlensed-cl)**(self self, cosmo cosmo, l_max l_max =-1) |
| def | **[need_cosmo_arguments](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-need-cosmo-arguments)**(self self, data data, dictionary dictionary) |
| def | **[read_contamination_spectra](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-read-contamination-spectra)**(self self, data data) |
| def | **[add_contamination_spectra](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-add-contamination-spectra)**(self self, cl cl, data data) |
| def | **[add_nuisance_prior](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-add-nuisance-prior)**(self self, lkl lkl, data data) |
| def | **[computeLikelihood](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-computelikelihood)**(self self, ctx ctx) |
| def | **[loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-loglkl)**(self self, cosmo cosmo, data data) |
| def | **[raise_fiducial_model_err](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-raise-fiducial-model-err)**(self self) |
| def | **[read_from_file](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-read-from-file)**(self self, path path, data data, command_line command_line) |
| def | **[get_cl](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-get-cl)**(self self, cosmo cosmo, l_max l_max =-1) |
| def | **[get_unlensed_cl](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-get-unlensed-cl)**(self self, cosmo cosmo, l_max l_max =-1) |
| def | **[need_cosmo_arguments](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-need-cosmo-arguments)**(self self, data data, dictionary dictionary) |
| def | **[read_contamination_spectra](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-read-contamination-spectra)**(self self, data data) |
| def | **[add_contamination_spectra](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-add-contamination-spectra)**(self self, cl cl, data data) |
| def | **[add_nuisance_prior](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-add-nuisance-prior)**(self self, lkl lkl, data data) |
| def | **[computeLikelihood](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-computelikelihood)**(self self, ctx ctx) |

**Public Attributes inherited from [MontePythonLike.Likelihood](/documentation/code/classes/classmontepythonlike_1_1likelihood/)**

|                | Name           |
| -------------- | -------------- |
| | **[name](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-name)**  |
| | **[folder](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-folder)**  |
| | **[data_directory](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-data-directory)**  |
| | **[default_values](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-default-values)**  |
| | **[need_update](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-need-update)**  |
| | **[use_nuisance](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-use-nuisance)**  |
| | **[nuisance](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-nuisance)**  |
| | **[path](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-path)**  |
| | **[dictionary](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-dictionary)**  |


## Public Functions Documentation

### function __init__

```
def __init__(
    self self,
    path path,
    data data,
    command_line command_line
)
```


**Reimplements**: [MontePythonLike::Likelihood::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function---init--)




```
It copies the content of self.path from the initialization routine of
the :class:`Data <data.Data>` class, and defines a handful of useful
methods, that every likelihood might need.

If the nuisance parameters required to compute this likelihood are not
defined (either fixed or varying), the code will stop.

Parameters
----------
data : class
    Initialized instance of :class:`Data <data.Data>`
command_line : NameSpace
    NameSpace containing the command line arguments```


### function bin_cl

```
def bin_cl(
    self self,
    l l,
    cl cl,
    bins bins,
    cov cov =None
)
```


### function integrand_cross

```
def integrand_cross(
    self self,
    z z,
    cosmo cosmo,
    l l
)
```


### function integrand_auto

```
def integrand_auto(
    self self,
    z z,
    cosmo cosmo,
    l l
)
```


### function compute_loglkl

```
def compute_loglkl(
    self self,
    cosmo cosmo,
    data data,
    b b
)
```


### function __init__

```
def __init__(
    self self,
    path path,
    data data,
    command_line command_line
)
```


**Reimplements**: [MontePythonLike::Likelihood::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function---init--)




```
It copies the content of self.path from the initialization routine of
the :class:`Data <data.Data>` class, and defines a handful of useful
methods, that every likelihood might need.

If the nuisance parameters required to compute this likelihood are not
defined (either fixed or varying), the code will stop.

Parameters
----------
data : class
    Initialized instance of :class:`Data <data.Data>`
command_line : NameSpace
    NameSpace containing the command line arguments```


### function bin_cl

```
def bin_cl(
    self self,
    l l,
    cl cl,
    bins bins,
    cov cov =None
)
```


### function integrand_cross

```
def integrand_cross(
    self self,
    z z,
    cosmo cosmo,
    l l
)
```


### function integrand_auto

```
def integrand_auto(
    self self,
    z z,
    cosmo cosmo,
    l l
)
```


### function compute_loglkl

```
def compute_loglkl(
    self self,
    cosmo cosmo,
    data data,
    b b
)
```


## Public Attributes Documentation

### variable l_cross

```
l_cross;
```


### variable l_auto

```
l_auto;
```


### variable bins_cross

```
bins_cross;
```


### variable bins_auto

```
bins_auto;
```


### variable cov_binned_cross

```
cov_binned_cross;
```


### variable cov_binned_auto

```
cov_binned_auto;
```


### variable dndz

```
dndz;
```


### variable norm

```
norm;
```


-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000