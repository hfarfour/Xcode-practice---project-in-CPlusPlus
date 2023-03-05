//
//  main.cpp
//  Operator Overloading
//
//  Created by Hossam Farfour on 11/11/2022.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <functional> // to sue functional objects // less<DATATYPE>()

using namespace std;
//overload assiment operator = similer to copy constructor.(but &operator = ().
//overload Unary operator ++ , --  similer to postfix and prefix opertaors.
//overload arithmatic and relational +,-,<,> operator need frined.no &operator
//overload bitwise operator >> need frined:
//ostream (output stream):
    // friend ostream  &operator << (ostream &out , Length a)
    //    cout<<a.getFeet()<< " feet "<<a.getInches()<<" inches "<<endl;
    //    return out;
    //}
//istream (input stream):
    //friend istream  &operator >> (istream &in , Length &a){
    //int feet;
    //int inches;
    //cout<<"Enter feet ";
    //cin>>feet;
    //cout<<"Enter inches ";
    //cin>>inches;
    //a.setLength(feet, inches);
    //return in;
    //}

//overloading [] operator must take a single argument of any type and can return a value of any type
    //int operator [ ] (string num_str) {}
    //int operator ()(string num_str) {}// lambada
//=======================================================================
//Unary operator ++ , --
//binary operator:
    //arithmatic operator + , - , / , * , %
    //relational operator  < , <= , > , >= , == ,!=
    //logical operator &&, || , !
    // assignment operator = , += , -= , *= , /=, %=
    //bitwise operator & , | , << , >> , ~ , ˆ
// Ternary operator or conditional operator ? :


//============overloading the assingment operator==========
// complier knows to do when it sees + or - between to veriable (i + j) but it does not know what to do when it see (+ , - , / ,* ) between two object of class
//     (distance c3 =  c1 + c2)

//The only operators that cannot be overloaded are ?: * :: sizeof.

/*
class Distance
{
private:
    int feet ;
    float inches;
public:
    Distance():feet(0),inches(0.0){
        
    }
    Distance(int f, float i):feet(f),inches(i){
        
    }
    void setDistance(int f, float i) {
        feet = f;
        inches = i;
    }
    void print() {
        cout<<"feet"<<" "<<feet<<" "<<"inches"<<
        " "<<inches<< "\n";
        }

    Distance addDistance(Distance d2){
        Distance result;
        result.feet = feet + d2.feet;
        result.inches = inches + d2.inches;
    return result;
    }
    //or==
    Distance operator + (Distance d2) {
        int f = feet + d2.feet;
        float i = inches + d2.inches;
        return  Distance(f,i);
    }
};

int main()
{
    Distance c1(3, 8.5);
    Distance c2(5, 2.5);
    //Distance c3 = c2 + c1;
    //the compiler see as
    Distance c3 = c2.operator+(c1);
    cout<<"Object c3 for Distance : "<<endl;
    c3.print();
    Distance c4 = c3 + c1;
    cout<<"Object c4 for Distance : "<<endl;
    c4.print();
    Distance c5 = c4.addDistance(c1);
    cout<<"Object c5 for Distance : "<<endl;
    c5.print();
    return 0;
}
*/

//=======================
/*
class Counter
{
private:
    unsigned int count;
public:
    
    Counter():count(0) {
    }
    Counter(int c ):count(c){
    }
    int getCount(){
        return count;
    }
    // unary operater  per fix
    Counter operator ++()
    {
        ++count;
        return Counter(count);
    }
    // unary operater  post fix // we but (int) just to distiguish between pre and post fix
    Counter operator ++(int)
    {
        count++;
        return Counter(count);
    }
    // with minus per fix operator
    Counter operator --()
    {
        --count;
        return Counter(count);
    }
    // unary operater  post fix
    Counter operator --(int)
    {
        count--;
        return Counter(count);
    }
};

int main()
{
    Counter c1(5);
    Counter c2(10);
    cout <<"c1 is:"<<c1.getCount() << endl;
    cout <<"c2 is:"<<c2.getCount() << endl;
    //Counter c3 = ++c1;
    //or
    Counter c3 = c1.operator++();
    cout <<"c3 is:"<<c3.getCount() << endl;
    Counter c4 = --c2;
    cout <<"c4 is:"<<c4.getCount() << endl;
    Counter c5 = c1++;     // post fix
    cout <<"c5 is:"<<c5.getCount() << endl;

}
*/
//==============overload assinment operator========= //first = secod;
//Parameters to operator functions do not have to be passed by reference , nor do they have to be declared const .In this example, we have used a reference parameter for efficiency reasons: Reference parameters avoid the overhead of copying the object being passed as parameter. The const is used to protect the parameter from change.

