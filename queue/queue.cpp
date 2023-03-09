#include "queue.h"
#include <iostream>
#include <cassert>

Queue::Queue(){
    _queue_size = 0;
    _init_pointer = NULL;
    _final_pointer = NULL;
}

void Queue::insert(string content){

    // Dynamic Allocation
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
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

    Queue::set_size(CHANGING::INCREASE);

};

void Queue::remove(){

    if(_init_pointer == NULL){
        cout << "The queue is already empty";
    }
    else{
        struct node *first_node = _init_pointer;
        _init_pointer = (*_init_pointer).next;
        free(first_node);
    };

    Queue::set_size(CHANGING::DECREASE);
};