//@author: Nick Martin
//@date: 9/10/2025
//@purpose: This program determines if year entered is leap year

//iostream
#include <iostream>


//game start
int main()
{
    //define year
    int gimme;
    //ask for year
    std::cout<<"give a year"<<std::endl;
    std::cin >>gimme;

    //check if leap
    if(gimme %400)
    {
        if(gimme %4)
        {
            std::cout <<gimme<<" is not leap year";
        }
        else if (gimme % 100){
            std::cout <<gimme<<" is leap year";
        }
        else{
            std::cout <<gimme<<" is not leap year";
        }
    }
    else
    {
        std::cout <<gimme<<" is a leap year";
    }

    //end method
    return 0;
}