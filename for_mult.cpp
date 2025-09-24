//@author: Nick Martin
//@date: 9/24/2025
//@purpose: This program runs a loop that prints a mult table for a user given number

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    int multer = 0;
    cout<<"give a number"<<endl;//user input
    cin>>multer;
    for(int loopo = 0;loopo<13;loopo++){ //run loop to show zero to twelve
        
        cout<<multer << " X "<<loopo<<" = "<< (multer*loopo)<<endl;
        
    }
    //end method
    return 0;
}