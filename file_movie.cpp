//@author: Nick Martin
//@date: 10/8/2025
//@purpose: This program writes a list to a file

//iostream
#include <fstream>
using namespace std;

//game start
int main()
{
    ofstream outputFile;
    outputFile.open("lab1.txt");//open file

    outputFile <<"Bourne Identity \nStar Wars Episode IV\nThe Hunger Games\nDead Pool\nX-Men First Class\nStar Wars Espisode V\nGet Out";

    outputFile.close();//cLOSE file

    //end method
    return 0;
}