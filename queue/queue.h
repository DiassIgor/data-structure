#ifndef QUEUE
#define QUEUE

#include <string>

using namespace std;

class Queue{

    public:
        void insert(string content);
        //struct node remove();
        //struct node const peek();

        size_t const get_size() {return _queue_size;}
        void set_size() {_queue_size++;}
        struct node *_init_pointer;
        struct node *_final_pointer;
        //struct node * const get_init_pointer() {return _init_pointer;}
        //struct node * const get_final_pointer() {return _final_pointer;}

        Queue();

    private:
        //struct node *_init_pointer;
        //struct node *_final_pointer;
        size_t _queue_size;
};

#endif