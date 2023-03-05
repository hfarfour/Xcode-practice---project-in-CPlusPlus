//
//  main.cpp
//  Searching_Sorting_Algorithm
//
//  Created by Hossam Farfour on 06/11/2022.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

//========Introduction to Search Algorithms=======
//A search algorithm is a method of locating a specific item in a collection of data.
// there are two kind of search:
//1- Linear search :
    //Sometimes called a sequential search, it uses a loop to sequentially step through an array
//2- Binary search
  //The binary search is a clever algorithm that is much more efficient than the linear search.
  //Its only requirement is that the values in the array be in order.

//=========Linear search===============
/*
int searchList (int[], int , int);
const int SIZE = 10;

int main() {
    int tests[SIZE] = {10,8,97,32,21,45,17,78,54,22};
    int result;
    int value;
    // Search the array for the value --
    cout << "Enter the value you wish to search for: ";
    cin >> value;
    result = searchList(tests, SIZE, value);
    if (result == -1 ) {
        cout<<"Item not found"<<endl;
    } else {
        cout<<"Item is found at position ";
        cout<<result+1<<endl;
    }
    return 0;
}

int searchList ( int List[], int size, int value) {
    int index = 0;
    int last = size-1;
    int position = -1;
    bool found = false ;
    while (index <= last && !found) {
        if (List[index] == value) {
            found = true;
            position = index;
        }
     index ++;
    }
    return position;
}
*/
//=========Binary search===============
// must be in order
// first find the middle value and if it is equal to the value being search for then the search in over. Otherwise
//the middle value is greater then search value then it is located in the first(lower) half of array (middle -1)
//the middle value is less then search value then it is located in the secod(upper) half of array (middle +1)
/*
int searchList (int[], int , int);
const int SIZE = 9;
int main() {
    int tests[SIZE] = {10,18,20,32,33,45,50,65,77};  // must de in asceending order
    int empID;
    int result;
    // Get an employee ID to search for
    cout << "Enter the employee ID you wish to search for: ";
    cin >> empID;
    // Search for the ID
    result = searchList(tests, SIZE, empID);
    if (result == -1 ){
        cout<<"Item not found "<<endl;
    } else {
        cout<<"ID "<<empID<<" was found in elemnt "<<result+1 <<" of the array"<<endl;
    }
    return 0;
}

int searchList (int List[], int size, int value) {
    int first = 0;
    int middle;
    int last = size-1;
    int position = -1;
    bool found = false ;
    while ( !found && first <= last) {
        middle = (first + last)/2;
        if (List[middle] == value) {        // if the vlaue in middle
            found = true;
            position = middle;
        } else if (List[middle] > value) { // if the vlaue in lower half
            last = middle -1;
        } else {
            first = middle +1;           // if the vlaue in upper half
        }
    }
    return position;
}
*/
//====================================================
/*
int binarySearch (int [],int, int, int);
const int SIZE = 10;

int main()
{
int tests[SIZE] = {10,20,30,32,34,36,46,78,90,102};
    int result;  // result of the search
    int empID;   // what to search for
    cout<<"enter the emplyee ID to search for :"<<endl;
    cin>>empID;
    result = binarySearch(tests,0, SIZE-1 , empID);
    if(result == -1)
      cout<<"that number does not exist or not in ascending order "<<endl;
    else
    {   cout<<" ID "<<empID<<" is found at element "<<result+1<<" in the array"<<endl;}
    return 0;
}
int binarySearch (int array[],int first, int last, int value) {
 
    int middle;
    if (first > last) {
        return -1;
    }
        middle = (first + last)/2;
        if (array[middle] == value) {        // if the vlaue in middle
            return middle;
        }
         if (array[middle] > value) { // if the vlaue in lower half
             return binarySearch(array,first, middle-1, value);
        } else {
            return binarySearch(array, middle+1,last, value);
                      // if the vlaue in upper half
        }
}
*/
//============
/*
int binarySearch (int [],int, int, int);
const int SIZE = 10;

int main()
{
int tests[SIZE] = {10,20,30,32,34,36,46,78,90,102};
    int result;  // result of the search
    int empID;   // what to search for
    cout<<"enter the emplyee ID to search for :"<<endl;
    cin>>empID;
    result = binarySearch(tests,0, SIZE-1 , empID);
    if(result == -1)
      cout<<"that number does not exist or.. "<<endl;
    else
    {   cout<<" ID "<<empID<<" is found at element "<<result+1<<" in the array"<<endl;}
    return 0;
}
int binarySearch (int array[],int first, int last, int value)
{
    int middle;
    int position = -1;
    bool found = false;
    if (first > last) {
        //cout<<"number must be in esending order"<<endl; run with return call of function
        return -1;
    }
    while (first <= last && !found) {
        middle = (first + last)/2;
        if (array[middle] == value) {
            found = true;
            position = middle;
        } else if (array[middle] > value) {
            // return binarySearch(array,first, middle-1, value);
            //or
            last = middle -1;
        } else {
            //return binarySearch(array, middle+1,last, value);
            //or
            first = middle +1;
        }
    }
    return position;
}
*/
//===========
/*
int binarySearch (const int [],int, int);
int Linearsearch (const int [],int, int);
const int size = 10;

int main()
{
int tests[size] = {10,20,30,32,34,36,46,78,90,102};
    int result;  // result of the search
    int empID;   // what to search for
    cout<<"enter the emplyee ID to search for :"<<endl;
    cin>>empID;
    result = binarySearch(tests, size , empID);
    //result = Linearsearch(tests, size , empID);
    if(result == -1)
      cout<<"emplyee "<<empID<<" does not exist "<<endl;
    else
    {   cout<<" ID "<<empID<<" is found at element "<<result+1<<" in the array"<<endl;}
    return 0;
}

int Linearsearch (const int array[], int size, int value) {
    int Item = 0;
    int position = -1;
    bool found = false ;
    while (Item < size && !found) {
        if (array[Item] == value) {
            found = true;
            position = Item;
        }
        Item ++;
    }
    return position;
}

int binarySearch (const int array[], int size, int value)
{
    int first = 0;
    int middle;
    int last = size-1;
    int position = -1;
    bool found = false ;
    while (!found && first <= last) {
        middle = (first + last)/2;
        if (array[middle] == value) {        // if the vlaue in middle
            found = true;
            position = middle;
        } else if (array[middle] > value) { // if the vlaue in lower half
            last = middle -1;
        } else {
            first = middle+1;           // if the vlaue in upper half
        }
    }
    return position;
}
*/
//==============Searching an Array of Objects========== //entering wrong code(crash program)
//Linear and binary searches can also be used to search for a specific entry in an array of objects or structures.
/*
class Inventory {
private:
   string itemCode;
   string description;
   double price;
public:
    Inventory () {
        itemCode = "XXX";
        description = " ";
        price = 0.0;
    }
    Inventory(string c, string d , double p){
        itemCode = c;
        description = d;
        price = p;
    }
    string getCode() const {
        return itemCode;
    }
    string getDescription () const {
        return description;
    }
    double getPrice() const {
        return price;
    }
};

int searchList (Inventory[], int , string);

int main () {
    const int SIZE = 4;
    Inventory Silverware[SIZE] = {
        Inventory("S15", "Soup sppon", 2.35),
        Inventory("S16", "Tea sppon", 4.3),
        Inventory("S17", "fork" , 7.90),
        Inventory("S18", "Knife", 5.20)
    };
    string DesiredCode;
    int result;
    char doagain;
    
    do {
        cout<<"Codes are :"<<endl;
        cout<<"S15 " <<"Soup sppon "<<endl;
        cout<<"S16 " <<"Tea sppon"<<endl;
        cout<<"S17 " <<"fork"<<endl;
        cout<<"S18 " <<"Knife"<<endl;
        
        cout<<"Enter an item code here : ";
        cin >>DesiredCode;
        result = searchList(Silverware, SIZE, DesiredCode);
        if (result == -1) {
            cout<<"The code does not exist"<<endl;
        } else {
            cout<<"this "<<Silverware[result].getDescription()
            <<" cost £ " <<Silverware[result].getPrice()<<endl;
        }
        cout<<"Look up for another price "<<endl;
        cin>>doagain;
    } while(doagain == 'Y' || doagain == 'y');
    return 0;
}

int searchList (Inventory object[], int size , string value){
    int index = 0;
    int position = -1;
    bool found = false ;
    while (!found && index <= size) {
        if(object[index].getCode() == value) {
            found = true;
            position = index;
        }
        index++;
    }
    
    return position;
}
*/

