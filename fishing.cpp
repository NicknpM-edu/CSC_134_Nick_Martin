//@author: Nick Martin
//@date started: 10/1/2025
//@last updated: 11/5/2025
//@purpose: Fishing game
//@todo: save file function, more shop items, leveling system?, lore?

//iostream
#include <iostream>
#include <string>
using namespace std;


//game start
int main()
{
    int dollar = 0;//money
    int fish_skill = 5;//fishing lvl perm
    int bait_num = 0;//bait amount
    int num_items = 2;
    string shop_list[num_items]={"rod","bait"};//shop items
    int shop_cost[num_items] = {5,50};//cost of shop items

    string choice;//inputs
    string shopping;

    while (choice!="0"){//begin game loop
        cout<<"*********************************\n*\tWelcome to Fishing!\t*\n*********************************"<<endl;
        cout<<"1 for fishing, 2 for shop. press 0 to quit."<<endl;
        cin>>choice;

        while(choice == "1"){//fishing game
            int fish_full = 0;//impermenent add(bait)
            if (bait_num){
                bait_num -= 1; //take bait
                fish_full += 10;//better fish
                cout<<"you have "<<bait_num<<" bait left "<<endl;
            }
            int value = ((rand() % fish_skill+fish_full) + 1);// the result is ranges from 1 to 5
            int size = ((rand() % 1) + 1);//size fish
            cout<<"You got a size "<<size<<" fish, you sell it for $"<<value<<endl;//fish output
            dollar += value;// add to cash


            cout<<"\nYou have $"<<dollar<<". press 1 to keep fishing, press 2 to go shopping"<<endl; //ask for more fish or end
            cin>>choice;
        }
        while(choice == "2"){//shopping
            for(int count=0;count<=num_items-1;count++){//print shop inventory
                cout<<shop_list[count]<<"\t-\t"<<shop_cost[count]<<endl;
            }

            cout<<"you have $"<<dollar<<endl;//end of list always
            cin>>shopping;
        
            if (shopping == shop_list[0] and dollar>= shop_cost[0]){
                fish_skill += 3;
                dollar -= shop_cost[0];//REMEMBER TO LOWER CASH
                shop_cost[0] = (shop_cost[0] * 4);
                cout<<"You got a new fishing rod, your fishing level is now "<<fish_skill<<"."<<endl;
            }
            else if (shopping == shop_list[1] and dollar>= shop_cost[1]){
                dollar -= shop_cost[1];//REMEMBER TO LOWER CASH
                shop_cost[0] = (shop_cost[1] * 7);
                bait_num = 10;
                cout<<"You got ten pieces of bait."<<endl;
            }
            else {//poor :(
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