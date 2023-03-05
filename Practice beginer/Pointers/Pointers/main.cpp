//
//  main.cpp
//  Pointers
//
//  Created by Hossam Farfour on 07/11/2022.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iomanip>
#include <vector>
#include <memory> // use for smart pointer
using namespace std;

//Every variable is assigned a memory location whose address can be retrieved using the address operator &. The address of a memory location is called a pointer.


 char letter;
 float amount;
 double profit;
/*
int main() {
    // Print address of each variable
    // The cast to long makes addresses print in decimal // rather than in hexadecimal.
    
    cout<<"The address of letter is: "<<long(&letter)<<endl;
    cout<<"The address of amount is: "<<long(&amount)<<endl;
    cout<<"The address of profit is: "<<long(&profit)<<endl;
    //====
        int x = 25;
        int *ptr;
        ptr = &x;
        cout << "The value in x is "<< x <<endl;
        cout << "The address of x is "<< ptr <<endl;
    return 0;
}
*/

/*
int main() {
    int x = 25;
    int *ptr;
    ptr = &x;  // storing the address(memory location) of x in ptr
    // Use both x and ptr to display the value in x
    cout << "Here is the value in x, printed twice :\n";
    cout << x <<" , "<< *ptr <<endl;
    cout << "The address of x is "<< ptr <<endl;
    //====

    *ptr *= 2; // Multiply value in y by 2
    cout << "Here is mutliplication of thr value in x :\n";
    cout << x <<" , "<< *ptr <<endl;
    //=====
    
    short numbers [] = {10,20,30,40,50};
    cout<<"the first elemnt of the array is "<< *numbers<<endl;
    cout<<*numbers+1<<endl; // add one to the first value
    cout<<*(numbers+1)<<endl; // print the next value
    cout<<*(numbers+2)<<endl;
    return 0;
}
*/

/*
int main(){
    const int size = 5;
    int numbers[size];
    
    cout<<"Enter "<<size <<" values to the array! "<<endl;
    for (int i = 0 ; i < size ; i++){
        //cin>>*(numbers + i);
        //or
        cin>>numbers[i];
    }
    cout<<"here are the numbers you entred: "<<endl;
    for (int i = 0 ; i < size ; i++)
    cout<<*(numbers + i)<<" ";
    //cout<<numbers[i]<<" ";
    cout<<endl;
    cout<<"=="<<endl;
    for (auto n : numbers) {
         cout << n << " ";
     }
    cout<<endl;
    return 0;
}
 */
//==============
/*
int main (){
    const int NUM_COINS = 5;
    int coins[NUM_COINS] = {12,14,15,17,19};
    int *Ptr;  // Pointer to a double
    // Assign the address of the coins array
    Ptr = coins;
    cout << "Here are the values in the coins\n";
//    for (int i : coins)
//        cout<<i<<" ";
//        cout<<endl;
    //or==
    for (int i = 0; i< NUM_COINS; i++ )
        cout << Ptr[i] <<" ";
    cout<<endl;
    //or==
    for (int i = 0; i< NUM_COINS; i++ )
        cout << *(coins + i) <<" ";
    cout<<endl;
    //or
    for (int count = 0; count< NUM_COINS; count++ ) {
        Ptr = &coins[count];
        cout << *Ptr <<" ";  // on it is own will display just the first elemnt but with the line above shows all elemnt
    }
    cout<<endl;
    return 0;
}
*/

/*
int main(){
    const int SIZE = 8;
    int set[] = {6, 7, 15, 20, 25, 30, 35, 40};
   // int *numPtr = set;     // Make numPtr point to set
    //or
    int *numPtr;
    numPtr = set;
    cout << "The numbers in set are :\n";
    cout << *numPtr <<" "<<endl; // Display first element
   
    while (numPtr < &set[SIZE-1])
    {
    // Advance numPtr to the next element
        numPtr++ ;
    // Display the value pointed to by numPtr
        cout << *numPtr <<" ";
    }
    cout<<endl;
  
    while (numPtr > set) {
        // Move backward to the prev i ous element
        numPtr-- ;
    // Display the value pointed to by numPtr
        cout << *numPtr <<" ";
    }
    cout<<endl;
    return 0;
}
*/

