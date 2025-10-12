//@author: Nick Martin
//@date: 10/12/2025
//@purpose: This program reads from file and prints to console

//iostream
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//game start
int main()
{
    ifstream inputFile;
    inputFile.open("numbers.txt");//open file
    int numbers;
    while(inputFile >> numbers){//print all names in file
        cout<< numbers<<endl; 
        }
    
    inputFile.close();//cLOSE file
    //end method
    return 0;
}