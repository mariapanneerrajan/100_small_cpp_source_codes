// +++++++++++++++++++++++++++++
// 100 Small Cpp Source Codes
// +++++++++++++++++++++++++++++
// Day 004/100: Selection Sort
// ++++++++++++++++
// Video-Screen-Recording: https://youtu.be/u8q2xn8s1tI
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

void swap(int *given_list, int index_one, int index_two)
{
    int temp = given_list[index_one];
    given_list[index_one] = given_list[index_two];
    given_list[index_two] = temp;
}


int main(int argc, char** argv)
{
    const int number_of_items = 10;
    int given_list[number_of_items] =
    {9, 6, 0, 3, 1, 7, 4, 2, 5, 8};

    std::cout << "\nGiven List:" << "  |";
    print_list(given_list, number_of_items);
    std::cout << "\n";

    for(
        int unsorted_sub_list_first_index = 0;
        unsorted_sub_list_first_index < number_of_items -1;
        unsorted_sub_list_first_index++
    )
    {
        std::cout <<
        "Pass: " <<
        unsorted_sub_list_first_index + 1 
        << "      ";

        int index_of_minimum_element =
        unsorted_sub_list_first_index;

        for(int j = unsorted_sub_list_first_index+1; j < number_of_items; j++)
        {
            if(
                given_list[index_of_minimum_element] >
                given_list[j]
            )
                index_of_minimum_element = j;
        }
        if(
            index_of_minimum_element !=
            unsorted_sub_list_first_index
        )
        {
            swap(
                given_list,
                unsorted_sub_list_first_index,
                index_of_minimum_element
            );
        }
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