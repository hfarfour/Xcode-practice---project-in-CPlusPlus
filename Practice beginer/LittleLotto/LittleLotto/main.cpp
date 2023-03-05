//
//  main.cpp
//  LittleLotto
//
//  Created by Hossam Farfour on 01/07/2022.
//
#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;



void getLottoInfo(int&, int&);
long int computerWays(int, int);
long int factorial(int);

int main()
{
    int pickFrom,numPicks;
    long int ways;
    cout<<"this program will tell you your probability of winnimg the little lotto ! "<<endl;
   
    getLottoInfo(pickFrom, numPicks);
    ways = computerWays(pickFrom, numPicks);
    cout<<fixed<<showpoint<<setprecision(4);
    cout<<"your chance of winning the lottery is 1 chance in "<<ways<<endl;
    cout<<"this is a probability of "<<(1.0 /ways)<<" "<<endl;
    return 0;
}

void getLottoInfo(int &pickFrom,int &numPicks)
{
    cout<<"how many numbers (1-12) are there to pick up from?"<<endl;
    cin>>pickFrom;
    while (pickFrom < 1 || pickFrom > 12)
    {
        cout<<"there must be between 1 qnd 12 numbers"<<endl;
        cin>>pickFrom;
    }
    cout<<"How many numbers must you pick up to play"<<endl;
    cin>>numPicks;
    while (numPicks < 1 || numPicks > pickFrom )
    {
        if(numPicks < 1)
        {
            cout<<"you must pick at least one number"<<endl;//too few picks
        }
        else
        {
            cout<<"you must pick "<<pickFrom<<" or fewer numnbers"<<endl;//too many picks
        }
        cout<<"How many numbers must you pick up to play"<<endl;
        cin>>numPicks;
    }
}
long int computerWays(int n,int k)
{
    return (factorial(n)/factorial(k)/factorial(n-k));
}

long int factorial(int number)
{
    long int Total = 1;
    for(int i = number; i>=1; i--)
    {
        Total *= i;
    }
    return Total;
}
