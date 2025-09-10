//@author: Nick Martin
//@date: 9/10/2025
//@purpose: This program determines if input is even or odd

//iostream
#include <iostream>


//game start
int main()
{
    //define num
    int gimme;
    //ask for num
    std::cout<<"give a number"<<std::endl;
    std::cin >>gimme;

    //modulo to even or odd
    if (gimme%2)
    {
        std::cout <<gimme<<" is odd";
    }
    else
    {
        std::cout<<gimme<<" is even";
    }
    //end method
    return 0;
}