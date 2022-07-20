---
title: 'file Core/depresolver.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::DRes](/documentation/code/namespaces/namespacegambit_1_1dres/)**  |
| **[boost](/documentation/code/namespaces/namespaceboost/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::DRes::OutputVertexInfo](/documentation/code/classes/structgambit_1_1dres_1_1outputvertexinfo/)** <br>Minimal info about outputVertices.  |
| struct | **[Gambit::DRes::Rule](/documentation/code/classes/structgambit_1_1dres_1_1rule/)**  |
| struct | **[Gambit::DRes::QueueEntry](/documentation/code/classes/structgambit_1_1dres_1_1queueentry/)** <br>Information in parameter queue.  |
| class | **[Gambit::DRes::DependencyResolver](/documentation/code/classes/classgambit_1_1dres_1_1dependencyresolver/)** <br>Main dependency resolver.  |

## Detailed Description


**Author**: 

  * Christoph Weniger ([c.weniger@uva.nl](mailto:c.weniger@uva.nl)) 
  * Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 
  * Tomas Gonzalo ([tomas.gonzalo@monash.edu](mailto:tomas.gonzalo@monash.edu)) 
  * Patrick Stoecker ([stoecker@physik.rwth-aachen.de](mailto:stoecker@physik.rwth-aachen.de)) 


**Date**: 

  * 2013 Apr, May, Jun, Jul
  * 2013 May, Aug, Nov 
  * 2014 Aug 
  * 2015 May
  * 2019 May 
  * 2021 Sep
  * 2020 May


Dependency resolution with boost graph library



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __depresolver_hpp__
#define __depresolver_hpp__

#include <string>
#include <list>
#include <vector>
#include <map>
#include <queue>

#include "gambit/Core/core.hpp"
#include "gambit/Core/error_handlers.hpp"
#include "gambit/Core/yaml_parser.hpp"
#include "gambit/Printers/baseprinter.hpp"
#include "gambit/Elements/functors.hpp"
#include "gambit/Elements/type_equivalency.hpp"

#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/topological_sort.hpp>

namespace Gambit
{

  namespace DRes
  {

    using namespace boost;

    typedef adjacency_list<vecS, vecS, bidirectionalS, functor*, vecS> MasterGraphType;
    typedef graph_traits<MasterGraphType>::vertex_descriptor VertexID;
    typedef graph_traits<MasterGraphType>::edge_descriptor EdgeID;
    typedef property_map<MasterGraphType,vertex_index_t>::type IndexMap;

    typedef std::map<std::string, double *> inputMapType;
    typedef std::map<std::string, std::vector<functor*> > outputMapType;

    struct OutputVertexInfo
    {
      VertexID vertex;
      const IniParser::ObservableType * iniEntry;
    };

    struct Rule
    {
      Rule(std::string function, std::string module) : function(function), module(module) {};
      Rule(IniParser::ObservableType t)
      {
        module = t.module;
        function = t.function;
      };
      std::string function;
      std::string module;
    };

    struct QueueEntry
    {
      QueueEntry() {}
      QueueEntry(sspair a, DRes::VertexID b, int c, bool d)
      {
        first = a;
        second = b;
        third = c;
        printme = d;
      }
      sspair first;
      DRes::VertexID second;
      int third;
      bool printme;
    };

    bool stringComp(const str &s1, const str &s2, bool with_regex = true);

    bool typeComp(str, str, const Utils::type_equivalency&, bool with_regex = true);

    class DependencyResolver
    {
      public:
        DependencyResolver(const gambit_core&, const Models::ModelFunctorClaw&, const IniParser::IniFile&, const Utils::type_equivalency&, Printers::BasePrinter&);

        void doResolution();

        static MasterGraphType cullInactiveFunctors(MasterGraphType&);

        void printFunctorList();

        void printFunctorEvalOrder(bool toterminal=false);

        void printRequiredBackends();

        void getCitationKeys();

        // Print citation keys
        void printCitationKeys();

        std::vector<VertexID> getObsLikeOrder();

        void calcObsLike(VertexID);

        void printObsLike(VertexID, const int);

        bool printTiming();

        functor* get_functor(VertexID);

        str checkTypeMatch(VertexID, const str&, const std::vector<str>&);

        template <typename TYPE>
        TYPE getObsLike(VertexID vertex)
        {
          module_functor<TYPE>* module_ptr = dynamic_cast<module_functor<TYPE>*>(masterGraph[vertex]);
          if (module_ptr == NULL)
          {
            str msg = "Attempted to retrieve result of " + masterGraph[vertex]->origin() + "::" +
                      masterGraph[vertex]->name() + "\nwith incorrect type.  The type should be: " +
                      masterGraph[vertex]->type() + ".";
            core_error().raise(LOCAL_INFO, msg);
          }
          // This always accesses the 0-index result, which is the one-thread result
          // or the 'final result' when more than one thread has run the functor.
          return (*module_ptr)(0);
        }

        const IniParser::ObservableType * getIniEntry(VertexID);

        void invalidatePointAt(VertexID, bool);

        void resetAll();

      private:
        void addFunctors();

        str printGenericFunctorList(const std::vector<functor*>&);
        str printGenericFunctorList(const std::vector<VertexID>&);

        str printQuantityToBeResolved(const sspair & quantity, const DRes::VertexID & vertex);

        void initialisePrinter();

        void makeFunctorsModelCompatible();

        boost::tuple<const IniParser::ObservableType *, DRes::VertexID>
          resolveDependency(DRes::VertexID toVertex, sspair quantity);

        DRes::VertexID resolveDependencyFromRules(const DRes::VertexID & toVertex, const sspair & quantity);

        Options collectIniOptions(const DRes::VertexID & vertex);

        Options collectSubCaps(const DRes::VertexID & vertex);

        void generateTree(std::queue<QueueEntry> parQueue);

        void fillParQueue(std::queue<QueueEntry> *parQueue,
            DRes::VertexID vertex);

        std::list<VertexID> run_topological_sort();

        const IniParser::ObservableType * findIniEntry(
            sspair quantity, const IniParser::ObservablesType &, const str &);
        const IniParser::ObservableType * findIniEntry(
            DRes::VertexID toVertex, const IniParser::ObservablesType &, const str &);

        void resolveVertexBackend(VertexID);

        void resolveVertexClassLoading(VertexID);

        functor* solveRequirement(std::set<sspair>, const IniParser::ObservableType*, VertexID, std::vector<functor*>, bool, str group="none");

        void resolveRequirement(functor*, VertexID);

        std::vector<DRes::VertexID> closestCandidateForModel(std::vector<DRes::VertexID> candidates);

        //
        // Private data members
        //

        const gambit_core *boundCore;

        const Models::ModelFunctorClaw *boundClaw;

        const IniParser::IniFile *boundIniFile;

        const Utils::type_equivalency *boundTEs;

        Printers::BasePrinter *boundPrinter;

        std::vector<OutputVertexInfo> outputVertexInfos;

        MasterGraphType masterGraph;

        std::list<VertexID> function_order;

        std::map<VertexID, std::vector<VertexID>> SortedParentVertices;

        std::map<VertexID, std::set<VertexID>> loopManagerMap;

        std::map<VertexID, std::set<VertexID>> edges_to_force_on_manager;

        // Backends required to fullfil dependencies
        std::vector<std::vector<sspair> > backendsRequired;

        // List of BibTeX keys
        std::vector<str> citationKeys;

        IndexMap index;

        const str activeFunctorGraphFile;

        bool print_timing = false;

        bool print_unitcube = false;
  };
  }
}
#endif /* defined(__depresolver_hpp__) */
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
