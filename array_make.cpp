//@author: Nick Martin
//@date: 10/29/2025
//@purpose: This program takes a list of numbers and sums them

//iostream
#include <iostream>

using namespace std;

//game start
int main()
{
    int list_length = 5;//list length
    int grades[list_length];
    int total = 0;
    for(int count = 0;count<list_length;count++){//go through list and add to total
        total+= grades[count];

    }
    int average = total/list_length;
    cout<<average;
    //end method
    return 0;
}