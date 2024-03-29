#include "stack.h"
#include <iostream>
#include <cassert>

using namespace std;

int main(){

    Stack stack;

    stack.insert("Item 1");
    stack.insert("Item 2");
    stack.show_top();
    stack.insert("Item 3");
    stack.show_stack();

    stack.remove();
    assert(stack.get_size()==2);
    stack.remove();
    assert(stack.get_size()==1);
    stack.show_stack();
    stack.remove();
    assert(stack.get_size()==0);
    stack.remove();
}


