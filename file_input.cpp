//@author: Nick Martin
//@date: 10/8/2025
//@purpose: This program takes integer from user and prints to file

//iostream
#include <fstream>
#include <iostream>

using namespace std;

//game start
int main()
{
    ofstream outputFile;
    int runs = 0;
    cout<< "how many run"<<endl;
    cin>> runs;
    outputFile.open("lab4.txt");//open file
    for(int num = 0;num<runs;num++){ //run loop to count to usernum
        outputFile <<num<<"\n";
    }
    outputFile.close();//cLOSE file
    cout<<"Done Writing....";
    //end method
    return 0;
}