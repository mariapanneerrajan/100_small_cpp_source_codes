// +++++++++++++++++++++++++++++
// 100 Small Cpp Source Codes
// +++++++++++++++++++++++++++++
// Day 006/100: Merge Sort
// ++++++++++++++++
// Video-Screen-Recording: https://youtu.be/ncBOzX_1oMo
// ++++++++++++++++

#include <iostream>

struct Int_Array_Pointer_With_Size
{
    int* array;
    int size;

    Int_Array_Pointer_With_Size(int* array, int size)
    :array(array), size(size)
    {}

    ~Int_Array_Pointer_With_Size()
    {
        delete[] array;
    }
};

void print_list(Int_Array_Pointer_With_Size* list)
{
    for(int i = 0; i < list->size; i++)
    {
        std::cout << list->array[i] << " ";
    }
    std::cout << "\n";
}

Int_Array_Pointer_With_Size* merge_sorted_lists(
    Int_Array_Pointer_With_Size* sorted_list_1,
    Int_Array_Pointer_With_Size* sorted_list_2
)
{
    int i = 0;
    int j = 0;
    int k = 0;

    int merge_sorted_lists_size =
    sorted_list_1->size + sorted_list_2->size;

    int* merge_sorted_lists_array =
    new int[merge_sorted_lists_size];

    Int_Array_Pointer_With_Size* merged_sorted_list = 
    new Int_Array_Pointer_With_Size(
        merge_sorted_lists_array,
        merge_sorted_lists_size
    );

    while(
        i < sorted_list_1->size &&
        j < sorted_list_2->size
    )
    {
        if(sorted_list_1->array[i] < sorted_list_2->array[j])
        {
            merged_sorted_list->array[k] = sorted_list_1->array[i];
            i++;
            k++;
        }
        else if(sorted_list_1->array[i] > sorted_list_2->array[j])
        {
            merged_sorted_list->array[k] = sorted_list_2->array[j];
            j++;
            k++;
        }
    }

    for(;i<sorted_list_1->size;i++)
    {
        merged_sorted_list->array[k] = sorted_list_1->array[i];
        k++;
    }
    for(;j<sorted_list_2->size;j++)
    {
        merged_sorted_list->array[k] = sorted_list_2->array[j];
        k++;
    }

    return merged_sorted_list;
}

Int_Array_Pointer_With_Size* merge_sort(
    int first_index,
    int last_index,
    int* given_list
)
{
    if(first_index < last_index)
    {
        int mid_index = (first_index + last_index)/2;

        Int_Array_Pointer_With_Size* sorted_list_1 =
        merge_sort(first_index, mid_index, given_list);

        Int_Array_Pointer_With_Size* sorted_list_2 =
        merge_sort(mid_index + 1, last_index, given_list);

        Int_Array_Pointer_With_Size* merged_sorted_list =
        merge_sorted_lists(sorted_list_1, sorted_list_2);

        print_list(merged_sorted_list);

        delete sorted_list_1;
        delete sorted_list_2;
        
        return merged_sorted_list;
    }
    else if(first_index == last_index)
    {
        int single_element_list_size = 1;
        int* single_element_list_array = new int[1];
        single_element_list_array[0] = given_list[first_index];

        Int_Array_Pointer_With_Size* single_element_list =
        new Int_Array_Pointer_With_Size(
            single_element_list_array,
            single_element_list_size
        );

        return single_element_list;
    }
}

int main(int argc, char** argv)
{
    int given_list_size = 10;
    int given_list_array_in_stack[given_list_size] =
    {9, 6, 0, 3, 1, 7, 4, 2, 5, 8};

    int* given_list_array_in_heap = new int[given_list_size];
    for(int i = 0; i < given_list_size; i++)
    {
        given_list_array_in_heap[i] = given_list_array_in_stack[i];
    }

    Int_Array_Pointer_With_Size* given_list =
    new Int_Array_Pointer_With_Size(
        given_list_array_in_heap,
        given_list_size
    );

    std::cout << "\n Given List: " << std::endl;
    print_list(given_list);

    Int_Array_Pointer_With_Size* sorted_list =
    merge_sort(0, given_list->size-1, given_list->array);

    std::cout << "Sorted List: " << std::endl;
    print_list(sorted_list);

    delete given_list;
    delete sorted_list;
}