// returntype operater = (const parameter for object on the right side of operter)
// return type &operator = (const NumberArray &right); // Overload operater//
/*
class NumberArray {
private:
    int arraySize;
    double *aptr = nullptr; // must be declared in constructor
public:
    // overload operater function      // member function =====
    NumberArray &operator = (const NumberArray &right) {   //(definition inside class)
// NumberArray &NumberArray::operator = (const NumberArray &right) {   //(definition inside class)
        if (this != &right) { // chech if the address on left value != to address of right value
            if (arraySize > 0) {
                delete [] aptr;
            }
        }
        arraySize = right.arraySize;
        aptr = new double[arraySize];
        for (int i = 0 ; i<arraySize; i++) {
            aptr[i] = right.aptr[i];
        }
        return *this;
    }
 // declaration inside a class
    NumberArray(const NumberArray &obj) { // needed to prevent changes to the second vlaue
        arraySize = obj.arraySize;
        aptr = new double[arraySize];
        for (int i = 0; i<arraySize; i++) {
            aptr[i] = obj.aptr[i];
        }
    }
 // declaration outside a class
 //NumberArray::NumberArray(const NumberArray &obj) {}
 
    NumberArray(int zise, double value) {
        arraySize = zise;
        aptr = new double[arraySize];
        setvalue(value);
    }
    void print() const {
        for (int i = 0 ; i<arraySize; i++) {
            cout<<aptr[i]<<" ";
        }
    }
    void setvalue(double val){
        for (int i = 0 ; i<arraySize; i++) {
            aptr[i]  = val;
        }
    }
    ~ NumberArray (){
       cout<<"destoyed object of zise "<<arraySize<<endl;
            delete aptr;
        aptr = nullptr;
    }
};
int main(){
    
    NumberArray first(3 , 10.5);
    NumberArray second(3 , 20.5);
    //NumberArray second = first;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The value stored in first object is "<<endl;
    first.print();
    cout<<endl;
    cout<<"The value stored in secnod object is "<<endl;
    second.print();
    cout<<endl;
    // call the overloaded operater
    cout<<"now we will assign the second object to the first "<<endl;
    second = first;  //over loading
    cout<<"==================="<<endl;
    cout<<"The first object's data is"<<endl;
    first.print();
    cout<<endl;
    cout<<"The sencod object's data is"<<endl;
    second.print();
    cout<<endl;
    cout<<"==================="<<endl;
    second.setvalue(15.5);
    second.print();
    cout<<endl;
    cout<<"check the first value"<<endl;
    first.print();
    cout<<endl;
    cout<<"==================="<<endl;
    NumberArray third(first);
    NumberArray forth(second);
    third.print();
    cout<<endl;
    forth.print();
    cout<<endl;
     
    return 0;
}
*/
//================overload just display value===========
/*
class NumberArray {
private:
    int value;
public:
    NumberArray(int cal): value(cal) {
    }
    void setVlaue (int val) {
        value = val;
    }
    int getvalue(){
        return  value;
    }
     //overload operater function
    void operator = (const NumberArray &right) {
        cout<<"the value is "<<right.value<<endl;
    }
};
int main(){
    
    NumberArray first(10);
    NumberArray second(5);
    //NumberArray second = first; //constructor will invloked
    second = first;               // not constructor will invloked
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The value stored in first object is "<<endl;
    cout<<first.getvalue()<<endl;
    cout<<"The value stored in secnod object is "<<endl;
    cout<<second.getvalue()<<endl;
    cout<<"==================="<<endl;
    second.setVlaue(15.5);
    cout<< second.getvalue()<<endl;
    cout<<"check the first value "<<endl;
    cout<< first.getvalue()<<endl;
    cout<<endl;
    cout<<"==================="<<endl;
    return 0;
}
*/

