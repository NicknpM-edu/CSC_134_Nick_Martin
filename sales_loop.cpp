//@author: Nick Martin
//@date: 10/20/2025
//@purpose: This program takes a list of sales from user and prints to file

//iostream
#include <fstream>
#include <iostream>

using namespace std;

//game start
int main()
{
    ofstream outputFile;
    int runs = 0;
    int total = 0;
    cout<< "how many days"<<endl;
    cin>> runs;
    outputFile.open("week9_lab1.txt");//open file
    for(int num = 0;num<runs;num++){ //run loop to count to usernum
        cout<<"how much today? ";
        cin>>total;
        outputFile <<total<<"\n";
    }
    outputFile.close();//cLOSE file
    cout<<"Done Writing....";
    //end method
    return 0;
}