//
//  main.cpp
//  Function
//
//  Created by Hossam Farfour on 30/06/2022.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

//cin.get(); //Clear the previous \n out of input buffer
//cin.get();  // wait for the user to press ENTER

// function is a collection of statments that preforms a specific tasks...
//calling function is a statment that cause a function to execute...
//parameter list is a list of variabels that hold values being passed to the function..
//function prototpye eliminate the need to place a function definishin before all calls to the function..
//===========================================

/*
void deep();
void deeper();

int main()
{
    cout<<"hello from main function"<<endl;
    deep();
    cout<<"I am back in the main function"<<endl;
    return 0;
}

void deep()
{
    cout<<"I am in deep function"<<endl;
    deeper();
    cout<<"I am in back in deep function !!"<<endl;
}
void deeper()
{
    cout<<"I am in deeper function"<<endl;
}*/
//===========================================
/*
void showSum (int num1,int num2,int num3);
int main()
{
    cout<<"using function with return statment "<<endl;
    int value1, value2, value3;
    cout<<"Enter three values "<<endl;
    cin>>value1>>value2>>value3;
    showSum(value1,value2,value3);
   // cout<<""<<endl;
    return 0;
}

void showSum (int num1,int num2,int num3)
{
    int total = 0;
    total += num1+num2+num3;
    if(total == 0.0)
    {
        cout<<"can not sum this number (= 0) "<<endl;
        return; //the return statment cause the function to end immediately
    } else {
    cout<<"the sum is "<<total<<endl;
    }
}*/
//===========================================
/*
int showSum (int num1,int num2,int num3);  // function prototype
 
 int main()
{
    cout<<"using function with return value "<<endl;
    int value1,value2,value3;
    cout<<"Enter three values "<<endl;
    cin>>value1>>value2>>value3;
    showSum(value1,value2,value3);
   // cout<<""<<endl;
    //return 0;
}

int showSum (int num1,int num2,int num3)
{
    int result = 0;
    result += num1 + num2 + num3;
    if(result == 0.0)
    {
        cout<<"can not sum this number (=0) "<<endl;
    }else
    {
    cout<<"the sum is "<<result<<endl;
    }
    return result; // return a value to the function
}*/
//===========================================

/*
double getRadius();  // function prototype
double square(double);//or double square(double number);
int main()
{
    cout<<"using function with return value "<<endl;
    const double IP = 3.14159;
    double radius;
    double area;
    cout<<"this program calculate the area of a circal "<<endl;
    radius = getRadius();
    // calculate the area of the circal
    area = IP * square(radius);
    // display the area
    cout<<"the area is "<<area<<endl;
    return 0;
}

double getRadius ()
{
    double red;
    cout<<"Enter the radius of the circal "<<endl;
    cin>>red;
    if(red == 0.0)
    {
      cout<<"can not get radius re run"<<endl;
    } else {
    cout<<" getting the dadius"<<endl;
    }
    return red;// return a value to the function
}
double square(double number)
{
    return number * number;
    
}
*/
//===========================================
/*
bool isEven(int);  // function prototype

int main()
{
    int value;
    cout<<"Enter an integer and I will tell whether its an odd or even number "<<endl;
    cin>>value;
    // indicate whether it is odd or even
    if(isEven(value))
        
        cout<<value<<" is even "<<endl;
    else
        cout<<value<<" is odd "<<endl;
    return 0;
}

bool isEven(int number)
{
    if(number % 2 == 0) // the number is even if there is no remainder
    {
        return true;
    } else {
        return false;     // otherwise .  the number is odd
    }
}
*/
//===========================================

