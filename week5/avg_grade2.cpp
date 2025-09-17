//@author: Nick Martin
//@date: 9/17/2025
//@purpose: This program averages ten grades

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    //define loop limit
    int num = 0;
    float grade = 0;
    float gotcha = 0;
    //ask for grades
    while(num<10){
        cout<<"give a grade"<<endl;
        cin>> gotcha;
        grade = grade + gotcha;

        num++;
    }

    //average
    float avg = (grade)/10;
    //print
    cout<<"The average of your grades is "<< avg;

    //end method
    return 0;
}