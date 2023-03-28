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

    if (position < _list_size && position > 0){

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
            
            for(int i=0;i<position-1;i++){
                aux_pointer = (*aux_pointer).next;
                cout << (*aux_pointer).content;
            }

            (*new_node).next = (*aux_pointer).next;
            (*aux_pointer).next = new_node;
        }

        _list_size += 1;
    }
    else if(position == _list_size){

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
    }
    else if(position == 0){
        
        node *new_node = (node *) malloc(sizeof(node));
        (*new_node).content = content;
        (*new_node).next = NULL;
        assert(new_node != NULL);

        if (_init_pointer==NULL){
            _init_pointer = new_node;
            _final_pointer = new_node;
        }
        else{
            (*new_node).next = _init_pointer;
            _init_pointer = new_node;
        }

        _list_size += 1;

    }
    else{

        cout << "Wrong position value!\n";
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

string LinkedList::test_list(){

    node *aux_point = _init_pointer;
    string aux_string = "";

    for(int i=0; i<_list_size; i++){
        aux_string.append((*aux_point).content);
        aux_string.append(" | ");
        aux_point = (*aux_point).next;
    }

    return aux_string;
}