// +++++++++++++++++++++++++++++
// 100 Small Cpp Source Codes
// +++++++++++++++++++++++++++++
// Day 008/100: Queue Data Structure
// ++++++++++++++++
// Video-Screen-Recording: https://youtu.be/SIe3PiZsUCE
// ++++++++++++++++

#include <iostream>
#include <queue.h>

int main(int argc, char** argv)
{
    Queue* queue = Queue::create();
    
    std::cout <<
    "Enqueue elements to Queue:"
    << std::endl;

    queue->enqueue(5);
    queue->print();
    queue->enqueue(7);
    queue->print();
    queue->enqueue(2);
    queue->print();
    queue->enqueue(3);
    queue->print();

    std::cout <<
    "\nDequeue elements from queue:"
    << std::endl;
    queue->dequeue();
    queue->print();
    queue->dequeue();
    queue->print();
    queue->dequeue();
    queue->print();
    queue->dequeue();
    queue->print();
    queue->dequeue();
    queue->print();

    std::cout << std::endl;

    delete queue;
    return 0;
}