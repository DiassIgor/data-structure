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

    LinkedList link_list0 = standard_list();
    string actual = link_list0.test_list();
    string expected = "Item 1|Item 2|Item 3|Item 4|";
    test_layout(actual, expected, "Pos_insert0");
};

// Test if pos_insertion in a empty linked list works properly
void test_pos_insert1(){

    LinkedList link_list1;
    link_list1.pos_insert("Item *", 0);
    string actual = link_list1.test_list();
    string expected = "Item *|";
    test_layout(actual, expected, "Pos_insert1");
};

// Test if pos_insertion in initial position works properly
void test_pos_insert2(){

    LinkedList link_list2 = standard_list();
    link_list2.pos_insert("Item *", 0);
    string actual = link_list2.test_list();
    string expected = "Item *|Item 1|Item 2|Item 3|Item 4|";
    test_layout(actual, expected, "Pos_insert2");
};

// Test if pos_insertion in position 1 works properly
void test_pos_insert3(){

    LinkedList link_list3 = standard_list();
    link_list3.pos_insert("Item *", 1);
    string actual = link_list3.test_list();
    string expected = "Item 1|Item *|Item 2|Item 3|Item 4|";
    test_layout(actual, expected, "Pos_insert3");
};

// Test if pos_insertion in last position works properly
void test_pos_insert4(){

    LinkedList link_list4 = standard_list();
    link_list4.pos_insert("Item *", 4);
    string actual = link_list4.test_list();
    string expected = "Item 1|Item 2|Item 3|Item 4|Item *|";
    test_layout(actual, expected, "Pos_insert4");
};

// Test if pos_insertion in next-to-last position works properly
void test_pos_insert5(){

    LinkedList link_list5 = standard_list();
    link_list5.pos_insert("Item *", 3);
    string actual = link_list5.test_list();
    string expected = "Item 1|Item 2|Item 3|Item *|Item 4|";
    test_layout(actual, expected, "Pos_insert5");
};

int main(){

    //test_pos_insert0(); //OK
    //test_pos_insert1(); //OK
    //test_pos_insert2(); //OK 
    //test_pos_insert3(); //OK
    //test_pos_insert4(); //OK
    test_pos_insert5(); //OK

    return 0;
};