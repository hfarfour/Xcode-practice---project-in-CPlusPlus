#include <iostream>
#include <string>
#include <new> // need to use bad_alloc
#include <algorithm>
#include <cmath>
using namespace std;

/*
int main()
{
    int age =17;
    try
    {
        if(age >= 18){
            cout<<"access granted "<<endl;
        } else
        throw (age);
    }
    catch (int Myage) // accept all data type
    {
        cout<<"access declined"<<endl;
    }
    return 0;
}
*/
//===================================

/*
int main()
{
    int x = 0,y = 0;
    cout<<"enter values for x and y"<<endl;
    cin>>x;
    cin>>y;
    try
    {
        if(y == 0 )
       // throw (y);
        //or
            throw exception();
    cout<< x / y <<endl;
        
    }
    catch (exception e) // accept all data type
    {
        cout<<e.what()<<endl;
        cout<<"please view your input"<<endl;
    }
    
    catch(int d)
    {
        cout<< "divisin by zero exception"<<endl;
        cout<<"Y must be greater than 0"<<endl;
    }
    
    cout<<"the prograram is continued"<<endl;
    cout<< x + y + 100<<endl;
    return 0;
}
*/
/*
// more than one ecception
int main()
{
    int x = 0,y = 0;
    cout<<"enter values for x and y"<<endl;
    cin>>x;
    cin>>y;
    try
    {
        if(x < 30)
        throw "x expression"; // string
        
        if(y == 0)
        throw (y);            //intager
        cout<< x / y <<endl;
    }
    
    catch (exception e) // accept all data type
    {
        cout<<e.what()<<endl;
        cout<<"please view your input"<<endl;
    }
    catch(int d)
    {
        cout<< "divisin by zero exception"<<endl;
        cout<<"Y: must be greater than 0"<<endl;
    }
    catch(const char* msg)
    {
        cout<<msg<<endl;
        cout<<"X: must be greater then 30"<<endl;
    }
    catch(...)
    {
        cout<<"unhandled exception"<<endl;
        cout<<"contact the system or view you input "<<endl;
    }
    cout<<"the program is continued"<<endl;
    cout<< x + y<<endl;
    return 0;
}
*/
//==========================
/*
double divide(double,double);
int main()
{
    int x = 0,y = 0;
    double quotient;
    cout<<"enter values for x and y"<<endl;
    cin>>x;
    cin>>y;
    try
    {
      // call function in try
        quotient = divide(x, y);
        cout << "The quotient is "<<quotient<<endl;
    }
    catch(string exceptionString)
    {
        cout<<"exception String"<<endl;
        cout<<exceptionString<<endl;
        cout<<"Y: must be greater then 0"<<endl;
    }
//    catch(const char* msg)  // must out const
//    {
//        cout<<msg<<endl;
//        cout<<"Y: must be greater then 0"<<endl;
//    }
    return 0;
}

double divide(double X,double Y){
    if(Y == 0){
        throw string("ERROR, cannot divide by zero.");
    } else {
        return X / Y;
    }
}
 */
//=================================
/*
class IntRange {
private:
    int input;
    int lower;
    int upper;
public:
    //exception class
    class outOfRange{ };
    //memer function
    IntRange(int low, int high){
        lower = low;
        upper = high;
    }
     int getInput(){
       cin>>input;
         if (input<lower || input>upper) {
             throw outOfRange();
         }
         return input;
    }
};

int main()
{
    IntRange range(5,10);
    int userVlaues;
    cout<<"Enter values in range 5 - 10 "<<endl;
    try
    {
      // call function in try
        userVlaues = range.getInput();
        cout << "You Entred "<<userVlaues<<endl;
    }
   
    catch(IntRange::outOfRange) // must out const
    {
        cout<<"The values is out of range"<<endl;
    }
    return 0;
}
*/
 //===============================================
 /*
 class IntRange {
 private:
     int input;
     int lower;
     int upper;
 public:
     
     IntRange(int low, int high){
         lower = low;
         upper = high;
     }
     //memer function
      int getInput(){
        cin>>input;
          if (input<lower) {
              throw TooLow();
          }else if (input>upper) {
              throw TooHigh();
          }
          return input;
     }
     //Exception class
     class TooLow{ };
     class TooHigh{ };
 };

 int main()
 {
     IntRange range(5,10);
     int userVlaues;
     cout<<"Enter values in range 5 - 10 "<<endl;
     try
     {
       // call function in try
         userVlaues = range.getInput();
         cout << "You Entred "<<userVlaues<<endl;
     }
    
     catch(IntRange::TooLow) // must put const
     {
         cout<<"The values less than 5"<<endl;
     }
     catch(IntRange::TooHigh) // must put const
     {
         cout<<"The values is greater than 10"<<endl;
     }
     return 0;
 }
*/
//=====================================================
/*
class IntRange {
private:
    int input;
    int lower;
    int upper;
public:
    //exception class
    class outOfRange{
    public:
        int value;
        outOfRange(int i){
            value = i;
        }
    };
  
    //memer function
    IntRange(int low, int high){
        lower = low;
        upper = high;
    }
     int getInput(){
       cin>>input;
         if (input<lower || input> upper){
             throw outOfRange(input);
         }
         return input;
    }
};

int main()
{
    IntRange range(5,10);
    int userVlaues;
    cout<<"Enter values in range 5 - 10 "<<endl;
    try
    {
      // call function in try
        userVlaues = range.getInput();
        cout << "You Entred "<<userVlaues<<endl;
    }
   
    catch(IntRange::outOfRange ex) // must out const
    {
        cout<<"The value "<<ex.value<<" is out of range"<<endl;
    }
    return 0;
}
*/
//========Handling the bad_a11oc Exception Thrown by new=========
/*
int main (){
    int *p;
    try {
        p = new int[9000000000000];
        p[0] = 10;
        p[1] = 20;
    }
    catch (bad_alloc) {
        cout<<"memory can not be allocated"<<endl;
        exit(1);
    }
    cout<<p[0] <<" "<<p[1]<<endl;
    delete p;
    return 0;
}
*/
//=========================================
/*
// My Exception Class
class MyException: public exception
{
  public:
  virtual const char* what() const throw()
  {
    return "My exception happened";
  }
} myex; // Creating the exception class object straight away
//Another Exception class
class AnotherException: public exception
{
  public:
  virtual const char* what() const throw()
  {
    return "Another Excpetion happened";
  }
} anex; // Creating the exception class object straight away

int main( )
{
  try
  {
    double x;
    cout << "Enter a number: ";
    cin >> x;
    if (x < 0) throw "Bad argument, should be greater than 0"; // Throw a string
    if(x > 10 && x < 100) throw 333; // throw a number
    if(x > 100) throw "Number too big!"; // throw a string
    cout << "Square root of " << x <<  " is " << sqrt(x) << endl;

    throw anex;
  }
  catch(const char *str) // catch a string
  {
      cout << str<<endl;
  }
  catch(int x) // catch a number
  {
      cout << "error code: " << x<<endl;
  }
  catch(AnotherException &e) // wil catch AnotherException
  {
    cout << e.what() << endl;
  }
  catch(exception &e) // wil catch any class that inherits exception
  {
    cout << e.what() << endl;
  }
  return 0;
}
*/
