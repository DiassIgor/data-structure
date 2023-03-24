#include "linked-list.h"
#include <iostream>
#include <cassert>

void LinkedList::insert(string content){

    node *new_node = (node *) malloc(sizeof(node));
    (*new_node).content = content;
    (*new_node).next = NULL;
    assert(new_node != NULL);

    if (_init_pointer==NULL){
        _init_pointer = new_node;
        _final_pointer = new_node;
    }
    else{
        (*_final_pointer).next = new_node;
        _final_pointer = new_node;
    }

    _list_size += 1;

};

void LinkedList::show_list(){
    
    node *aux_point = _init_pointer; 
    cout << "Direction: First -> Last\n";

    for(int i=0; i<_list_size; i++){
        cout << (*aux_point).content << " | ";
        aux_point = (*aux_point).next;
    }

    cout << "\n-----------------------------------------------------------------\n";

};