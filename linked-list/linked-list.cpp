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

void LinkedList::pos_insert(string content, size_t position){

    if (position <= _list_size){

        node *new_node = (node *) malloc(sizeof(node));
        (*new_node).content = content;
        (*new_node).next = NULL;
        assert(new_node != NULL);

        if (_init_pointer==NULL){
            _init_pointer = new_node;
            _final_pointer = new_node;
        }
        else{

            node *aux_pointer = _init_pointer;
            for(int i;i<=position;i++){
                aux_pointer = (*aux_pointer).next;
            }

            (*new_node).next = (*aux_pointer).next;
            (*aux_pointer).next = new_node;
        }

        _list_size += 1;
    }
    else{

        cout << "Wrong position!\n";
    }
}

void LinkedList::show_list(){
    
    node *aux_point = _init_pointer; 
    cout << "Direction: First -> Last\n";

    for(int i=0; i<_list_size; i++){
        cout << (*aux_point).content << " | ";
        aux_point = (*aux_point).next;
    }

    cout << "\n-----------------------------------------------------------------\n";

};