#ifndef _BINARY_TREE_
#define _BINARY_TREE_

#include <string>
#include <iostream>

using namespace std;

class BinaryTree{

    struct leaf{

        string content;
        struct leaf* parent;
        struct leaf* right_child;
        struct leaf* left_child;

    };
    typedef struct leaf leaf;

    public:

        BinaryTree(string content)
            :_count(1), _depth(1)
            {
                leaf* _root = new leaf;
                _root->content = content;
                _root->parent = nullptr;
                _root->left_child = nullptr;
                _root->right_child = nullptr;
                };

        void insert(string content);
        void remove(size_t position);

    private:

        size_t _count;
        size_t _depth;
        leaf _root;

};

#endif