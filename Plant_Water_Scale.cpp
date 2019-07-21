//
//  Plant_Water_Scale.cpp
//  
//Progrem tells when plant needs to be watered
//  Created by Darius Howe on 7/21/19.

#include <stdio.h>
#include <iostream>

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent)
{
    if(is_succulent==false && days>3)
    {
        return "Time to water the plant.";
    }
    else if(is_succulent && days<13)
    {
        return "Don't water the plant!";
    }
    else if(is_succulent && days>=13)
    {
        return "Go ahead and give the plant a little water.";
    }
    else
    {
        return "Don't water the plant!";
    }
}

int main() {
    
    std::cout << needs_water(10, false) << "\n";
    std::cout<<"Enter a day number please: ";
    int tree;
    std::cin>> tree;
    std::cout<<"True or false: ";
    bool yOrn=true;
    std::string entered="";
    std::cin>>entered;
    if (entered=="false" || "False" ||"F" || "f")
    {
        yOrn=false;
    }
    else{yOrn=true;}
    std::cout<<needs_water(tree,yOrn);
}
