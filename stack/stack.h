#ifndef _STACK_H_
#define _STACK_H_

#include <string>

using namespace std;

struct node {
    string content;
    struct node *next;
};


class stack{
    public:
        struct node *_init_pointer;
    private:
};



#endif