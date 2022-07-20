---
title: 'namespace MPLike_patch_script'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Functions

|                | Name           |
| -------------- | -------------- |
| def | **[replace](/documentation/code/namespaces/namespacemplike__patch__script/#function-replace)**(file file, pattern pattern, subst subst, append_to_beginning append_to_beginning ="") |

## Attributes

|                | Name           |
| -------------- | -------------- |
| list | **[output](/documentation/code/namespaces/namespacemplike__patch__script/#variable-output)**  |
| | **[abspath](/documentation/code/namespaces/namespacemplike__patch__script/#variable-abspath)**  |
| | **[append_to_beginning](/documentation/code/namespaces/namespacemplike__patch__script/#variable-append-to-beginning)**  |

## Detailed Description




```
GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///  script to patch MontePython to work with gambit
///
///   - harvest all likelihoods included in montepython/likelihoods folder
///   - create list of available likelihoods
///   - replace import statement in each __init__ file to import MontePhytonLike instead of montepython.likelihood_class
///
///   Note: for simplicity the Data object is also defined in MontePythonLike (extra file in standard MontePython)
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Janina Renk
///          (janina.renk@fysik.su.se)
///  \date 2019 June
///  \date 2020 Sep
///
///  \author Patrick Stoecker
///          (stoecker@physik.rwth-aachen.de)
///  \date 2021 Sep
///
///  *********************************************```


## Functions Documentation

### function replace

```
def replace(
    file file,
    pattern pattern,
    subst subst,
    append_to_beginning append_to_beginning =""
)
```



## Attributes Documentation

### variable output

```
list output =  [dI for dI in os.listdir("montepython/likelihoods/") if os.path.isdir(os.path.join('montepython/likelihoods/',dI))];
```


### variable abspath

```
abspath =  os.path.dirname(os.path.abspath(__file__));
```


### variable append_to_beginning

```
append_to_beginning;
```





-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000