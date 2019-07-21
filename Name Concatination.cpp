//
//  Name Concatination.cpp
//
//
//  Created by Darius Howe on 7/21/19.
//

//Create a function that reads in a first and last name and concatinates it
//format: last name, first name last name
#include <stdio.h>
#include <iostream>
void introduction(std::string first_name, std::string last_name)
{
    std::cout<<last_name + ", " + first_name+ " " +last_name;
}

int main() {
    
    introduction("Beyonce", "Knowles");
    
}
