//@author: Nick Martin
//@date: 9/2/2025
//@purpose: This program calculates the area of a circle

//iostream
#include <iostream>

//game start
int main()
{
    //define radius and pi then calculate area
    int radius = 19;
    float pi = 3.1415;
    float area = pi*(radius*radius);

    //use the std output for the console and print area
    std::cout<< area<< std::endl;

    //end method
    return 0;
}