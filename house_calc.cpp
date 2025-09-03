//@author: Nick Martin
//@date: 9/3/2025
//@purpose: This program calculates the footage of a house from length and width

//iostream
#include <iostream>

//game start
int main()
{
    //calculate footage after defining length and width
    int length = 50;
    int width = 32;
    int area = length*width;

    //use the std output for the console and print voltage
    std::cout<<"The house is "<< area << " square feet"<< std::endl;

    //end method
    return 0;
}