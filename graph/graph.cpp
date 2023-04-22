#include "graph.h"
#include <iostream>
#include <typeinfo>

void Graph::add_vertex(double value){

    vertex *new_vertex = new vertex;
    size_t id = _graph_size;

    new_vertex->id = id;
    new_vertex->adj_list = std::vector<size_t>();
    new_vertex->value = value;

    _vertex_map[id] = new_vertex;
    _graph_size += 1;
}

void Graph::remove_edge(size_t id_1, size_t id_2){

    _vertex_map[id_1];

}


void Graph::add_edge(size_t id_1, size_t id_2){

    _vertex_map[id_1]->adj_list.push_back(id_2);
    _vertex_map[id_2]->adj_list.push_back(id_1);
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
        cout << "Edges: ";
        for (auto edge: pair.second->adj_list){
            cout << edge << "|";
        }
        cout << endl;
    }
}