//==============Overloading the Arithmetic and Relational Operators===============

//==========overload operater functionn // member function seprate. stand alone=======
//There are two approaches you can take to overload an operator:
//1. Make the overloaded operator a member function of the class. This allows the operator function access to private members of the class. It also allows the function to use the implicit this pointer parameter to access the calling object.
//2. Make the overloaded member function a separate, stand-alone function. When overloaded in this manner, the operator function must be declared a friend of the class to have access to the private members of the class .
/*
class Length {
private:
    int length_Inches;
public:
    Length(int feet , int inches){
        setLength(feet , inches);
    }
    Length(int inches):length_Inches(inches){
        
    }
    int getFeet() const {
        return length_Inches/12;
    }
    int getInches() const {
        return length_Inches%12;
    }
    void setLength(int feet , int inches){
    length_Inches = 12  * feet + inches;
    }
    
 // definition inside class
    friend Length operator+ (Length a, Length b){
         //return Length(a.length_Inches + b.length_Inches);
         //or
        int t = (a.length_Inches + b.length_Inches);
         return Length(t);
     }
    // definition outside class just remove frined.
    //    Length operator + (Length a, Length b){
    //         //return Length(a.length_Inches + b.length_Inches);
    //         //or
    //        int t = (a.length_Inches + b.length_Inches);
    //         return Length(t);
    //     }
    friend Length operator - (Length a, Length b){
        return Length(a.length_Inches - b.length_Inches);
    }
    friend bool operator < (Length a, Length b){
        return a.length_Inches < b.length_Inches;
    }
    friend bool operator == (Length a, Length b){
        return a.length_Inches == b.length_Inches;
    }
};

int main(){
    Length first(0);
    Length second(0);
    Length third(0);
    int f,i;
    cout<<"Enter a distance in feet and inches: ";
    cin>>f>>i;
    first.setLength(f, i);
    cout<<"Enter another distance in feet and inches: ";
    cin>>f>>i;
    second.setLength(f, i);
    
    // test + operator
     third = first + second;
  
   // third = first.operator +(second);  // friend is not memebr function
    cout<<"first + second = "<<third.getFeet()<<" feet "<<third.getInches()<<" inche"<<endl;
    // test - operator
    third = first - second;
    cout<<"first - second = "<<third.getFeet()<<" feet "<<third.getInches()<<" inche"<<endl;
    // test == operator
    third = first == second;
    cout<<"first == second "<<endl;
    if (first == second) {
        cout<<"true "<<endl;
    } else {
            cout<<"false "<<endl;
    }
    // test < operator
    third = first < second;
    cout<<"first < second "<<endl;
    if (first < second) {
        cout<<"true "<<endl;
    } else {
            cout<<"false "<<endl;
    }
    return 0;
}
*/
//===========full example===============
/*
class Length {
private:
    int length_Inches;
public:
    Length(int feet , int inches){
        setLength(feet , inches);
    }
    Length(int inches){
        length_Inches = inches;
    }
    int getFeet() const {
        return length_Inches/12;
    }
    int getInches() const {
        return length_Inches%12;
    }
    void setLength(int feet , int inches){
        length_Inches = 12  * feet + inches;
    }
    
// overload arithmetic and relational operators
    friend Length operator + (Length a, Length b){
        int t = (a.length_Inches + b.length_Inches);
        return Length(t);
    }
    friend Length operator - (Length a, Length b){
        return Length(a.length_Inches - b.length_Inches);
    }
    friend bool operator < (Length a, Length b){
        return a.length_Inches < b.length_Inches;
    }
    friend bool operator == (Length a, Length b){
        return a.length_Inches == b.length_Inches;
    }
    // Overloaded ++prefix postfix++ operator
    Length operator++ (){
       ++length_Inches;
        return *this;
    }
    Length operator++ (int){
        Length temp = *this;
        length_Inches ++;
        return temp;
    }
    //or
//    Length operator++ (){
//       ++length_Inches;
//        return Length(length_Inches);
//    }
//    Length operator++ (int){
//        length_Inches ++;
//        return Length(length_Inches);
//    }
    //====================overload bitwise operator <<,>> =======
    //overload stream input and output operators
    friend ostream  &operator << (ostream &output , Length a){
        // prompt for and read the object data
        cout<<a.getFeet() << " feet "<<a.getInches()<<" inches "<<endl;
        return output;
    }
    friend istream  &operator >> (istream &input , Length &a){
        int feet;
        int inches;
        cout<<"Enter feet ";
        cin>>feet;
        cout<<"Enter inches ";
        cin>>inches;
        // Modify the object a with the data and return
        a.setLength(feet, inches);
        return input;
    }
};

int main(){
    Length first(0);
    Length second(1,9);
    Length third(0);
    Length forth(0);
    cout << "Demonstrating prefix++ operator and output operator"<<endl;
    for (int i = 0; i< 4; i++){
        first = ++second;
        cout << "First: " <<first<< "Second: "<<second;
    }
    cout<<"====="<<endl;
    cout << "Demonstrating postfix++ operator"<<endl;
    for (int i = 0; i< 4; i++){
        first = second++;
        cout << "First: " <<first<< "Second: "<<second;
    }
    cout<<"====="<<endl;
    cout << "\nDemonstrating  input and output operators"<<endl;
     cin >> third;
    cout<<"You entred "<< third<<endl;
    
    cout << "Demonstrating arithmetic and relational operators"<<endl;
    forth = first + second;
    cout<<"forth is  "<< forth<<endl;
    return 0;
}
*/
//======
/*
class Length {
private:
    int length_Inches;
public:
    Length(int feet , int inches){
        setLength(feet , inches);
    }
    Length(int inches){
        length_Inches = inches;
    }
    int getFeet() const {
        return length_Inches;
    }
    int getInches() const {
        return length_Inches;
    }
    void setLength(int feet , int inches){
        length_Inches = feet + inches;
    }
    
// overload arithmetic and relational operators
    friend Length operator + (Length a, Length b){
        int t = (a.length_Inches + b.length_Inches);
        return Length(t);
    }
    friend Length operator - (Length a, Length b){
        return Length(a.length_Inches - b.length_Inches);
    }
    friend bool operator < (Length a, Length b){
        return a.length_Inches < b.length_Inches;
    }
    friend bool operator == (Length a, Length b){
        return a.length_Inches == b.length_Inches;
    }
    // Overloaded ++prefix postfix++ operator
    Length operator++ (){
       ++length_Inches;
        return Length(length_Inches);
    }
    Length operator++ (int){
        length_Inches ++;
        return Length(length_Inches);
    }
    //====================overload bitwise operator <<,>> =======
    friend ostream  &operator << (ostream &output , Length a){
        // prompt for and read the object data
        cout<<a.getFeet() << " feet "<<a.getInches()<<" inches "<<endl;
        return output;
    }
    friend istream  &operator >> (istream &input , Length &a){
        int feet;
        int inches;
        cout<<"Enter feet ";
        cin>>feet;
        cout<<"Enter inches ";
        cin>>inches;
        // Modify the object a with the data and return
        a.setLength(feet, inches);
        return input;
    }
};

int main(){
    Length first(0);
    Length second(1,9);
    Length third(0);
    Length forth(0);
    cout << "Demonstrating prefix++ operator and output operator"<<endl;
        first = ++second;
        cout << "First: " <<first<< "Second: "<<second;
    cout<<"====="<<endl;
    cout << "Demonstrating postfix++ operator"<<endl;
        first = second++;
        cout << "First: " <<first<< "Second: "<<second;
    cout<<"====="<<endl;
    cout << "\nDemonstrating  input and output operators"<<endl;
     cin >> third;
    cout<<"You entred "<< third<<endl;
    cout << "Demonstrating arithmetic and relational operators"<<endl;
    forth = first + second;
    cout<<"forth is  "<< forth<<endl;
    return 0;
}
 */

