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
    string game = "y";
    int move;
    string owner;
    while(game == "y"){
        int session = 1;
        string board[3][3] = {"1","2","3","4","5","6","7","8","9",};
        int run = 0;
    while(session){
        run +=1;
        cout<<" -------------"<<endl;
        for(int row = 0;row<3;row++){//print board
          for(int col = 0;col<3;col++){
             cout<<" | "<<board[row][col];
         }
         cout<<" | \n -------------"<<endl;
        }
        if (run%2){//alternate players
            owner = "x";
        }
        else{
            owner = "o";
        }
         cout<<"what's "<<owner<< "'s move?"<<endl;// move
         cin>>move;
        for(int row = 0;row<3;row++){//place?
          for(int col = 0;col<3;col++){
            if(board[row][col]!="x" and board[row][col]!="o"){
                int place = stoi(board[row][col]);
                if(move == place){
                  board[row][col] = owner;
                }
            }
           }
         }

         //check for win state(i understand I should be able to simplify this but I'm tired and keep getting errors and it WORKS)
    if(board[0][0]==board[1][0] and board[0][0]==board[2][0]){//vertical
        cout<<owner<<" has won!";
        session = 0;
    }
    else if(board[0][1]==board[1][1] and board[0][1]==board[2][1]){
        cout<<owner<<" has won!";
        session = 0;
    }
    else if(board[0][2]==board[1][2] and board[0][2]==board[2][2]){
        cout<<owner<<" has won!";
        session = 0;
    }
    else if(board[0][0]==board[0][1] and board[0][0]==board[0][2]){//horizontal
        cout<<owner<<" has won!";
        session = 0;
    }
    else if(board[1][0]==board[1][1] and board[1][0]==board[1][2]){
        cout<<owner<<" has won!";
        session = 0;
    }
    else if(board[2][0]==board[2][1] and board[2][0]==board[2][2]){
        cout<<owner<<" has won!";
        session = 0;
    }
    else if(board[0][0]==board[1][1] and board[0][0]==board[2][2]){//diagonals
        cout<<owner<<" has won!";
        session = 0;
    }
    else if(board[0][2]==board[1][1] and board[0][2]==board[2][0]){
        cout<<owner<<" has won!";
        session = 0;
    }

    }

        cout<<"play again? y/n"<<endl;//loop
        cin>>game;
    }
    //end method
    return 0;
}