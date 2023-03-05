//
//  main.cpp
//  Arrays
//
//  Created by Hossam Farfour on 05/07/2022.
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iomanip>
#include <cmath>>
using namespace std;


//amount[count]--; // This decrements the value stored in amount[count]
//amount[count--]; // This decrements the variable count , but does nothing to the value stored in amount[count]


/*
int main()
{
   
    cout << "Arrays\n"; // allows us to store and work with multible values of the same data type
    const int num_employees = 5;
    int hours [num_employees];// hold hours worked for 5 emplyees
    //input worked hours
    cout<<"Enter the hours worked by "<<num_employees<<" Employee "<<endl;
    cin>>hours[0];
    cin>>hours[1];
    cin>>hours[2];
    cin>>hours[3];
    cin>>hours[4];
    //display hours worked
    cout<<"The hours worked entred ara\n";
    for (int i = 0; i < num_employees ; i++) {
        cout<<"hours worked by emplyee "<<i+1<<" "<<hours[i]<<endl;
    }
    return 0;
}
*/
//==================================
/*
int main()
{
  const  int num_employees = 5;
    int hours [num_employees]; // hold hours worked for 5 emplyees
    //input worked hours
    cout<<"Enter the hours worked by "<<num_employees<<" Employee "<<endl;
    //The range-based for loop
    for (int &i : hours ) // must be passed by reverance
    {
        cin >> i;
    }
//    for (int i = 0 ; i < num_employees; i++)
//    {
//        cin >> hours[i];
//    }
    //display hours worked
    cout<<"The numeber you entred ara\n";
    
    for (int i = 0 ; i < num_employees; i++)

    {
        cout<<"the hours worked by employees number "<<i+1<<" "<<hours[i]<<endl;
    }
    return 0;
}
*/
//=============================
/*
int main()
{
    cout << "Reading data from a file an array \n";
    int num_employees = 7;
    int hours[num_employees];
    int count = 0;
    ifstream inputfile;
    //open the file
    inputfile.open("work.dat");
    //input worked hours
    if(!inputfile) {
        cout<<"errer opeing the file"<<endl;
    } else {
        while (count < num_employees && inputfile >> hours[count])
        {
            count++;
        }
        inputfile.close();
        cout<<"The numeber worked by each employee are \n";
        for (int i = 0 ; i<count; i++)
        {
            cout<<"employee "<<i+1<<" : ";
            cout<<hours[i]<<endl;
        }
    }
    return 0;
}
*/
//=======================================
/*
int main () {
    
    const int Num_months = 12;
    int choice;
    string name[Num_months] = {
        "January", "fabruary", "March", "April", "May", "June",
        "July", "August", "September", "October", "Novermber", "December"
    };
    int days[Num_months] = {
        31, 28, 31, 30, 31,30,
        31, 31,30, 31, 30, 31
    };
    cout<<"this program tell you how many days in the month"<<endl;
    
    cout<<"Enter the month you want to know the days of that month"<<endl;
    cin>>choice;
    cout<<"The month of "<<name[choice-1]<<" has "<<days[choice-1]<<" days"<<endl;
    return 0;
}
*/
//================The range-based for loop============================

//The range-based for loop is a loop that iterates once for each element in an array. Each time the loop iterates, it copies an element from the array to a variable.
//In C++11, a new range-based for loop was introduced to work with collections such as arrays and vectors. Its syntax is:

//for (variable : collection) {
//    // body of loop
//}
/*
int main() {
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
    for (int &i : num_array) {
        cout << i << " "<<endl;
    }
    return 0;
}
*/
/*
int main() {
    const int zise = 5;
    int numbers [zise];
    // get the values for the arry
    for (int &value : numbers) {
        cout<< " Enter an intger value "<<endl;
        cin>>value;
    }
    // display the vlaue
    for(int &i : numbers) {
        cout<< " the value is "<<i<<endl;
    }
    return 0;
}
 */

