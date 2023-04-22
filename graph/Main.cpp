#include "graph.h"
#include <cassert>
#include "../linked-list/linked-list.cpp"
#include "../linked-list/linked-list.h"


void test_add_vertex(){
    Graph graph;
    graph.add_vertex(2.4);
}

void test_show_vertex(){
    Graph graph;
    graph.add_vertex(0.3);
    graph.add_vertex(1.3);
    graph.add_vertex(2.3);
    graph.add_vertex(3.3);
    graph.show_vertex();
}

void test_add_edge(){
    Graph graph;
    graph.add_vertex(0.5);
    graph.add_vertex(2.5);
    graph.add_vertex(3.5);
    graph.add_vertex(4.5);
    graph.add_edge(0,1);
    graph.add_edge(3,0);
    graph.add_edge(0,2);
    graph.add_edge(2,1);

    graph.show_edges();
}

int main(){

    test_add_vertex();
    test_show_vertex();
    test_add_edge();
    return 0;
}
