---
title: 'class MontePythonLike::Likelihood'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

Inherits from object

Inherited by [MontePythonLike.Likelihood_clik](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/), [MontePythonLike.Likelihood_clocks](/documentation/code/classes/classmontepythonlike_1_1likelihood__clocks/), [MontePythonLike.Likelihood_isw](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/), [MontePythonLike.Likelihood_mock_cmb](/documentation/code/classes/classmontepythonlike_1_1likelihood__mock__cmb/), [MontePythonLike.Likelihood_mpk](/documentation/code/classes/classmontepythonlike_1_1likelihood__mpk/), [MontePythonLike.Likelihood_newdat](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/), [MontePythonLike.Likelihood_prior](/documentation/code/classes/classmontepythonlike_1_1likelihood__prior/), [MontePythonLike.Likelihood_sd](/documentation/code/classes/classmontepythonlike_1_1likelihood__sd/), [MontePythonLike.Likelihood_sn](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| def | **[__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function---init--)**(self self, path path, data data, command_line command_line) |
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
| def | **[__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood/#function---init--)**(self self, path path, data data, command_line command_line) |
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

## Public Attributes

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

## Detailed Description

```
class MontePythonLike::Likelihood;
```




```
General class that all likelihoods will inherit from.```

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


**Reimplemented by**: [MontePythonLike::Likelihood_newdat::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function---init--), [MontePythonLike::Likelihood_newdat::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function---init--), [MontePythonLike::Likelihood_clik::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#function---init--), [MontePythonLike::Likelihood_clik::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#function---init--), [MontePythonLike::Likelihood_mock_cmb::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__mock__cmb/#function---init--), [MontePythonLike::Likelihood_mock_cmb::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__mock__cmb/#function---init--), [MontePythonLike::Likelihood_sd::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__sd/#function---init--), [MontePythonLike::Likelihood_sn::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/#function---init--), [MontePythonLike::Likelihood_clocks::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__clocks/#function---init--), [MontePythonLike::Likelihood_isw::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function---init--), [MontePythonLike::Likelihood_sn::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/#function---init--), [MontePythonLike::Likelihood_clocks::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__clocks/#function---init--), [MontePythonLike::Likelihood_isw::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function---init--)




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


**Reimplemented by**: [MontePythonLike::Likelihood_newdat::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function-loglkl), [MontePythonLike::Likelihood_newdat::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function-loglkl), [MontePythonLike::Likelihood_clik::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#function-loglkl), [MontePythonLike::Likelihood_clik::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#function-loglkl), [MontePythonLike::Likelihood_mock_cmb::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__mock__cmb/#function-loglkl), [MontePythonLike::Likelihood_mock_cmb::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__mock__cmb/#function-loglkl), [MontePythonLike::Likelihood_sd::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__sd/#function-loglkl), [MontePythonLike::Likelihood_mpk::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__mpk/#function-loglkl), [MontePythonLike::Likelihood_mpk::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__mpk/#function-loglkl), [MontePythonLike::Likelihood_clocks::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__clocks/#function-loglkl), [MontePythonLike::Likelihood_clocks::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__clocks/#function-loglkl)




```
Placeholder to remind that this function needs to be defined for a
new likelihood.

Raises
------
NotImplementedError```


### function raise_fiducial_model_err

```
def raise_fiducial_model_err(
    self self
)
```




```
(JR) for use with GAMBIT: GAMBIT does not have an initial best-fit guess 
and the practice of erasing the cosmo container and refilling it does not 
work in the GAMBIT interface. Hence, potential fiducial model parameters
that likelihoods may need have to be provided. 
```


### function read_from_file

```
def read_from_file(
    self self,
    path path,
    data data,
    command_line command_line
)
```




```
Extract the information from the log.param concerning this likelihood.

If the log.param is used, check that at least one item for each
likelihood is recovered. Otherwise, it means the log.param does not
contain information on the likelihood. This happens when the first run
fails early, before calling the likelihoods, and the program did not
log the information. This check might not be completely secure, but it
is better than nothing.

.. warning::

    This checks relies on the fact that a likelihood should always have
    at least **one** line of code written in the likelihood.data file.
    This should be always true, but in case a run fails with the error
    message described below, think about it.

.. warning::

    As of version 2.0.2, you can specify likelihood options in the
    parameter file. They have complete priority over the ones specified
    in the `likelihood.data` file, and it will be reflected in the
    `log.param` file.```


### function get_cl

```
def get_cl(
    self self,
    cosmo cosmo,
    l_max l_max =-1
)
```




```
Return the :math:`C_{\ell}` from the cosmological code in
:math:`\mu {\\rm K}^2````


### function get_unlensed_cl

```
def get_unlensed_cl(
    self self,
    cosmo cosmo,
    l_max l_max =-1
)
```




```
Return the :math:`C_{\ell}` from the cosmological code in
:math:`\mu {\\rm K}^2````


### function need_cosmo_arguments

```
def need_cosmo_arguments(
    self self,
    data data,
    dictionary dictionary
)
```




```
Ensure that the arguments of dictionary are defined to the correct
value in the cosmological code

.. warning::

    So far there is no way to enforce a parameter where `smaller is
    better`. A bigger value will always overried any smaller one
    (`cl_max`, etc...)

Parameters
----------
data : dict
    Initialized instance of :class:`data`
dictionary : dict
    Desired precision for some cosmological parameters```


### function read_contamination_spectra

```
def read_contamination_spectra(
    self self,
    data data
)
```


### function add_contamination_spectra

```
def add_contamination_spectra(
    self self,
    cl cl,
    data data
)
```


### function add_nuisance_prior

```
def add_nuisance_prior(
    self self,
    lkl lkl,
    data data
)
```


### function computeLikelihood

```
def computeLikelihood(
    self self,
    ctx ctx
)
```




```
Interface with CosmoHammer

Parameters
----------
ctx : Context
Contains several dictionaries storing data and cosmological
information```


### function __init__

```
def __init__(
    self self,
    path path,
    data data,
    command_line command_line
)
```


**Reimplemented by**: [MontePythonLike::Likelihood_newdat::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function---init--), [MontePythonLike::Likelihood_newdat::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function---init--), [MontePythonLike::Likelihood_clik::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#function---init--), [MontePythonLike::Likelihood_clik::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#function---init--), [MontePythonLike::Likelihood_mock_cmb::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__mock__cmb/#function---init--), [MontePythonLike::Likelihood_mock_cmb::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__mock__cmb/#function---init--), [MontePythonLike::Likelihood_sd::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__sd/#function---init--), [MontePythonLike::Likelihood_sn::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/#function---init--), [MontePythonLike::Likelihood_clocks::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__clocks/#function---init--), [MontePythonLike::Likelihood_isw::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function---init--), [MontePythonLike::Likelihood_sn::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/#function---init--), [MontePythonLike::Likelihood_clocks::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__clocks/#function---init--), [MontePythonLike::Likelihood_isw::__init__](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/#function---init--)




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


**Reimplemented by**: [MontePythonLike::Likelihood_newdat::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function-loglkl), [MontePythonLike::Likelihood_newdat::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/#function-loglkl), [MontePythonLike::Likelihood_clik::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#function-loglkl), [MontePythonLike::Likelihood_clik::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/#function-loglkl), [MontePythonLike::Likelihood_mock_cmb::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__mock__cmb/#function-loglkl), [MontePythonLike::Likelihood_mock_cmb::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__mock__cmb/#function-loglkl), [MontePythonLike::Likelihood_sd::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__sd/#function-loglkl), [MontePythonLike::Likelihood_mpk::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__mpk/#function-loglkl), [MontePythonLike::Likelihood_mpk::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__mpk/#function-loglkl), [MontePythonLike::Likelihood_clocks::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__clocks/#function-loglkl), [MontePythonLike::Likelihood_clocks::loglkl](/documentation/code/classes/classmontepythonlike_1_1likelihood__clocks/#function-loglkl)




```
Placeholder to remind that this function needs to be defined for a
new likelihood.

Raises
------
NotImplementedError```


### function raise_fiducial_model_err

```
def raise_fiducial_model_err(
    self self
)
```




```
(JR) for use with GAMBIT: GAMBIT does not have an initial best-fit guess 
and the practice of erasing the cosmo container and refilling it does not 
work in the GAMBIT interface. Hence, potential fiducial model parameters
that likelihoods may need have to be provided. 
```


### function read_from_file

```
def read_from_file(
    self self,
    path path,
    data data,
    command_line command_line
)
```




```
Extract the information from the log.param concerning this likelihood.

If the log.param is used, check that at least one item for each
likelihood is recovered. Otherwise, it means the log.param does not
contain information on the likelihood. This happens when the first run
fails early, before calling the likelihoods, and the program did not
log the information. This check might not be completely secure, but it
is better than nothing.

.. warning::

    This checks relies on the fact that a likelihood should always have
    at least **one** line of code written in the likelihood.data file.
    This should be always true, but in case a run fails with the error
    message described below, think about it.

.. warning::

    As of version 2.0.2, you can specify likelihood options in the
    parameter file. They have complete priority over the ones specified
    in the `likelihood.data` file, and it will be reflected in the
    `log.param` file.```


### function get_cl

```
def get_cl(
    self self,
    cosmo cosmo,
    l_max l_max =-1
)
```




```
Return the :math:`C_{\ell}` from the cosmological code in
:math:`\mu {\\rm K}^2````


### function get_unlensed_cl

```
def get_unlensed_cl(
    self self,
    cosmo cosmo,
    l_max l_max =-1
)
```




```
Return the :math:`C_{\ell}` from the cosmological code in
:math:`\mu {\\rm K}^2````


### function need_cosmo_arguments

```
def need_cosmo_arguments(
    self self,
    data data,
    dictionary dictionary
)
```




```
Ensure that the arguments of dictionary are defined to the correct
value in the cosmological code

.. warning::

    So far there is no way to enforce a parameter where `smaller is
    better`. A bigger value will always overried any smaller one
    (`cl_max`, etc...)

Parameters
----------
data : dict
    Initialized instance of :class:`data`
dictionary : dict
    Desired precision for some cosmological parameters```


### function read_contamination_spectra

```
def read_contamination_spectra(
    self self,
    data data
)
```


### function add_contamination_spectra

```
def add_contamination_spectra(
    self self,
    cl cl,
    data data
)
```


### function add_nuisance_prior

```
def add_nuisance_prior(
    self self,
    lkl lkl,
    data data
)
```


### function computeLikelihood

```
def computeLikelihood(
    self self,
    ctx ctx
)
```




```
Interface with CosmoHammer

Parameters
----------
ctx : Context
Contains several dictionaries storing data and cosmological
information```


## Public Attributes Documentation

### variable name

```
name;
```


### variable folder

```
folder;
```


### variable data_directory

```
data_directory;
```


### variable default_values

```
default_values;
```


### variable need_update

```
need_update;
```


### variable use_nuisance

```
use_nuisance;
```


### variable nuisance

```
nuisance;
```


### variable path

```
path;
```


### variable dictionary

```
dictionary;
```


-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000