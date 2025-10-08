//@author: Nick Martin
//@date: 10/8/2025
//@purpose: This program reads from file and prints to console

//iostream
#include <fstream>
#include <iostream>
using namespace std;

//game start
int main()
{
    ifstream inputFile;
    inputFile.open("friends.txt");//open file

    //cout<< friends.txt;

    inputFile.close();//cLOSE file
    //end method
    return 0;
}