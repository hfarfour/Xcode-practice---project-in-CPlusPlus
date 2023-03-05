//
//  main.cpp
//  Practise_If_statments
//
//  Created by Hossam Farfour on 24/06/2022.
//
#include <iostream>
#include <string>
#include <iomanip> // for set persiicion ans setw()
using namespace std;



//=======if statments============
/*
int main()
{
    int number;
    cout<<"Enter an interger and I wll let you if it is odd or even \n";
    cin>>number;
    
    if(number %2 == 0)
    {
        cout<<number<<" is even  \n";
    }
   else
    {
        cout<<number<<" is odd \n";
    }
    return 0;
}
 */


//=======if else if statments and trailing else============
/*
int main()
{
//    const int MIN_A_SCORE = 90,//  const must have enishiulised value
//            MIN_B_SCORE = 80,
//            MIN_C_SCORE = 70,
//            MIN_D_SCORE = 60,
//            MIN_POSIBALE_SCORE = 0;
    int testScore;
    char grade;
    bool goodScore = true;
    cout<<"Enter your numeric score and I will tell you your garde earned "<<endl;
    cin>>testScore;
    // determine the letter grade
    if(testScore >= 90)
    {
        grade= 'A';
    }
    else if(testScore >= 80)
    {
        grade='B';
    }
    else if(testScore >= 70)
    {
        grade='C';
    }
    else if(testScore >= 60)
    {
        grade='D';
    }
    else // trailing else
    {
        grade ='F';
        goodScore = false;
    }
    if(goodScore)
    {
    cout<<"your grade is "<<grade<<endl;
    }
    else
    {
        cout<<"your grade is too low and it is "<<grade<<endl;
        
    }
    return  0;
}
*/

/*
int main()
{
    cout<<" using if else with menu Driven programs"<<endl;
    const double ADULT_RATE= 120.0;
    const double CHILD_RATE= 60.0;
    const double SENIOR_RATE = 100.0;
    int choice;
    int months;
    double charges;
    //dislay  the menue and get the user's choice
    cout<<" 1 . Stander Adult membership "<<endl;
    cout<<" 2 . Stander Child membership"<<endl;
    cout<<" 3 . Stander Senior Citizen membership"<<endl;
    cout<<" 4 . Quit the Program "<<endl;
    cout<<" Enter your choice please "<<endl;
    cin>>choice;
    //set the numeric output formating
    cout<<fixed<<setprecision(2);
    
    //use the menu selection to excute the correct set of actions
    if(choice == 1)
    {
        cout<<" for how many months ? "<<endl;
        cin>>months;
        charges = months * ADULT_RATE;
        cout<<"the total charges  "<<charges<<"  pound "<<endl;
    }
    else if(choice == 2)
    {
        cout<<" for how many months ? "<<endl;
        cin>>months;
        charges= months * CHILD_RATE;
        cout<<"the total charges  "<<charges<<"  pound "<<endl;
        
    }
    else if(choice == 3)
    {
        cout<<" for how many months ? "<<endl;
        cin>>months;
        charges= months * SENIOR_RATE;
        cout<<"the total charges  "<<charges<<"  pound "<<endl;
        
    }
    else if (choice != 4)
    {
        exit(1);
    }
    return 0;
}
*/
