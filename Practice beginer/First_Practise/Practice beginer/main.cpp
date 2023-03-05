
//  Practice beginer
//
//  Created by Hossam Farfour on 18/06/2022.


#include <iostream> //read inout from keypoard and display on csreen
#include <cmath> //fpr math
#include <iomanip>//  to use setw(--) and setprecion(--) and fixed
#include <cstdlib> // to use random numbers
using namespace std;

/*
int main()
{
    char letter;
    int whole;
    double fractionl;
    cout<<"Enter an interger , a letter , and double \n";
    cin>>whole>>letter>>fractionl;
    
    cout<<"letter : "<<letter<<endl;
    cout<<"whole : "<<whole<<endl;
    cout<<"fractional : "<<fractionl<<endl;
    return 0;
}
*/

//====converting data type manually===
/*
int main()
{
    int books, month;
    double booksPerMonth;
    
    cout<<"comverting data type manually **   "<<endl;
    //get user input
    cout<<"how many book do you plan to read \n";
    cin>>books;
    
    cout<<"how many months will it takes you to read them: "<<endl;
    cin>>month;
    cout<<"computign how long does it take \n";
    //booksPerMonth = books/month;
   // booksPerMonth = static_cast<double>(books)/month;
    booksPerMonth = (double) books/month;
    cout<<endl;
    
    cout<<"that is : "<<booksPerMonth<<" "<<" books per month"<<endl;
    return 0;
}*/

//======working with constant======
/*
 int main()
{
    const double PI = 3.14159;
    double area, radius;
    cout<<"working with constant  **   "<<endl;
    cout<<"this program is calculate the area of a circle \n";
    cout<<"what is the radius of the circal  **   "<<endl;
    cin>>radius;
    cout<<"cpmputing and displaing the area **   "<<endl;
    area = PI * pow(radius , 2);
    cout<<"the area is  : "<<area<<endl;
    return 0;
}
*/

//======multible and combined assigment======
// multible assignment mean to assign the same value to several veriables with one statment.
/*
int main()
{
    int begInv, sold, store1, store2;
    // get the deginning inventory for the two stores
   
    cout<<"inventory , what was the beginnimg inventory"<<endl;
    cin>>begInv;
    cout<<"seting each store inventory"<<endl;
    store1 = store2 = begInv;
    cout<<"how many widgets has store 1 sold  : \n";
    cin>>sold;
    store1 -= sold;
    cout<<"how many widgets has store 2 sold  : \n";
    cin>>sold;
    store2 -= sold;
    
    cout<<"displying each store's current inventory : \n";
    cout<<"store 1 ;"<<store1<<endl;
    cout<<"store 2 ;"<<store2<<endl;
    return 0;
}
 */


//====setw(--) and setprecion(--)====
/*
int main()
{
    cout<<" ** setw(--) and setprecion(--)  **   "<<endl;
    double number1 = 132.364, number2 = 26.91;
    double quotient = number1 / number2;
    cout<<"1-"<<quotient<<endl;
    cout<<"2-"<<setprecision(5)<<quotient<<endl;
    cout<<"3-"<<setprecision(4)<<quotient<<endl;
    cout<<"4-"<<setprecision(3)<<quotient<<endl;
    cout<<"5-"<<setprecision(2)<<quotient<<endl;
    cout<<"6-"<<setprecision(1)<<quotient<<endl;
    return 0;
}
*/
 
/*
int main() {
    cout<<"setw(--) and setprecion(--)"<<endl;
    double day_1 ,day_2, day_3, total;
    cout<<"entre the sale for day 1 \n";
    cin>>day_1;
    cout<<"entre the sale for day 2 \n";
    cin>>day_2;
    cout<<"entre the sale for day 3 \n";
    cin>>day_3;
    
    total = day_1 + day_2 + day_3;
    cout<<"sales figures\n";
    cout<<"=================\n";
    
    cout<<setprecision(5)<<endl;
    cout<<"day 1 :"<<setw(8)<<day_1<<endl;
    cout<<"day 2 :"<<setw(8)<<day_2<<endl;
    cout<<"day 3 :"<<setw(8)<<day_3<<endl;
    return 0;
}
*/