//========================Overloading the [] Operator====================
//Any C++ class can overload the array indexing operator[ ] to make its objects have array-like behavior. In fact, the vector and string library classes override [ ], enabling their objects to be indexed like array:

//int main (){
//    string str = "mad";
//    cout << str[0] <<endl;
//    str[0] = 'b';
//        cout << str[0] <<endl;
//    cout << str<<endl;
//}

//An overloaded [ ] operator must take a single argument of any type and can return a value of any type: ReturnType operator [ ] (input Type T)
/*
class Trans {
private:
    vector<string>numbers {
        "zero", "one","two", "three", "four", "five",
        "six", "seven", "eight", "nine", "ten"};
public:
    int operator [] (string num_str) {
        for(int k = 0; k<numbers.size(); k++) {
            if (numbers[k] == num_str){
                return k;
            }
        }
        return -1;
    }
};
int main (){
    Trans trans;
    cout<<"seven: "<<trans["one"]<<endl;
    cout<<"three: "<<trans["three"]<<endl;
    return 0;
}
*/
//========
/*
class Name {
private:
    string name[2];
public:
    Name(string f, string s){
        name[0] = f;
        name[1] = s;
    }
    string operator [] (int index) {
        return name[index];
    }
};

int main (){
        Name names("Hossam","Farfour");
        cout<<"first name: "<<names[0] <<endl;
        cout<<"second name: "<<names[1] <<endl;
        return 0;
}
 */