//===========Processing Array Contents=======
/*
int main () {
    const int NUM_WORKER = 5 ;
    int hours[NUM_WORKER];
    double payRate ;
    double grossPay ;
    cout << "Enter the hours worked by \n";
    for(int worker = 0; worker < NUM_WORKER ; worker++) {
        cout<<"Emplyee "<<worker+1<<":";
        cin>>hours[worker];
    }
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout << "Enter the hours pay rate \n"; // all worker have the same rate
    cin >> payRate;
    // the grosspay for each emplyee
    for (int i = 0 ; i < NUM_WORKER ; i++) {
        grossPay = hours[i] * payRate;
        cout<<"Emplyee "<< i+1 <<" : £"<<grossPay<<endl;
    }
    return 0;
}
*/

//==============Comparing Two Arrays============
/*
int main () {
    const int SIZE = 5;
    int arrayA[SIZE] = { 5, 10, 15, 20, 25 };
    int arrayB[SIZE] = { 5, 10, 15, 20, 25 };
    bool arraysEqual = true;
    int count = 0;
    while (arraysEqual && count < SIZE) {
       if (arrayA[count] != arrayB[count])
           arraysEqual = false;
           count ++; // to stope the array at count 5
         }
    if (arraysEqual) {
        cout << "The arrays are equal.\n ";
    }
    else {
            cout <<"The arrays are not equal.\n";
    }
    return 0;
}
*/

//==========Finding the Average of the Values in a Numeric Array============
/*
int main () {
    const int NUM_OFFICES = 7;
    ifstream dataIn;
    int office; // for Loop counter
    double sales[NUM_OFFICES];
    double totalSales = 0.0,
    averageSales = 0.0,
    highestSales = 0.0,
    lowestSales = 0.0 ;
    // open the file
    dataIn.open("dataIn");
    if (!dataIn)
        cout<<"Errer opening the file"<<endl;
    else {
        // fill the array with the data in file
        for (office = 0 ; office < NUM_OFFICES; office++) {
            dataIn >> sales[office];
        }
    
    // sum the array allemnts
    for (office = 0 ; office < NUM_OFFICES; office++) {
        totalSales += sales[office];
    }
    // calculate  the average sales
    averageSales = totalSales / NUM_OFFICES;
    // find the hightest and lowest sales amount
        highestSales = lowestSales = sales[0];
    for (office = 0 ; office < NUM_OFFICES; office++) {
        if (sales[office] > highestSales) {
            highestSales = sales[office];
        } else if (sales[office] < lowestSales) {
            lowestSales = sales[office];
        }
    }
        dataIn.close();
    // daiplay results
    cout << fixed << showpoint << setprecision(2);
    cout << "Total sales £"<<setw(7)<< totalSales <<endl;
    cout << "Average sales £" << setw(4) << averageSales <<endl;
    cout << "Highest sales £" << setw(4) << highestSales<<endl;
    cout << "lowest sales £" << setw(4) << lowestSales<<endl;
   }
    return 0;
}
 */

//=============Using Parallel Arrays==============

// By using the same subscript, you can build relationships between data stored in two or more arrays.
/*
int main () {
    const int NUM_EMPS = 5;
    int hours[NUM_EMPS];
    double payRate [NUM_EMPS];
    double grossPay;
    // Get employee work data
    cout << "Enter the hours worked and hourly pay rates of "<< NUM_EMPS<< " employees.\n";
    for (int index = 0; index < NUM_EMPS; index++)
    {
    cout << "\nHours worked by employee  " <<index + 1<< "· ";
        cin >>hours[index];
    cout <<"Hourly pay rate for this employee: £ ";
        cin >>payRate[index];
    }
    //Display each employee's gross pay
    cout << " Here is the gross pay for each emplyee"<<endl;
   cout<<fixed<< showpoint<< setprecision(2);
    for (int index = 0; index< NUM_EMPS; index ++) {
    grossPay = hours[index] * payRate[index] ;
        cout << " Employee# " << ( index+ 1 );
        cout << ": £ " << setw (4) << grossPay << endl;
    }
    return 0;
}
*/
//=============Arrays as Function Arguments==============

