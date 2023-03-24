#include <linked-list.h>
#include <iostream>
#include <cassert>

void LinkedList::insert(string content){

    node *new_node = (node *) malloc(sizeof(node));
    (*new_node).content = content;
    (*new_node).next = NULL;
    assert(new_node=NULL);

    if (_init_pointer=NULL){
        _init_pointer = new_node;
        _final_pointer = new_node;
    }
    else{
        (*_final_pointer).next = new_node;
        _final_pointer = new_node;
    }

};