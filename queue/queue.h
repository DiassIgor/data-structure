#ifndef QUEUE
#define QUEUE

#include <string>
#include <iostream>

using namespace std;


class Queue{

    struct node{
        string content;
        struct node *next;
        };

    typedef struct node node;

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
        node *_init_pointer;
        node *_final_pointer;
   
};

#endif