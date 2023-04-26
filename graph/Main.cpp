#include "graph.h"
#include <cassert>
#include <unordered_map>
#include "../linked-list/linked-list.cpp"
#include "../linked-list/linked-list.h"


Graph standard_graph(){

    Graph graph;
    
    graph.add_vertex(0.5);
    graph.add_vertex(1.5);
    graph.add_vertex(2.5);
    graph.add_vertex(3.5);
    graph.add_edge(0,1);
    graph.add_edge(2,0);
    graph.add_edge(0,3);
    graph.add_edge(1,3);

    return graph;
}

void test_layout(auto actual, auto expected, string test_name){
    if (actual == expected){
        cout << test_name << " -> PASSED!" << endl;
    }
    else{
         cout << test_name << " -> ERROR!" << endl;
         cout << "Expected:\n" << expected << endl;
         cout << "Actual Output:\n" << actual << endl;
    }
};

void test_add_vertex0(){

    Graph graph = standard_graph();

    double actual = graph.get_vertex_map().at(0)->value;
    double expected = 0.5;
    test_layout(actual, expected, "Add_vertex0");

}

void test_add_vertex1(){

    Graph graph = standard_graph();

    double actual = graph.get_vertex_map().at(3)->value;
    double expected = 3.5;
    test_layout(actual, expected, "Add_vertex1");

}

void test_add_vertex2(){

    Graph graph = standard_graph();

    size_t actual = graph.get_size();
    size_t expected = 4;
    test_layout(actual, expected, "Add_vertex2");

}

void test_add_edge0(){

    Graph graph = standard_graph();

    size_t actual = graph.get_vertex_map().at(0)->adj_list.at(0);
    size_t expected = 1;
    test_layout(actual, expected, "Add_edge0");
}

void test_add_edge1(){

    Graph graph = standard_graph();

    size_t actual = graph.get_vertex_map().at(0)->adj_list.at(2);
    size_t expected = 3;
    test_layout(actual, expected, "Add_edge1");
}

void test_add_edge2(){

    Graph graph = standard_graph();

    size_t actual = graph.get_vertex_map().at(2)->adj_list.at(0);
    size_t expected = 0;
    test_layout(actual, expected, "Add_edge2");
}

void test_remove_edge0(){

    Graph graph = standard_graph();
    graph.remove_edge(0,1);

    size_t actual = graph.get_vertex_map().at(0)->adj_list.at(0);
    size_t expected = 2;
    test_layout(actual, expected, "Remove_edge0");
}

void test_remove_edge1(){

    Graph graph = standard_graph();
    graph.remove_edge(0,1);

    size_t actual = graph.get_vertex_map().at(1)->adj_list.at(0);
    size_t expected = 3;
    test_layout(actual, expected, "Remove_edge1");
}

void test_remove_edge2(){

    Graph graph = standard_graph();
    graph.remove_edge(0,2);

    bool actual = graph.get_vertex_map().at(2)->adj_list.empty();
    bool expected = true;
    test_layout(actual, expected, "Remove_edge2");
}

void test_remove_edge3(){

    Graph graph = standard_graph();
    graph.remove_edge(0,1);
    graph.remove_edge(0,2);

    size_t actual = graph.get_vertex_map().at(0)->adj_list.at(0);
    size_t expected = 3;
    test_layout(actual, expected, "Remove_edge3");
}

void test_show_vertex(){
    
    Graph graph = standard_graph();
    graph.show_vertex();
}

int main(){

    test_add_vertex0();
    test_add_vertex1();
    test_add_vertex2();

    test_add_edge0();
    test_add_edge1();
    test_add_edge2();

    test_remove_edge0();
    test_remove_edge1();
    test_remove_edge2();
    test_remove_edge3();

    //test_remove_vertex_1();
    //test_remove_vertex_2();

    return 0;
}
