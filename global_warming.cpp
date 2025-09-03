//@author: Nick Martin
//@date: 9/3/2025
//@purpose: This program calculates the a 2 degree higher temperature for nyc, denver, and phoenix

//iostream
#include <iostream>

//game start
int main()
{
    //calculate temp after defining each city
    int nyc = 85;
    int denver = 88;
    int phoenix = 106;

    //use the std output for the console and print each city and add two to each temp
    std::cout << "New high temperatures for cities in july:\nNYC: " << nyc *1.02 << "\nDenver: "<<denver* 1.02 <<"\nPhoenix: "<<phoenix* 1.02 << std::endl;

    //end method
    return 0;
}