//@author: Nick Martin
//@date: 10/20/2025
//@purpose: This program takes a list of sales from user and prints to file

//iostream
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

//game start
int main()
{
    ofstream outputFile;
    int runs = 0;
    float day = 0;
    float total = 0;
    cout<< "how many days"<<endl;
    cin>> runs;
    outputFile.open("week9_lab2.txt");//open file
    for(int num = 0;num<runs;num++){ //run loop to count to usernum
        cout<<"how much today? ";
        cin>>day;
        outputFile <<day<<"\n";
        total = total + day;
    }
    outputFile << "====================\nTotal Sales: $"<<fixed<<setprecision(2)<<total<<"\n====================";
    outputFile.close();//cLOSE file
    cout<<"Done Writing....";
    //end method
    return 0;
}