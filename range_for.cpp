//@author: Nick Martin
//@date: 11/5/2025
//@purpose: This program runs a loop draws a line on a graph

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    int y_axis[16] ={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int x_axis[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int m=2;
    int b=3;
    int line[5]={0,1,2,3,4};
    for(auto y:y_axis){
        //int y=mx+b;
        if(y<10){//formatting
            cout<<" ";
        }
        cout<<y<<"|";
            for(auto get:line){
                int dot = (m*get) +b;//math
                if(y==dot){
                    for(int loopo = 0;loopo<get;loopo++){//spacing
                        cout<<"  ";
                    }
                    cout<<"x";//the actual dot
                }
                

            }
            cout<<endl;//start anew

    }

    
    cout<<"  ";
    for(auto x:x_axis){
        cout<<"|"<<x;
    }
    

    //end method
    return 0;
}