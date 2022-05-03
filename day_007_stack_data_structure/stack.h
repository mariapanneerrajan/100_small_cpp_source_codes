#pragma once

class Stack
{
public:
    static Stack* create(int size);
    void push(int element);
    int pop();
    void clear();
    void print();

    ~Stack();
private:
    Stack();
    Stack(const Stack&);
    Stack operator =(const Stack&);
    void __init(int size);
    int __size;
    int* __elements;
    int __top_element_index;
};