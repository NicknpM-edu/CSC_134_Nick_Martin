//@author: Nick Martin
//@date: 9/24/2025
//@purpose: This program runs a loop that rolls a die a user defined times

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    int times;
    int roll = 0;
    cout<<"give a number";//user input
    cin>>times;
    for(int loopo = 0;loopo<times;loopo++){ //run loop to show zero to twelve
        roll = ((rand() % 6) + 1);// the result is ranges from 1 to 6
        cout<< roll<<endl;
        
    }
    //end method
    return 0;
}