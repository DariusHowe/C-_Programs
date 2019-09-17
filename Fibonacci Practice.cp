//
//  Fibonacci Practice.cpp
//  
//
//  Created by Darius Howe on 9/17/19.
//

#include <stdio.h>
#include <iostream>

using namespace std;
void printSeq(int n)
{
    static int n1=0, n2=1, n3;
    if (n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        //Prints 3rd element
        cout<<n3<<" ";
        printSeq(n-1);
        
    }
    
    
}
int main()
{
    int n;
    cout<< "Enter the number of Fibonacci numbers you want to know: "<<endl;
    cin>> n;
    cout<<"Your Fibonacci Sequence is as follows: "<<endl;
    cout<<"0"<< " 1 ";
    printSeq(n-2);
    cout<<"\n";
    return 0;
}
