//
//  Nth Power.cpp
//  
//
//  Created by Darius Howe on 7/21/19.
//

#include <stdio.h>
#include <iostream>

int tenth_power(int num)
{
    return pow(num,10);
}

int nth_power(int num1, int num2)
{
    return pow(num1,num2);
}
int main() {
    
    std::cout << tenth_power(0) << "\n";
    std::cout << tenth_power(1) << "\n";
    std::cout << tenth_power(2) << "\n";
    
    std::cout<<"Enter a number: ";
    cin<<base;
    std::cout<<"What power should that be rased to: ";
    cin<<power;
    std::cout<<nth_power(base,power);
}