//Individual elements of arrays and entire arrays can both be passed as arguments to functions.
/*
void showValue(int);
int main () {
    const int zise = 8;
    int collection[zise] = { 5, 10, 15, 20, 25, 30, 35, 40 };
    for (int index = 0; index < zise; index++) {
        showValue(collection[index]);
    }
   
    return 0;
}
void showValue(int num){
    cout << num <<endl;
}
*/
//or== =====Passing Arrays to Functions=====
/*
void showValue(int intArray[] , int size);
int main () {
    const int zise = 8;
    int collection[zise] = { 5, 10, 15, 20, 25, 30, 35, 40 };
    cout<<"the array contain the values "<<endl;
        showValue(collection,zise);
   
    return 0;
}
void showValue(int nums[] , int size) {
    
    for (int index = 0; index < size; index++) {
        cout<< nums[index]<<" ";
        cout<<endl;
    }
}
*/
//==========
/*
// Function prototypes
double sumArray (const double[] , int);
double getHighest (const double[] , int);
double getlowest (const double[] , int);

int main () {
    
    const int NUM_DAYS = 3;
    double sales[NUM_DAYS],
    total,
    average,
    highest,
    lowest;
    cout << "Enter the sales for this week.\n";
    for (int day = 0; day < NUM_DAYS; day++) {
        cout<<"Day "<< (day+1) << " . ";
        cin>>sales[day];
    }
    // Get total sales and compute average sales
    total = sumArray(sales, NUM_DAYS);
    average = total / NUM_DAYS;
    
    //Get highest and lowest sales amounts
    highest = getHighest(sales, NUM_DAYS);
    lowest = getlowest(sales, NUM_DAYS);
    
    // Display results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The total sales are £ "<<total<<endl;
    cout<<"The average sales are £ "<<average<<endl;
    cout<<"The highest sales are £ "<<highest<<endl;
    cout<<"The lowest sales are £ "<<lowest<<endl;
    
    return 0;
}
double sumArray (const double array[] , int zise) {
    double total = 0.0;
    for (int count = 0 ; count < zise ; count++)
        total += array[count];
    return total;
}
double getHighest (const double array[] , int zise) {
    double highest = array[0];
    for (int count = 0 ; count < zise ; count++) {
        if (array[count] > highest )
            highest = array[count];
    }
    return highest;
}
double getlowest (const double array[] , int zise) {
    double lowest = array[0];
    for (int count = 0; count < zise ; count++) {
        if (array[count] < lowest )
            lowest = array[count];
    }
    return lowest;
}
*/
//===============Two-Dimensional Arrays==============
/*
//A two-dimensional array is like several identical arrays put together. It is useful for storing multiple sets of data.
int main () {
    const int NUM_DIVS = 4;   // number of division
    const int NUM_QTRS = 4;    // Number of quarters
    double sales[NUM_DIVS][NUM_QTRS];  //2 dimention array with 3 rows & 4 columns
    double tota1Sales = 0;
    int div, qtr;
    
    ifstream inputFile;
    inputFile.open("work.dat");
    if (!inputFile) {
 cout << "Error opening daata"<<endl;
    } else {
        cout << fixed<<showpoint<<setprecision(2);
        cout<<"Quarterly Sales by Division"<<endl;
      // nested loops are used to fill the array with quarterly sales figures for each division and to display the data
        for(div = 0 ; div < NUM_DIVS ; div++) {
            for(qtr = 0 ; qtr < NUM_QTRS; qtr++) {
            cout<<"Division " << div+1
                <<", quater " << qtr+1 <<" £ ";
                inputFile>>sales[div][qtr];
                cout<<sales[div][qtr]<<endl;
            }
            cout<<endl;
        }
        inputFile.close();
        // nested lood to add all the allemnts
        for(div = 0 ; div < NUM_DIVS ; div++) {
            for(qtr = 0 ; qtr < NUM_QTRS ; qtr++) {
                tota1Sales += sales[div][qtr];
            }
        }
        cout <<"the total sales are £ "<<tota1Sales<<endl;
    }
    return 0;
}
*/

