#ifndef _GRAPH_
#define _GRAPH_

#include "../linked-list/linked-list.h"
#include <unordered_map>
#include <vector>

class Graph{

    struct vertex{
        size_t id;
        double value;
        std::vector<size_t> adj_list;
    };

    typedef struct vertex vertex;

    public:

        Graph()
            :_vertex_map(),_graph_size(0)
            {};

        void add_vertex(double value);
        void add_edge(size_t id_1, size_t id_2);
        void remove_vertex(size_t id);
        void remove_edge(size_t id_1, size_t id_2);
        void show_vertex();
        void show_edges();

    private:
        std::unordered_map<size_t, vertex*> _vertex_map;
        size_t _graph_size;
};

#endif