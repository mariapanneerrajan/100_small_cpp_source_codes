// +++++++++++++++++++++++++++++
// 100 Small Cpp Source Codes
// +++++++++++++++++++++++++++++
// Day 003/100: Quick Sort
// ++++++++++++++++
// Video-Screen-Recording: https://youtu.be/GZvdC9kqwCc
// ++++++++++++++++


#include <iostream>


void print_list(int *given_list, int number_of_items)
{
    for(int i=0; i < number_of_items; i++)
        std::cout << given_list[i] << " ";
    std::cout << "\n";
}

void swap(int *given_list, int index_one, int index_two)
{
    int temp = given_list[index_one];
    given_list[index_one] = given_list[index_two];
    given_list[index_two] = temp;
}

int partition(int *given_list, int start, int end)
{
    int pivot = given_list[start];
    int i = start;
    int j = end;

    while(i < j)
    {
        do
        {
            i++;
        }while(given_list[i] <= pivot);

        do
        {
            j--;
        }while(given_list[j] > pivot);

        if(i < j)
            swap(given_list, i, j);
    }
    swap(given_list, start, j);

    return j;
}

void quick_sort(int *given_list, int start, int end)
{
    if(start < end)
    {
        int j = partition(given_list, start, end);
        quick_sort(given_list, start, j);
        quick_sort(given_list, j+1, end);
    }
}

int main(int argc, char** argv)
{
    const int number_of_items = 10;
    int given_list[number_of_items] =
    {5, 8, 7, 6, 9, 4, 3, 2, 1, 0};

    std::cout << "Given List" << std::endl;
    print_list(given_list, number_of_items);
    
    quick_sort(given_list, 0, number_of_items);
    
    std::cout << "Sorted List" << std::endl;
    print_list(given_list, number_of_items);
}