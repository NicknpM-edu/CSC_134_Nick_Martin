//@author: Nick Martin
//@date: 11/19/2025
//@purpose: This program runs a function that averages three numbers

//iostream
#include <iostream>
using namespace std;

int averageValues(int give, int given, int givenen){
    int done = (give +given + givenen)/3;
    return done;
}
//game start
int main()
{
    int gett, gotted, got;
    cout<<"give number ";
    cin>>gett;
    cin>> gotted;
    cin>> got;
    int together = averageValues(gett,gotted,got);
    cout<< gett <<" "<<gotted<<" and "<< got<<" averaged is "<< together;
    //end method
    return 0;
}