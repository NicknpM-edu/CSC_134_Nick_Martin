//@author: Nick Martin
//@date: 11/10/2025
//@purpose: This program plays a tic-tac-toe game with the user

//iostream
#include <iostream>
#include <string>
using namespace std;


//game start
int main()
{
    string board[3][3] = {"_","_","_","_","_","_","_","_","_",};
    int session = 1;
    string game = "y";
    while(game == "y"){
    while(session){
        cout<<" -------------"<<endl;
        for(int row = 0;row<3;row++){//print board
          for(int col = 0;col<3;col++){
             cout<<" | "<<board[row][col];
         }
         cout<<" | \n -------------"<<endl;
        }
        cout<<"b lank wins!";
        session = 0;

    }


        cout<<"play again? y/n"<<endl;//loop
        cin>>game;
    }
    //end method
    return 0;
}