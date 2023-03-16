#include "queue.h"
#include <iostream>
#include <cassert>

void Queue::insert(string content){

    // Dynamic Allocation
    node *new_node = (node *) malloc(sizeof(node));
    (*new_node).content = content;
    (*new_node).next = NULL;
    assert(new_node != NULL);

    // If the queue is empty
    if(_init_pointer == NULL){
        _init_pointer = &*new_node;
        _final_pointer = &*new_node;

    }
    // Links the new node on the queue's end
    else{
        (*_final_pointer).next = &*new_node;
        _final_pointer = &*new_node;
    };

    _queue_size += 1;

};

void Queue::remove(){

    if(_init_pointer == NULL){
        cout << "The queue is already empty";
    }
    else{
        node *first_node = _init_pointer;
        _init_pointer = (*_init_pointer).next;
        free(first_node);
    };

    _queue_size -= 1;
};

void Queue::show_queue(){
    cout << "First Item: " << _init_pointer->content << "\n";
    cout << "Last Item: " << _final_pointer->content << "\n";
    cout << "------------------------------------------------- \n";
};