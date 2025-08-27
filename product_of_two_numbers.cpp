//@author: Nick Martin
//@date: 8/27/2025
//@purpose: This program multiplies two numbers and prints product

//include iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() method
int main()
{
    int num1 = 3;
    int num2 = 10;
    int product = num1*num2;

    //use the std output for the console and print product
    std::cout<< product<< std::endl;
    //end method
    return 0;
}