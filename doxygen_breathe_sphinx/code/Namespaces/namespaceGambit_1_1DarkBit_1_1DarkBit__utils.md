---
title: 'namespace Gambit::DarkBit::DarkBit_utils'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| std::string | **[str_flav_to_mass](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1darkbit__utils/#function-str-flav-to-mass)**(const std::string & flav) |
| std::string | **[str_mass_to_flav](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1darkbit__utils/#function-str-mass-to-flav)**(const std::string & mass) |
| void | **[ImportDecays](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1darkbit__utils/#function-importdecays)**(std::string pID, [TH_ProcessCatalog](/documentation/code/classes/structgambit_1_1darkbit_1_1th__processcatalog/) & catalog, std::set< std::string > & importedDecays, const DecayTable * tbl, double minBranching, std::vector< std::string > excludeDecays =std::vector< std::string >()) |
| template <int i\> <br>double | **[gamma3bdy_limits](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1darkbit__utils/#function-gamma3bdy-limits)**(double Eg, double M_DM, double m1, double m2)<br>Calculate kinematical limits for three-body final states.  |
| template double | **[gamma3bdy_limits< 0 >](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1darkbit__utils/#function-gamma3bdy-limits<-0->)**(double , double , double , double ) |
| template double | **[gamma3bdy_limits< 1 >](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1darkbit__utils/#function-gamma3bdy-limits<-1->)**(double , double , double , double ) |


## Functions Documentation

### function str_flav_to_mass

```
std::string str_flav_to_mass(
    const std::string & flav
)
```


### function str_mass_to_flav

```
std::string str_mass_to_flav(
    const std::string & mass
)
```


### function ImportDecays

```
void ImportDecays(
    std::string pID,
    TH_ProcessCatalog & catalog,
    std::set< std::string > & importedDecays,
    const DecayTable * tbl,
    double minBranching,
    std::vector< std::string > excludeDecays =std::vector< std::string >()
)
```


### function gamma3bdy_limits

```
template <int i>
double gamma3bdy_limits(
    double Eg,
    double M_DM,
    double m1,
    double m2
)
```

Calculate kinematical limits for three-body final states. 

Notes:

* m0 = 0, E0 = Eg
* M_DM is half of center of mass energy
* returns E1_low or E1_high, or 0 if kinematically forbidden
* Template parameter 0(1) means lower (upper) limit of range. 


### function gamma3bdy_limits< 0 >

```
template double gamma3bdy_limits< 0 >(
    double ,
    double ,
    double ,
    double 
)
```


### function gamma3bdy_limits< 1 >

```
template double gamma3bdy_limits< 1 >(
    double ,
    double ,
    double ,
    double 
)
```






-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000