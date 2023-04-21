#include "graph.h"
#include <iostream>
#include <typeinfo>

void Graph::add_vertex(double value){

    vertex *new_vertex = new vertex;
    std::string id = std::to_string(_graph_size);
    string t="teste";

    new_vertex->id = id;
    new_vertex->adj_list = LinkedList();
    new_vertex->value = value;

    _vertex_map[id] = new_vertex;
    _graph_size += 1;
}