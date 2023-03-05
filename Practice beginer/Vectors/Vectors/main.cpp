//
//  main.cpp
//  Vectors
//
//  Created by Hossam Farfour on 05/11/2022.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm> //to use STL
using namespace std;


// puch the value at the back of vectors . and pop removes from the back of vectors

//the Standard Template Library includes a data type called a vector. It issimilar to one-dimensional array but has some advantages compared to a standard array.
// One of STL(Standard Template Library)

//The data types that are defined in the STL are commonly called containers . They are called containers because they store and organize data. There are two types of containers in the STL: sequence containers and associative containers .
//1 -A sequence container organizes data in a sequential fashion, similar to an array
//2- Associative containers organize data with keys, which allow rapid, random access to elements stored in the container.

// The vector data type is a sequence container that is like a one dimensional array.

// a vector offers several advantages over arrays . Here are just a few:
//1-You do not have to declare the number of elements that the vector will have.
//2-If you add a value to a vector that is already full, the vector will automatically
//    increase its size to accommodate the new value.
//3-Vectors can report the number of elements they contain .

/*
int main() {
    const int NUM_EMPS = 3;
    vector <int> hours(NUM_EMPS);      // vecter of 3 int
    vector <double> payRate(NUM_EMPS); // vecter of 3 double
    double grossPay;
    
    // get emplyee work data
    cout <<"Enter the hours worked and hourly pay rate of "<<NUM_EMPS << "employees "<<endl;
    for(int i = 0 ; i< NUM_EMPS ; i++){
        cout<<"hours worked by employee "<<i+1 << " ";
        cin>>hours[i];
        cout<<"hourly par rate forh this employee ";
        cin>>payRate[i];
    }
    cout << "Here is the gross pay fo reach employe :\n";
    cout<<fixed<< showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPS; index++) {
    grossPay = hours[index] * payRate[index];
    cout << "Employee " << (index + 1);
        cout << ": £ " << setw(2) << grossPay << endl;
    }
    return 0;
}
*/
 
// same example but using array..
/*
int main () {
    const int NUM_WORKER = 3 ;
    int hours[NUM_WORKER];
    double payRate[NUM_WORKER];
    double grossPay ;
    cout <<"Enter the hours worked and hourly pay rate of "<<NUM_WORKER << "employees "<<endl;
    for(int i = 0 ; i < NUM_WORKER ; i++){
        cout<<"hours worked by employee "<<i+1 << " ";
        cin>>hours[i];
        cout<<"hourly par rate forh this employee ";
        cin>>payRate[i];
    }
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    // the grosspay for each emplyee
    for (int i = 0 ; i < NUM_WORKER ; i++) {
        grossPay = hours[i] * payRate[i];
        cout<<"Emplyee "<< i+1 <<" : "<<grossPay<<endl;
    }
    return 0;
}
*/

//======================empty Vector=============================
/*
int main () {
    vector<int> hours;
    vector<double> payRate;
    double grossPay;
    int numEmployees ;
    int index;
    // Get the number of employees
    cout << "How many employees do you have? ";
    cin>>numEmployees;
    cout<<"Enter the hours worked and hourly pay rates of the "<<numEmployees<<"employees"<<endl;
    for (index = 0; index < numEmployees; index ++){
        int temHours;
        double temPayRate;
        cout<<"\nhours worked for employee "<< index+1<<" ";
        cin>>temHours;
        hours.push_back(temHours); // add allemnts to the vector hours
        cout<<"hourly pay rate for this employee ";
        cin>>temPayRate;
        payRate.push_back(temPayRate); // add allemnts to the vector payRate
    }
    cout<<fixed<<showpoint<<setprecision(2);
    // the grosspay for each emplyee
    for (int i = 0 ; i < numEmployees ; i++) {
        grossPay = hours[i] * payRate[i];
        cout<<"Emplyee "<< i+1 <<" : £"<<grossPay<<endl;
    }
 // can access the size of vector allemtns
 cout<<"number of Employees: "<< hours.size()<<endl;
    
    return 0;
}
*/

//=======================passing vector to a function=====================
/*
void showValaues(vector<int>);

int main() {
    vector<int>values;
    for (int count = 0; count< 7; count++) {
        values.push_back(count * 2);
    }
    showValaues(values);
    return 0;
}
void showValaues(vector<int> vect){
    for (int count = 0; count < vect.size(); count++){
        cout<<vect[count]<<" ";
        cout<<endl;
    }
}
*/

