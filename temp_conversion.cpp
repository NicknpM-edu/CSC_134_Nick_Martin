//@author: Nick Martin
//@date: 9/2/2025
//@purpose: This program converts fahrenheit to celsius

//iostream
#include <iostream>

//game start
int main()
{
    //define fahrenheit and convert
    float ftemp = 85;
    float ctemp = (ftemp-32.0)*5.0/9.0;

    //use the std output for the console and print celsius temp
    std::cout<< ctemp<< std::endl;

    //end method
    return 0;
}