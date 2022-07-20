---
title: 'namespace Gambit::DRes'

description: "[No description available]"

---






[No description available]

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::DRes::DependencyResolver](/documentation/code/classes/classgambit_1_1dres_1_1dependencyresolver/)** <br>Main dependency resolver.  |
| class | **[Gambit::DRes::edgeWriter](/documentation/code/classes/classgambit_1_1dres_1_1edgewriter/)**  |
| class | **[Gambit::DRes::labelWriter](/documentation/code/classes/classgambit_1_1dres_1_1labelwriter/)**  |
| struct | **[Gambit::DRes::OutputVertexInfo](/documentation/code/classes/structgambit_1_1dres_1_1outputvertexinfo/)** <br>Minimal info about outputVertices.  |
| struct | **[Gambit::DRes::QueueEntry](/documentation/code/classes/structgambit_1_1dres_1_1queueentry/)** <br>Information in parameter queue.  |
| struct | **[Gambit::DRes::Rule](/documentation/code/classes/structgambit_1_1dres_1_1rule/)**  |

## Types

|                | Name           |
| -------------- | -------------- |
| typedef adjacency_list< vecS, vecS, bidirectionalS, functor *, vecS > | **[MasterGraphType](/documentation/code/namespaces/namespacegambit_1_1dres/#typedef-mastergraphtype)**  |
| typedef graph_traits< [MasterGraphType](/documentation/code/namespaces/namespacegambit_1_1dres/#typedef-mastergraphtype) >::vertex_descriptor | **[VertexID](/documentation/code/namespaces/namespacegambit_1_1dres/#typedef-vertexid)**  |
| typedef graph_traits< [MasterGraphType](/documentation/code/namespaces/namespacegambit_1_1dres/#typedef-mastergraphtype) >::edge_descriptor | **[EdgeID](/documentation/code/namespaces/namespacegambit_1_1dres/#typedef-edgeid)**  |
| typedef property_map< [MasterGraphType](/documentation/code/namespaces/namespacegambit_1_1dres/#typedef-mastergraphtype), vertex_index_t >::type | **[IndexMap](/documentation/code/namespaces/namespacegambit_1_1dres/#typedef-indexmap)**  |
| typedef std::map< std::string, double * > | **[inputMapType](/documentation/code/namespaces/namespacegambit_1_1dres/#typedef-inputmaptype)**  |
| typedef std::map< std::string, std::vector< functor * > > | **[outputMapType](/documentation/code/namespaces/namespacegambit_1_1dres/#typedef-outputmaptype)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| bool | **[stringComp](/documentation/code/namespaces/namespacegambit_1_1dres/#function-stringcomp)**(const str & s1, const str & s2, bool with_regex =true)<br>Check whether s1 (wildcard + regex allowed) matches s2.  |
| bool | **[typeComp](/documentation/code/namespaces/namespacegambit_1_1dres/#function-typecomp)**(str s1, str s2, const Utils::type_equivalency & eq, bool with_regex =true)<br>Type comparison taking into account equivalence classes.  |
| error & | **[dependency_resolver_error](/documentation/code/namespaces/namespacegambit_1_1dres/#function-dependency-resolver-error)**()<br>Dependency resolver errors.  |
| warning & | **[dependency_resolver_warning](/documentation/code/namespaces/namespacegambit_1_1dres/#function-dependency-resolver-warning)**()<br>Dependency resolver warnings.  |
| void | **[getParentVertices](/documentation/code/namespaces/namespacegambit_1_1dres/#function-getparentvertices)**(const VertexID & vertex, const [DRes::MasterGraphType](/documentation/code/namespaces/namespacegambit_1_1dres/#typedef-mastergraphtype) & graph, std::set< VertexID > & myVertexList) |
| std::vector< VertexID > | **[sortVertices](/documentation/code/namespaces/namespacegambit_1_1dres/#function-sortvertices)**(const std::set< VertexID > & set, const std::list< VertexID > & topoOrder) |
| std::vector< VertexID > | **[getSortedParentVertices](/documentation/code/namespaces/namespacegambit_1_1dres/#function-getsortedparentvertices)**(const VertexID & vertex, const [DRes::MasterGraphType](/documentation/code/namespaces/namespacegambit_1_1dres/#typedef-mastergraphtype) & graph, const std::list< VertexID > & topoOrder) |
| bool | **[quantityMatchesIniEntry](/documentation/code/namespaces/namespacegambit_1_1dres/#function-quantitymatchesinientry)**(const sspair & quantity, const [IniParser::ObservableType](/documentation/code/classes/structgambit_1_1iniparser_1_1types_1_1observable/) & observable, const Utils::type_equivalency & eq) |
| bool | **[capabilityMatchesIniEntry](/documentation/code/namespaces/namespacegambit_1_1dres/#function-capabilitymatchesinientry)**(const sspair & quantity, const [IniParser::ObservableType](/documentation/code/classes/structgambit_1_1iniparser_1_1types_1_1observable/) & observable) |
| bool | **[moduleFuncMatchesIniEntry](/documentation/code/namespaces/namespacegambit_1_1dres/#function-modulefuncmatchesinientry)**(functor * f, const [IniParser::ObservableType](/documentation/code/classes/structgambit_1_1iniparser_1_1types_1_1observable/) & e, const Utils::type_equivalency & eq) |
| bool | **[backendFuncMatchesIniEntry](/documentation/code/namespaces/namespacegambit_1_1dres/#function-backendfuncmatchesinientry)**(functor * f, const [IniParser::ObservableType](/documentation/code/classes/structgambit_1_1iniparser_1_1types_1_1observable/) & e, const Utils::type_equivalency & eq) |
| int | **[getEntryLevelForOptions](/documentation/code/namespaces/namespacegambit_1_1dres/#function-getentrylevelforoptions)**(const [IniParser::ObservableType](/documentation/code/classes/structgambit_1_1iniparser_1_1types_1_1observable/) & e) |
| bool | **[matchesRules](/documentation/code/namespaces/namespacegambit_1_1dres/#function-matchesrules)**(functor * f, const [Rule](/documentation/code/classes/structgambit_1_1dres_1_1rule/) & rule) |
| double | **[getTimeEstimate](/documentation/code/namespaces/namespacegambit_1_1dres/#function-gettimeestimate)**(const std::set< VertexID > & vertexList, const [DRes::MasterGraphType](/documentation/code/namespaces/namespacegambit_1_1dres/#typedef-mastergraphtype) & graph) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| bool | **[use_regex](/documentation/code/namespaces/namespacegambit_1_1dres/#variable-use-regex)** <br>Global flag for regex use.  |

## Types Documentation

### typedef MasterGraphType

```
typedef adjacency_list<vecS, vecS, bidirectionalS, functor*, vecS> Gambit::DRes::MasterGraphType;
```


Typedefs for central boost graph 


### typedef VertexID

```
typedef graph_traits<MasterGraphType>::vertex_descriptor Gambit::DRes::VertexID;
```


### typedef EdgeID

```
typedef graph_traits<MasterGraphType>::edge_descriptor Gambit::DRes::EdgeID;
```


### typedef IndexMap

```
typedef property_map<MasterGraphType,vertex_index_t>::type Gambit::DRes::IndexMap;
```


### typedef inputMapType

```
typedef std::map<std::string, double *> Gambit::DRes::inputMapType;
```


Typedefs for communication channels with the master-likelihood 


### typedef outputMapType

```
typedef std::map<std::string, std::vector<functor*> > Gambit::DRes::outputMapType;
```



## Functions Documentation

### function stringComp

```
bool stringComp(
    const str & s1,
    const str & s2,
    bool with_regex =true
)
```

Check whether s1 (wildcard + regex allowed) matches s2. 

### function typeComp

```
bool typeComp(
    str s1,
    str s2,
    const Utils::type_equivalency & eq,
    bool with_regex =true
)
```

Type comparison taking into account equivalence classes. 

### function dependency_resolver_error

```
error & dependency_resolver_error()
```

Dependency resolver errors. 

### function dependency_resolver_warning

```
warning & dependency_resolver_warning()
```

Dependency resolver warnings. 

### function getParentVertices

```
void getParentVertices(
    const VertexID & vertex,
    const DRes::MasterGraphType & graph,
    std::set< VertexID > & myVertexList
)
```


### function sortVertices

```
std::vector< VertexID > sortVertices(
    const std::set< VertexID > & set,
    const std::list< VertexID > & topoOrder
)
```


### function getSortedParentVertices

```
std::vector< VertexID > getSortedParentVertices(
    const VertexID & vertex,
    const DRes::MasterGraphType & graph,
    const std::list< VertexID > & topoOrder
)
```


### function quantityMatchesIniEntry

```
bool quantityMatchesIniEntry(
    const sspair & quantity,
    const IniParser::ObservableType & observable,
    const Utils::type_equivalency & eq
)
```


### function capabilityMatchesIniEntry

```
bool capabilityMatchesIniEntry(
    const sspair & quantity,
    const IniParser::ObservableType & observable
)
```


### function moduleFuncMatchesIniEntry

```
bool moduleFuncMatchesIniEntry(
    functor * f,
    const IniParser::ObservableType & e,
    const Utils::type_equivalency & eq
)
```


### function backendFuncMatchesIniEntry

```
bool backendFuncMatchesIniEntry(
    functor * f,
    const IniParser::ObservableType & e,
    const Utils::type_equivalency & eq
)
```


### function getEntryLevelForOptions

```
int getEntryLevelForOptions(
    const IniParser::ObservableType & e
)
```


### function matchesRules

```
bool matchesRules(
    functor * f,
    const Rule & rule
)
```


### function getTimeEstimate

```
double getTimeEstimate(
    const std::set< VertexID > & vertexList,
    const DRes::MasterGraphType & graph
)
```



## Attributes Documentation

### variable use_regex

```
bool use_regex;
```

Global flag for regex use. 




-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000