//============Pointers as Function Parameters=============
// only possible through the use of pointers
//A pointer can be used as a function parameter. It gives the function access to the original argument, much like a reference parameter does
/*
void getNumber(int *input);
void doubleValue(int *val);

int main () {
    int number;
    //Call getNumber and pass the address of number
    getNumber(&number);
    cout << "That value is "<< number<< endl;
    doubleValue(&number);
    cout << "That value doubled is "<< number<< endl;
    return 0;
}
void getNumber(int *input){
    cout<<"Enter a number ";
    cin>>*input;
}
void doubleValue(int *val){
    *val *= 2;
}
*/
//=========
/*
void getSales(double *sales, int size);
double totalSales(double *sales, int size);

int main () {
    int quarter = 4;
    double sales[quarter];
    getSales(sales, quarter);
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The total sales for the year are ";
    cout<< totalSales(sales, quarter)<<endl;
    return 0;
}

void getSales(double *Sales, int size){
    for (int i = 0; i<size; i++) {
        cout<<"Enter sales figure for quarter "<<i+1<<endl;
        cin>>Sales[i];
        //or
        //cin>>*(Sales + i);
    }
}
double totalSales(double *array, int size){
    double sum = 0.0;
    for (int i = 0; i<size; i++) {
        sum += *array;  //add just the first elemnt
        array++; // the address in array is incremented to point to the next element
 
 // or in one line (sum += *array++);
    }
    return sum;
}
*/

//================Dynamic Memory Allocation==============
//Variables may be created and destroyed while a program is running.
/*
int main () {
    double *sales = nullptr; // To dynamically allocate an array
    double total = 0.0 ;
    double average;
    int numDays;
    
    cout<<"how many days of sales figures do you wish to proccess? "<<endl;
    cin>>numDays;
    // Dynamically allocate an array large enough
    // to hold that many days of sales amounts
    sales = new double[numDays];    // Allocate memory
    
    //Get the sales figures for each day
    for (int count = 0; count < numDays; count++) {
        cout<<"Enter the sales figures for day "<<count+1 <<endl;
        cin >> sales[count];
    }
 
    // Calculate the total sales
    for (int count = 0; count < numDays; count++) {
    total += sales[count];
    }
    // Calculate the average sales per day
    average = total / numDays;
    
    // display the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout << "\nTotal Sales: £"<<total<<endl;
    cout << "Average Sales: £"<<average<<endl;
   
    // free dynamically allocated memory
    delete [] sales;  // very impotant to free memory
    sales = nullptr;
    return 0;
}
*/


//======Returning Pointers from Functions=====
//Functions can return pointers, but you must be sure the item the pointer references still exists.
/*
int *getRandomNumbers(int);

int main () {
    int *numbers;
    //get an array of 5 rand numbers
    numbers = getRandomNumbers(5);
    // display the numebrs
    for (int count = 0; count < 5; count ++) {
        cout<<numbers[count]<<" "<<endl;
    }
    cout<<endl;
    // free memory //
    delete [] numbers;
    numbers = nullptr;
    return 0;
}
int *getRandomNumbers(int size) {
    int *array = nullptr;   // Array to hold the numbers
    // Return nullptr if size is zero or negative
    if (size <= 0){
    return nullptr;
    }
    //Dynamically allocate the array
    array = new int[size];
    // Seed the random number generator by passing the return value of time(0) to srand
    srand(time(0));// to prevent sequence repetition between runs
    
    //Populate the array with random numbers
    for (int count = 0; count < size ; count ++)
    array[count] = rand();
    return array;  // return pointer to the array
}
*/
//========constructors and destructors in the allocation and deallocation of memory======
/*
class Squares
{
private:
    int length;
    int *square = nullptr;   // dynamically allocate an array
 
public:
// Constructor allocaate storage for sequence  of squares and creates the sequence
Squares(int len)
    {
        length = len;             // dynamic  must be in  constractor
        square = new int[length];
        for (int i = 0; i<length; i++)
        {
            square[i] = (i+1) * (i+1);
        }
 cout<<"constructor an object of size  "<<length<<endl;
    }
void print()
    {
    for(int k = 0; k < length; k++)
        {
        cout<<square[k]<<endl;
         }
    }
    ~Squares()
    {
        delete square; // delete must be here
        square  = nullptr;
        cout<<"destroy oject of size  "<<length<<endl;
    }
};

//void outputSquares(Squares *Ptr)   //or use print func
//{
//    cout<<" the list of square is : "<<endl;
//   Ptr->print();
//}
int main()
{                              //in class both in main(allocation and deallocation
    Squares *ptr = new Squares(3);   // main allocation
   //outputSquares(ptr);
    ptr->print();
    delete ptr; //deallocation
    ptr = nullptr;
    return 0;
}

*/

