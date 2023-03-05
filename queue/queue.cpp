#include "queue.h"


struct node{
    string content;
    struct node *next;

};


Queue::Queue(){
    _queue_size = 0;
    _init_pointer = NULL;
    _final_pointer = NULL;
}


void Queue::insert(string content){

    struct node *new_node = (struct node *) malloc(sizeof(struct node));

    (*new_node).content = content;
    (*new_node).next = NULL;


    if(_init_pointer == NULL){
        _init_pointer = &*new_node;
        _final_pointer = &*new_node;

    }
    else{
        (*_final_pointer).next = &*new_node;
        _final_pointer = &*new_node;
    };

    Queue::set_size();

};