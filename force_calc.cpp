//@author: Nick Martin
//@date: 9/2/2025
//@purpose: This program calculates force from mass and acceleration

//iostream
#include <iostream>

//game start
int main()
{
    //calculate force after defining mass and acceleration
    int mass = 10;
    float acceleration = 9.81;
    float force = mass*acceleration;

    //use the std output for the console and print force
    std::cout<< force<< std::endl;

    //end method
    return 0;
}