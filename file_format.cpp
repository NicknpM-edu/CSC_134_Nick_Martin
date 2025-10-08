//@author: Nick Martin
//@date: 10/8/2025
//@purpose: This program excludes \n

//iostream
#include <fstream>
using namespace std;

//game start
int main()
{
    ofstream outputFile;
    outputFile.open("lab3.txt");//open file

    outputFile <<"Bourne Identity Star Wars Episode IVThe Hunger GamesDead PoolX-Men First ClassStar Wars Espisode VGet Out";

    outputFile.close();//cLOSE file

    //end method
    return 0;
}