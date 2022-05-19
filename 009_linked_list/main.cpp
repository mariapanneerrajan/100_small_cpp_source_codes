// +++++++++++++++++++++++++++++
// 100 Small Cpp Source Codes
// +++++++++++++++++++++++++++++
// Day 009/100: Linked List
// ++++++++++++++++
// Video-Screen-Recording: https://youtu.be/8OT_godkjl8
// ++++++++++++++++

#include <iostream>
#include <linked_list.h>


int main(int argc, char** argv)
{
    std::cout << "Adding elements to Linked-List: " << std::endl;
    Linked_List* linked_list = 
    new Linked_List(1);
    linked_list->print();

    linked_list->add_value_in_given_position(2, 1);
    linked_list->print();

    linked_list->add_value_in_given_position(3, 2);
    linked_list->print();

    linked_list->add_value_in_given_position(4, 3);
    linked_list->print();

    linked_list->add_value_in_given_position(5, 4);
    linked_list->print();

    linked_list->add_value_in_given_position(7, 1);
    linked_list->print();

    linked_list->add_value_in_given_position(7, 3);
    linked_list->print();

    std::cout
    << "\nRemoving elements from Linked-List: "
    << std::endl;

    linked_list->remove_value_in_given_position(100);
    linked_list->print();
    
    linked_list->remove_value_in_given_position(1);
    linked_list->print();

    linked_list->remove_value_in_given_position(2);
    linked_list->print();

    linked_list->remove_value_in_given_position(0);
    linked_list->print();
    
    linked_list->remove_value_in_given_position(0);
    linked_list->print();
    
    linked_list->remove_value_in_given_position(0);
    linked_list->print();
    
    linked_list->remove_value_in_given_position(0);
    linked_list->print();
    
    linked_list->remove_value_in_given_position(0);
    linked_list->print();

    linked_list->remove_value_in_given_position(0);
    linked_list->print();
    
    return 0;
}