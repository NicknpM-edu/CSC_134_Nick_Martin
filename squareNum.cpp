//@author: Nick Martin
//@date: 11/19/2025
//@purpose: This program runs a function that squares an input number

//iostream
#include <iostream>
using namespace std;

int squareNumber(int give){
    int done = give*give;
    return done;
}
//game start
int main()
{
    int gett;
    cout<<"give number ";
    cin>>gett;
    int square = squareNumber(gett);
    cout<< gett <<" squared is "<< square;
    //end method
    return 0;
}