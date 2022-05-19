#include <iostream>
#include "linked_list.h"


Linked_List::Linked_List(int root_value)
{
    __root_node =
    new Node(root_value, nullptr);

    __size++;
}

void Linked_List::print()
{
    Node* current_node = __root_node;

    while(current_node != nullptr)
    {
        std::cout
        << current_node->value << " ";

        current_node =
        current_node->next_node;
    }
    std::cout << "\n";
}

Node* Linked_List::
__get_previous_node_of_current_node_in_given_position(
    int position
)
{
    int current_position = 0;
    Node* previous_node = nullptr;
    Node* current_node = __root_node;

    while(current_position != position)
    {
        previous_node = current_node;
        current_node = current_node->next_node;
        current_position++;
    }
    
    return previous_node;
}

bool Linked_List::__is_given_position_present(
    int position
)
{
    if(position > __size)
    {
        std::cout
        << "Given position is not present in Linked-List!"
        << std::endl;

        return false;
    }
    return true;
}

void Linked_List::add_value_in_given_position(
    int value,
    int position
)
{
    if (!__is_given_position_present(position))
        return;

    Node* previous_node =
    __get_previous_node_of_current_node_in_given_position(position);

    if(previous_node == nullptr)
    {
        Node* new_root_node = new Node(value, __root_node);
        __root_node = new_root_node;
    }
    else
    {
        Node* current_node = previous_node->next_node;
        
        previous_node->next_node = new Node(
            value, current_node
        );
    }
    __size++;
}

void Linked_List::remove_value_in_given_position(int position)
{
    if(__size == 1)
    {
        std::cout
        << "Cannot delete root node when the size of Linked-List is 1"
        << std::endl;

        return;
    }

    if(!__is_given_position_present(position))
        return;

    Node* previous_node =
    __get_previous_node_of_current_node_in_given_position(
        position
    );

    if(previous_node == nullptr)
    {
        Node* old_root_node = __root_node;
        
        __root_node = old_root_node->next_node;

        delete old_root_node;
    }
    else
    {
        Node* current_node = previous_node->next_node;

        previous_node->next_node = current_node->next_node;

        delete current_node;
    }
    __size--;
}