//=====Passing Two-Dimensional Arrays to Functions=====const important here
/*
const int NUM_COLS = 4;
const int TBL1_ROWS = 3;
const int TBL2_ROWS = 4;

void showArray(const int [][NUM_COLS], int);

int main () {
    int table1[TBL1_ROWS][NUM_COLS] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int table2[TBL2_ROWS][NUM_COLS] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    cout <<" the contant of the table 1 are " <<endl;
    showArray(table1, TBL1_ROWS);
    cout <<" the contant of the table 2 are " <<endl;
    showArray(table2, TBL2_ROWS);
    return 0;
}
void showArray(const int array[][NUM_COLS], int numRows) {
    for(int row = 0 ; row < numRows ; row++) {
        for(int col = 0 ; col < NUM_COLS ; col++) {
            cout<<setw(5)<< array[row][col];
        }
        cout<<endl;
    }
}
*/
//===================Array of objects================
//Elements of arrays can be class objects.
/*
class Circal {
 private:
    double radius;
    int centre_X, center_Y;
 public:
    Circal () {
        radius = 1.0;
        centre_X = center_Y = 0;
    }
    Circal (double r) {
        radius = r;
        centre_X = center_Y = 0;
    }
    Circal (double r ,int x , int y) {
        radius = r;
        centre_X = x;
        center_Y = y;
    }
    void setRadius (double r){
        radius = r;
    }
    
    int getXcoord () {
        return centre_X;
    }
    int getYcoord () {
        return center_Y;
    }
    double findArea () {
        return 3.14 * pow(radius , 2 );
    }
};

const int NumberOfCircles = 4 ;

int main () {
    Circal circal[NumberOfCircles];
    // Use a loop to initialize the radius of each object
    for (int index = 0; index < NumberOfCircles ; index++) {
        double r ;
        cout << "Enter the radius fo rcircle "<< (index+1) << "· ";
        cin >> r;
        circal[index].setRadius(r);
    }
   cout<<fixed<< showpoint << setprecision(2);
   cout << "Here are the areas of the "<< NumberOfCircles <<" circles.\n";
    for (int index = 0; index < NumberOfCircles; index++) {
        cout <<"circle "<< (index+1 ) << setw(8) << circal[index].findArea() << endl ;
    }
   
    return 0;
}
*/
//===================Array of objects================
//Elements of arrays can be struct objects.
/*
struct Paylnfo {
  
    int hours;
    double payRate;
    double grossPay;
};

const int NumberOfEmployees = 3;

int main () {
    //double grossPay;
    Paylnfo worker[NumberOfEmployees];
    // Get payroll data
    cout << "Enter the hours worked and hourly pay rates of " <<NumberOfEmployees<<" employees. \n";
    for(int i = 0 ; i <NumberOfEmployees ; i++ ) {
        cout<<"hours worked by employee " <<i+1 <<endl;
        cin>>worker[i].hours;
        cout<<"pay rate for this employee " <<endl;
        cin>>worker[i].payRate;
    }
    cout<<fixed<< showpoint << setprecision(2);
    for(int i = 0 ; i < NumberOfEmployees ; i++ ) {
        worker[i].grossPay = worker[i].hours * worker[i].payRate;
        cout <<  "Employee  " << ( i + 1 );
        cout << ": £" << setw(7)<< worker[i].grossPay << endl;
    }
    
    return 0;
}
*/
