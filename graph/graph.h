#ifndef _GRAPH_
#define _GRAPH_

#include "../linked-list/linked-list.h"

class Graph{

    struct vertex{
        string id;
        double value;
        LinkedList adj_list;
    };

    typedef struct vertex vertex;

    public:

        Graph()
            :_vertex_list(),_graph_size(0)
            {};

        void add_vertex(double value);
        void add_edge(string id_1, string id_2);
        void remove_vertex(string id);
        void remove_edge(string id_1, string id_2);

    private:
        LinkedList _vertex_list;
        size_t _graph_size;
};

#endif