// +++++++++++++++++++++++++++++
// 100 Small Cpp Source Codes
// +++++++++++++++++++++++++++++
// Day 001/100: Fibonacii Sequence Generator
// ++++++++++++++++
// Video-Screen-Recording: https://youtu.be/T0DjoLLlOTk
// ++++++++++++++++

#include<iostream>
#include <vector>


int main(int argc, char** argv)
{
    int end_number = 0;
    int current_first_number = 0;
    int current_second_number = 1;
    int sum_of_current_first_and_second_numbers = 0;
    std::vector<int> result;

    std::cout << "Enter the number upto which you"
    "want to get the Fibonacci series:"<< std::endl;

    std::cin >> end_number;

    result.push_back(current_first_number);
    result.push_back(current_second_number);

    for(int i = 0; i < end_number; i++)
    {
        sum_of_current_first_and_second_numbers =
        current_first_number + current_second_number;

        result.push_back(sum_of_current_first_and_second_numbers);

        current_first_number = current_second_number;
        current_second_number = sum_of_current_first_and_second_numbers;
    }

    std::cout << "Fibonacci Series: " << std::endl;

    for(int number : result)
    {
        std::cout << number << " ";
    }
    std::cout << "\n" << std::endl;
    
    return 0;
}




