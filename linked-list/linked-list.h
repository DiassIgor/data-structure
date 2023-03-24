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
            :_init_pointer(NULL),_final_pointer(NULL) 
            {};

        void insert(string content);

    private:
        node *_init_pointer;
        node *_final_pointer; 

};

#endif