//========pointer to dynamically allocate Struct and class of object===========
/*
class Person
{
private:
    string name;
    int age;
    
public:
 Person(string name1 ,int age1){
        name = name1;
        age = age1;
        cout<<"constructor an object of the class"<<endl;
    }
int getAge(){
      return age;
    }
string getName(){
      return name;
    }
    ~Person()
    {
        cout<<"destroy the oject of the class "<<endl;
    }
};
// Rectangle struct
struct Rectangle {
    int width ,height;
};

int main()
{
    //Struct
    Rectangle *pRect = nullptr;   // pointer to struct
    Person  *pClas = nullptr;     //pointer to class
    // Local object accessed through a pointer
    Rectangle rect;
    pRect = &rect;
 //to access the object by pointer we use structuer pointer operater ->
    (*pRect).height = 12;
    //pRect->height = 12;
    pRect->width = 10;
    cout<<"Area  of the first rectangle is "<<pRect->height * pRect->width<<endl;
    pRect = new Rectangle;  // dynamiclly allocate object access through pointer
    pRect->height = 6;
    pRect->width = 5;
    cout<<"Area  of the second rectangle is "<<pRect->height * pRect->width<<endl;
    delete pRect; //deallocation
    pRect = nullptr;
    
    //Class
    pClas = new Person("hossam",32); // dynamiclly allocate object access through pointer
    cout<<"the person name is "<<pClas->getName() <<" and age is "<<pClas->getAge()<<endl;
//    pClas = new Person("iss",31); // dynamiclly allocate object access through pointer
//    cout<<"the person name is "<<pClas->getName() <<" and age is "<<pClas->getAge()<<endl;
    delete pClas;
    pClas = nullptr;
    return 0;
}
*/
//==or
/*
class Person
{
private:
    string name;
    int age;
    
public:
 Person(string name1 ,int age1){
        name = name1;
        age = age1;
        cout<<"constructor an object of the class"<<endl;
    }
int getAge(){
      return age;
    }
string getName(){
      return name;
    }
    ~Person()
    {
        cout<<"destroy the oject of the class "<<endl;
    }
};
// Rectangle struct
struct Rectangle {
    int width ,height;
};

int main()
{
    //Struct
    Rectangle *pRect = new Rectangle;
    Person  *pClas = nullptr;     //pointer to class
    // Local object accessed through a pointer
 //to access the object by pointer we use structuer pointer operater ->
    pRect->height = 12;
    //pRect->height = 12;
    pRect->width = 10;
    cout<<"Area  of the first rectangle is "<<pRect->height * pRect->width<<endl;
      //pRect = *new Rectangle;  // dynamiclly allocate object access through pointer
    pRect->height = 6;
    pRect->width = 5;
    cout<<"Area  of the second rectangle is "<<pRect->height * pRect->width<<endl;
    delete pRect;
    pRect = nullptr;
    
    //Class
    pClas = new Person("hossam",32); // dynamiclly allocate object access through pointer
    cout<<"the person name is "<<pClas->getName() <<" and age is "<<pClas->getAge()<<endl;
//    pClas = new Person("iss",31); // dynamiclly allocate object access through pointer
//    cout<<"the person name is "<<pClas->getName() <<" and age is "<<pClas->getAge()<<endl;
    delete pClas;
    pClas = nullptr;
    return 0;
}
*/
// ====if the struct has a contractor and deconstrctor====
/*
class Person
{
private:
    string name;
    int age;
    
public:
 Person(string name1 ,int age1){
        name = name1;
        age = age1;
        cout<<"==constructor an object of the class=="<<endl;
    }
int getAge(){
      return age;
    }
string getName(){
          return name;
    }
    ~Person()
    {
        cout<<"destroy the oject of the class "<<endl;
    }
};
// Rectangle struct
struct Rectangle {
    int width ,height;
    
    Rectangle (int Width ,int Height){
        width = Width;
        height = Height;
        cout<<"==constructor an object of the struct=="<<endl;
    }
   ~Rectangle () {
       cout<<"==destroy the oject of the struct== "<<endl;
    }
};

int main()
{
    //Struct
    Rectangle *pRect = nullptr;   // pointer to struct
    Person  *pClas = nullptr;     //pointer to class
    //to access the object by pointer we use structuer pointer operater ->
    pRect = new Rectangle(12,10);
    cout<<"Area  of the first rectangle is "<<pRect->height * pRect->width<<endl;
    pRect = new Rectangle(6,5);     // dynamiclly allocate object access through pointer
    cout<<"Area  of the second rectangle is "<<pRect->height * pRect->width<<endl;
    delete pRect; //deallocation
    pRect = nullptr;
    
    //Class
    pClas = new Person("hossam",32); // dynamiclly allocate object access through pointer
   cout<<"the person name is "<<pClas->getName() <<" and age is "<<pClas->getAge()<<endl;
    //cout<<"the person name is "<<pClas->name <<" and age is "<<pClas->age<<endl;  // cant use because it private
    delete pClas;
    pClas = nullptr;
    return 0;
}

*/
//===========Pointers to Class Objects as Function Parameters============
//Pointers to structures and class variables can be passed to functions as parameters. The function receiving the pointer can then use it to access or modify members of the structure.
/*
class Person
{
private:
    string name;
    int age;
    
public:
 Person(string name1 ,int age1){
        name = name1;
        age = age1;
        cout<<"constructor an object of the class"<<endl;
    }
int getAge(){
      return age;
    }
string getName(){
      return name;
    }
};
// Rectangle struct
struct Rectangle {
    int width ,height;
};

void mignify (Rectangle *pRect , int mfactor);
int lengthOfName(Person *pClas);
void output (Rectangle *pRect);

int main()
{
    //Struct
    Rectangle *Prect = nullptr;
    Rectangle rect;
    Prect = &rect;
    Prect->width = 4;
    Prect->height = 2;
    cout<<"Initial size of rectangle:"<<endl;
    //output(&rect);
    //mignify(&rect, 3);
    output(Prect);
    mignify(Prect, 3);
    cout<<"The size of rectangle after modifaing is  "<<endl;
    output(&rect);
    //Prect = new Rectangle;
    // used when we create new Rectangle
//    delete  Prect;
//    Prect = nullptr;
    
    //Class
    Person *pPerson = nullptr;
    pPerson = new Person("hossam", 32);
    cout<<"The person name is  "<<pPerson->getName()<<" and age is "<<pPerson->getAge()<<endl;
    cout <<"The length of the name is "<< lengthOfName(pPerson)<<endl;
    delete pPerson;
    pPerson = nullptr;
    return 0;
}

void mignify (Rectangle *pRect , int mfactor){
    pRect->width *= mfactor;
    pRect->height = pRect->height * mfactor;
    
}
int lengthOfName(Person *pClas){
   // return static_cast<int>(pClas->getName().length());
    //or
    string name = pClas->getName();
    return  static_cast<int>(name.length());
}
void output (Rectangle *pRect){
    cout<<"width is: "<<pRect->width<<" and height is "<<pRect->height<<endl;
}
 */

