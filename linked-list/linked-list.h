#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <string>
#include <iostream>

using namespace std;

class LinkedList {

    struct node{
        string content;
        struct node *next;
    };

    typedef struct node node;

    public:

        LinkedList()
            :_init_pointer(NULL),_final_pointer(NULL),_list_size(0)
            {};

        void insert(string content);
        void pos_insert(string content, size_t position);
        void show_list();
        string test_list();

        size_t get_size(){return _list_size;}

        ~LinkedList(){

            node *current = _init_pointer;
            while (current != NULL){
                node *temp = current;
                current = current->next;
                cout << "destruc ";
                free(temp);
                //delete temp;
            }
        };

    private:
        node *_init_pointer;
        node *_final_pointer;
        size_t _list_size;

};

#endif