//
//  Three Multiples.cpp
//  
//
//  Created by Darius Howe on 7/21/19.
//Program

#include <stdio.h>
#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num)
{
    
    std::vector<int> individs{num, num * 2, num * 3};
    return individs;
    
}

std::vector<int> nth_multiples(int num1, int num2)
{
    while (num2>0)
    {
        std::vector<int> nths{num1* num2}
        num2--;
    }
    return nths;
}
int main()
{
    //Hard coded with 8 as input
    for (int element : first_three_multiples(8))
    {
        std::cout << element << "\n";
    }
    //set up for user input and will print largest to smallest
    std::cout<<"Enter a base number: " endl;
    std::cin>>base;
    std::<<"Enter the number of multiples desired: " endl;
    std::cin>>numMults;
    for (int item: nths(base,numMults))
    {
        std::cout << item << "\n";
    }
    
}
