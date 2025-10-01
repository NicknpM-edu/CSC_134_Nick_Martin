//@author: Nick Martin
//@date: 10/1/2025
//@purpose: This program runs a loop that decides if a user has met their budget for a month

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    int total = 0;
    int adder;
    int budget;
    cout<<"What is your budget for this month."<<endl;
    cin>>budget;//define budget
    while (adder!=0){//check input for end
        cout<<"Add a cost, enter 0 when done"<<endl;
        cin>>adder;
        total = total + adder;
    }

    if(total< budget){//check budget
        cout<<"Congrats! You went under budget.";
    }
    else if(total > budget){
        cout<<"You went over budget.";
    }
    else{
        cout<<"you met your budget.";
    }


    //end method
    return 0;
}