//=========================push and pop from vectors==========================
/*
int main () {
    
    vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    values.push_back(4);
    cout << "thr vector contain: "<<endl;
    for (int i = 0 ; i < values.size() ; i++){
        cout <<values[i] <<endl;
    }
    // remove item from vector
    values.pop_back();
    cout << "thr vector contain: "<<endl;
    for (int i = 0 ; i < values.size() ; i++){
        cout <<values[i] <<endl;
    }
    return 0;
}
 */
//==========================================
/*
double Average (vector<int>);
int main () {
    vector<int>values;
    int numvalues;
    double average;
   // Get the number of values to average
    cout << "How many values do you wish to average?"<<endl;
    cin>>numvalues;
    //Get the values and store them in a vector
    for (int i = 0 ; i < numvalues ; i++){
        int temvalue;
        cout<<"Enter an integer value ";
        cin>>temvalue;
        values.push_back(temvalue);
    }
    average = Average(values);
    cout<< "Average " <<average <<endl;
    return 0;
}
double Average (vector<int>vector){
    int total = 0;
    double average = 0;
    if(vector.empty()) {
        cout<<"No Values in the vector"<<endl;
    } else {
        for (int i = 0 ; i < vector.size() ; i++){
            total += vector[i];
            average = static_cast<double>(total)/vector.size();
        }
    }
    return average;
}
*/

//===================================================
/*
class Student
{
private:
    string name;
    int ID;
    string email;
public:
   void inputStudentInfo()
    {
//         for(int i=0;i<2;i++)
//         {
//               cout<<"enter student information for student number "<<i+1<<endl;
//
//        cin>>name>>ID>>email;
//         }
       cout << "input name" << endl;
       cin >> name;
       cout << "input studentID" << endl;
       cin >> ID;
        cout << "input email for student email " << endl;
        cin >> email;
    }
     
    string getAllInfo()
    {
        return name + " " + email;
    }
};

int main()
{
    vector <Student> students;
    for (int i = 0; i < 2; i++)
    {
        Student s;
        s.inputStudentInfo();
        students.push_back(s);
    }

//    students[0].inputStudentInfo();

    for (auto x : students)
    {
        cout << x.getAllInfo() << endl;
    }

}
*/
//===================================================
/*
// Thi s program stores employee hours worked
//and hourly pay rates in two parallel vectors.

int main()
{
    int NumberOFEmployees;
    vector<int>hours(NumberOFEmployees);
    vector<double>payRate (NumberOFEmployees);
    double grossPay;
    
    cout<<"how many emplyoees do you want to count "<<endl;
    cin>>NumberOFEmployees;
    // get employee work data
  cout<<"enter the hours worked and hourly pay rate of "<<NumberOFEmployees<<" "<<"employees"<<endl;
    for(int i=0; i < NumberOFEmployees; i++)
    {
        cout << "\nHours worked by employee# " << (i+ 1) <<endl;
        cin >> hours[i];
        cout << "Hourly pay rate for this employee: $"<<endl;
        cin >> payRate[i];
    }
    //Display each employee's gross pay
    cout << "\nH ere is the gross pay for each employee "<<endl;
    cout<<fixed<< showpoint << setprecision(2);
    
    for(int index =0; index < NumberOFEmployees; index++)
    {
    grossPay = hours[index ] * payRate[index];
    cout << "Employee # " << (index + 1)
    << ": $ "<< setw(7) << grossPay << endl ;
    }
    
return 0;
}
 */
 //===================================================
 /*
int main()
{
 // Define a vector with a starting size of 5 elements
 vector<int> numbers(2);

// Get values for the vector elements
//Make the range variable a reference variable so it can be
//used to change the contents of the element it references.
 for (int &val : numbers)
   {
       cout << "Enter an integer value: "<<endl;
       cin >>val;
     
   }
     // display the vector elements
    cout<<"here are the values you entered "<<endl;
     for (int val : numbers)
         cout<< val<<" ";
    cout<<endl;
    return 0;
}
*/

