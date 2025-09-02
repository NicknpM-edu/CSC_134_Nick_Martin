//@author: Nick Martin
//@date: 9/2/2025
//@purpose: This program calculates velocity from distance traveled and time

//iostream
#include <iostream>

//game start
int main()
{
    //calculate velocity after defining time and distance traveled
    int time = 4;
    int distance = 400;
    int velocity = distance/time;

    //use the std output for the console and print velocity
    std::cout<< velocity<< std::endl;

    //end method
    return 0;
}