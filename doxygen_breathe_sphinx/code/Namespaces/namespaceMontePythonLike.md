---
title: 'namespace MontePythonLike'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[MontePythonLike::Data](/documentation/code/classes/classmontepythonlike_1_1data/)**  |
| class | **[MontePythonLike::Likelihood](/documentation/code/classes/classmontepythonlike_1_1likelihood/)**  |
| class | **[MontePythonLike::Likelihood_clik](/documentation/code/classes/classmontepythonlike_1_1likelihood__clik/)**  |
| class | **[MontePythonLike::Likelihood_clocks](/documentation/code/classes/classmontepythonlike_1_1likelihood__clocks/)**  |
| class | **[MontePythonLike::Likelihood_isw](/documentation/code/classes/classmontepythonlike_1_1likelihood__isw/)**  |
| class | **[MontePythonLike::Likelihood_mock_cmb](/documentation/code/classes/classmontepythonlike_1_1likelihood__mock__cmb/)**  |
| class | **[MontePythonLike::Likelihood_mpk](/documentation/code/classes/classmontepythonlike_1_1likelihood__mpk/)**  |
| class | **[MontePythonLike::Likelihood_newdat](/documentation/code/classes/classmontepythonlike_1_1likelihood__newdat/)**  |
| class | **[MontePythonLike::Likelihood_prior](/documentation/code/classes/classmontepythonlike_1_1likelihood__prior/)**  |
| class | **[MontePythonLike::Likelihood_sd](/documentation/code/classes/classmontepythonlike_1_1likelihood__sd/)**  |
| class | **[MontePythonLike::Likelihood_sn](/documentation/code/classes/classmontepythonlike_1_1likelihood__sn/)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| def | **[get_available_likelihoods](/documentation/code/namespaces/namespacemontepythonlike/#function-get-available-likelihoods)**(backendDir backendDir) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| | **[basestring](/documentation/code/namespaces/namespacemontepythonlike/#variable-basestring)**  |

## Detailed Description




```
.. module:: likelihood_class for use of MontePython likelihoods with gambit (or any external sampler)
 :synopsis: Definition of the major likelihoods
.. original moduleauthor:: Julien Lesgourgues <lesgourg@cern.ch>
.. original moduleauthor:: Benjamin Audren <benjamin.audren@epfl.ch>
.. adopted to use with gambit:: Janina Renk <janina.renk@fysik.su.se>

Contains the definition of the base likelihood class :class:`Likelihood`, with
basic functions, as well as more specific likelihood classes that may be reused
to implement new ones.```


## Functions Documentation

### function get_available_likelihoods

```
def get_available_likelihoods(
    backendDir backendDir
)
```




```
Function that reads and returns a list of all folder names in the MontePython/montepython/likelihoods folder.
    The output is used in GAMBIT to check if the user requested to use a likelihood which is actually not availible
    in the installed version of MontePython. 
    
    Input:
    ------
    str backendDir: string containing backend directory of MontePython

    Output:
    -------
    list output: list of strings containing the names of available likelihoods
```



## Attributes Documentation

### variable basestring

```
basestring =  str;
```





-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000