//@author: Nick Martin
//@date: 8/27/2025
//@purpose: This program divides an int by zero

//iostream
#include <iostream>

//game start
int main()
{
    int num1 = 3;
    int num2 = 0;
    int product = num1/num2;

    //use the std output for the console and print product
    std::cout<< product<< std::endl;

    //end method
    return 0;
}