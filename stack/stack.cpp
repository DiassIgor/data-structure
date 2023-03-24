#include <stack.h>
#include <string>
#include <cassert>

using namespace std;

void Stack::insert(string content){

    node *new_node = (node *) malloc(sizeof(node));
    (*new_node).content = content;
    (*new_node).next = NULL;
    assert(new_node != NULL);

    if (_stack_size == 0){
        _top_pointer = &*new_node;
    }
    else {
        (*_top_pointer).next = &*new_node;
        _top_pointer = &*new_node;
    }

};