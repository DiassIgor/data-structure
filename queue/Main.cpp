#include "queue.h"
#include <iostream>
#include <cassert>

using namespace std;

int main(){

    Queue fila;
    fila.insert("Item 1");
    cout << fila._init_pointer << "\n";
    cout << fila._final_pointer << "\n";
    assert(fila.get_size() == 1);

    fila.insert("Item 2");
    cout << fila._init_pointer << "\n";
    cout << fila._final_pointer << "\n";
    assert(fila.get_size() == 2);

    fila.insert("Item 3");
    cout << fila._init_pointer << "\n";
    cout << fila._final_pointer << "\n";
    assert(fila.get_size() == 3);

    fila.remove();
    cout << fila._init_pointer << "\n";
    cout << fila._final_pointer << "\n";
    assert(fila.get_size() == 2);

    cout << "Teste \n";   
   
    return 0;
};