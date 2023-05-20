#include "binary_tree.h"
#include <cassert>

void BinaryTree::insert(string content){

    leaf* aux_point = &_root;

    while(aux_point->left_child != nullptr){

        aux_point = aux_point->left_child;

        if (aux_point->left_child != nullptr){
            aux_point = aux_point->left_child;      
        }
        else if(aux_point->right_child != nullptr){
            aux_point = aux_point->right_child;
        }
        else{
            aux_point = aux_point->parent;
            continue;
        }
    }

    leaf* new_leaf = new leaf;
    new_leaf->content = content;
    new_leaf->parent = aux_point;
    new_leaf->left_child = nullptr;
    new_leaf->right_child = nullptr;


};

void remove(size_t position){


};