//=============
//name[1] will return a reference to the member variable first_name , and name[2] will return a reference to 1ast_name.
/*
class Name {
private:
    string FirstName;
    string LastName;
    void subError(){
        cout<<"Index must be 1 or 2"<<endl;
        exit(1);
    }
public:
    string &operator [] (int index) {
        switch (index) {
            case 1:
                return FirstName;
                break;
            case 2:
                return LastName;
                break;
            default:
                subError();
                break;
        }
        return LastName;
    }
};

int main (){
    Name name;
     //set first name
    name[1] = "Hossam";
    name[2] = "Farfour";
     //access first and second name
    cout<<"first name is: "<<name[1]<<" and secnod name is: "<<name[2]<<endl;
        return 0;
}
*/
 //============
/*
class marks {
private:
    int subject[3];
public:
    marks(int sub1 , int sub2, int sub3){
        subject[0] = sub1;
        subject[1] = sub2;
        subject[2] = sub3;
    }
    int operator [ ](int position) {
        return subject[position];
    }
};
int main (){
    marks someMarks(30,32,40);
    cout<<"first mark: "<<someMarks[0] <<endl;
    cout<<"second mark: "<<someMarks[1] <<endl;
    cout<<"third mark: "<<someMarks[2] <<endl;
    return 0;
}
*/

//=================Move Assignment and Move Constructor============
/*
class NumberArray {
private:
    int arraySize;
    double *aptr;
public:
    // overload operater function   // member function =========
    NumberArray &operator = (const NumberArray &right) {  // needed if I have (second =  first)
        cout<<"copy assighnment operator is running"<<endl;
        if (this != &right) { // chech if the address on left value != to address of right value
            if (arraySize > 0) {
                delete [] aptr;
            }
        }
        arraySize = right.arraySize;
        aptr = new double[arraySize];
        for (int i = 0 ; i<arraySize; i++) {
            aptr[i] = right.aptr[i];
        }
        return *this;
    }
     //constructor and other function..
    NumberArray(const NumberArray &obj) { // needed if i do not have (second =  first)
        cout<<"copy constructor operator is running"<<endl;
        arraySize = obj.arraySize;
        aptr = new double[arraySize];
        for (int i = 0; i<arraySize; i++) {
            aptr[i] = obj.aptr[i];
        }
    }
    //================Move Assignment and Move Constructor=========
    NumberArray &operator = (NumberArray && right){
        cout << "Move assignment is running\n"; // Trace
        if (this != &right) {  //& Lvalue
        swap(arraySize, right.arraySize);
        swap(aptr, right.aptr);
        }
        return *this;
    }
    NumberArray(NumberArray && temp){ //&& rvalue
        // "Steal" the resource from the temp object
        this->arraySize = temp.arraySize;
        this->aptr = temp.aptr;
        // Put the temp object in a safe state // for its destructor to run
        temp.arraySize = 0;
        temp.aptr = nullptr;
    }
    //=========================================================
    NumberArray(int zise, double value) {
        cout<<"regular constructor is running"<<endl;
        arraySize = zise;
        aptr = new double[arraySize];
        setvalue(value);
    }
    NumberArray() {
        cout<<"Default constructor is running"<<endl;
        arraySize = 2;
        aptr = new double[arraySize];
        setvalue(0.0);
    }
    void print() const {
        for (int i = 0 ; i<arraySize; i++) {
            cout<<aptr[i]<<" ";
        }
    }
    void setvalue(double val){
        for (int i = 0 ; i<arraySize; i++) {
            aptr[i]  = val;
        }
    }
    ~ NumberArray (){
        if (arraySize>0) {
            delete[] aptr;
            aptr = nullptr;
        }
        cout<<"Destroctor is running"<<endl;
    }
};
NumberArray makeArray();  //this is return object form a function

int main(){
    NumberArray first;
    first = makeArray();
    first.print();
    cout<<"======"<<endl;
    NumberArray secode = makeArray();
    cout<<"the object data is :"<<endl;
    first.print();
    cout<<endl;
    cout<<"======"<<endl;
    secode.print();
    cout<<endl;
    cout<<"======"<<endl;
    secode.setvalue(12.5);
    secode.print();
    cout<<endl;
    first.print();
    cout<<endl;
    
    NumberArray third;
    third.operator =(secode);
    third.print();
    return 0;
}
NumberArray makeArray(){
    NumberArray Arr(3, 10.5);
    return Arr;
}
*/

