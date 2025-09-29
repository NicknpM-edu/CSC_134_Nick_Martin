//@author: Nick Martin
//@date: 9/29/2025
//@purpose: This program runs a loop makes a triangle

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    int givre = 0; //initialize input type
    cout<<"how many runs? "; // ask input
    cin>> givre; //recieve input as givre

    for(int loopo = 1;loopo<givre+1;loopo++){ //run loop from zero to userdefined
        for(int loopi = 0;loopi<loopo;loopi++){ //run loop from zero to loopo

            cout<<"*";
        }
        cout<<endl;
    }
    //end method
    return 0;
}