// ==when a struct has a constractor like class===
/*
class Person
{
private:
    string name;
    int age;
    
public:
 Person(string name1 ,int age1){
        name = name1;
        age = age1;
        cout<<"constructor an object of the class"<<endl;
    }
int getAge(){
      return age;
    }
string getName(){
          return name;
    }
    ~Person()
    {
        cout<<"destroy the oject of the class "<<endl;
    }
};
// Rectangle struct
struct Rectangle {
    int width ,height;
    
    Rectangle (int Width ,int Height) {
        width = Width;
        height = Height;
    }
};

void mignify (Rectangle *pRect , int mfactor);
int lengthOfName(Person *pClas);
void output (Rectangle *pRect);
int main()
{
    //Struct
    //Rectangle rect; // no need  and no need for &(calling func)
   Rectangle *rect = new Rectangle(4,2);
   //rect.width = 4;
   //rect.height = 2;
    cout<<"Initial size of rectangle:"<<endl;
    output(rect);
    mignify(rect, 3);
    cout<<"The size of rectangle after modifaing is  "<<endl;
    output(rect);
    
    //Class
    Person *pPerson = new Person("hossam", 32);
    cout<<"The person name is  "<<pPerson->getName()<<" and age is "<<pPerson->getAge()<<endl;
    cout <<"The length of the name is "<< lengthOfName(pPerson)<<endl;
    delete pPerson;
    pPerson = nullptr;
    return 0;
}

void mignify (Rectangle *pRect , int mfactor){
    pRect->width *= mfactor;
    pRect->height = pRect->height * mfactor;
    
}
int lengthOfName(Person *pClas){
    string name = pClas->getName();
    return  name.length();
}
void output (Rectangle *pRect){
    cout<<"width is: "<<pRect->width<<" and height is "<<pRect->height<<endl;
}
*/
//=====or
/*
class Person
{
private:
    string name;
    int age;
    
public:
 Person(string name1 ,int age1){
        name = name1;
        age = age1;
        cout<<"constructor an object of the class"<<endl;
    }
int getAge(){
      return age;
    }
string getName(){
      return name;
    }
};
// Rectangle struct
struct Rectangle {
    int width ,height;
};

void mignify (Rectangle *pRect , int mfactor);
int lengthOfName(Person *pClas);
void output (Rectangle *pRect);

int main()
{
    //Struct
    Rectangle rect;
    rect.width = 4;
    rect.height = 2;
    cout<<"Initial size of rectangle:"<<endl;
    output(&rect);
    mignify(&rect, 3);
    output(&rect);
    cout<<"The size of rectangle after modifaing is  "<<endl;
    output(&rect);
    
    //Class
    Person *pPerson = nullptr;
    pPerson = new Person("hossam", 32);
    cout<<"The person name is  "<<pPerson->getName()<<" and age is "<<pPerson->getAge()<<endl;
    cout <<"The length of the name is "<< lengthOfName(pPerson)<<endl;
    delete pPerson;
    pPerson = nullptr;
    return 0;
}

void mignify (Rectangle *pRect , int mfactor){
    pRect->width *= mfactor;
    pRect->height = pRect->height * mfactor;
    
}
int lengthOfName(Person *pClas){
   // return static_cast<int>(pClas->getName().length());
    //or
    string name = pClas->getName();
    return  static_cast<int>(name.length());
}
void output (Rectangle *pRect){
    cout<<"width is: "<<pRect->width<<" and height is "<<pRect->height<<endl;
}
 */


