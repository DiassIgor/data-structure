#ifndef _STACK_H_
#define _STACK_H_

#include <string>

using namespace std;

struct node {
    string content;
    struct node *next;
};


class Stack{
    public:

        void insert(struct node);
        struct node remove();
        
        void show_top();
        void show_stack();

        Stack();

    private:
        size_t stack_size;
        struct node *_top_pointer;
};


#endif