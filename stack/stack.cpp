#include "stack.h"
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

void Stack::insert(string content){

    node *new_node = (node *) malloc(sizeof(node));
    (*new_node).content = content;
    (*new_node).previous = NULL;
    assert(new_node != NULL);

    if (_stack_size == 0){
        _top_pointer = new_node;
    }
    else {

        (*new_node).previous = _top_pointer;
        _top_pointer = new_node;
    }

    _stack_size += 1;

};

void Stack::remove(){

    if (_stack_size == 0)
    {
        cout << "The queue is already empty";
    }
    else{

        node *aux_pointer = _top_pointer;
        _top_pointer = (*_top_pointer).previous;
        free(aux_pointer);
        _stack_size -= 1;
    }

}



void Stack::show_top(){
    cout << "Top stack: " << (*_top_pointer).content << endl;
}


void Stack::show_stack(){

    node *aux_point = _top_pointer; 
    cout << "Direction: Top -> Down\n";

    for(int i=0; i<_stack_size; i++){
        cout << (*aux_point).content << " | ";
        aux_point = (*aux_point).previous;
    }

    cout << "\n-----------------------------------------------------------------\n";
}
