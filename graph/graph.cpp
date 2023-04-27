#include "graph.h"
#include <iostream>
#include <typeinfo>
#include <algorithm>

void Graph::add_vertex(double value){

    vertex *new_vertex = new vertex;
    size_t id = _graph_size;

    new_vertex->id = id;
    new_vertex->adj_list = std::vector<size_t>();
    new_vertex->value = value;

    _vertex_map[id] = new_vertex;
    _graph_size += 1;
}

void Graph::add_edge(size_t id_1, size_t id_2){

    _vertex_map[id_1]->adj_list.push_back(id_2);
    _vertex_map[id_2]->adj_list.push_back(id_1);
}

void Graph::remove_edge(size_t id_1, size_t id_2){
   
    std::vector<size_t> & edges_1 = _vertex_map[id_1]->adj_list;

    auto it1 = std::find(edges_1.begin(), edges_1.end(), id_2);

    edges_1.erase(it1);

    std::vector<size_t> & edges_2 = _vertex_map[id_2]->adj_list;

    auto it2 = std::find(edges_2.begin(), edges_2.end(), id_1);

    edges_2.erase(it2);
}

void Graph::remove_vertex(size_t id){

    for (const size_t & connection : _vertex_map[id]->adj_list){
        cout << connection << "~";
        Graph::remove_edge(id, connection);
    };

    delete _vertex_map[id];
    _vertex_map[id] = nullptr;
    _graph_size -= 1;
}




void Graph::show_vertex(){

    for (auto pair: _vertex_map){
        cout << pair.first << ": " << pair.second->value << "|";
    }
    cout << endl;
}

void Graph::show_edges(){

    for (auto pair: _vertex_map){

        if (pair.second != nullptr){
            cout << "Vertex: " << pair.first << "---";
            cout << "Edges: ";
            for (auto edge: pair.second->adj_list){
                cout << edge << "|";
            }
        }
        cout << endl;
    }
}