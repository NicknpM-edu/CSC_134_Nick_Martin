//@author: Nick Martin
//@date: 10/29/2025
//@purpose: This program takes a credit card and checks if it is valid

//iostream
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <fstream>



using namespace std;

//game start
int main()
{
    string scard = "5500000000000004";
    int list_length = scard.length()-1;
    int card[list_length];
    int total = 0;
    string x;
    int y;
    //turn string to list/num
    for (int count = 0;count<=list_length;count++){
        x=scard[count];
        y = stoi(x);
        card[count]= y;
    }   
    for(int count = list_length;count>=0;count--){//go through list backwards
        if((count+1)%2){
            int mult = card[count]*2;
            cout<<card[count]<<endl;
            if (mult >9){
                mult = mult - 9;
            }
            cout<<mult<<endl;
            total+= mult;
        }
        else{
            total += card[count];
        }
    }
    cout<<total<<endl;
    if (total%10){
        cout<<"your card is not valid";
    }
    else{
        cout<<"your card passes the luhn algorithm";
    }


    //end method
    return 0;
}