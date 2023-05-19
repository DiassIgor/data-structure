#ifndef _BINARY_TREE_
#define _BINARY_TREE_

#include <string>
#include <iostream>

using namespace std;

class BinaryTree{

    struct leaf{

        string content;
        struct leaf *right_child;
        struct leaf *left_child;
    };
    typedef struct leaf leaf;

    public:

        void insert(string content);
        void remove(size_t position);

    private:

};

#endif