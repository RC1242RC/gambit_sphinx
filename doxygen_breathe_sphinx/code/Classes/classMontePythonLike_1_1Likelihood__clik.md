---
title: 'class MontePythonLike::Likelihood_clik'

description: "[No description available]"

---








[No description available]

Inherits from [MontePythonLike.Likelihood](/documentation/code/classes/classmontepythonlike_1_1likelihood/), object

## Public Functions

|                | Name           |
| -------------- | -------------- |
| def | **[__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#function---init--)**(self self, path path, data data, command_line command_line) |
| def | **[loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#function-loglkl)**(self self, cosmo cosmo, data data) |
| def | **[__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#function---init--)**(self self, path path, data data, command_line command_line) |
| def | **[loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#function-loglkl)**(self self, cosmo cosmo, data data) |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| | **[lensing](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#variable-lensing)**  |
| | **[clik](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#variable-clik)**  |
| | **[l_max](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#variable-l-max)**  |
| | **[nuisance](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#variable-nuisance)**  |
| | **[name](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#variable-name)**  |
| | **[use_nuisance](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#variable-use-nuisance)**  |

## Additional inherited members

**Public Functions inherited from [MontePythonLike.Likelihood](/documentation/code/classes/classmontepythonlike_1_1likelihood/)**

|                | Name           |
| -------------- | -------------- |
| def | **[raise_fiducial_model_err](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-raise-fiducial-model-err)**(self self) |
| def | **[read_from_file](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-read-from-file)**(self self, path path, data data, command_line command_line) |
| def | **[get_cl](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-get-cl)**(self self, cosmo cosmo, l_max l_max =-1) |
| def | **[get_unlensed_cl](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-get-unlensed-cl)**(self self, cosmo cosmo, l_max l_max =-1) |
| def | **[need_cosmo_arguments](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-need-cosmo-arguments)**(self self, data data, dictionary dictionary) |
| def | **[read_contamination_spectra](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-read-contamination-spectra)**(self self, data data) |
| def | **[add_contamination_spectra](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-add-contamination-spectra)**(self self, cl cl, data data) |
| def | **[add_nuisance_prior](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-add-nuisance-prior)**(self self, lkl lkl, data data) |
| def | **[computeLikelihood](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-computelikelihood)**(self self, ctx ctx) |
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
| | **[folder](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-folder)**  |
| | **[data_directory](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-data-directory)**  |
| | **[default_values](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-default-values)**  |
| | **[need_update](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-need-update)**  |
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


### function loglkl

```
def loglkl(
    self self,
    cosmo cosmo,
    data data
)
```


**Reimplements**: [MontePythonLike::Likelihood::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-loglkl)




```
Placeholder to remind that this function needs to be defined for a
new likelihood.

Raises
------
NotImplementedError```


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


### function loglkl

```
def loglkl(
    self self,
    cosmo cosmo,
    data data
)
```


**Reimplements**: [MontePythonLike::Likelihood::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function-loglkl)




```
Placeholder to remind that this function needs to be defined for a
new likelihood.

Raises
------
NotImplementedError```


## Public Attributes Documentation

### variable lensing

```
lensing;
```


### variable clik

```
clik;
```


### variable l_max

```
l_max;
```


### variable nuisance

```
nuisance;
```


### variable name

```
name;
```


### variable use_nuisance

```
use_nuisance;
```


-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000