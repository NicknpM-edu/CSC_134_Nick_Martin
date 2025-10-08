//@author: Nick Martin
//@date: 10/8/2025
//@purpose: This program prints input to file

//iostream
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//game start
int main()
{
    ofstream outputFile;
    string frind = "";

    outputFile.open("lab5.txt");//open file
    for(int num = 0;num<3;num++){ //run loop to count to usernum
        cout<<"name a friend"<<endl;
        cin>>frind;
        outputFile<<frind<<"\n";
    }
    outputFile.close();//cLOSE file
    cout<<"Done Writing....";
    //end method
    return 0;
}