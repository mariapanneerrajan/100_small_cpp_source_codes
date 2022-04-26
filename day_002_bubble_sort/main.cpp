// +++++++++++++++++++++++++++++
// 100 Small Cpp Source Codes
// +++++++++++++++++++++++++++++
// Day 002/100: Bubble Sort
// ++++++++++++++++
// Video-Screen-Recording: https://youtu.be/KzGtjLvPSik
// ++++++++++++++++

#include<iostream>

int main(int argc, char** argv)
{
    const int number_of_items = 5;
    int given_list[number_of_items] =
    {5,4,3,2,1};

    std::cout << "Given List: " << std::endl;
    for(int i = 0; i < number_of_items; i++)
        std::cout << given_list[i] << " ";
    std::cout << "\n";

    int number_of_passes = number_of_items-1;
    int number_of_checks = number_of_passes;

    for(int j=0; j < number_of_passes; j++)
    {
        std::cout << "Pass: " << j+1 << std::endl;
        for(int k=0; k < number_of_checks; k++)
        {
            if(given_list[k] > given_list[k+1])
            {
                int temp = given_list[k];
                given_list[k] = given_list[k+1];
                given_list[k+1] = temp;
            }
            for(int l = 0; l < number_of_items; l++)
                std::cout << given_list[l] << " ";
            std::cout << "\n";
        }
        number_of_checks--;
    }

    return 0;
}
