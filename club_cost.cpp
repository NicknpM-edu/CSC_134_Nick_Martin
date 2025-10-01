//@author: Nick Martin
//@date: 10/1/2025
//@purpose: This program runs a loop that prints an expected cost increase for country club

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    int origin_cost = 250000;//starting cost of club
    for(int loopo = 1;loopo<6;loopo++){ //run five loops
        
        cout<<origin_cost*loopo<< endl;
    }
    //end method
    return 0;
}