//@author: Nick Martin
//@date: 9/29/2025
//@purpose: This program runs a loop that prints a mult table for numbers 1 to 10

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    for(int loopo = 1;loopo<11;loopo++){ //run loop to show one to ten
        for(int loopi = 1;loopi<11;loopi++){ //run loop to show one to ten

            cout<<loopo *loopi<< "\t";
        }
        cout<<endl;
    }
    //end method
    return 0;
}