//@author: Nick Martin
//@date: 9/24/2025
//@purpose: This program runs a loop that prints each number and its square in a table

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    int minNum = 0;
    int maxNum = 100;
    cout<<"Number | Number Squared"<<endl; 
    cout<<"------------------------"<<endl;//formating
    for(int num = minNum;num<maxNum;num++){ //run loop to count to 100
        cout<<num <<"\t\t"<< (num*num)<<endl;
        
    }
    //end method
    return 0;
}