#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <string>

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

        size_t get_size(){return _list_size;}

    private:
        node *_init_pointer;
        node *_final_pointer;
        size_t _list_size;

};

#endif