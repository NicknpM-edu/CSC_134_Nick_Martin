//@author: Nick Martin
//@date: 11/2/2025
//@purpose: This program takes a list of grades and prints the average

//iostream
#include <iostream>

using namespace std;

//game start
int main()
{
    
    int numbers[5];
    int max = 0;
    for(int count = 0;count<5;count++){//make list
        cout<<"give five numbers";
        cin>>numbers[count];//recieve numbers
        int check = numbers[count];
        if(numbers[count]>max){//check if number is higher than previous
            max = numbers[count];
        }
    }
    cout<<"the highest number is "<<max;
    //end method
    return 0;
}