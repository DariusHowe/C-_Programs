//
//  Palidome.cpp
//  
//
//  Created by Darius Howe on 7/21/19.
//Checks if string reads backwards the same as forwards

#include <stdio.h>
#include <iostream>

// Define is_palindrome() here:

bool is_palindrome(std::string text)
{
    std::string reversed="";
    for (int i=text.size()-1;i>=0;i--)
    {
        reversed += text[i];
    }
    if(reversed==text)
    {
        return true;
    }
    return false;
}
int main() {
    
    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";
    
}
