//@author: Nick Martin
//@date: 10/29/2025
//@purpose: This program takes a list of numbers from a file and sums them

//iostream
#include <fstream>
#include <iostream>

using namespace std;

//game start
int main()
{
    ifstream inputFile;
    inputFile.open("numbers.txt");//open file
    int list_length = 5;
    int sales[list_length];
    int total = 0;
    int count = 0;
    int numbers;
    while(inputFile >> numbers){//put file in list and add together
        sales[count] = numbers;
        total+= sales[count];
        count++;

    }
    inputFile.close();//cLOSE file
    cout<<total;
    //end method
    return 0;
}