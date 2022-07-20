---
title: 'class MontePythonLike::Likelihood_sn'

description: "[No description available]"

---








[No description available]

Inherits from [MontePythonLike.Likelihood](/documentation/code/classes/classmontepythonlike_1_1likelihood/), object

## Public Functions

|                | Name           |
| -------------- | -------------- |
| def | **[__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/#function---init--)**(self self, path path, data data, command_line command_line) |
| def | **[read_configuration_file](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/#function-read-configuration-file)**(self self) |
| def | **[read_matrix](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/#function-read-matrix)**(self self, path path) |
| def | **[read_light_curve_parameters](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/#function-read-light-curve-parameters)**(self self) |
| def | **[__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/#function---init--)**(self self, path path, data data, command_line command_line) |
| def | **[read_configuration_file](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/#function-read-configuration-file)**(self self) |
| def | **[read_matrix](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/#function-read-matrix)**(self self, path path) |
| def | **[read_light_curve_parameters](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/#function-read-light-curve-parameters)**(self self) |

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


### function read_configuration_file

```
def read_configuration_file(
    self self
)
```




```
Extract Python variables from the configuration file

This routine performs the equivalent to the program "inih" used in the
original c++ library.
```


### function read_matrix

```
def read_matrix(
    self self,
    path path
)
```




```
extract the matrix from the path

This routine uses the blazing fast pandas library (0.10 seconds to load
a 740x740 matrix). If not installed, it uses a custom routine that is
twice as slow (but still 4 times faster than the straightforward
numpy.loadtxt method)

.. note::

    the length of the matrix is stored on the first line... then it has
    to be unwrapped. The pandas routine read_csv understands this
    immediatly, though.```


### function read_light_curve_parameters

```
def read_light_curve_parameters(
    self self
)
```




```
Read the file jla_lcparams.txt containing the SN data

.. note::

    the length of the resulting array should be equal to the length of
    the covariance matrices stored in C00, etc...```


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


### function read_configuration_file

```
def read_configuration_file(
    self self
)
```




```
Extract Python variables from the configuration file

This routine performs the equivalent to the program "inih" used in the
original c++ library.
```


### function read_matrix

```
def read_matrix(
    self self,
    path path
)
```




```
extract the matrix from the path

This routine uses the blazing fast pandas library (0.10 seconds to load
a 740x740 matrix). If not installed, it uses a custom routine that is
twice as slow (but still 4 times faster than the straightforward
numpy.loadtxt method)

.. note::

    the length of the matrix is stored on the first line... then it has
    to be unwrapped. The pandas routine read_csv understands this
    immediatly, though.```


### function read_light_curve_parameters

```
def read_light_curve_parameters(
    self self
)
```




```
Read the file jla_lcparams.txt containing the SN data

.. note::

    the length of the resulting array should be equal to the length of
    the covariance matrices stored in C00, etc...```


-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000