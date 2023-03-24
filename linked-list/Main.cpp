#include "linked-list.h"
#include <iostream>
#include <cassert>

int main(){

    LinkedList link_list;

    link_list.insert("Item 1");
    link_list.insert("Item 2");
    link_list.insert("Item 3");
    link_list.show_list();

    return 0;
};