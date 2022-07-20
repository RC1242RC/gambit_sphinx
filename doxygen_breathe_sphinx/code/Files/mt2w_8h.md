---
title: 'file ColliderBit/mt2w.h'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| double | **[calculateMT2wHepUtils](/documentation/code/files/mt2w_8h/#function-calculatemt2wheputils)**(vector< HEPUtils::P4 > & jets, vector< bool > & btag, HEPUtils::P4 & lep, float met, float metphi) |
| double | **[mt2wWrapperHepUtils](/documentation/code/files/mt2w_8h/#function-mt2wwrapperheputils)**(HEPUtils::P4 & lep, HEPUtils::P4 & jet_o, HEPUtils::P4 & jet_b, float met, float metphi) |


## Functions Documentation

### function calculateMT2wHepUtils

```
double calculateMT2wHepUtils(
    vector< HEPUtils::P4 > & jets,
    vector< bool > & btag,
    HEPUtils::P4 & lep,
    float met,
    float metphi
)
```


### function mt2wWrapperHepUtils

```
double mt2wWrapperHepUtils(
    HEPUtils::P4 & lep,
    HEPUtils::P4 & jet_o,
    HEPUtils::P4 & jet_b,
    float met,
    float metphi
)
```




## Source code

```
#include "mt2w_bisect.h"
#include <vector>
#include "HEPUtils/MathUtils.h"
#include "HEPUtils/Event.h"
using namespace std;


double calculateMT2wHepUtils(vector<HEPUtils::P4>& jets, vector<bool>& btag, HEPUtils::P4& lep, float met, float metphi);

double mt2wWrapperHepUtils(HEPUtils::P4& lep, HEPUtils::P4& jet_o, HEPUtils::P4& jet_b, float met, float metphi);
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
