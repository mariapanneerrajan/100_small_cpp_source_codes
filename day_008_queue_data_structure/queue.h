struct Element
{
    int value;
    Element* next_element;

    Element(int value, Element* next_element);
};

class Queue
{
public:
    static Queue* create();
    void enqueue(int element_value);
    int dequeue();
    void print();

private:
    Queue();
    Queue(const Queue&) = delete;
    Queue operator = (const Queue&) = delete;
    void __init();
    Element* __first_element;
    Element* __last_element;
};