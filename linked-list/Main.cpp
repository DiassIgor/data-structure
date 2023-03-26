#include "linked-list.h"
#include <iostream>
#include <cassert>

LinkedList test_list(){
    
    LinkedList link_list;

    link_list.insert("Item 1");
    link_list.insert("Item 2");
    link_list.insert("Item 3");
    link_list.insert("Item 4");
    link_list.insert("Item 5");
    link_list.insert("Item 6");
    link_list.insert("Item 7");

    return link_list;
}

void test_layout(string actual, string expected, string test_name){
    if (actual == expected){
        cout << test_name << " -> PASSED!" << endl;
    }
    else{
         cout << test_name << " -> ERROR!" << endl;
    }
};


void test_pos_insert0(){

    LinkedList link_list0 = test_list();
    string actual = link_list0.test_list();
    string expected = "Item 1 | Item 2 | Item 3 | Item 4 | Item 5 | Item 6 | Item 7 | ";
    test_layout(actual, expected, "Pos_insert0");
};

void test_pos_insert1(){

    LinkedList link_list1 = test_list();
    link_list1.pos_insert("Item 8", 7);
    string actual = link_list1.test_list();
    string expected = "Item 1 | Item 2 | Item 3 | Item 4 | Item 5 | Item 6 | Item 7 | Item 8 | ";
    test_layout(actual, expected, "Pos_insert1");
};


int main(){

    //test_pos_insert0();
    test_pos_insert1();

    return 0;
};