#include <iostream>
#include "queue.h"

Element::Element(int value, Element* next_element)
:value(value), next_element(next_element)
{}

Queue* Queue::create()
{
    Queue* queue = new Queue();
    queue->__init();
    return queue;    
}

void Queue::__init()
{
    __first_element = nullptr;
    __last_element = nullptr;
}

void Queue::enqueue(int element_value)
{
    if(
        __first_element == nullptr &&
        __last_element == nullptr
    )
    {
        __first_element =
        new Element(element_value, nullptr);
    }
    else if(
        __first_element != nullptr &&
        __last_element == nullptr
    )
    {
        __last_element =
        new Element(element_value, nullptr);
        
        __first_element->next_element =
        __last_element;
    }
    else
    {
        Element* previous_last_element =
        __last_element;
        
        __last_element =
        new Element(element_value, nullptr);
        
        previous_last_element->next_element =
        __last_element;
    }
}

void Queue::print()
{
    if(
        __first_element == nullptr &&
        __last_element == nullptr
    )
    {
        std::cout <<
        "Nothing to print! Queue is empty!"
        << std::endl;
        return;
    }
    if(__first_element == __last_element)
    {
        std::cout <<
        __first_element->value <<
        std::endl;
        return;
    }

    Element* element = __first_element;
    std::cout << element->value << " ";
    while(element->next_element != nullptr)
    {
        element = element->next_element;
        std::cout << element->value << " ";
    }
    std::cout << std::endl;
}

int Queue::dequeue()
{
    int out = -1;
    if(
        __first_element == nullptr &&
        __last_element == nullptr
    )
    {
        std::cout <<
        "Nothing to dequeue, queue is empty!"
        << std::endl;
        return out;
    }

    if(__first_element == __last_element)
    {
        out = __first_element->value;
        delete __first_element;
        __first_element = nullptr;
        __last_element = nullptr;
        return out;
    }

    Element* previous_first_element =
    __first_element;
    
    out = __first_element->value;
    __first_element = __first_element->next_element;

    delete previous_first_element;

    return out;
}


Queue::Queue() {}




