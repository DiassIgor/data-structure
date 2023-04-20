#include "graph.h"
#include <iostream>
#include <typeinfo>

void Graph::add_vertex(double value){

    vertex *new_vertex = new vertex;
    std::string id = std::to_string(_graph_size);
    string t="teste";

    std::cout << typeid(id).name() << std::endl;
    std::cout << typeid(t).name() << std::endl;
    std::cout << typeid(_vertex_list).name() << std::endl;
    //_vertex_list.show_list();

    new_vertex->id = id;
    new_vertex->adj_list = LinkedList();
    new_vertex->value = value;

    //_vertex_list.insert(id);
    _graph_size += 1;
}