---
title: 'class Gambit::ColliderBit::Py8Collider'
description: 'A specializable, recyclable class interfacing ColliderBit and Pythia. '

---








A specializable, recyclable class interfacing ColliderBit and Pythia.  [More...](#detailed-description)


`#include <Py8Collider.hpp>`

Inherits from [Gambit::ColliderBit::BaseCollider](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/)

## Public Classes

|                | Name           |
| -------------- | -------------- |
| class | **[EventGenerationError](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider_1_1eventgenerationerror/)** <br>An exception for when Pythia fails to generate events.  |
| class | **[InitializationError](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider_1_1initializationerror/)** <br>An exception for when Pythia fails to initialize.  |

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Py8Collider](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-py8collider)**() |
| | **[~Py8Collider](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-~py8collider)**() |
| virtual void | **[clear](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-clear)**()<br>Reset this instance for reuse, avoiding the need for "new" or "delete".  |
| void | **[addToSettings](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-addtosettings)**(const std::string & command)<br>Add a command to the list of settings used by "init".  |
| void | **[banner](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-banner)**(const std::string pythiaDocPath)<br>Create a useless Pythia instance just to print the banner.  |
| virtual void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-init)**()<br>Initialize with no settings (error): override version.  |
| virtual void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-init)**(const std::vector< std::string > & externalSettings) |
| void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-init)**(const std::string pythiaDocPath, const std::vector< std::string > & externalSettings, const SLHAea::Coll * slhaea =nullptr, std::ostream & os =std::cout) |
| void | **[init_user_model](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-init-user-model)**(const std::string pythiaDocPath, const std::vector< std::string > & externalSettings, const SLHAea::Coll * slhaea =nullptr, std::ostream & os =std::cout) |
| void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-init)**(const std::string pythiaDocPath, const std::vector< std::string > & externalSettings, std::ostream & os)<br>Initialize from some external settings, assuming no given SLHAea instance.  |
| void | **[init_user_model](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-init-user-model)**(const std::string pythiaDocPath, const std::vector< std::string > & externalSettings, std::ostream & os)<br>Initialize from some external settings, assuming no given SLHAea instance.  |
| void | **[nextEvent](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-nextevent)**(EventT & event) const<br>Event generation for any Pythia interface to [Gambit](/documentation/code/namespaces/namespacegambit/).  |
| virtual double | **[xsec_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsec-fb)**() const<br>Report the total or process-specific cross section (in fb or pb).  |
| virtual double | **[xsec_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsec-fb)**(int process_code) const |
| virtual double | **[xsec_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsec-pb)**() const |
| virtual double | **[xsec_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsec-pb)**(int process_code) const |
| virtual double | **[xsecErr_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsecerr-fb)**() const<br>Report the uncertainty in the total or process-specific cross section (in fb or pb).  |
| virtual double | **[xsecErr_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsecerr-fb)**(int process_code) const |
| virtual double | **[xsecErr_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsecerr-pb)**() const |
| virtual double | **[xsecErr_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-xsecerr-pb)**(int process_code) const |
| virtual int | **[process_code](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-process-code)**() const<br>Report an integer process code for the last generated event.  |
| virtual std::vector< int > | **[all_active_process_codes](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-all-active-process-codes)**() const<br>Report the list of all active process codes.  |
| const PythiaT * | **[pythia](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-pythia)**() const<br>Get the Pythia instance.  |
| bool | **[SetupMatchingUserHook](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#function-setupmatchinguserhook)**() |

## Protected Attributes

|                | Name           |
| -------------- | -------------- |
| PythiaT * | **[_pythiaInstance](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#variable--pythiainstance)**  |
| PythiaT * | **[_pythiaBase](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#variable--pythiabase)**  |
| std::vector< std::string > | **[_pythiaSettings](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/#variable--pythiasettings)**  |

## Additional inherited members

**Public Functions inherited from [Gambit::ColliderBit::BaseCollider](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/)**

|                | Name           |
| -------------- | -------------- |
| | **[BaseCollider](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-basecollider)**()<br>Constructor.  |
| virtual | **[~BaseCollider](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-~basecollider)**()<br>Destructor.  |

**Public Attributes inherited from [Gambit::ColliderBit::BaseCollider](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/)**

|                | Name           |
| -------------- | -------------- |
| bool | **[partonOnly](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#variable-partononly)** <br>Flag indicating if events from this collider should be processed as parton-only or full events.  |
| double | **[antiktR](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#variable-antiktr)** <br>The jet radius used for the anti-kt jet clustering.  |


## Detailed Description

```
template <typename PythiaT ,
typename EventT ,
typename hepmc_writerT >
class Gambit::ColliderBit::Py8Collider;
```

A specializable, recyclable class interfacing ColliderBit and Pythia. 
## Public Functions Documentation

### function Py8Collider

```
inline Py8Collider()
```


### function ~Py8Collider

```
inline ~Py8Collider()
```


### function clear

```
inline virtual void clear()
```

Reset this instance for reuse, avoiding the need for "new" or "delete". 

**Reimplements**: [Gambit::ColliderBit::BaseCollider::clear](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-clear)


### function addToSettings

```
inline void addToSettings(
    const std::string & command
)
```

Add a command to the list of settings used by "init". 

### function banner

```
inline void banner(
    const std::string pythiaDocPath
)
```

Create a useless Pythia instance just to print the banner. 

### function init

```
inline virtual void init()
```

Initialize with no settings (error): override version. 

**Reimplements**: [Gambit::ColliderBit::BaseCollider::init](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-init)


### function init

```
inline virtual void init(
    const std::vector< std::string > & externalSettings
)
```


**Note**: 

  * A string denoting the path to Pythia's xmldoc directory is 
  * assumed to be at the end of the settings vector: 


**Reimplements**: [Gambit::ColliderBit::BaseCollider::init](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-init)


Initialize from some external settings: override version. 


### function init

```
inline void init(
    const std::string pythiaDocPath,
    const std::vector< std::string > & externalSettings,
    const SLHAea::Coll * slhaea =nullptr,
    std::ostream & os =std::cout
)
```


**Note**: This override is most commonly used in ColliderBit. 

Initialize from some external settings. 


### function init_user_model

```
inline void init_user_model(
    const std::string pythiaDocPath,
    const std::vector< std::string > & externalSettings,
    const SLHAea::Coll * slhaea =nullptr,
    std::ostream & os =std::cout
)
```


Initialize from some external settings. Special version of the init function for user defined models Needs to directly construct the new matrix elements (rather than use flags) 


### function init

```
inline void init(
    const std::string pythiaDocPath,
    const std::vector< std::string > & externalSettings,
    std::ostream & os
)
```

Initialize from some external settings, assuming no given SLHAea instance. 

### function init_user_model

```
inline void init_user_model(
    const std::string pythiaDocPath,
    const std::vector< std::string > & externalSettings,
    std::ostream & os
)
```

Initialize from some external settings, assuming no given SLHAea instance. 

### function nextEvent

```
inline void nextEvent(
    EventT & event
) const
```

Event generation for any Pythia interface to [Gambit](/documentation/code/namespaces/namespacegambit/). 

### function xsec_fb

```
inline virtual double xsec_fb() const
```

Report the total or process-specific cross section (in fb or pb). 

**Reimplements**: [Gambit::ColliderBit::BaseCollider::xsec_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsec-fb)


### function xsec_fb

```
inline virtual double xsec_fb(
    int process_code
) const
```


**Reimplements**: [Gambit::ColliderBit::BaseCollider::xsec_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsec-fb)


### function xsec_pb

```
inline virtual double xsec_pb() const
```


**Reimplements**: [Gambit::ColliderBit::BaseCollider::xsec_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsec-pb)


### function xsec_pb

```
inline virtual double xsec_pb(
    int process_code
) const
```


**Reimplements**: [Gambit::ColliderBit::BaseCollider::xsec_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsec-pb)


### function xsecErr_fb

```
inline virtual double xsecErr_fb() const
```

Report the uncertainty in the total or process-specific cross section (in fb or pb). 

**Reimplements**: [Gambit::ColliderBit::BaseCollider::xsecErr_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsecerr-fb)


### function xsecErr_fb

```
inline virtual double xsecErr_fb(
    int process_code
) const
```


**Reimplements**: [Gambit::ColliderBit::BaseCollider::xsecErr_fb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsecerr-fb)


### function xsecErr_pb

```
inline virtual double xsecErr_pb() const
```


**Reimplements**: [Gambit::ColliderBit::BaseCollider::xsecErr_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsecerr-pb)


### function xsecErr_pb

```
inline virtual double xsecErr_pb(
    int process_code
) const
```


**Reimplements**: [Gambit::ColliderBit::BaseCollider::xsecErr_pb](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-xsecerr-pb)


### function process_code

```
inline virtual int process_code() const
```

Report an integer process code for the last generated event. 

**Reimplements**: [Gambit::ColliderBit::BaseCollider::process_code](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-process-code)


### function all_active_process_codes

```
inline virtual std::vector< int > all_active_process_codes() const
```

Report the list of all active process codes. 

**Reimplements**: [Gambit::ColliderBit::BaseCollider::all_active_process_codes](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/#function-all-active-process-codes)


### function pythia

```
inline const PythiaT * pythia() const
```

Get the Pythia instance. 

### function SetupMatchingUserHook

```
inline bool SetupMatchingUserHook()
```


## Protected Attributes Documentation

### variable _pythiaInstance

```
PythiaT * _pythiaInstance;
```


### variable _pythiaBase

```
PythiaT * _pythiaBase;
```


### variable _pythiaSettings

```
std::vector< std::string > _pythiaSettings;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000