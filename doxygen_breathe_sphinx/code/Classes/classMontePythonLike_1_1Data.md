---
title: 'class MontePythonLike::Data'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

Inherits from object

## Public Functions

|                | Name           |
| -------------- | -------------- |
| def | **[__init__](/documentation/code/classes/classmontepythonlike_1_1data/#function---init--)**(self self, command_line command_line, path path, experiments experiments) |
| def | **[set_class_version](/documentation/code/classes/classmontepythonlike_1_1data/#function-set-class-version)**(self self, class_path class_path) |
| def | **[read_file](/documentation/code/classes/classmontepythonlike_1_1data/#function-read-file)**(self self, param param, structure structure, field field ='', separate separate =False) |
| def | **[read_version](/documentation/code/classes/classmontepythonlike_1_1data/#function-read-version)**(self self, param_file param_file) |
| def | **[get_mcmc_parameters](/documentation/code/classes/classmontepythonlike_1_1data/#function-get-mcmc-parameters)**(self self, table_of_strings table_of_strings) |
| def | **[add_experiment](/documentation/code/classes/classmontepythonlike_1_1data/#function-add-experiment)**(self self, experiment_name experiment_name, experiment_object experiment_object) |
| def | **[check_nuisance_params](/documentation/code/classes/classmontepythonlike_1_1data/#function-check-nuisance-params)**(self self) |
| def | **[__init__](/documentation/code/classes/classmontepythonlike_1_1data/#function---init--)**(self self, command_line command_line, path path, experiments experiments) |
| def | **[set_class_version](/documentation/code/classes/classmontepythonlike_1_1data/#function-set-class-version)**(self self, class_path class_path) |
| def | **[read_file](/documentation/code/classes/classmontepythonlike_1_1data/#function-read-file)**(self self, param param, structure structure, field field ='', separate separate =False) |
| def | **[read_version](/documentation/code/classes/classmontepythonlike_1_1data/#function-read-version)**(self self, param_file param_file) |
| def | **[get_mcmc_parameters](/documentation/code/classes/classmontepythonlike_1_1data/#function-get-mcmc-parameters)**(self self, table_of_strings table_of_strings) |
| def | **[add_experiment](/documentation/code/classes/classmontepythonlike_1_1data/#function-add-experiment)**(self self, experiment_name experiment_name, experiment_object experiment_object) |
| def | **[check_nuisance_params](/documentation/code/classes/classmontepythonlike_1_1data/#function-check-nuisance-params)**(self self) |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| | **[lkl](/documentation/code/classes/classmontepythonlike_1_1data/#variable-lkl)**  |
| | **[jumping](/documentation/code/classes/classmontepythonlike_1_1data/#variable-jumping)**  |
| | **[jumping_factor](/documentation/code/classes/classmontepythonlike_1_1data/#variable-jumping-factor)**  |
| | **[command_line](/documentation/code/classes/classmontepythonlike_1_1data/#variable-command-line)**  |
| | **[path](/documentation/code/classes/classmontepythonlike_1_1data/#variable-path)**  |
| | **[boundary_loglike](/documentation/code/classes/classmontepythonlike_1_1data/#variable-boundary-loglike)**  |
| | **[cosmo_arguments](/documentation/code/classes/classmontepythonlike_1_1data/#variable-cosmo-arguments)**  |
| | **[mcmc_parameters](/documentation/code/classes/classmontepythonlike_1_1data/#variable-mcmc-parameters)**  |
| | **[NS_param_names](/documentation/code/classes/classmontepythonlike_1_1data/#variable-ns-param-names)**  |
| | **[NS_arguments](/documentation/code/classes/classmontepythonlike_1_1data/#variable-ns-arguments)**  |
| | **[PC_param_names](/documentation/code/classes/classmontepythonlike_1_1data/#variable-pc-param-names)**  |
| | **[PC_arguments](/documentation/code/classes/classmontepythonlike_1_1data/#variable-pc-arguments)**  |
| | **[experiments](/documentation/code/classes/classmontepythonlike_1_1data/#variable-experiments)**  |
| | **[over_sampling](/documentation/code/classes/classmontepythonlike_1_1data/#variable-over-sampling)**  |
| | **[N](/documentation/code/classes/classmontepythonlike_1_1data/#variable-n)**  |
| | **[out](/documentation/code/classes/classmontepythonlike_1_1data/#variable-out)**  |
| | **[out_name](/documentation/code/classes/classmontepythonlike_1_1data/#variable-out-name)**  |
| | **[cosmological_module_name](/documentation/code/classes/classmontepythonlike_1_1data/#variable-cosmological-module-name)**  |
| | **[log_flag](/documentation/code/classes/classmontepythonlike_1_1data/#variable-log-flag)**  |
| | **[need_cosmo_update](/documentation/code/classes/classmontepythonlike_1_1data/#variable-need-cosmo-update)**  |

## Detailed Description

```
class MontePythonLike::Data;
```




```
Store all relevant data to communicate between the different modules.
(JR) added input:
    str data_file: string with path to datafile (folder containing data)
    str arr experiments: array with string off all experiments used in scan ```

## Public Functions Documentation

### function __init__

```
def __init__(
    self self,
    command_line command_line,
    path path,
    experiments experiments
)
```




```
The Data class holds the cosmological information, the parameters from
the MCMC run, the information coming from the likelihoods. It is a wide
collections of information, with in particular two main dictionaries:
cosmo_arguments and mcmc_parameters.

It defines several useful **methods**. The following ones are called
just once, at initialization:

* :func:`fill_mcmc_parameters`
* :func:`read_file`
* :func:`read_version`
* :func:`group_parameters_in_blocks`

On the other hand, these two following functions are called every step.

* :func:`check_for_slow_step`
* :func:`update_cosmo_arguments`

Finally, the convenient method :func:`get_mcmc_parameters` will be
called in many places, to return the proper list of desired parameters.

It has a number of different **attributes**, and the more important
ones are listed here:

* :attr:`boundary_loglike`
* :attr:`cosmo_arguments`
* :attr:`mcmc_parameters`
* :attr:`need_cosmo_update`
* :attr:`log_flag`

.. note::

    The `experiments` attribute is extracted from the parameter file,
    and contains the list of likelihoods to use

.. note::

    The path argument will be used in case it is a first run, and hence
    a new folder is created. If starting from an existing folder, this
    dictionary will be compared with the one extracted from the
    log.param, and will use the latter while warning the user.

.. warning::

    New in version 2.0.0, you can now specify an oversampling of the
    nuisance parameters, to hasten the execution of a run with
    likelihoods that have many of them. You should specify a new field
    in the parameter file, `data.over_sampling = [1, ...]`, that
    contains a 1 on the first element, and then the over sampling of
    the desired likelihoods. This array must have the same size as the
    number of blocks (1 for the cosmo + 1 for each likelihood with
    varying nuisance parameters). You need to call the code with the
    flag `-j jast` for it to be used.

To create an instance of this class, one must feed the following
parameters and keyword arguments:

Parameters
----------
command_line : NameSpace
    NameSpace containing the input from the :mod:`parser_mp`. It
    stores the input parameter file, the jumping methods, the output
    folder, etc...  Most of the information extracted from the
    command_file will be transformed into :class:`Data` attributes,
    whenever it felt meaningful to do so.
path : dict
    Contains a dictionary of important local paths. It is used here to
    find the cosmological module location.```


### function set_class_version

```
def set_class_version(
    self self,
    class_path class_path
)
```




```
(JR) Add path to CLASS version in use and the safe version number (e.g. 2_6_3)
    to the path dictionary. Needed for use with GAMBIT, so MP knows where to
    find CLASS version dependent files
```


### function read_file

```
def read_file(
    self self,
    param param,
    structure structure,
    field field ='',
    separate separate =False
)
```




```
Execute all lines concerning the Data class from a parameter file

All lines starting with `data.` will be replaced by `self.`, so the
current instance of the class will contain all the information.

.. note::

    A rstrip() was added at the end, because of an incomprehensible bug
    on some systems that imagined some inexistent characters at the end
    of the line... Now should work

.. note::

    A security should be added to protect from obvious attacks.

Parameters
----------
param : str
    Name of the parameter file
structure : str
    Name of the class entries we want to execute (mainly, data, or any
    other likelihood)

Keyword Arguments
-----------------
field : str
    If nothing is specified, this routine will execute all the lines
    corresponding to the `structure` parameters. If you specify a
    specific field, like `path`, only this field will be read and
    executed.
separate : bool
    If this flag is set to True, a container class will be created for
    the structure field, so instead of appending to the namespace of
    the data instance, it will append to a sub-namespace named in the
    same way that the desired structure. This is used to extract custom
    values from the likelihoods, allowing to specify values for the
    likelihood directly in the parameter file.```


### function read_version

```
def read_version(
    self self,
    param_file param_file
)
```




```
Extract version and subversion from an existing log.param
```


### function get_mcmc_parameters

```
def get_mcmc_parameters(
    self self,
    table_of_strings table_of_strings
)
```




```
Returns an ordered array of parameter names filtered by
`table_of_strings`.

Parameters
----------
table_of_strings : list
    List of strings whose role and status must be matched by a
    parameter. For instance,

    >>> data.get_mcmc_parameters(['varying'])
    ['omega_b', 'h', 'amplitude', 'other']

    will return a list of all the varying parameters, both
    cosmological and nuisance ones (derived parameters being `fixed`,
    they wont be part of this list). Instead,

    >>> data.get_mcmc_parameters(['nuisance', 'varying'])
    ['amplitude', 'other']

    will only return the nuisance parameters that are being varied.```


### function add_experiment

```
def add_experiment(
    self self,
    experiment_name experiment_name,
    experiment_object experiment_object
)
```




```
When using MP with GAMBIT, this function is used to simply create a dictionary mapping
    likelihood name to likelihood object. It is used in the function 'check_nuisance_params'
    to make sure no nuisance parameter that is not needed is scanned over. ```


### function check_nuisance_params

```
def check_nuisance_params(
    self self
)
```




```
Added routine to make sure no nuisance parameter that is not required by any MP likelihood in 
    use is scanned over. When using MP as standalone, this is done in the function 'group_parameters_in_blocks'
    The latter function is only called if MP is used for sampling which is not the case when 
    used with GAMBIT. Therefore, we have to define an additional function for this check. 
```


### function __init__

```
def __init__(
    self self,
    command_line command_line,
    path path,
    experiments experiments
)
```




```
The Data class holds the cosmological information, the parameters from
the MCMC run, the information coming from the likelihoods. It is a wide
collections of information, with in particular two main dictionaries:
cosmo_arguments and mcmc_parameters.

It defines several useful **methods**. The following ones are called
just once, at initialization:

* :func:`fill_mcmc_parameters`
* :func:`read_file`
* :func:`read_version`
* :func:`group_parameters_in_blocks`

On the other hand, these two following functions are called every step.

* :func:`check_for_slow_step`
* :func:`update_cosmo_arguments`

Finally, the convenient method :func:`get_mcmc_parameters` will be
called in many places, to return the proper list of desired parameters.

It has a number of different **attributes**, and the more important
ones are listed here:

* :attr:`boundary_loglike`
* :attr:`cosmo_arguments`
* :attr:`mcmc_parameters`
* :attr:`need_cosmo_update`
* :attr:`log_flag`

.. note::

    The `experiments` attribute is extracted from the parameter file,
    and contains the list of likelihoods to use

.. note::

    The path argument will be used in case it is a first run, and hence
    a new folder is created. If starting from an existing folder, this
    dictionary will be compared with the one extracted from the
    log.param, and will use the latter while warning the user.

.. warning::

    New in version 2.0.0, you can now specify an oversampling of the
    nuisance parameters, to hasten the execution of a run with
    likelihoods that have many of them. You should specify a new field
    in the parameter file, `data.over_sampling = [1, ...]`, that
    contains a 1 on the first element, and then the over sampling of
    the desired likelihoods. This array must have the same size as the
    number of blocks (1 for the cosmo + 1 for each likelihood with
    varying nuisance parameters). You need to call the code with the
    flag `-j jast` for it to be used.

To create an instance of this class, one must feed the following
parameters and keyword arguments:

Parameters
----------
command_line : NameSpace
    NameSpace containing the input from the :mod:`parser_mp`. It
    stores the input parameter file, the jumping methods, the output
    folder, etc...  Most of the information extracted from the
    command_file will be transformed into :class:`Data` attributes,
    whenever it felt meaningful to do so.
path : dict
    Contains a dictionary of important local paths. It is used here to
    find the cosmological module location.```


### function set_class_version

```
def set_class_version(
    self self,
    class_path class_path
)
```




```
(JR) Add path to CLASS version in use and the safe version number (e.g. 2_6_3)
    to the path dictionary. Needed for use with GAMBIT, so MP knows where to
    find CLASS version dependent files
```


### function read_file

```
def read_file(
    self self,
    param param,
    structure structure,
    field field ='',
    separate separate =False
)
```




```
Execute all lines concerning the Data class from a parameter file

All lines starting with `data.` will be replaced by `self.`, so the
current instance of the class will contain all the information.

.. note::

    A rstrip() was added at the end, because of an incomprehensible bug
    on some systems that imagined some inexistent characters at the end
    of the line... Now should work

.. note::

    A security should be added to protect from obvious attacks.

Parameters
----------
param : str
    Name of the parameter file
structure : str
    Name of the class entries we want to execute (mainly, data, or any
    other likelihood)

Keyword Arguments
-----------------
field : str
    If nothing is specified, this routine will execute all the lines
    corresponding to the `structure` parameters. If you specify a
    specific field, like `path`, only this field will be read and
    executed.
separate : bool
    If this flag is set to True, a container class will be created for
    the structure field, so instead of appending to the namespace of
    the data instance, it will append to a sub-namespace named in the
    same way that the desired structure. This is used to extract custom
    values from the likelihoods, allowing to specify values for the
    likelihood directly in the parameter file.```


### function read_version

```
def read_version(
    self self,
    param_file param_file
)
```




```
Extract version and subversion from an existing log.param
```


### function get_mcmc_parameters

```
def get_mcmc_parameters(
    self self,
    table_of_strings table_of_strings
)
```




```
Returns an ordered array of parameter names filtered by
`table_of_strings`.

Parameters
----------
table_of_strings : list
    List of strings whose role and status must be matched by a
    parameter. For instance,

    >>> data.get_mcmc_parameters(['varying'])
    ['omega_b', 'h', 'amplitude', 'other']

    will return a list of all the varying parameters, both
    cosmological and nuisance ones (derived parameters being `fixed`,
    they wont be part of this list). Instead,

    >>> data.get_mcmc_parameters(['nuisance', 'varying'])
    ['amplitude', 'other']

    will only return the nuisance parameters that are being varied.```


### function add_experiment

```
def add_experiment(
    self self,
    experiment_name experiment_name,
    experiment_object experiment_object
)
```




```
When using MP with GAMBIT, this function is used to simply create a dictionary mapping
    likelihood name to likelihood object. It is used in the function 'check_nuisance_params'
    to make sure no nuisance parameter that is not needed is scanned over. ```


### function check_nuisance_params

```
def check_nuisance_params(
    self self
)
```




```
Added routine to make sure no nuisance parameter that is not required by any MP likelihood in 
    use is scanned over. When using MP as standalone, this is done in the function 'group_parameters_in_blocks'
    The latter function is only called if MP is used for sampling which is not the case when 
    used with GAMBIT. Therefore, we have to define an additional function for this check. 
```


## Public Attributes Documentation

### variable lkl

```
lkl;
```


### variable jumping

```
jumping;
```


### variable jumping_factor

```
jumping_factor;
```


### variable command_line

```
command_line;
```


### variable path

```
path;
```


### variable boundary_loglike

```
boundary_loglike;
```


### variable cosmo_arguments

```
cosmo_arguments;
```


### variable mcmc_parameters

```
mcmc_parameters;
```


### variable NS_param_names

```
NS_param_names;
```


### variable NS_arguments

```
NS_arguments;
```


### variable PC_param_names

```
PC_param_names;
```


### variable PC_arguments

```
PC_arguments;
```


### variable experiments

```
experiments;
```


### variable over_sampling

```
over_sampling;
```


### variable N

```
N;
```


### variable out

```
out;
```


### variable out_name

```
out_name;
```


### variable cosmological_module_name

```
cosmological_module_name;
```


### variable log_flag

```
log_flag;
```


### variable need_cosmo_update

```
need_cosmo_update;
```


-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000