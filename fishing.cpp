//@author: Nick Martin
//@date started: 10/1/2025
//@last updated: 10/1/2025
//@purpose: Fishing game

//iostream
#include <iostream>
#include <string>
using namespace std;

//game start
int main()
{
    int dollar = 0;
    int rod_cost = 5;
    int fish_skill = 5;
    string choice;
    string shopping;

    while (choice!="0"){//begin game loop
        cout<<"*********************************\n*\tWelcome to Fishing!\t*\n*********************************"<<endl;
        cout<<"1 for fishing, 2 for shop. press 0 to quit."<<endl;
        cin>>choice;

        while(choice == "1"){//fishing game
            int value = ((rand() % fish_skill) + 1);// the result is ranges from 1 to 5
            int size = ((rand() % 1) + 1);//size fish

            cout<<"You got a size "<<size<<" fish, you sell it for $"<<value<<endl;//fish output
            dollar += value;// add to cash

            cout<<"\nYou have $"<<dollar<<". press 1 to keep fishing, press 2 to go shopping"<<endl; //ask for more fish or end
            cin>>choice;
        }
        while(choice == "2"){//shopping
            cout<<"New Fishing Rod\t-\t"<<rod_cost<<endl;//list of shop items

            cout<<"you have $"<<dollar<<endl;//end of list always
            cin>>shopping;
            if (shopping == "rod" and dollar>= rod_cost){
                fish_skill += 3;
                dollar -= rod_cost;//REMEMBER TO LOWER CASH
                rod_cost = (rod_cost * 4);
                cout<<"You got a new fishing rod, your fishing level is now "<<fish_skill<<"."<<endl;
            }
            else if (shopping =="rod" and dollar<rod_cost){//poor :(
                cout<<"You can't afford that right now."<<endl;
            }
            cout<<"\n Press 1 to go back to menu, Press 2 to keep shopping"<<endl;
            cin>>choice;
        }
    }
    cout<<"you end with $"<<dollar<<" and fishing level "<<fish_skill;//end dialogue

    //end method
    return 0;
}