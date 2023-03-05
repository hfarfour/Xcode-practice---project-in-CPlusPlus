//
//  main.cpp
//  Looping
//
//  Created by Hossam Farfour on 27/06/2022.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;


//===========for lood + continue============
/*
int main()
{
    int numDVDs;
    double total = 0.0;
    char current;
    
    cout<< "get the number of DVDS rented " <<endl;
    cout<< "How many DVDs rented " <<endl;
    cin>>numDVDs;
    // determine the charges
    for(int dvdCount = 1; dvdCount <= numDVDs; dvdCount++)
    {
        //cout<< "when you rent 2 the 3rd is free " <<endl;
        if(dvdCount % 3 == 0 ) // if it is 3rd DVD it is fee
        {
            cout<<"DVD "<<dvdCount<<" is free "<<endl;
            continue;
        }
        cout<< "Is DVD "<<dvdCount<<" a current release (Y (yes) OR N (NO)"<<endl;
        cin>>current;
        if((current == 'Y'|| current == 'y'))
            total += 3;
        else
            total += 2;
    }
    // display the total charge
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"the total is £ "<<total<<endl;
    return 0;
}
 */

/*
int main()
{
    for (int number = 1; number <= 5; number++)
    {
        cout<<number<<setw(4)<<(number * number)<<endl;
    }
    cout<<"======================="<<endl;
    for (int x = 1, y = 1; x<=5; x++)
    {
        cout<< x <<" + "<< y <<" = "<< (x + y)<<endl;
    }
    
    cout<<"======================="<<endl;
    for (int x=1,y=1; x<=5; x++, y++)
    {
        cout<<x<<" + "<<y<<" = "<<(x + y)<<endl;
    }
    return 0;
}
*/

 
//==============while lood===============
//and how to break out of the loop
/*
int main()
{
   int count = 0;
    while (count <= 10)
    {
        count += 1;
        cout<<count<<endl;
       
        if(count == 6)// how to beak out of the loop
        {
            break;
        }
    }
    cout<< "that is all " <<endl;
    return 0;
}
*/

//=======================
/*
int main()
{
  //const int MIN_A_SCORE=90, // const must have enishiulised value
          //  MIN_B_SCORE=80,
          //  MIN_C_SCORE=70,
           // MIN_D_SCORE=60,
           // MIN_POSIBALE_SCORE=0;
    
    
    int numStudent,     //The number of students
        student = 1,      //the current student being processed
    testScore = 0;      //current student numeric test score
    char grade = ' ';   // curent letter grade
    bool goodScore = true;
    cout<<"how many student do you have grade for? "<<endl;
    cin>>numStudent;
    
    // initialize the loop control variable
    //student = 1;
    // loop once for each student
    while (student <= numStudent)
 {
        //get student numeric score
        cout<<"Enter the numeric test score for student # "<<student<<endl;
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
    else if (testScore >= 50)
    {
        grade='F';
    }
    else
    {
        goodScore = false; // the score is below 0
    }
  // display the letter grade
    if(goodScore){
        cout<<"your grade is "<<grade<<endl;
    } else{
        cout<<"the score can not be below zreo "<<grade<<endl;
    }
   student = student + 1;
    //student ++;
 }
    return  0;
}
*/
//===============
/*
int main ()
{
    cout << "Now using while lood !"<<endl;
    // constant for minimum and maximum player per team
    const int MIN_PLAYER = 9,
              MAX_PLAYER= 15;
    
    // vasrisables
    int players,  // Number of avasilable player
    teamZise,     //Number of desired player per team
    numTeams,     //Number of teams
    leftOver;     //Number of player left over
    
    //get the number of player per team
    cout<<"how many player per team do you want ? ";
    cout<<"Enter a value in range of "<<MIN_PLAYER<<" - "<<MAX_PLAYER<<endl;
    cin>>teamZise;
    
    // validate the input
    while (teamZise < MIN_PLAYER || teamZise > MAX_PLAYER)
    {
        cout<<"team size must be between "<<MIN_PLAYER << " and " << MAX_PLAYER <<endl;
        cout<<"how many player do you wish per team ?"<<endl;
        cin>>teamZise;
    }
    
    // get and validate the number of players available
    cout<<"how many player are available ?"<<endl;
    cin>>players;
    while (players <= 0 )
    {
        cout<<"Enter a positive number ?"<<endl;
        cin>>players;
    }
    // claculate the number of teams and left over players
    numTeams = players / teamZise;
    leftOver = players % teamZise;
    
    // display the results
    cout<<"there will be "<<numTeams<< " teams with  "<<leftOver;
    cout<<" players left over  "<<endl;
    return 0;
}
*/

