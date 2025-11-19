//@author: Nick Martin
//@date: 11/19/2025
//@purpose: This program runs a function that loops a user defined number of times

//iostream
#include <iostream>
using namespace std;

void loop(int give){
    for(int counter = 0;counter<give;counter++){
        cout<<counter+1<<endl;

    }
    return;
}
//game start
int main()
{
    int gett;
    cout<<"give number less than 1000 ";
    cin>>gett;
    if(gett<1000){
        loop(gett);
    }
    else{
        cout<<"no.";
    }
    //end method
    return 0;
}