/*
int main() {
    cout<<"working with fixed and setprecision(--)"<<endl;
    string month1 = "January",month2 = "February",month3 = "March";
    int days1 = 31, days2 = 28,days3 = 31;
    double high1 = 22, high2 = 37.43, high3 = 53.934;
    
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"Month        Days    High"<<endl;
    
    cout<<left<<setw(12)<<month1<<right<<setw(4)<<days1<<setw(9)<<high1<<endl;
    cout<<left<<setw(12)<<month2<<right<<setw(4)<<days2<<setw(9)<<high2<<endl;
    cout<<left<<setw(12)<<month3<<right<<setw(4)<<days3<<setw(9)<<high3<<endl;
    return 0;
}
*/

//=====reading a line of input======
/*
int main()
{
    cout<<"reading a line of input and using C string {a word to be an arry of characters"<<endl;
    const int SIZE = 81;
    char sentence[SIZE];
    
    cout<<" Enter a sentance \n";
    cin.getline(sentence,SIZE);
    cout<<"you entred "<<sentence<<endl;
    //==
    string name;
    string city;
    cout<<"Enter your name "<<endl;
    getline(cin, name);
    cout<<"entre the city you lived in"<<endl;
    getline(cin,city);
    cout<<" Hello "<<name<<"\n";
    cout<<" you lived in "<<city<<"\n";
    return 0;
}
*/

//========cin.get()=========
/*
int main () {
    char ch;
    cout << "This program has paused. Press Enter to continue.";
    cin.get(ch);
    cout << "It has paused a second time. Please press Enter again.";
    //ch = cin.get();
    cin.get(ch);
    cout << "It has paused a third time. Please press Enter again.";
    cin.get() ; // does not need to store the charactrr
  
   cout << "Thank you! \n";
    return 0;
}
*/

//======assign stars to name=========
/*
int main () {
    string firstName, lastName , fullName;
    string stars;
    int numStars;
    cout << "Please enter your first name: \n";
    getline(cin, firstName);
    cout << "Please enter your last name: "<<endl;
    getline(cin,lastName);
    
    fullName = firstName + " " + lastName;
    numStars = fullName.length();
    stars.assign(numStars, '*');
    cout << endl;
    cout << stars << endl ;
    cout << fullName << endl ;
    cout << stars << endl ;
    return 0;
}
*/

/*
//=======Assigning a Value to a C-String=========
//strcpy(Cstring , value);
int main() {
    const int SIZE = 12;
    char name1[SIZE] , name2[SIZE];
    strcpy (name1 , " Hossam");
    cout << "name1 now holds the string "<<name1<<endl;
    strcpy(name2 , name1);
    cout << "name2 now also holds the string "<<name2<<endl;
    return 0;
}
*/

//===========createing randdom numbers=========
/*
int main()
{
    cout<<rand()<<",";
    cout<<rand()<<",";
    cout<<rand()<<endl;
    return 0;
}
*/

//=====pasing by referance=======
/*
int FoundValue (int &newvalue);
int main() {
    int value = 5 ;
    int NewValue = FoundValue(value);
    cout<<"the new vlaue now is "<< NewValue<<endl;
    return 0;
}
int FoundValue (int &newvalue){
    return newvalue + 5;
}
 */

/*
int FoundValue (int *newvalue);
int main() {
    int value = 5 ;
    int NewValue = FoundValue(&value);
    cout<<"the new vlaue now is "<< NewValue<<endl;
    return 0;
}
int FoundValue (int *newvalue){
    return *newvalue + 5;
}
*/

