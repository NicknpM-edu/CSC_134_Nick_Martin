//@author: Nick Martin
//@date: 10/8/2025
//@purpose: This program writes a shopping cart list

//iostream
#include <fstream>
using namespace std;

//game start
int main()
{
    ofstream outputFile;
    outputFile.open("lab2.txt");//open file

    outputFile <<"******************************************\n\t\t\tShopping Cart\n******************************************\nproduct code\tqty\t\tprice\n\t789\t\t\t7\t\t$12.00\n\t\t\t\t\tTotal: $84.00";

    outputFile.close();//cLOSE file

    //end method
    return 0;
}