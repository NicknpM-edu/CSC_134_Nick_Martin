//@author: Nick Martin
//@date: 9/2/2025
//@purpose: This program calculates the volume of a sphere

//iostream
#include <iostream>

//game start
int main()
{
    //define radius and pi then calculate volume
    int radius = 7;
    float pi = 3.1415;
    float volume = (4/3)*pi*(radius*radius*radius);

    //use the std output for the console and print volume
    std::cout<< volume<< std::endl;

    //end method
    return 0;
}