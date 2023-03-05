#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // need for STL
using namespace std;



// function template
//A function template is a "generic" function that can work with different data types. The programmer writes the specifications of the function but substitutes parameters for data types. When the compiler encounters a call to the function, it generates code to handle the specific data type(s) used in the call.

//Function templates allow you to write a single function definition that works with many different data types, instead of having to write a separate function for each data type used.

//A function template is not an actual function, but a "mold" the compiler uses to generate one or more functions.

//When writing a function template, you do not have to specify actual types for the parameters, return value, or local variables. Instead, you use a type parameter to specify a generic data type
/*
template <class T>
class Joiner
{
public:
   T combine(T x, T y)
      {
        return x + y;
      }
};
int main()
{
    Joiner<double> z;
    cout << z.combine(3.0, 5.0)<<endl;
    
    Joiner<string> sd;
    cout << sd.combine("Hi ", "Hossam")<<endl;
    
    return 0;
}
*/

/*
template<class T>
T square (T number)
{
    return number * number;
}
int main()
{
   int iValue ;
    cout<< "Enter an integer:"<<endl;
    cin>>iValue;
    cout<<"the square is: "<<square(iValue)<<endl;
    cout<<"enter a double: "<<endl;
    double dvalue;
    cin>>dvalue;
    cout<<"the square for double is: "<<square(dvalue)<<endl;
    return 0;
}
*/

//=====this function is used for swaping two objects=====
/*
template<class T>
void swapping(T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
}
 int main()
{
    //same ways for all data type
    char firstchar,secondchare;
    cout<<"enter two charectors "<<endl;
    cin>>firstchar>>secondchare;
     //swap(firstchar,secondchare);
    swapping(firstchar,secondchare);
    cout<<firstchar <<" "<<secondchare<<endl;
    
    
    int firstint,secondint;
    cout<<"enter two integer"<<endl;
    cin>>firstint>>secondint;
    //swap(firstint,secondint);
    swapping(firstint,secondint);
    cout<<" the firest int is "<<firstint<<" the second int "<<secondint<<endl;
    return 0;
}
*/

//=======Using Operators in Function Templates=======
/*
template<class T>
T minimum (T array[],int size)
{
    T smallest = array[0];
    for(int i = 1;i<size; i++)
    {
        if (array[i] < smallest)
            smallest = array[i];
    }
    return smallest;
}

int main()
{
    int arry1[] = {40,2,35};
    cout<<"the minimum number is "<<minimum(arry1, 3)<<endl;
    
    string arry2[] = {"sobh","mustafa","hossam","testeing"};
    cout<<"the minimum string is "<<minimum(arry2, 4)<<endl;
    return 0;
}
*/

//=====Function Templates with Multiple Types====
/*
template<class T1, class T2, class T3>
void echoAndReverse(T1 a1, T2 a2 , T3 a3){
    cout<<"Original order is: "
    << a1 <<" "<< a2 <<" "<<a3 <<endl;
    cout<< "Reversed order is: "
    <<a3<<" "<<a2<<" "<<a1<<endl;
}
int main(){
    echoAndReverse("computer", 'A', 32);
    echoAndReverse("One", 4, "All");
    return 0;
}
*/

 //=====Overloading with Function Templates=====
/*
template<class T>
T sum (T val1,T val2)
{
    return val1 + val2;
}
template<class T>
T sum (T val1,T val2,T val3)
{
    return val1 + val2 + val3;
}

int main()
{
    double num1,num2,num3;
    cout<<"enter two numbers "<<endl;
    cin>>num1>>num2;
    cout<<"the sum is "<<sum(num1,num2)<<endl;
    
    cout<<"enter three numbers "<<endl;
    cin>>num1>>num2>>num3;
    cout<<"the sum is "<<sum(num1,num2,num3)<<endl;
        return 0;
}
*/

// ==how iterator and related concepts can be used===
/*
template<typename T>
void print(T x,T y)
{
    auto iterator = x;
    while (iterator != y) {
        cout<<*iterator<<" ";
        iterator++;
    }
    cout<<endl;
}

int main()
{
    //print an array of string
    string names[] {"anna ","bob ","huck"};
    print(begin(names),end(names));
    
    //print a vector of intagers
    vector<int>vec {10,20,30};
    print(begin(vec), end(vec));
    
    //more thing can do on vectors
    // the first item in the array
    cout<<vec.at(0)<<endl;
    
    //cout<<vec.capacity()<<endl;
    
    //vec.clear();
    //print(begin(vec), end(vec));
        return 0;
}
*/

