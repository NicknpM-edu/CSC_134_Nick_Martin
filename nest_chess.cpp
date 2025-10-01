//@author: Nick Martin
//@date: 9/29/2025
//@purpose: This program runs a loop makes an chessboard

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    int givre = 0; //initialize input type
    cout<<"how many runs? "; // ask input
    cin>> givre; //recieve input as givre

    for(int loopo = 0;loopo<givre;loopo++){ //run loop from zero to userdefined
        
        for(int loopi = 0;loopi<givre;loopi++){ //run loop from zero to userdefined

            if(loopi%2){//MAKE THE ALTERNATING DESIGN
                if(loopo%2){
                    cout<<"*";
                }
                else{
                    cout<<"  ";
                }
            }
            else{
                if(loopo%2){
                    cout<<"  ";
                }
                else{
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }
    //end method
    return 0;
}