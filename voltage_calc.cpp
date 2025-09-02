//@author: Nick Martin
//@date: 9/2/2025
//@purpose: This program calculates voltage from amps and resistance

//iostream
#include <iostream>

//game start
int main()
{
    //calculate voltage after defining amps and resistance
    int amps = 10;
    int resistance = 2;
    int voltage = amps*resistance;

    //use the std output for the console and print voltage
    std::cout<< voltage<< std::endl;

    //end method
    return 0;
}