// +++++++++++++++++++++++++++++
// 100 Small Cpp Source Codes
// +++++++++++++++++++++++++++++
// Day 005/100: Insertion Sort
// ++++++++++++++++
// Video-Screen-Recording: https://youtu.be/KluaMWrXAMo
// ++++++++++++++++


#include <iostream>


void print_list(
    int *given_list,
    int number_of_items,
    int unsorted_sub_list_first_index = -1
)
{
    for(int i=0; i < number_of_items; i++)
    {
        char separator[2][3] = {" ", "| "};
        int separator_index = 0;
        if(
            unsorted_sub_list_first_index != -1 &&
            unsorted_sub_list_first_index == i
        )
            separator_index = 1;

        std::cout << given_list[i] << separator[separator_index];
    }
    std::cout << "\n";
}


int main(int argc, char** argv)
{
    const int number_of_items = 10;
    int given_list[number_of_items] =
    {9, 6, 0, 3, 1, 7, 4, 2, 5, 8};
    
    std::cout << "\nGiven List: ";
    print_list(given_list, number_of_items, 0);
    std::cout << "\n";

    for(
        int unsorted_sub_list_first_index = 1;
        unsorted_sub_list_first_index < number_of_items;
        unsorted_sub_list_first_index++
    )
    {
        int value_to_insert_into_sorted_sub_list =
        given_list[unsorted_sub_list_first_index];

        int i = unsorted_sub_list_first_index - 1;

        std::cout << "Value to be inserted into sorted sub-list"
        << value_to_insert_into_sorted_sub_list << std::endl;

        while(
            i >= 0 &&
            (
                given_list[i] >
                value_to_insert_into_sorted_sub_list
            )
        )
        {
            given_list[i+1] = given_list[i];
            i--;
        }
        given_list[i+1] =
        value_to_insert_into_sorted_sub_list;

        print_list(
            given_list,
            number_of_items,
            unsorted_sub_list_first_index
        );
    }

    std::cout << "\nSorted List: " << "";
    print_list(given_list, number_of_items);
    std::cout << "\n";
}