/*
void displayMenu();  // function prototypes
int getChoice();
void showFees(string category, double rate, int months);

int main()
{
    cout<<"this program use function in a menu "<<endl;
    const double ADULT_RATE= 120.0;
    const double CHILD_RATE= 60.0;
    const double SENIOR_RATE=100.0;
    int choice;
    int months;
    cout<<fixed <<showpoint<<setprecision(2);
    do {
        displayMenu();
        choice = getChoice();
        if(choice!=4)
        {
            cout<<"for how many months "<<endl;
            cin>>months;
            switch (choice)
            {
                case 1:
                    showFees("adult", ADULT_RATE, months);
                    break;
                case 2:
                    showFees("Child", CHILD_RATE, months);
                    break;
                case 3:
                    showFees("senior", SENIOR_RATE, months);
                    break;
            }
        }
    } while (choice!=4);
    return 0;
}
void displayMenu()
{
    cout<<" Health Clud Memebrship Menu "<<endl;
    cout<<" 1 . Stander Adult membership "<<endl;
    cout<<" 2 . Stander Child membership"<<endl;
    cout<<" 3 . Stander Senior Citizen membership"<<endl;
    cout<<" 4 . Quit the Program "<<endl;
}
int getChoice()
{
    int choice;
    cout <<"Enter your choice"<<endl;
    cin>>choice;
    while (choice < 1 || choice > 4)
    {
        cout <<"the only vaild choicrs are 1-4"<<endl;
        cin>>choice;
    }
    return choice;
}
void showFees(string memberType, double rate, int months)
{
    cout<<endl
    <<"Membership type is "<<memberType<<"\n"
    <<"Membership months "<<months<<" and the  \n"
    <<"total charge is £"<<rate * months<<endl;
    cout<<" press ENTER key to return to the main menu"<<endl;
    cin.get(); //Clear the previous \n out of input buffer
    cin.get();  // wait for the user to press ENTER
}*/
 //===========================================

/*
//====Default arguments are passed to parameters automatically if no argument is provided in the function call====

void displayStars (int starsPerRow = 10, int numRows = 1);

int main() {
    displayStars(); //starsPerRow & numRows use defaults(10,1)
    cout<<endl;
    displayStars(5); //starsPerRow 5 , numRows use defaults 1
    cout << endl;
    displayStars(7,3);//starsPerRow 7 , numRows use 3
    return 0;
}
void displayStars (int starsPerRow, int numRows) {
    for (int row = 1 ; row <= numRows; row++) {
        for (int stars = 1; stars <= starsPerRow ; stars++)
            cout<<"* ";
            cout<<endl;
    }
}*/
//===========================================
/*
//A reference variable is a variable that references the memory location of another variable. Any change made to the reference variable is actually made to the one it references. Reference variables are sometimes used as function parameters.

//passing a variable as reference mean a function to be able to change a value in the calling function.

int doubleNum(int &refVar); // remove & then you will notice the diference.

int main()
{
    cout << "passing by reference\n";
    int value = 4;
    cout<<"in main , value is "<<value<<endl;
    cout<<"now calling doubleNum function "<<endl;
    doubleNum(value);
    cout<<"in calling doubleNum , the value is "<<value<<endl;
    return 0;
}
   int doubleNum(int &refVar)
{
       return refVar *= 2;
}
*/
//===================
/*
void getNum(int &); // remove & then you will notice the diference.
int doubleNum(int);
int main()
{
    cout << "passing by reference\n";
    int value;
    cout << "calling getNum\n";
    getNum(value);
    
    cout<<"calling doubelNum "<<endl;
    value = doubleNum(value);
    cout<<"display the value, the value is "<<value<<endl;
    return 0;
}
void getNum(int &userNum)
{
    cout<<"Enter number"<<endl;
    cin>>userNum;
}
int doubleNum(int number)
{
    return number *= 2;
}
*/
//=============read fron file function=========
/*
void readFile(ifstream &someFile); // remove & then you will notice the diference.
int main()
{
    cout << "Passing files to function \n";
    ifstream inputFile;
    inputFile.open("weather.txt");
    if(inputFile.fail())
    {
        cout<<"Error openning the file"<<endl;
    } else {
        readFile(inputFile);
        inputFile.close();
    }
    return 0;
}
void readFile(ifstream &someFile)
{
    int tempreature;
    while (someFile >> tempreature)
    {
        cout<<tempreature<<" "<<endl;
    }
}
*/
//==========================================
/*
// overload  means you can assign the same name to multiple functions as long as their parameter lists are different

int square (int); // 412
double square (double);

int main()
{
    cout<<"using overloading function page 412 "<<endl;
    int userInt;
    double userReal;
    cout<<"Enetr an integer and flooting poit value! "<<endl;
    cin>>userInt>>userReal;
    // display their squares
    cout<<"here are their squares"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<square(userInt)<<" and "<<square(userReal)<<endl;
    return 0;
}

int square (int number)
{
    return number * number;
}
double square (double number)
{
    return number * number;
}

 //==========================================
*/