//==== THE USE OF ITERAORs====//
/*
int main()
{
    vector<int>vect;
    //use push back to push value into the vector
    for(int x = 0; x < 10; x++)
        vect.push_back(x * x);
    //display the vector elements
    cout<<"the collection has "<<vect.size()<<" elements.here they are:"<<endl;
    for(int x =0;x < vect.size(); x++)
    cout<<vect[x]<<" ";
    cout<<endl;
    
    
    //  randomly shuffle the vector
    random_shuffle(vect.begin(),vect.end());
    //display the elements again
    cout<<"the elements has been shuffled "<<endl;
    for(int x = 0;x < vect.size(); x++)
    cout<<vect[x]<<" ";
    cout<<endl;
    cout<<endl;
 
    //now sort them out
    sort(vect.begin(),vect.end());
    //display the elements again
    cout<<"the elements has been sorted "<<endl;
    for(int x = 0;x < vect.size(); x++)
    cout<<vect[x]<<" ";
    cout<<endl;
    cout<<endl;
    //now search for element
    int val;
    cout<<"enter a value to search for"<<endl;
    cin>>val;
    
    if(binary_search(vect.begin(),vect.end(),val))
    {
        cout<<"the value "<<val<<" "<<" was found in the vector "<<endl;
    } else
    {
        cout<<"the vlaue "<<val<<" "<<"was not found in the vector "<<endl;
        cout<<endl;
       }
    return 0;
    
}
*/

//=======the use of itertor========
/*
int main()
{
    vector<int>vect;
    vector<int>::iterator iter;
    for(int x = 0; x< 10; x++)
        vect.push_back(x * x);
    //display the vector elements
    cout<<"the collection has "<<vect.size()<<" elements.here they are:"<<endl;
    for(int x =0;x < vect.size(); x++)
    cout<<vect[x]<<" ";
    cout<<endl;
}
*/
/*
void doubleValue(int &val);
int main()
{    //algorithem 1058 book
    vector<int>numbers;
    vector<int>::iterator iter;  //must use with pointer
    
     // Store some numbers in the vector
    for (int x=0; x<10; x++)
     numbers.push_back(x);
    
     // Shuffle things up just for fun
    random_shuffle(numbers.begin(), numbers.end());
    
     // Display the numbers in the vector
     cout << "The numbers in the vector are : "<<endl;
    //for(int x = 0;x < numbers.size(); x++)
    //cout<<numbers[x]<<" ";
    for (iter = numbers.begin(); iter != numbers.end(); iter++)
        cout<<*iter<<" ";
    cout <<endl;
    
   // sort the elements
    sort(numbers.begin(),numbers.end());
    //display the elements again
    cout<<"the elements has been sorted "<<endl;
    for(int x = 0;x < numbers.size(); x++)
    cout<<numbers[x]<<" ";
    cout<<endl;
    
     // Find largest
    iter = max_element (numbers.begin (), numbers.end ());
    cout << "The largest value in the vector is  "
     << *iter << endl;
    cout<<endl;

// Find smallest
   iter = min_element (numbers.begin (), numbers.end ());
   cout << "The smallest value in the vector is  "
    << *iter << endl;
    cout<<endl;
    
//find number
    //Finds the first object in a container that matches a value and returns an iterator to it.
//    iter = find(numbers.begin(),numbers.end(),3);{
//        cout<<"the value srearched is "<<*iter<<endl;
//        cout<<"the value "<<&iter<<" "<<" was found in the vector"<<endl;
//   }
//     cout<<endl;
    //or
//    int value;
//    cout<<"Entry valur to search for in the vector.numbers"<<endl;
//    cin>>value;
//    //Performs a binary search for an object and returns true false if not.
//    if(binary_search(numbers.begin(),numbers.end(),value))
//    {
//        cout<<"the value "<<value<<" "<<" was found in the vector"<<endl;
//    } else
//    {
//        cout<<"the vlaue "<<value<<" "<<"was not found in the vector "<<endl;
//        cout<<endl;
//       }
    
    cout<< "retrun the number of times a vlue appears in a range"<<endl;
    cout<<count(numbers.begin(),numbers.end(),4)<<endl;
    
    //for each
    //Executes a function for each element in a container.
    for_each(numbers.begin(), numbers.end(), doubleValue);
    cout<<"the doubled Value elements are "<<endl;
    for(int x =0;x < numbers.size(); x++)
    cout<<numbers[x]<<" ";
    cout<<endl;
    return 0;
}

void doubleValue(int &val)
{
    val *=2;
}
*/
