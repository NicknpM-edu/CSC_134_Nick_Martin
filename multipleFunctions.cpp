//@author: Nick Martin
//@date: 11/19/2025
//@purpose: This program runs a function that runs two functions 

//iostream
#include <iostream>
using namespace std;

int averageValues(int give, int given, int givenen){
    int done = (give +given + givenen)/3;
    return done;
}
int squareNumber(int give){
    int done = give*give;
    return done;
}
void multipleFuncs(){
    int gett, gotted, got;
    cout<<"give number ";
    cin>>gett;
    cin>> gotted;
    cin>> got;
    int together = averageValues(gett,gotted,got);
    cout<< gett <<" "<<gotted<<" and "<< got<<" averaged is "<< together<<endl;

    int sqnum;
    cout<<"give number ";
    cin>>sqnum;
    int square = squareNumber(sqnum);
    cout<< sqnum <<" squared is "<< square;
}
//game start
int main()
{
    multipleFuncs();

    //end method
    return 0;
}