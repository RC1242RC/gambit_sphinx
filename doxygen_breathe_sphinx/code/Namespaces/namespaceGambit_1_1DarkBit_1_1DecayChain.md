---
title: 'namespace Gambit::DarkBit::DecayChain'

description: "[No description available]"

---






[No description available]

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::DarkBit::DecayChain::ChainContainer](/documentation/code/classes/structgambit_1_1darkbit_1_1decaychain_1_1chaincontainer/)**  |
| class | **[Gambit::DarkBit::DecayChain::ChainParticle](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1chainparticle/)**  |
| class | **[Gambit::DarkBit::DecayChain::DecayTable](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytable/)**  |
| class | **[Gambit::DarkBit::DecayChain::DecayTableEntry](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/)**  |
| class | **[Gambit::DarkBit::DecayChain::mat4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1mat4/)**  |
| class | **[Gambit::DarkBit::DecayChain::vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/)**  |
| class | **[Gambit::DarkBit::DecayChain::vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/)**  |

## Types

|                | Name           |
| -------------- | -------------- |
| typedef std::vector< const [Gambit::DarkBit::DecayChain::ChainParticle](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1chainparticle/) * > | **[ChainParticleVector](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#typedef-chainparticlevector)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) | **[operator*](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator*)**(double x, const [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) & y) |
| [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) | **[operator*](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator*)**(const [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) & y, double x) |
| [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) | **[operator/](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator/)**(const [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) & y, double x) |
| ostream & | **[operator<<](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator<<)**(ostream & os, const [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) & v) |
| double | **[dot](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-dot)**(const [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) & a, const [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) & b) |
| [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) | **[operator*](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator*)**(double x, const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & y) |
| [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) | **[operator*](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator*)**(const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & y, double x) |
| [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) | **[operator+](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator+)**(const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & x, const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & y) |
| [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) | **[operator-](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator-)**(const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & x, const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & y) |
| ostream & | **[operator<<](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator<<)**(ostream & os, const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & v) |
| double | **[dot](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-dot)**(const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & a, const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & b) |
| [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) | **[Ep4vec](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-ep4vec)**(const [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) p, double m) |
| [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) | **[operator*](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator*)**(const [mat4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1mat4/) & m, const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & v) |
| [mat4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1mat4/) | **[operator*](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator*)**(const [mat4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1mat4/) & m1, const [mat4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1mat4/) & m2) |
| ostream & | **[operator<<](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator<<)**(ostream & os, const [mat4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1mat4/) & m) |
| double | **[rand_m1_1](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-rand-m1-1)**() |
| double | **[rand_0_1](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-rand-0-1)**() |
| [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) | **[randOnSphere](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-randonsphere)**() |
| void | **[lorentzMatrix](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-lorentzmatrix)**(const [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) & beta_xyz, [mat4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1mat4/) & mat) |
| void | **[lorentzMatrix](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-lorentzmatrix)**(const [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) & beta_xyz, [mat4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1mat4/) & mat, double gamma) |
| [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) | **[lorentzBoost](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-lorentzboost)**(const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & inVec, const [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) & beta_xyz) |
| [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) | **[p_parentFrame](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-p-parentframe)**(const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & inVec, const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & p_parent) |
| void | **[boostMatrixParentFrame](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-boostmatrixparentframe)**([mat4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1mat4/) & mat, [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & p_parent) |
| double | **[invariantMass](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-invariantmass)**(const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & a, const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & b) |
| std::ostream & | **[operator<<](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator<<)**(std::ostream & os, const [vec3](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec3/) & v) |
| std::ostream & | **[operator<<](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator<<)**(std::ostream & os, const [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & v) |
| std::ostream & | **[operator<<](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-operator<<)**(std::ostream & os, const [mat4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1mat4/) & m) |
| void | **[boostMatrixParentFrame](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1decaychain/#function-boostmatrixparentframe)**([mat4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1mat4/) & mat, [vec4](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1vec4/) & p_parent, double m) |

## Types Documentation

### typedef ChainParticleVector

```
typedef std::vector<const Gambit::DarkBit::DecayChain::ChainParticle*> Gambit::DarkBit::DecayChain::ChainParticleVector;
```



## Functions Documentation

### function operator*

```
vec3 operator*(
    double x,
    const vec3 & y
)
```


### function operator*

```
vec3 operator*(
    const vec3 & y,
    double x
)
```


### function operator/

```
vec3 operator/(
    const vec3 & y,
    double x
)
```


### function operator<<

```
ostream & operator<<(
    ostream & os,
    const vec3 & v
)
```


### function dot

```
double dot(
    const vec3 & a,
    const vec3 & b
)
```


### function operator*

```
vec4 operator*(
    double x,
    const vec4 & y
)
```


### function operator*

```
vec4 operator*(
    const vec4 & y,
    double x
)
```


### function operator+

```
vec4 operator+(
    const vec4 & x,
    const vec4 & y
)
```


### function operator-

```
vec4 operator-(
    const vec4 & x,
    const vec4 & y
)
```


### function operator<<

```
ostream & operator<<(
    ostream & os,
    const vec4 & v
)
```


### function dot

```
double dot(
    const vec4 & a,
    const vec4 & b
)
```


### function Ep4vec

```
vec4 Ep4vec(
    const vec3 p,
    double m
)
```


### function operator*

```
vec4 operator*(
    const mat4 & m,
    const vec4 & v
)
```


### function operator*

```
mat4 operator*(
    const mat4 & m1,
    const mat4 & m2
)
```


### function operator<<

```
ostream & operator<<(
    ostream & os,
    const mat4 & m
)
```


### function rand_m1_1

```
double rand_m1_1()
```


### function rand_0_1

```
inline double rand_0_1()
```


### function randOnSphere

```
vec3 randOnSphere()
```


### function lorentzMatrix

```
void lorentzMatrix(
    const vec3 & beta_xyz,
    mat4 & mat
)
```


### function lorentzMatrix

```
void lorentzMatrix(
    const vec3 & beta_xyz,
    mat4 & mat,
    double gamma
)
```


### function lorentzBoost

```
vec4 lorentzBoost(
    const vec4 & inVec,
    const vec3 & beta_xyz
)
```


### function p_parentFrame

```
vec4 p_parentFrame(
    const vec4 & inVec,
    const vec4 & p_parent
)
```


### function boostMatrixParentFrame

```
void boostMatrixParentFrame(
    mat4 & mat,
    vec4 & p_parent
)
```


### function invariantMass

```
double invariantMass(
    const vec4 & a,
    const vec4 & b
)
```


### function operator<<

```
std::ostream & operator<<(
    std::ostream & os,
    const vec3 & v
)
```


### function operator<<

```
std::ostream & operator<<(
    std::ostream & os,
    const vec4 & v
)
```


### function operator<<

```
std::ostream & operator<<(
    std::ostream & os,
    const mat4 & m
)
```


### function boostMatrixParentFrame

```
void boostMatrixParentFrame(
    mat4 & mat,
    vec4 & p_parent,
    double m
)
```






-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000