//=============================
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
    iter = find(numbers.begin(),numbers.end(),3);
        cout<<"the value srearched is "<<*iter<<endl;
        cout<<"the value "<<*iter<<" "<<" was found in the vector"<<endl;
     cout<<endl;
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

//=============revision=================
/*
template <class T>
T getMax(T a, T b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

template <class T>
void printVector(vector<T> myVector) {
    for (auto x : myVector) {
        cout << x << " ";
    }
    cout << endl;
}

class MyClass
{
public:
    int value;
    bool operator > (MyClass a) {
        if (this->value > a.value) {
            cout<<"val 1 is > val 2"<<endl;
            return true;
        }
        else {
            cout<<"val 1 is < val 2"<<endl;
            return false;
        }
    }
};

template <class T>
class MyPair
{
public:
    T pair[2];
    T returnSmallest(){
        if (pair[0] < pair[1]){
            return pair[0];
        }
        else {
            return pair[1];
        }
    }
};
int main()
{
    cout << getMax(1, 2) << endl;
    cout << getMax("hello", "world") << endl;
    cout << getMax(4.34, 3.14) << endl;

   MyClass one, two;

   one.value = 300;
   two.value = 200;
   cout<<getMax(one.value, two.value)<<endl;
    if (one > two) {
    }
    vector<int>intVector;
    for (int i = 0; i <= 50; i++) {
        intVector.push_back(i* 1-9);
    }
    printVector(intVector);

    vector<char>charVector;
    charVector.push_back('H');
    charVector.push_back('O');
    charVector.push_back('S');
    charVector.push_back('S');
    charVector.push_back('A');
    charVector.push_back('M');
    printVector(charVector);

    MyPair<int> intPair;
    intPair.pair[0] = 9;
    intPair.pair[1] = 7;
    cout << intPair.returnSmallest() << endl;

    MyPair<string> stringPair;
    stringPair.pair[0] = "Hello";
    stringPair.pair[1] = "World";
    cout << stringPair.returnSmallest() << endl;
}
*/

//==================class template========================

//Beginning with C++ 11, you may use the key word typename in place of class in the template prefix . So the template prefix can be written as template<typename T>.

//Templates may also be used to create generic classes and abstract data types.

 //Class templates can be used whenever we need several classes that only differ in the types of some of their data members or in the types of the parameters of their member functions.
/*

// Exception for index out of range
struct IndexOutOfRangeException {
    const int index;
    IndexOutOfRangeException(int x):index(x) {
        
    }
};
template<class T>
class Simplevector {
private:
    int arrayZise;
    unique_ptr<T[]>aptr;
  
public:
    Simplevector(int s);
// {
//        arrayZise = s;
//        aptr = make_unique<T[]>(s);
//        for (int i = 0; i<arrayZise; i++) {
//            aptr[i] = T();
//  }
    Simplevector(const Simplevector &obj);
//    { // copy constructor for Simplevector class
//        arrayZise = obj.arrayZise;
//        aptr = make_unique<T[]>(arrayZise);
//        for (int i = 0; i<arrayZise; i++) {
//            aptr[i] = obj[i];
//        }
//    }
    int size()const {
        return arrayZise;
    }
    T &operator[](int sub);   //overload operator //rovide a subscript operator
//    {
//        if (sub < 0 || sub >= arrayZise) {
//            throw IndexOutOfRangeException(sub);
//        }
//        return aptr[sub];
//    }
    void print() const;
//    {
//        for (int i = 0; i<arrayZise; i++) {
//            cout<<aptr[i]<<" ";
//            cout<<endl;
//      }
//    }
};
//or in method difinition

template <class T>
  Simplevector<T>::Simplevector(int s) {
    arrayZise = s;
    aptr = make_unique<T[]>(arrayZise);
    for (int i = 0; i<arrayZise; i++) {
        aptr[i] = T();
    }
}

template <class T>
Simplevector<T>::Simplevector(const Simplevector &obj) { // copy constructor for SimpleVwctor class
    arrayZise = obj.arrayZise;
    aptr = make_unique<T[]>(arrayZise);
    for (int i = 0; i<arrayZise; i++) {
        aptr[i] = obj.aptr[i];
    }
}

template <class T>
T &Simplevector<T>::operator[](int sub)  //overload operator
{
    if (sub<0 || sub>= arrayZise) {
        throw IndexOutOfRangeException(sub);
    }
    return aptr[sub];
}

template <class T>
void Simplevector<T>::print() const
{
    for (int i = 0; i<arrayZise; i++) {
        cout<<aptr[i]<<" ";
  }
    cout<<endl;
}


int main(){
    const int SIZE = 10;
    Simplevector<int>intTable(SIZE);
    Simplevector<double>doubleTable(SIZE);
    // Store values in the arrays
    for (int i = 0; i < SIZE; i++) {
       intTable[i] = (i * 2);
        doubleTable[i] = (i * 2.14);
  }
    //display thye values
    cout<<"These values are in intTable"<<endl;
        intTable.print();
    cout<<"These values are in doubleTable"<<endl;
        doubleTable.print();

    // use the built in + operator on array elemnts
    for (int i = 0; i < SIZE; i++) {
        intTable[i] += 5;
         doubleTable[i] += 1.5;
  }
    //display thye values
    cout<<"+ operator-these values are in intTable"<<endl;
        intTable.print();
    cout<<"+ operator-these values are in doubleTable"<<endl;
        doubleTable.print();
  
    // use the built in ++ operator on array elemnts
    for (int i = 0; i < SIZE; i++) {
        intTable[i]++;
         doubleTable[i]++;
  }
    //display thye values
    cout<<"++ operator-these values are in intTable"<<endl;
        intTable.print();
    cout<<"++ operator-these values are in doubleTable"<<endl;
        doubleTable.print();
    cout<<endl;
    return 0;
}
 
*/
//===============Class Templates and Inheritance==============