//==============================================================
//                ==SMART POINTER in book (720)==
//==============================================================
//==============================================================
//                unique pointer via shared pointer

//unique_ptr<T> myPtr(new T);       // Okay
//unique_ptr<T> myOtherPtr = myPtr; // Error: Can't copy unique_ptr
//but can use move
//unique_ptr<T> myPtr(new T);                  // Okay
//unique_ptr<T> myOtherPtr = std::move(myPtr); // Okay

//shared_ptr<T> myPtr(new T);       // Okay
//shared_ptr<T> myOtherPtr = myPtr; // Sure!
//==============================================================
/*
//introduces smart pointers, objects that work like pointers but have the ability to automatically delete dynamically allocated memory that is no longer being used
unique_ptr<int>uptr1(new int);
unique_ptr<double>uptr2(new double);
//Alternatively, you can define an uninitialized unique pointer and later assign it a value:
unique_ptr<int>uptr3;
uptr3 = unique_ptr<int>(new int);

//To avoid memory leaks, objects that are managed by smart pointers should have no other references to them. In other words, the pointer to dynamically allocated storage should immediately be passed to a smart pointer constructor without first assigning it to a pointer variable . For example, you should avoid writing code like this
int *p = new int;
unique_ptr<int>uptr(p);
//Smart pointers do not support pointer arithmetic, so statements such as
//- uptr1 ++;
//- uptr1 = uptr1+2;
unique_ptr<int>uptr1(new int);
unique_ptr<int>uptr2 = uptr1;  // Illegal initialization
unique_ptr<int>uptr3;         //ok
uptr3 = uptr1;                // Illegal initialization
*/
//=====move pointer=====
/*
 void fun(unique_ptr<int>uptrParam){
     cout<<*uptrParam<<endl;
}
int main (){
    unique_ptr<int> uptr (new int);
    *uptr = 10;
    fun(move(uptr));
}
*/
//==or pass py referance to delete move
/*
void fun(unique_ptr<int>&uptrParam){
    cout<<*uptrParam<<endl;
}
int main (){
   unique_ptr<int>uptr(new int);
   *uptr = 10;
   fun(uptr);
}
*/
//======return a unique pointer from a function=====
/*
unique_ptr<int>makeResource(){
    unique_ptr<int>Result(new int);
    *Result = 55;
    return Result;
}
int main(){
    unique_ptr<int>uptr;
    uptr = makeResource();// automaticaaly apply move
    cout<<*uptr<<endl;
}
*/
//===========unique pointer at array===========
/*
int main(){
    unique_ptr<int[]>up(new int[5]);
    for (int i = 0; i<5; i++) {
        up[i] = (i+1)*(i+1);
    }
    for (int i = 0; i<5; i++) {
        cout<<up[i]<<" ";
    }
    cout<<endl;
}
*/
//create a unique pointer abd assigned it later
//or
/*
int main(){
    unique_ptr<int[]>up;
    up = unique_ptr<int[]>(new int[5]);
    for (int i = 0; i<5; i++) {
        up[i] = (i+1)*(i+1);
    }
    for (int i = 0; i<5; i++) {
        cout<<up[i]<<" ";
    }
    cout<<endl;
}
 */
