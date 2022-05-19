#pragma once
#include "node.h"

class Linked_List
{
public:
    Linked_List(int root_value);
    void print();
    void add_value_in_given_position(int value,int position);
    void remove_value_in_given_position(int position);

private:
    Node* __root_node;
    int __size;

    bool __is_given_position_present(int position);

    Node*
    __get_previous_node_of_current_node_in_given_position(
        int position
    );
};