//==========postfix Modes and prefixt Modes==========
/*
int main()
{
    int number = 4;
    cout<<number<<" ";
    cout<<number++<<" ";
    cout<<number<<" ";
    cout<<++number<<" "<<endl;
    
    cout << "Now using prefixt Modes!"<<endl;
    cout<<--number<<" ";
    cout<<number <<" ";
    cout<<number--<<" ";
    cout<<--number <<" "<<endl;
    return 0;
}
*/

//==========using Do while loop!===============
/*
int main()
{
    
    int score1 , score2 , score3 ; // test cores
    double average;                 // avarage score
    char again;                     //loop again
    do
    {
        cout << "entre 3 socres and I will avarage them"<<endl;
        cin>>score1>>score2>>score3;
        // calculate the avarge
        average = (score1 + score2 + score3) /3.0;
        cout << "the avarge is "<<average<<endl;
        //does the user want to calcualte aonther avarage
        cout << "do you want to average another set?(Y,N) "<<endl;
        cin>>again;
    } while (again =='Y' || again=='y');
   
    return 0;
}
*/

/*
int main()
{
    cout<<" using Do Loop with menu Driven programs"<<endl;
    const double ADULT_RATE= 120.0;
    const double CHILD_RATE= 60.0;
    const double SENIOR_RATE =100.0;
    int choice;
    int months;
    double charges = 0.0;
    
    do{
        
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
        while (( choice < 1 ) || (choice > 4))
        {
            cout<<" Enter your choice 1,2,3 "<<endl;
            cin>>choice;
        }
        
    //use the menu selection to excute the correct set of actions
    if(choice != 4)
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
    } // if end
        
    } while (choice !=4); // loop againg if the user did not select 4
    return 0;
}
*/

//=============using do + while + for loop!===============
/*
int main()
{
    int num;
    cout<<"Enter an integer "<<endl;
    cin>>num;
    while (num != -99)
    {
        cout<<num<<" squared "<<pow(num,2.0)<<endl;
        cout<<" entre an integer , or -99 to quit"<<endl;
        cin>>num;
    }
    return 0;
}
*/

/*
int main()
{
    int num;
    char doAgain;
    do {
        cout<<"Enter an integer "<<endl;
        cin>>num;
        cout<<num<<" squared "<<pow(num,2.0)<<endl;
        
        cout<<"do you want to sequre another number ? (y(Yes) or n(No)) "<<endl;
        cin>>doAgain;
        
    } while (doAgain == 'y' || doAgain == 'y');
    return 0;
}
 */

/*
int main()
{
    for (int number=1; number <=8; number++)
    {
        cout<<number<<" Squared is "<<pow(number,2.0)<<endl;
    }
   
}
*/
//================Now using Neasted loop!===============
/*
int main()
{
    int numStudents,    //The number of students
    numTests = 0;      //current student numeric test score
    double average;
    double total = 0.0;
    cout<<"this program averages the test scores ? "<<endl;
    cout<<"how many student are there ? "<<endl;
    cin>>numStudents;
    cout<<"how many test score does each student have ? "<<endl;
    cin>>numTests;
    
    
   cout << "Read each student's score and compute their average "<<endl;
    for (int student = 1; student <= numStudents; student++) //outer loop
    {
        
        for (int test=1; test <= numTests; test++) //inner loop
        {
            int score;
            // read a score and add it to the accumlator
            cout<<"Enter score "<<test<<" for "<<" student "<<student<<endl;
            cin>>score;
            total += score;
        }
        //compute and display the avarage
        average = total / numTests;
        
        cout<<" the average score for student "<<student<<" is "<<average<<"\n\n";
        cout<<"=========================== "<<endl;
    }
    return  0;
}
*/
