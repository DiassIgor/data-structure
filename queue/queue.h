#ifndef QUEUE
#define QUEUE

#include <list>
#include <string>

using namespace std;

class Queue{
    public:
        void init(list<string> queue, int queue_size);
        void add_item(string item);
        string remove_item();

        bool is_empty() const {return _count == 0 ? 1 : 0;}
        bool is_full() const {return _count == _max_size ? 1 : 0;};

    private:
        list<string> _queue;
        int _max_size;
        string* _top_pointer;
        size_t _count;
};

#endif;