#include "queue.h"
#include <iostream>
#include <cassert>

using namespace std;

void show_queue(Queue fila){
    cout << "First Item: " << fila._init_pointer->content << "\n";
    cout << "Last Item: " << fila._final_pointer->content << "\n";
    cout << "------------------------------------------------- \n";
};


int main(){

    Queue fila;
    fila.insert("Item 1");
    show_queue(fila);
    assert(fila.get_size() == 1);

    fila.insert("Item 2");
    show_queue(fila);
    assert(fila.get_size() == 2);

    fila.insert("Item 3");
    show_queue(fila);
    assert(fila.get_size() == 3);

    fila.remove();
    show_queue(fila);
    assert(fila.get_size() == 2);   
   
    return 0;
};