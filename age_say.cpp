//@author: Nick Martin
//@date: 9/2/2025
//@purpose: This program prints the string representation of "Today I am 25 years old!"

//iostream and string
#include <iostream>
#include <string>
//game start
int main()
{
    //define each section
    std::pmr::string verbiage;
    verbiage = "Today I am ";
    std::pmr::string age;
    age = "25";
    std::pmr::string verbiage_end;
    verbiage_end = " years old!";
    //use the std output for the console and print each together
    std::cout<< verbiage << age << verbiage_end<< std::endl;

    //end method
    return 0;
}