---
title: 'file Core/modelgraph.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::ModelHierarchy](/documentation/code/classes/classgambit_1_1modelhierarchy/)** <br>Model hierarchy tree class.  |

## Detailed Description


Model graph declarations.



------------------


# Authors

(add name and date if you modify)

Ben Farmer ([benjamin.farmer@monash.edu.au](mailto:benjamin.farmer@monash.edu.au)) 

2013 July 17

Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 

2013 Aug 

2014 Mar



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#ifndef __modelgraph_hpp__
#define __modelgraph_hpp__

#include "gambit/Core/depresolver.hpp"
#include "gambit/Models/models.hpp"

namespace Gambit
{

  class ModelHierarchy
  {
    struct edge_color_t { typedef boost::edge_property_tag kind; };

    typedef boost::property<edge_color_t, std::string> EdgeColor;
    typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::bidirectionalS, functor*, EdgeColor> ModelGraphType;
    typedef boost::graph_traits<ModelGraphType>::vertex_descriptor ModelVertexID;
    typedef boost::graph_traits<ModelGraphType>::edge_descriptor ModelEdgeID;
    typedef boost::property_map<ModelGraphType,boost::vertex_index_t>::type ModelIndexMap;

    typedef std::vector<primary_model_functor*> primodel_vec;

    private:

      class labelWriter
      {
        private:
          const ModelGraphType * myGraph;
        public:
          labelWriter(const ModelGraphType*);
          void operator()(std::ostream&, const ModelVertexID&) const;
      };


      class colorWriter
      {
        private:

          const boost::property_map<ModelGraphType, edge_color_t>::const_type color;

        public:

          colorWriter(const ModelGraphType* g) : color( boost::get(edge_color_t(),*g) )
          {}

          template<class VertexOrEdge>
          void operator()(std::ostream& out, const VertexOrEdge& e) const
          {
            // check if this is the edge we want to color red
            if( boost::get(color,e) == "red" ) out << "[color=red]";
          }
      };

      const Models::ModelFunctorClaw* boundClaw;

      str filename;

      bool verbose;

      ModelGraphType modelGraph;

      void addFunctorsToGraph(const primodel_vec&);

      void makeGraph (const primodel_vec&);

    public:

      ModelHierarchy(const Models::ModelFunctorClaw&, const primodel_vec&, str, bool);

  };

}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