//===================Function Objects and Lambda Expressions======================

//A function object is an object of a class that overloads the function call operator. Function objects behave just like functions and can be passed as parameters to other functions. A lambda expression is a convenient way of creating a function object.

// overloading the function call operator is very similar to overloading the array subscript operator [ ], the main difference being that the function call operator can take any number of arguments. The following code illustrates how to create SumFunctor function objects and call them to print sums of pairs of numbers.

//int sum(int a, int b) {
//    return a+ b;
//}
// similar to lambda Expressions
/*
class SumFunctor  {
public:              // must be inside the class call with the name of the class.
    int operator()(int a, int b) { //this Lambda Expressions to create object function
    return a + b;
    }
};

int main(){
    SumFunctor s1;
    SumFunctor s2;
    SumFunctor s3;
    cout<<s1(12, 12)<<endl;
    cout<<s2(10, 10)<<endl;
    cout<<s3(1, 9)<<endl;
    cout<<SumFunctor()(12,5)<<endl;
}
*/

/*
int main() {
  // lambda function that takes two integer
  //  parameters and displays their sum
  auto add = [] (int a, int b) {  auto decide the return type.
   cout << "Sum = " << a + b<<endl;
  };
  // call the lambda function
  add(10, 20);
  return 0;
}
 */
//==lambda function is equivalent to ==
/*
void add(int a, int b) {
    cout << "Sum = " << a + b<<endl;;
}
int main (){
    add(10, 20);
}
 */
//=========================Predicates====================
//A predicate is a function that returns a Boolean value, and a unary predicate is one that takes a single argument . You use a unary predicate to determine whether a given object has a certain characteristic . For example, you can use the following class to create function objects that are unary predicates capable of determining whether an integer is even.
/*
class IsEven {
    public:
    bool operator()(int x){
    return x %2 == 0;
    }
};
class LessThan {
    public:
    bool operator()(int a, int b){
    return a < b ;
    }
};
//The following code shows how to use a predicate function object created from this class.
int main() {
    int number;
    cout << "Enter an integer: ";
    cin>>number;
    if (IsEven ()(number)) {
        cout << "Even "<<endl;
    } else {
        cout << "Odd"<<endl;
    }

    if (LessThan()(14,13)) {
        cout << "a is < then b "<<endl;
    } else {
        cout << "a is > then b"<<endl;
    }
    
}
 */

