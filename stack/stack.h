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

        void insert(string content);
        struct node remove();
        
        void show_top();
        void show_stack();

        Stack()
            :_stack_size(0), _top_pointer(NULL)
            {};

    private:
        size_t _stack_size;
        struct node *_top_pointer;
};


#endif