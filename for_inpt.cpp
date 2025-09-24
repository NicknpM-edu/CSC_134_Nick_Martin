//@author: Nick Martin
//@date: 9/24/2025
//@purpose: This program runs a loop that counts to a user defined int

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    int givre = 0; //initialize input type
    cout<<"how many runs? "; // ask input
    cin>> givre; //recieve input as givre
    for(int counter = 0;counter<givre;counter++){ //run loop to count to givre
        cout<<counter<<endl; //print loop number

    }
    //end method
    return 0;
}