//============Sorting Arrays and Vectors==========
//void sort(begin, end, compare)
 /*
class LessThan {
    public:
    bool operator()(int a, int b){
    return a < b ;
    }
};

int main(){
    //==sort array==
    int array[] = {12,15,10,11,17,9};
    sort(array, array+6,LessThan());
    cout<<"my array is sorted"<<endl;
    for (int i = 0; i<6; i++) {
        cout<< array[i]<<" ";
    }
    cout<<endl;
    //==sort vector==
    vector<int>vec{12, 89, 34, 15, 11 };
    sort(begin(vec), end(vec),LessThan());
    cout<<"my vector is sortedc"<<endl;
    for (int i = 0; i<5; i++) {
        cout<< vec[i]<<" ";
    }
    cout<<endl;
    //== perdict==
    if (LessThan()(14,13)) {
        cout << "a < b "<<endl;
    } else {
        cout << "a > b"<<endl;
    }
    return 0;
}
*/
//====================Removing Elements From a Vector==================
//remove_ if(begin, end, unary_predicate)
/*
class IsEven {
    public:
    bool operator( )(int x){
    return x %2 == 0;
    }
};
class sorted {
    public:
    bool operator( )(int x , int b){
    return x < b;
    }
};
int main(){
    vector<int>vector {12, 13, 36, 8, 7, 44} ;
    int array[] {12,15,10,11,17,9};
    
    sort(begin(array), end(array), sorted());
    cout<<"my array now is sorted: "<<endl;
    for (int i : array) {
        cout<<i<<" ";
    }
    cout<<endl;
    auto remove = remove_if(vector.begin(), vector.end(), IsEven());
    cout<<"my vector now is "<<endl;
    for (int i : vector) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout <<"here is the vector after call erase"<<endl;
    vector.erase(remove,vector.end());
    for (int i : vector) {
        cout<<i<<" ";
    }
    cout<<endl;
}
*/
//==========
/*
class isDivisibleBy {
    int divisible;
public:
    isDivisibleBy(int b){
        divisible = b;
    }
    bool operator()(int x){
        return x % divisible == 0;
    }
};
int main(){
    int number;
    cout << "Enter an integer: ";
    cin>>number;
    if (isDivisibleBy(7)(number)) {
        cout << "is DivisibleBy "<<endl;
    } else {
        cout << "is not DivisibleBy"<<endl;
    }
}
*/
//==============Void Returning Function Objects=============
/*
class printSquare {
public:
    void operator()(int a){
        cout<< a * a << endl;
    }
};
int main(){
    vector<int>vector {1,2,3,4,5,6};
    cout<<"printing square of each elemnet"<<endl;
    for_each(begin(vector), end(vector), printSquare());
    cout<<endl;
    return 0;
}
*/

//==============Functional Classes in the C++ Library=============
//Function objects are so useful that the C++ library defines a number of classes that can be instantiated to create function objects you can use in your program.
//The use of these classes requires the inclusion of the <functina1> header file.

 // less<T>()           less<T>()(T a, T b} is true if and only if a < b
 // less_equal<T>()     1ess _equal()(T a, T b) is true if an only if a <= b
 // greater<T>()        greater<T>()(T a, T b) is true if and only if a > b
 // greater_equal<T>()  greater_equa1<T>()(T a, T b} is true if and only if a >= b
/*
int main(){
    double values[] {12.5,78.2,8.34,48.0,-7.5};
    string words[] {"the","quick","brown","fox","jumps",
                    "over","the","lazy","dog"};
    //display array of numbers
    cout<<"Orginal arrya of numbers are :"<<endl;
    for (auto i : values) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Sort array of numbers and display:"<<endl;
    sort(begin(values), end(values), less<double>()); // descending order
    for (auto i : values) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    //display array of words
    cout<<"Orginal arrya of words are :"<<endl;
    for (auto i : words) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Sort array of words and display:"<<endl;
    sort(begin(words), end(words), greater<string>()); // descending order
    for (auto i : words) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}
*/

//=====================Lambda Expressions=================
// A lambda expression is a compact way of creating a function object from a class whose only member is the function call operator. The lambda expression does away with the class declaration and uses a streamlined notation for expressing the logic of the function call operator.
//[capture clause] (parameter list) { function body}
//the lambda expression for a function object that computes the sum of two integers is
   // [](int a, int b) { return x + y; }
// checking the value is even
   // [](inta) {return a%2 == O;}
// time
   // [](int a) { cout << a * a <<" "; }
