//@author: Nick Martin
//@date: 9/10/2025
//@purpose: This program averages three grades and prints letter grade

//iostream
#include <iostream>


//game start
int main()
{
    //define grades
    int grade1;
    int grade2;
    int grade3;
    //ask for grades
    std::cout<<"Enter your three grades"<<std::endl;
    std::cin >>grade1;
    std::cin >>grade2;
    std::cin >>grade3;

    //average
    float avg = (grade1+grade2+grade3)/3;
    //print
    std::cout<<"The average of your three numbers is "<< avg <<std::endl;
    //many ifs to decide
    if(avg>=90)
    {
        std::cout<<"A";
    }
    else if(avg>=80)
    {
        std::cout<<"B";
    }
    else if(avg>=70)
    {
        std::cout<<"C";
    }
    else if(avg>=60)
    {
        std::cout<<"D";
    }
    else
    {
        std::cout<<"F";
    }
    //end method
    return 0;
}