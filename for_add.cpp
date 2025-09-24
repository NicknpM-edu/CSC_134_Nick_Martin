//@author: Nick Martin
//@date: 9/24/2025
//@purpose: This program runs a loop that prints each number and adds it

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    int sumOp = 0;
    int adder = 10;
    for(int loopo = 0;loopo<50;loopo++){ //run loop to count to 50
        sumOp = loopo + adder; //add adder and loopo
        cout<<sumOp<<endl;
        
    }
    //end method
    return 0;
}