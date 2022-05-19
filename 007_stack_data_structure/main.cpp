// +++++++++++++++++++++++++++++
// 100 Small Cpp Source Codes
// +++++++++++++++++++++++++++++
// Day 007/100: Stack Data Structure
// ++++++++++++++++
// Video-Screen-Recording: https://youtu.be/O5zBMjEiALk
// ++++++++++++++++

#include <iostream>
#include <stack.h>


int main(int argc, char** argv)
{
    Stack* stack = Stack::create(5);

    stack->push(5);
    stack->push(7);
    stack->push(2);
    stack->push(9);
    stack->push(3);

    std::cout <<
    "Pushed 5,7,2, 9, 3 into stack"
    << std::endl;
    stack->print();

    int popped_element;
    
    popped_element = stack->pop();
    std::cout << "Popped element: "
    << popped_element << std::endl;
    stack->print();
    
    popped_element = stack->pop();
    std::cout << "Popped element: "
    << popped_element << std::endl;
    stack->print();

    std::cout << "Clear Stack: " << std::endl;
    stack->clear();
    stack->print();
    std::cout << std::endl;

    std::cout <<
    "Try to pop after clearing: " <<
    std::endl;
    popped_element = stack->pop();
    std::cout << "Popped element: "
    << popped_element << std::endl;
    stack->print();
    std::cout << "\n";

    std::cout <<
    "Push back more than 5 elements" << std::endl;
    
    stack->push(1);
    stack->push(3);
    stack->push(5);
    stack->push(36);
    stack->push(12);
    stack->push(4);
    stack->push(8);

    stack->print();
    std::cout << "\n\n";

    delete stack;

    return 0;
}