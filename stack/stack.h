#ifndef _STACK_H_
#define _STACK_H_

#include <string>

using namespace std;

class Stack{

    struct node {
        string content;
        struct node *previous;
    };

    typedef struct node node;

    public:

        void insert(string content);
        node remove();
        
        void show_top();
        void show_stack();

        Stack()
            :_stack_size(0), _top_pointer(NULL)
            {};

    private:
        size_t _stack_size;
        node *_top_pointer;
};


#endif