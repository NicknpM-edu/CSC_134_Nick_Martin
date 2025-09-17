//@author: Nick Martin
//@date: 9/17/2025
//@purpose: This program calculates the angle of a right triangle

//iostream
#include <iostream>
#include <cmath>
using namespace std;

//game start
int main()
{
    float pi = M_PI;
    float x = 3.0; //leg1
    float y = 4.0; //leg2
    float sqc = (x*x)+(y*y); //pythag theoreom
    float c = sqrt(sqc);
    float triangle_degrees = 180.00;
    float convert = triangle_degrees/pi;
    float result = atan(y/x)*convert;
    float expected = 53.1301;

    if(result == expected){
        cout<<"this is a 3-4-5 triangle";
    }
    else{
        cout<< "this is NOT a 3-4-5 triangle";
    }


    //end method
    return 0;
}