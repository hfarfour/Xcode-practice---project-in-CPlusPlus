//
//  main.cpp
//  Nested_If_Else_Statments
//
//  Created by Hossam Farfour on 24/06/2022.
//====================================
// line 80 is very important code ///
//====================================
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;


//====Nested_If_Else_Statments=======
/*
int main()
{
    char employed, recentGard; // Y or N
    cout<<" Answer the following question";
    cout<<" with either Y for Yes and N for No  \n";
    cout<<" Are you employed? \n";
    cin>>employed;
    cout<<" have you grduated from college in the past two years? \n";
    cin>>recentGard;
    
    // determin the application's loan qualifications
    if(employed =='Y' || employed == 'y')
    {
        if(recentGard =='Y'|| recentGard == 'y')
        {
            cout<<" you qualify for the special interest rate! \n";
        }
        else
        {
            cout<<" you must have graduated form the college in the past! \n";
            cout<<" two years to be qualified for the special rate. \n";
        }
    }
    else
    {
        cout<<" you must be employed to qualify for the special rate. \n";
    }
    return 0;
}
*/
//======================
/*
int main ()
{
    cout<<"using the value of a conditional expresion"<<endl;
    const double PAY_RATE = 50.0;
    const int MIN_HOURS = 5;
    double hours, charge;
    
    // get the hours worked
    cout<<"how many hours you have worked\n";
    cin>>hours;
    // determin how many hours to charge
    hours = hours <= MIN_HOURS ? MIN_HOURS : hours;/// very important to understand this lovelly code
    //or
//   if(hours <= MIN_HOURS)
//   {
//       charge = MIN_HOURS * PAY_RATE;
//
//   }else
//   {
//       charge =  hours * PAY_RATE ;
//   }
//
    // calculate and display the chrage
    charge = PAY_RATE * hours;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"the charge are  "<<charge<< " pound "<<endl;
    return  0;
}
*/
 
//=========isalpha=====isdigit========
/*
int main () {
    //print 1 for true
    // pirnt 2 for fales
    cout << "Is'?'an alphabetic character?  " <<isalpha('?')<<endl;
    cout << "Is'X'an alphabetic character? "<<isalpha('r')<<endl;
    cout << "Is 'x' an alphabetic character? "<< isalpha('x')<<endl;
    cout << "Ask if(isalpha('x') == true) \n";
    cout<<endl;
    //or
    if (isalpha(5) == true )
    cout << "The letter x is an alphabetic character. \n";
    else
    cout << "The letter x IS NOT an alphabetic character. \n";
    
    cout<<endl;
    //or
    char ch = '12';
    cout << "Is x a digit ? "<< isdigit(ch)<<endl;
    if (isdigit(ch) == true)
    cout << "The number is digit .\n";
    else
    cout << "The number IS NOT digit.\n";
    return 0;
}
*/
//=========================
/*
int main () {
    char ch;
    cout << "Enter a digit or a letter: ";
   // ch = cin.get();
    cin >> ch;
  //Determine what the user entered
    if (ch >= '0' && ch <= '9')
    cout << "You entered a digit.\n";
    else if (ch >= 'A' && ch <= 'Z')
    cout << "You entered an uppercase letter .\n";
    else if (ch >= 'a' && ch <= 'z')
    cout << "You entered a lowercase letter. \n";
    else
    cout << "That is not a digit or a letter .\n";
    return 0;
}
*/
