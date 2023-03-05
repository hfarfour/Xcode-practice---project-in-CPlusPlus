//
//  main.cpp
//  Switch Statments
//
//  Created by Hossam Farfour on 25/06/2022.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
int main()
{
    char choice;
    cout<<"Enter A , B , C or D "<<endl;
    cin>>choice;
    
    switch (choice)
    {
        case 'a':
        case 'A':
            cout<<"you entred A "<<endl;
            break;
        case 'b':
        case 'B':
            cout<<"you entred B "<<endl;
            break;
        case 'c':
        case 'C':
            cout<<"you entred C "<<endl;
            break;
        case 'd':
        case 'D':
            cout<<"you entred D "<<endl;
            break;

        default:
            cout<<"You must entre a Letter (A , B , C Or D)"<<endl;
            break;
    }
    return 0;
}
*/

/*
int main()
{
    cout<<" using switch with menu Driven programs"<<endl;
    const double ADULT_RATE= 120.0;
    const double CHILD_RATE= 60.0;
    const double SENIOR_RATE = 100.0;
    int choice;
    int months;
    double charges = 0.0;
    
    //dislay  the menue and get the user's choice
    cout<<" Health Clud Memebrship Menu "<<endl;
    cout<<" 1 . Stander Adult membership "<<endl;
    cout<<" 2 . Stander Child membership"<<endl;
    cout<<" 3 . Stander Senior Citizen membership"<<endl;
    cout<<" 4 . Quit the Program "<<endl;
    cout<<" Enter your choice please "<<endl;
    cin>>choice;
    //set the numeric output formating
    cout<<fixed<<setprecision(2);
    
    //use the menu selection to excute the correct set of actions
    if(choice >= 1 && choice <= 3)
    {
        cout<<" for how many months ? "<<endl;
        cin>>months;
    // set charge pased on user input
        switch (choice)
        {
            case 1:
                charges = months * ADULT_RATE;
                break;
                
            case 2:
                charges = months * CHILD_RATE;
                break;
            case 3:
                charges = months * SENIOR_RATE;
                break;
        }
        
        cout<<"the total charges  "<<charges<<"  pound "<<endl;
   }
    else if (choice != 4)
   {
        cout<<" Enter your choice between 1 and 4 "<<endl;
        cout<<"quit the program now or rerun the program "<<endl;
   }
    
    return 0;
}
*/

/*
//Declare the enumerated type
enum Roster {Tom = 1 , Sharon , Bill, Teresa};
// Sharon - John will be assigned default values 2-5
int main(){

  int who;
    cout<< "Whose birthday do you want to know?\n";
    cout<< "1 = Tom\n";
    cout<< "2 = Sharon \n";
    cout<< "3 = Bill \n";
    cout<< "4 = Teresa \n";
    cin>> who;
    
    switch (who) {
        case Tom :
            cout <<"Tom's birthday is January 3.\n";
            break ;
        case Sharon :
            cout<<" Sharon's birthday is April 22.\n";
            break;
        case Bill:
            cout<<" Bill's birthday is December 19.\n";
            break;
        case Teresa :
            cout<<" Teresa's birthday is February 2.\n";
            break;
        default:
            cout <<"nlnvalid birthday selection\n";
            break;
    }
    return 0;
}
*/