/*
int main (){
    int x = 2;
    int y = 5;
    cout<<[](int a, int b) {return a + b;}
    (x,y);
    cout<<endl;
}
*/
/*
int main (){
    double values[]{ 12.7, 45.9, 6.9 };
    sort(begin(values), end(values),[](auto a, auto b){return a > b;}); //descending order
    for(auto i :values){
        cout<<i<<" ";
    }
    cout<<endl;
}
*/
//Because lambda expressions are function objects, you can assign a lambda to a variable of a suitable type and call it through the variable's name. For example, you can assign a name to a lambda expression like this:
             //auto compare = [](auto a, auto b) {return a> b;};
/*
int main (){
    double values[]{ 12.7 , 45.9, 6.9 };
    auto compare = [](auto a , auto b){return a>b;}; //lambda expersion //descending order
    sort(begin(values), end(values),compare);
    for(auto i :values){
        cout<<i<<" ";
    }
    cout<<endl;
}
*/
//====================Type Conversion Operators================
//Special operator functions may be written to convert a class object to any other type.
//Data type conversion happens "behind the scenes" with the built-in data types. For instance , suppose a program uses the following variab les:
// int i;
// double d;
// d = i; //convert i to double and store it in d
// i = d; //convert d to int and store it in i
//an operator function must be written to perform the conversion.
/*
class Length {
private:
    int length_Inches;
public:
    Length(int feet , int inches){
        setLength(feet , inches);
    }
    Length(int inches):length_Inches(inches){
    }
    int getFeet() const {
        return length_Inches/12;
    }
    int getInches() const {
        return length_Inches%12;
    }
    void setLength(int feet , int inches){
    length_Inches = 12  * feet + inches;
    }
//=========Type Conversion Operators======
    operator double() const {
        return length_Inches /12 + (length_Inches %12)/12.0;
    }
    operator int() const {
        return length_Inches;
    }

    //overload stream output opertator
    friend ostream  &operator << (ostream &output , Length a){
        // prompt for and read the object data
        cout<<a.getFeet()<< " feet "<<a.getInches()<<" inches "<<endl;
        return output;
    }
};

int main(){
    Length distance(0);
    double feet;
    int inches;
    distance.setLength(4, 6);
    cout << "the length object is "<<distance<<endl;
    // convert and print
    feet = distance;
    inches = distance;
    cout << "The length object measures "<<feet<<" feet."<<endl;
    cout << "The length object measures "<<inches<<" measures."<<endl;
    return 0;
}
*/
//======================Convert Constructors=========================
// In addition to providing a means for the creation of objects, convert constructors provide a way for the compiler to convert a value of a given type to an object of the class.
/*
class IntClass {
private:
  int value;
  public:
// Convert constructor from int
    IntClass (int intValue) {
        value = intValue;
    }
  int getValue() const {
      return value;
  }
};
// Since the constructor IntClass(int) takes a single parameter of a type other than IntClass, it is a convert constructor.
void printvlaue(IntClass x); // pass object to a function

int main(){
    
    IntClass intObject = 0; // initialized
    intObject = 24;          // assigned
    cout<<"the value is "<< intObject.getValue()<<endl;
    printvlaue(intObject);
    return 0;
}
void printvlaue(IntClass x){
    cout<<x.getValue()<<endl;
}
*/
//===========
/*
class IntClass {
private:
  int value;
  public:
// Convert constructor from int
    IntClass (int intValue) {
        value = intValue;
    }
  int getValue() const {
      return value;
  }
};

void printvlaue(IntClass x);
IntClass fun (int val);

int main(){
    
    IntClass intObject = 23; // initialized
    cout<<"the value is: "<<intObject.getValue()<<endl;
    intObject = 24;  // assigned
    cout<<"the value is: "<<intObject.getValue()<<endl;
    // pass an int to a function expecting Inclass.
    cout<<"the value is: ";
    printvlaue(25);
    //demonstrate conversion on a return
    intObject = fun(26);
    cout<<"the value is: ";
    printvlaue(intObject);
    
    return 0;
}

void printvlaue(IntClass x){
    cout<<x.getValue()<<endl;
}
//This function returns an int even though an IntClass object is declared as the return type.
IntClass fun (int intValue){
    return intValue;
}
 */
