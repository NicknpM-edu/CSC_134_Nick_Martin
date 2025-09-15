//@author: Nick Martin
//@date: 9/10/2025
//@purpose: This program averages ten grades

//iostream
#include <iostream>
using namespace std;

//game start
int main()
{
    //define loop limit
    int num = 0;
    float avg = 0;
    //ask for grades
    while(num<10){
        float grade(num) = 0.0;
        cout<<"give a grade"<<endl;
        cin<<grade(num);

        num++;
    }

    //average
    avg = (grade)/10;
    //print
    cout<<"The average of your grades is "<< avg;

    //end method
    return 0;
}