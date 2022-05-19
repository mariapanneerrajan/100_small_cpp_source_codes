#include "stack.h"
#include <iostream>

Stack* Stack::create(int size)
{
    Stack* stack = new Stack();
    stack->__init(size);
    return stack;
}

void Stack::__init(int size)
{
    __size = size;
    __elements = new int[__size];
    __top_element_index = 0;
}

void Stack::push(int element)
{
    if(__top_element_index < __size)
    {
        __elements[++__top_element_index] =
        element;
    }
    else
    {
        std::cout
        << "Stack is full! Cannot push!"
        << std::endl;
    }
}

int Stack::pop()
{
    if(__top_element_index > 0)
        return __elements[__top_element_index--];
    else
    {
        std::cout << "Stack is empty! Cannot pop!"
        << std::endl;
        return -1;
    }
}

void Stack::clear()
{
    __top_element_index = 0;    
}

void Stack::print()
{
    for(
        int i=__top_element_index;
        i>0;
        i--
    )
        std::cout << __elements[i] << std::endl;
}

Stack::Stack(){}

Stack::~Stack()
{
    clear();
    delete[] __elements;
}
