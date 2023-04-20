#include "graph.h"

void Graph::add_vertex(double value){

    vertex *new_vertex = new vertex;

    new_vertex->id = std::to_string(_graph_size);
    new_vertex->adj_list = LinkedList();
    new_vertex->value = value;

    _vertex_list.insert(new_vertex->id);
    _graph_size += 1;
}