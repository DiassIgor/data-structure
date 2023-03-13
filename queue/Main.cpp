#include "queue.h"
#include <iostream>
#include <cassert>

using namespace std;


int main(){

    Queue fila;
    fila.insert("Item 1");
    fila.show_queue();
    assert(fila.get_size() == 1);

    fila.insert("Item 2");
    fila.show_queue();
    assert(fila.get_size() == 2);

    fila.insert("Item 3");
    fila.show_queue();
    assert(fila.get_size() == 3);

    fila.remove();
    fila.show_queue();
    assert(fila.get_size() == 2);   
   
    return 0;
};