/*
// Exception for index out of range
struct IndexOutOfRangeException {
    const int index;
    IndexOutOfRangeException(int x):index(x){
        
    }
};
template<class T>
class Simplevector {
private:
    int arrayZise;
    unique_ptr<T[]>aptr;
public:
    Simplevector(int s);
    Simplevector(const Simplevector &obj);
    int size()const {
        return arrayZise;
    }
    T &operator[](int sub);   //overload operator //rovide a subscript operator
    void print() const;
};
//Method difinition

template <class T>
  Simplevector<T>::Simplevector(int s) {
    arrayZise = s;
    aptr = make_unique<T[]>(s);
    for (int i = 0; i<arrayZise; i++) {
        aptr[i] = T();
    }
}

template <class T>
Simplevector<T>::Simplevector(const Simplevector &obj) { // copy constructor for SimpleVwctor class
    arrayZise = obj.arrayZise;
    aptr = make_unique<T[]>(arrayZise);
    for (int i = 0; i<arrayZise; i++) {
        aptr[i] = obj[i];
    }
}

template <class T>
T &Simplevector<T>::operator[](int sub)  //overload operator
{
    if (sub<0 || sub>= arrayZise) {
        throw IndexOutOfRangeException(sub);
    }
    return aptr[sub];
}

template <class T>
void Simplevector<T>::print() const
{
    for (int i = 0; i<arrayZise; i++) {
        cout<<aptr[i]<<" ";
  }
    cout<<endl;
}
//===
template<class T>
class SearchVector : public Simplevector<T> {
public:
    SearchVector(int S): Simplevector<T>(S){
        
    }
    // copy constructor
    SearchVector(const SearchVector &obj);
        
    // additional constructor
    SearchVector(const Simplevector<T> &obj): Simplevector<T>(obj){
    }
    int findItem(T item){
        for (int i = 0; i < this->size(); i++){
            if(this->operator[](i) == item)
               return i;
        }
        return -1;
    }
};

template<class T>
SearchVector<T>::SearchVector(const SearchVector &obj):
    Simplevector<T>(obj) {
 }


int main(){
    const int SIZE = 10;
    SearchVector<int>intTable(SIZE);
    SearchVector<double>doubleTable(SIZE);
    // Store values in the arrays
    for (int i = 0; i < SIZE; i++) {
       intTable[i] = (i * 2);
        doubleTable[i] = (i * 2.14);
  }
    //display thye values
    cout<<"These values are in intTable"<<endl;
        intTable.print();
    cout<<"These values are in doubleTable"<<endl;
        doubleTable.print();

    // Now search for a value
    int result;
    cout<<"search for 6 in intTable"<<endl;
    result = intTable.findItem(6);
    if (result == -1) {
        cout<<"vlaue is not found in the intTable"<<endl;
    } else {
        cout<<"vlaue is found in the intTable at subscribt "<<result+1<<endl;
    }
    cout<<"search for 12.84 in doubleTable"<<endl;
    result = doubleTable.findItem(12.84);
    if (result == -1) {
        cout<<"vlaue is not found in the doubleTable"<<endl;
    } else {
        cout<<"vlaue is found in the doubleTable at subscribt "<<result+1<<endl;
    }
    return 0;
}
*/

