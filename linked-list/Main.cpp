#include "linked-list.h"
#include <iostream>
#include <cassert>

LinkedList standard_list(){
    
    LinkedList link_list;

    link_list.insert("Item 1");
    link_list.insert("Item 2");
    link_list.insert("Item 3");
    link_list.insert("Item 4");

    return link_list;
}

void test_layout(string actual, string expected, string test_name){
    if (actual == expected){
        cout << test_name << " -> PASSED!" << endl;
    }
    else{
         cout << test_name << " -> ERROR!" << endl;
         cout << "Expected:\n" << expected << endl;
         cout << "Actual Output:\n" << actual << endl;
    }
};

// Test if standard list works properly
void test_pos_insert0(){

    LinkedList link_list = standard_list();
    string actual = link_list.test_list();
    string expected = "Item 1|Item 2|Item 3|Item 4|";
    test_layout(actual, expected, "Pos_insert0");
};

// Test if pos_insertion in a empty linked list works properly
void test_pos_insert1(){

    LinkedList link_list;
    link_list.pos_insert("Item *", 0);
    string actual = link_list.test_list();
    string expected = "Item *|";
    test_layout(actual, expected, "Pos_insert1");
};

// Test if pos_insertion in initial position works properly
void test_pos_insert2(){

    LinkedList link_list = standard_list();
    link_list.pos_insert("Item *", 0);
    string actual = link_list.test_list();
    string expected = "Item *|Item 1|Item 2|Item 3|Item 4|";
    test_layout(actual, expected, "Pos_insert2");
};

// Test if pos_insertion in position 1 works properly
void test_pos_insert3(){

    LinkedList link_list = standard_list();
    link_list.pos_insert("Item *", 1);
    string actual = link_list.test_list();
    string expected = "Item 1|Item *|Item 2|Item 3|Item 4|";
    test_layout(actual, expected, "Pos_insert3");
};

// Test if pos_insertion in last position works properly
void test_pos_insert4(){

    LinkedList link_list = standard_list();
    link_list.pos_insert("Item *", 4);
    string actual = link_list.test_list();
    string expected = "Item 1|Item 2|Item 3|Item 4|Item *|";
    test_layout(actual, expected, "Pos_insert4");
};

// Test if pos_insertion in next-to-last position works properly
void test_pos_insert5(){

    LinkedList link_list = standard_list();
    link_list.pos_insert("Item *", 3);
    string actual = link_list.test_list();
    string expected = "Item 1|Item 2|Item 3|Item *|Item 4|";
    test_layout(actual, expected, "Pos_insert5");
};

// Test if the delete of the initial node works properly
void test_remove0(){
    LinkedList link_list = standard_list();
    link_list.remove(0);
    string actual = link_list.test_list();
    string expected = "Item 2|Item 3|Item 4|";
    test_layout(actual, expected, "Delete0");

};

// Test if the delete of the node in position 1 works properly
void test_remove1(){
    LinkedList link_list = standard_list();
    link_list.remove(1);
    string actual = link_list.test_list();
    string expected = "Item 1|Item 3|Item 4|";
    test_layout(actual, expected, "Delete1");

};

// Test if the delete of the node in last position works properly
void test_remove2(){
    LinkedList link_list = standard_list();
    link_list.remove(3);
    string actual = link_list.test_list();
    string expected = "Item 1|Item 2|Item 3|";
    test_layout(actual, expected, "Delete2");

};

// Test if the delete of the node in next-to-last position works properly
void test_remove3(){
    LinkedList link_list = standard_list();
    link_list.remove(2);
    string actual = link_list.test_list();
    string expected = "Item 1|Item 2|Item 4|";
    test_layout(actual, expected, "Delete3");

};

// Test if the delete of the node in position 1 works properly in a list with 1 node
void test_remove4(){
    LinkedList link_list;
    link_list.insert("Item 1");
    link_list.remove(0);
    string actual = link_list.test_list();
    string expected = "";
    test_layout(actual, expected, "Delete4");

};

int main(){

    test_pos_insert0(); //OK
    test_pos_insert1(); //OK
    test_pos_insert2(); //OK 
    test_pos_insert3(); //OK
    test_pos_insert4(); //OK
    test_pos_insert5(); //OK
    test_remove0(); //OK
    test_remove1(); //OK
    test_remove2(); //OK
    test_remove3(); //Error
    test_remove4(); //OK
    
    return 0;
};