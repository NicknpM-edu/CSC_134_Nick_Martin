//@author: Nick Martin
//@date: 11/2/2025
//@purpose: This program takes a list of grades and prints the average

//iostream
#include <iostream>

using namespace std;

//game start
int main()
{
    
    int numbers[5];
    for(int count = 0;count<5;count++){
        cout<<"give five numbers: ";
        cin>>numbers[count];
        }
    for(int count = 5;count>=0;count--){//go through list backwards
        cout<<numbers[count]<<endl;

    }

    //end method
    return 0;
}