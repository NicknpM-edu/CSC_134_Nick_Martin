//@author: Nick Martin
//@date: 9/15/2025
//@purpose: This program runs until given correct input

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    float temper=212.34;
    float give = 0.0;
    while (give != temper){
        cout<<"give me a temp: ";
        cin>>give;
        if (give!=temper){
            cout<<"wrong"<<endl;
        }
        else{
            cout<<"The temperature has been succesfully set, thank you."<<endl;
        }
    }
    //end method
    return 0;
}