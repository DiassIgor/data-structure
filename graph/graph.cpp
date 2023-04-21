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

void Graph::add_edge(string id_1, string id_2){

    _vertex_map[id_1]->adj_list.insert(id_2);
    _vertex_map[id_2]->adj_list.insert(id_1);
}

void Graph::show_vertex(){

    for (auto pair: _vertex_map){
        cout << pair.first << ": " << pair.second->value << "|";
    }
    cout << endl;
}

void Graph::show_edges(){

    for (auto pair: _vertex_map){
        cout << "Vertex: " << pair.first << endl;
        pair.second->adj_list.show_list();
    }
    
}