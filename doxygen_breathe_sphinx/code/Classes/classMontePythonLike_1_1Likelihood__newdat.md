---
title: 'class MontePythonLike::Likelihood_newdat'

description: "[No description available]"

---








[No description available]

Inherits from [MontePythonLike.Likelihood](/documentation/code/classes/classmontepythonlike_1_1likelihood/), object

## Public Functions

|                | Name           |
| -------------- | -------------- |
| def | **[__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function---init--)**(self self, path path, data data, command_line command_line) |
| def | **[loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function-loglkl)**(self self, cosmo cosmo, data data) |
| def | **[compute_lkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function-compute-lkl)**(self self, cl cl, cosmo cosmo, data data) |
| def | **[__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function---init--)**(self self, path path, data data, command_line command_line) |
| def | **[loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function-loglkl)**(self self, cosmo cosmo, data data) |
| def | **[compute_lkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function-compute-lkl)**(self self, cl cl, cosmo cosmo, data data) |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| | **[calib_uncertainty](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-calib-uncertainty)**  |
| | **[has_beam_uncertainty](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-has-beam-uncertainty)**  |
| | **[has_xfactors](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-has-xfactors)**  |
| | **[obs](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-obs)**  |
| | **[var](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-var)**  |
| | **[beam_error](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-beam-error)**  |
| | **[has_xfactor](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-has-xfactor)**  |
| | **[xfactor](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-xfactor)**  |
| | **[num_points](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-num-points)**  |
| | **[inv_covmat](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-inv-covmat)**  |
| | **[win_min](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-win-min)**  |
| | **[win_max](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-win-max)**  |
| | **[has_pol](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-has-pol)**  |
| | **[window](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-window)**  |
| | **[halfsteps](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-halfsteps)**  |
| | **[margeweights](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-margeweights)**  |
| | **[margenorm](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-margenorm)**  |
| | **[l_max](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-l-max)**  |
| | **[nuisance](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-nuisance)**  |
| | **[use_nuisance](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-use-nuisance)**  |
| | **[lkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#variable-lkl)**  |

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
| | **[name](/documentation/code/classes/classmontepythonlike_1_1likelihood/#variable-name)**  |
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


### function compute_lkl

```
def compute_lkl(
    self self,
    cl cl,
    cosmo cosmo,
    data data
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


### function compute_lkl

```
def compute_lkl(
    self self,
    cl cl,
    cosmo cosmo,
    data data
)
```


## Public Attributes Documentation

### variable calib_uncertainty

```
calib_uncertainty;
```


### variable has_beam_uncertainty

```
has_beam_uncertainty;
```


### variable has_xfactors

```
has_xfactors;
```


### variable obs

```
obs;
```


### variable var

```
var;
```


### variable beam_error

```
beam_error;
```


### variable has_xfactor

```
has_xfactor;
```


### variable xfactor

```
xfactor;
```


### variable num_points

```
num_points;
```


### variable inv_covmat

```
inv_covmat;
```


### variable win_min

```
win_min;
```


### variable win_max

```
win_max;
```


### variable has_pol

```
has_pol;
```


### variable window

```
window;
```


### variable halfsteps

```
halfsteps;
```


### variable margeweights

```
margeweights;
```


### variable margenorm

```
margenorm;
```


### variable l_max

```
l_max;
```


### variable nuisance

```
nuisance;
```


### variable use_nuisance

```
use_nuisance;
```


### variable lkl

```
lkl;
```


-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000