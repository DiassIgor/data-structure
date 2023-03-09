#ifndef QUEUE
#define QUEUE

#include <string>

using namespace std;

struct node{
    string content;
    struct node *next;

};

class Queue{

    public:
        void insert(string content);
        void remove();

        enum class CHANGING {INCREASE, DECREASE};

        size_t const get_size() {return _queue_size;}
        void set_size(CHANGING changing) {changing == CHANGING::INCREASE ? _queue_size++ : _queue_size--;}
        struct node *_init_pointer;
        struct node *_final_pointer;

        Queue();

    private:
        //struct node *_init_pointer;
        //struct node *_final_pointer;
        size_t _queue_size;
};

#endif