//========
//Notice that there are no calls to de1ete in this program.By examining the code and its output,you can see how smart pointers work to delete memory that is no longer needed.
/*
int serialNo = 1;

class Thing {
private:
 int instanceNumber;
public:
 Thing() {
     instanceNumber = serialNo++;
     cout<<" Thing "<<instanceNumber<<" Greated"<<endl;
 }
    ~Thing (){
        cout<<" Thing "<<instanceNumber<<" destroyed"<<endl;
    }
    string to_string(){
        return "thing " + std::to_string(instanceNumber) + "\n"; //stander tamplate libarary to convert integer to a string
    }
};
int main () {
    unique_ptr<Thing> u1 = make_unique<Thing>();  //1
    unique_ptr<Thing> u2 = make_unique<Thing>();  //2
    
    unique_ptr<Thing[]> uArray = make_unique<Thing[]>(2); //3,4
    unique_ptr<Thing> u5 = make_unique<Thing>(); //5
    unique_ptr<Thing> u6 = make_unique<Thing>(); //6
    
    u5 = move(u6);//move owenship to
    u1.reset();   //destory u1
    //output array manage by uArray
    cout<<uArray[0].to_string();
    cout<<uArray[1].to_string();
    // Now all smart pointer will go out scope.
    return 0;
}
*/

//===========shared pointer=============
//Shared pointers are used to manage a dynamically allocated object that can have more than one owner. In particular, the type shared _ ptr<T> is used to manage ownership of objects of type T. The class constructor shared _ptr<T>(T * ptr} can be used to create a shared pointer that manages an object whose address is given by the raw pointer ptr.
/*
int main(){
    shared_ptr<int>p(new int);
    *p = 60;
    cout<<*p+1<<endl;
}
*/
//===
/*
class Person {
    string name;
    int age ;
public:
    string to_string() {
        return name + " , " +std::to_string(age) + "\n";
    }
    //Constructor
    Person() {name = " "; age = 0;}
    Person(const string &name, int age){
        this->name = name;
        this->age = age;
    }
//    string getname(){
//        return name;
//    }
//    int getage(){
//        return age;
//    }
};
int main(){
    unique_ptr<Person>p1(new Person()); // pointing at any one resource.
    shared_ptr<Person>p2(new Person("Hossam",32)); // pointing at many resource.
// or
//    shared_ptr<Person>p1 = shared_ptr<Person>(new Person());
//    shared_ptr<Person>p2 = shared_ptr<Person>(new Person("Hossam", 32));
    cout<<"1 "<<p1->to_string()<<endl;
    cout<<"2 "<<p2->to_string()<<endl;
    //or
    //cout<<(*p2).getname()<<endl;
    //cout<<p2->getname()<<endl;
    //cout<<p2->getage()<<endl;
//===========================================
   // unique_ptr<Person>p3 = p1;
   // to use unique_ptr need move template
     unique_ptr<Person>p3 = std::move(p1);
    cout<<"3 "<<p3->to_string()<<endl;
   //benefit of share pointer
    shared_ptr<Person>p4 = p2;
    cout<<"4 "<< p4->to_string()<<endl;
    
   // cout<<"5 "<<p1->to_string()<<endl; // can not access it because its destoried
}

*/

