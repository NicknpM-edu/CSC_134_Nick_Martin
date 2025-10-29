//@author: Nick Martin
//@date: 10/27/2025
//@purpose: This program takes a list of grades and prints the average

//iostream
#include <iostream>

using namespace std;

//game start
int main()
{
    
    int grades[10];
    int give;
    int total = 0;
    for(int count = 0;count<10;count++){
        cout<<"give ten grades ";
        cin>>grades[count];
        total += grades[count];
    }
    int average = total/10;
    cout<<average;
    //end method
    return 0;
}