#include "linked-list.h"
#include <iostream>
#include <cassert>

LinkedList standard_list(){
    
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

    LinkedList link_list0 = standard_list();
    string actual = link_list0.test_list();
    string expected = "Item 1 | Item 2 | Item 3 | Item 4 | Item 5 | Item 6 | Item 7 | ";
    test_layout(actual, expected, "Pos_insert0");
};

void test_pos_insert1(){

    LinkedList link_list1 = standard_list();
    link_list1.pos_insert("Item 8", 7);
    string actual = link_list1.test_list();
    string expected = "Item 1 | Item 2 | Item 3 | Item 4 | Item 5 | Item 6 | Item 7 | Item 8 | ";
    test_layout(actual, expected, "Pos_insert1");
};

void test_pos_insert2(){

    LinkedList link_list2 = standard_list();
    link_list2.pos_insert("Item 8", 0);
    string actual = link_list2.test_list();
    string expected = "Item 8 | Item 1 | Item 2 | Item 3 | Item 4 | Item 5 | Item 6 | Item 7 | ";
    test_layout(actual, expected, "Pos_insert2");
};

void test_pos_insert3(){

    LinkedList link_list3 = standard_list();
    link_list3.pos_insert("Item 8", 4);
    string actual = link_list3.test_list();
    string expected = "Item 1 | Item 2 | Item 3 | Item 4 | Item 8 | Item 5 | Item 6 |  Item 7 | ";
    test_layout(actual, expected, "Pos_insert3");
};

void test_pos_insert4(){

    LinkedList link_list4;
    link_list4.pos_insert("Item 1", 0);
    link_list4.pos_insert("Item 2", 1);
    string actual = link_list4.test_list();
    string expected = "Item 1 | Item 2 | ";
    test_layout(actual, expected, "Pos_insert4");
};

int main(){

    //test_pos_insert0(); //OK
    //cout << "\n test \n";
    //test_pos_insert1(); //OK
    test_pos_insert2(); //OK 
    //test_pos_insert3();
    //test_pos_insert4(); //OK

    return 0;
};