//==========pasing by value==========
/*
int FoundValue (int newvalue);
int main() {
    int value = 5 ;
    //int newValue = FoundValue(value);
    FoundValue(value);
    cout<<"the new vlaue now is "<<value<<endl;//<< newValue<<endl;
    value = 20 ;
//    newValue = FoundValue(value);
//    cout<<"the new vlaue now is "<< newValue<<endl;
    return 0;
}
int FoundValue (int newvalue){
    return newvalue += 5;
}
*/

/*
// ==This program reads five numbers from the keyboard, and prints out the
// average and the maximum value=====

double GetAverage(int IntArray[],int max);

int GetMax(int IntArray[],int Max );

int main()
 {
   int Values[5];
   cout << "Enter five numbers : " << endl;
     
   for ( int i = 0; i <5; i++ )
   {
    cin >> Values[i];
   }
   // Now we echo the input back to the user

   for (int  i = 0; i < 5 ; i++ )
   {
     cout << "Value [ " << i+1 << "] is : " << Values[i] << endl;
   }
   // Now lets call a function to get the average:

   cout << "The average is " << GetAverage( Values,5 ) << endl;

   // Finally we can get the maximum value

   cout << "The Maximum value is : " << GetMax( Values, 5) << endl;
  return 0;
}


double GetAverage(int IntArray[],int max )
{
  double temp = 0.0;

  for ( int i = 0; i < max; i++ )
    temp += IntArray[i];
  temp /= max;
  return temp;

} // End of GetAverage

int GetMax( int IntArray[], int Max )
{
  int Biggest = 0;

  for ( int i = 0; i < Max; i++ )
    if ( Biggest < IntArray[i] )
      Biggest = IntArray[i];
     return Biggest;
} // End of GetMax()
*/



//=====search for item in arry====
/*
bool findItem(int arr[],int size,int searchedItem);
int main()
{
    int x;
    int itam[5] = {10,20,30,40,50};
    cout<<"enter item to search for"<<endl;
    cin>>x;
    
    if( findItem(itam,5, x) == true)
        cout<<"item found"<<endl;
 else
     cout<<"not found"<<endl;
    return 0 ;
}

bool findItem(int arr[],int size,int searchedItem)
{
    bool found = false;
    for(int i = 0;i<size;i++)
        if(arr[i] == searchedItem)
            found = true;
            return found;
}
 */

//======arry as a premeter for a function=======
/*
float calAverage( float arr[],int size);

int main()
{
    float mark[5] = {10,20,30,40,50};
    cout<< calAverage(mark, 5)<<endl;
    return 0 ;
}
float calAverage( float arr[],int size)
{
    float sum = 0.0;
    for(int i = 0 ;i<size; i++)
        sum += arr[i];
    return sum/size;
    
}
*/

//=====static======
 /*
void issueticket (int, string);
int main()
{
    string name;
    cout<<"enter pacenger name "<<endl;
    cin>>name;
    issueticket(125, name);
    cout<<"enter pacenger name "<<endl;
    cin>>name;
    issueticket(123, name);
    cout<<"enter pacenger name "<<endl;
    cin>>name;
    issueticket(122, name);
       cout<<"enter pacenger name "<<endl;
       cin>>name;
    
return 0;
    
}
     
void issueticket (int flightNumber , string pName)
{
      static int ticket = 0;
      cout<<"flight number is "<<"  "<<flightNumber<<endl;
      cout<<"ticket numbwr is "<<"  "<<++ticket<<endl;
      cout<<"passenger name  is "<<"  "<<pName<<endl;
}
*/

 //=======do list=========
 /*
int main()
{
    int sum = 0;
    int grade = 0;
    int counetr = 1;
    do{
        cout<<"enter a grade for students"<<" "<< counetr<<endl;
        cin>>grade;
        sum += grade;
        counetr++;
    }
    while(counetr <= 5);
    
    cout <<"the sum is"<<" "<<sum<<endl;
    cout<<"the average is "<<"  "<<sum/5<<"\n";
    return 0;
}
*/
