#ifndef QUEUE
#define QUEUE

#include <string>
#include <iostream>

using namespace std;

struct node{
    string content;
    struct node *next;

};

class Queue{

    public:
        void insert(string content);
        void remove();
        void show_queue();

        size_t const get_size() {return _queue_size;}

        Queue()
            :_queue_size(0),_init_pointer(NULL),_final_pointer(NULL)
        {};

    private:
        size_t _queue_size;
        struct node *_init_pointer;
        struct node *_final_pointer;

        
};

#endif