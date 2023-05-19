#include "binary_tree.h"
#include <cassert>

void BinaryTree::insert(string content){

    leaf* aux_point = &_root;

    while(aux_point->left_child != nullptr){

        aux_point = aux_point->left_child;

    }
    leaf* new_leaf = new leaf;


};

void remove(size_t position){


};