//==============search Vectors==========
/*
int SearchVector(vector<int>& , int value);
void DisplayVector(vector<int>);

int main () {
    int vlaueToSearch;
    int results;
    // create a vector to hold a set of unsorted integers
    vector<int>values{12,11,10,9,6};
    cout << "Enter the value you are searcging for : \n";
    cin>>vlaueToSearch;
    results = SearchVector(values, vlaueToSearch);
    if (results == -1){
        cout<<"item not found"<<endl;
    } else {
    cout<<"display my vactor"<<endl;
    DisplayVector(values);
    }
    return 0;
}
int SearchVector(vector<int>&numbers , int value){
    int index = 0;
    int position = -1;
    bool found = false ;
    while (index < numbers.size() && !found) {
        if (numbers[index] == value) {
            found = true;
            position = index;
            cout<<"item found at position "<<position+1<<endl;;
        }
     index ++;
    }
    return position;
}

void DisplayVector(vector<int>numbers){
    for(int i = 0; i < numbers.size(); i++) {
        cout<<numbers[i]<<" ";
        cout<<endl;
    }
}
*/
//================Sorting Algorithm============
/*
void sortArray(int[] , int);
void showArray(const int[], int);
               
int main() {
    const int Size = 6;
    int values[Size] = {7,2,3,8,9,1};
    // Display the values
    cout << "The unsorted values are: \n";
    showArray(values, Size);
    // Sort the values
    sortArray (values , Size);

    // Display them again
    cout << "The sorted values are:\n";
    showArray (values , Size);
    
    return 0;
}
void sortArray(int array[] , int size) {
    int temp;
    bool madeSwap;
    do {
       madeSwap = false;
        for (int i = 0; i < size ; i++) {
            if (array[i] > array[i+1]) {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                madeSwap = true;
            }
        }
    } while (madeSwap);
}
void showArray(const int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
*/
/*
//===or==
void sortArray(int [] , int);
void showArray(int[], int);
               
int main() {
    const int Size = 6;
    int values[Size] = {5,2,3,4,6,1};
    // Display the values
    cout << "The unsorted values are: \n";
    showArray(values, Size);
    // Sort the values
    sortArray (values , Size);

    // Display them again
    cout << "The sorted values are:\n";
    showArray (values , Size);
    
    return 0;
}
void sortArray(int array[] , int size) {
    int temp;
    for (int i = 0; i < size ; i++) {
        for (int j = i+1 ; j < size ; j++) {
           if (array[i] > array[j]) {
              temp = array[i];
              array[i] = array[j];
              array[j] = temp;
           }
        }
    }
}

void showArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
*/
//====OR
/*
void sortArray(int [] , int);
void showArray(const int[], int);
               
int main() {
    const int Size = 6;
    int values[Size] = {7,2,3,8,9,1};
    // Display the values
    cout << "The unsorted values are: \n";
    showArray(values, Size);
    // Sort the values
    sortArray (values , Size);

    // Display them again
    cout << "The sorted values are:\n";
    showArray (values , Size);
    
    
    return 0;
}
void sortArray(int array[] , int size) {
   int minIndex;
    int minvalue;
        for (int i = 0; i < size ; i++) {
            minIndex = i;
            minvalue = array[i];
            for (int index = i ; index < size ; index++) {
                if(array[index] < minvalue){
                   minvalue = array[index];
                    minIndex = index;
                }
            }
            array[minIndex] = array[i];
            array[i] = minvalue;
        }
}
void showArray(const int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
*/
//==============Sorting an Array of Objects==========
/*
class Inventory {
    
   private:
   string itemCode;
   string description;
   double price;
    
   public:
    Inventory () {
        itemCode = "XXX";
        description = " ";
        price = 0.0;
        
    }
    Inventory(string c, string d , double p){
        itemCode = c;
        description = d;
        price = p;
    }
    string getCode() const  {
        return itemCode;

    }
    string getDescription () const {
        return description;
    }
    double getPrice() const {
        return price;
    }
};

void DisplayInventory (const Inventory[] , int);
void SortInventory(Inventory[], int);


int main () {
    const int SIZE = 4;
    Inventory Silverware[SIZE] = {
        Inventory("S15", "Soup sppon", 2.35),
        Inventory("S18", "Tea sppon", 4.3),
        Inventory("S17", "fork" , 7.90),
        Inventory("S16", "Knife", 5.20)
    };
    // Display the inventory
    cout << "Here is the original data\n";
    DisplayInventory(Silverware, SIZE);

    // Sort the objects by their itemCode
    SortInventory(Silverware, SIZE);
    
    // Display the inventory again
    cout << "Here is the sorted data --\n";
    DisplayInventory(Silverware, SIZE);
};
  
void DisplayInventory (const Inventory object[] , int size){
    for (int index = 0; index < size ; index++){
        cout << setw(5) << left << object[index].getCode()
        << setw(13) << left << object[index].getDescription()
        << "£ " << right << object[index].getPrice() << endl;
    }
}
void SortInventory(Inventory array[], int size){
    Inventory temp ;   // hold the inventory object
    bool swap;
    do {
        swap = false;
        for (int i = 0; i < size-1 ; i++){
            if (array[i].getCode() > array[i+1].getCode()) {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swap = true;
            }
        }
    } while (swap);
}
*/
//==============Sorting Vectors==========
/*
void SortVector(vector<int>&);
void DisplayVector(vector<int>);
int main () {
    const int SIZE = 4;
    // create a vector to hold a set of unsorted integers
    vector<int>values(SIZE);
    cout<<"Enter " <<SIZE<<" interger sperated by spaces.\n";
    for(int i = 0; i < SIZE; i++) {
        cin>>values[i];
    }
    cout << "The unsorted values entered are: \n";
    DisplayVector(values);
    // sort the values
    SortVector(values);
    //Display them again
    cout << "The sorted values are: \n";
    DisplayVector(values);
    return 0;
}

void SortVector(vector<int>&numbers){
    int temp;
    bool swap;
    do {
        swap = false;
        for(int i = 0; i < numbers.size()-1; i++) {
            if (numbers[i] > numbers[i+1]) {
                temp = numbers[i];
                numbers[i] =  numbers[i+1];
                numbers[i+1] = temp;
                swap = true;
            }
            
        }
    } while (swap);
}

void DisplayVector(vector<int>numbers){
    for(int i = 0; i < numbers.size(); i++) {
        cout<<numbers[i]<<" ";
        cout<<endl;
    }
}
*/
// == id I do not know the size of my vector==
/*
void SortVector(vector<int>&);
void DisplayVector(vector<int>);
int main () {
    int test;
    // create a vector to hold a set of unsorted integers
    vector<int>values;
    cout<<"Enter  5 interger sperated by spaces.\n";
    for(int i = 0; i < 5; i++) {
        cin>>test;
        values.push_back(test);
    }
    cout << "The unsorted values entered are: \n";
    DisplayVector(values);
    // sort the values
    SortVector(values);
    //Display them again
    cout << "The sorted values are: \n";
    DisplayVector(values);
    return 0;
}

void SortVector(vector<int>&numbers){
    int temp;
    bool swap;
    do {
        swap = false;
        for(int i = 0; i < numbers.size()-1; i++) {
            if (numbers[i] > numbers[i+1]) {
                temp = numbers[i];
                numbers[i] =  numbers[i+1];
                numbers[i+1] = temp;
                swap = true;
            }
            
        }
    } while (swap);
}

void DisplayVector(vector<int>numbers){
    for(int i = 0; i < numbers.size(); i++) {
        cout<<numbers[i]<<" ";
        cout<<endl;
    }
}
*/
