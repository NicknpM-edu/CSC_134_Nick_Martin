//@author: Nick Martin
//@date: 9/10/2025
//@purpose: This program determines if given character is vowel or consonant

//iostream
#include <iostream>
#include <cctype>

//game start
int main()
{
    //define char
    char gimme;
    //ask for char
    std::cout<<"give a letter"<<std::endl;
    std::cin >>gimme;

    //check if num
    if(isdigit(gimme))
    {
        std::cout<<"nuh uh.";
        return 0;
    }

    //check if vowel or print
    else if (gimme == 65 or gimme == 69 or gimme ==73 or gimme ==79 or gimme ==85 or gimme ==97 or gimme ==101 or gimme ==105 or gimme ==111 or gimme ==117)
    {
        std::cout <<gimme<<" is a vowel";
    }
    else if(gimme ==89 or gimme ==121)
    {
        std::cout<<gimme<<" is sometimes a vowel";
    }
    else
    {
        std::cout<<gimme<<" is a consonant";
    }
    //end method
    return 0;
}