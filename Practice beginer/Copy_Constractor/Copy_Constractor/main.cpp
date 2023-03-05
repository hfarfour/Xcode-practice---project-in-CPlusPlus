//
//  main.cpp
//  Copy_Constractor
//
//  Created by Hossam Farfour on 11/11/2022.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

//a copy assignment operator MyClass & operator = (constMyclass &)
//a copy constructor MyClass (const MyClass &)
//a move constructor MyClass(MyClass &&)

// when i have pointer in copy condtractor o must creat copy of that inctrctor first (tacke singhle premeter) -(NumberArray(NumberArray &obj)-

// A copy constructor is a special constructor that is called whenever a new object is created and initialized with the data of another object of the same class.

//============The Default Copy Constructor===============
/*
class Address {
private:
    string street;
    string job;
public:
    Address(): street("unknown"),job("Unknown") {
    }
    Address(string st, string j): street(st),job(j) {
    }
    void setStrret(string st){
        street = st;
    }
    void setJob(string j){
        job = j;
    }
    string getStreet(){
        cout << "The street name is ";
        return street;
    }
    string getJob(){
        cout << "The job title is ";
        return job;
    }
};

int main() {
    
    Address mary;
    mary.setStrret("Wyindham place");
    mary.setJob("IT");
    cout<<mary.getStreet()<<endl;
    cout<<mary.getJob()<<endl;
    //sam and mary lives at the same address
    Address sam = mary;
    cout << "sam and mary lives and work at the same place \n";
    cout<<"sam address "<<sam.getStreet()<<endl;
    cout<<"sam job "<<sam.getJob()<<endl;
    cout << "sam has moved address \n";
    sam.setStrret("Clos Dewi Sant");
    cout<<sam.getStreet()<<endl;
    cout << "chech mary address  \n";
    cout<<mary.getStreet()<<endl;
    return 0;
}
*/

//============Default Copy Constructors with smart pointer=============
// when you change one value the other will get changed too.
// in pointer when we change one vlaue of the object then second will get change too because both object pointing to the same data
/*
class NumberArray {
private:
    int arraySize;
    double *aptr = nullptr;
public:
    NumberArray(int zise, double value){
        arraySize = zise;
        aptr = new double[arraySize];  // dynamic allocation must be in  constractor
        setvalue(value);
    }
    void print() {
        for (int i = 0 ; i<arraySize; i++) {
            cout<<aptr[i]<<" ";
        }
    }
    void setvalue(double val){
        for (int i = 0 ; i<arraySize; i++) {
            aptr[i]  = val;
        }
    }
};
int main(){
    NumberArray first(3 , 10.5);
    NumberArray second = first;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The value stored in first object is "<<endl;
    first.print();
    cout<<endl;
    cout<<"The value stored in secnod object is "<<endl;
     second.print();
    cout<<endl;
    cout<<"The second value will change "<<endl;
    second.setvalue(15.5);
    second.print();
    cout<<endl;
    first.print();
    cout<<endl;
    
    return 0;
}
*/
//=====
/*
class NumberArray {
private:
    int arraySize;
    double *aptr = nullptr;
public:
    NumberArray(int zise, double value){
        arraySize = zise;
        aptr = new double[arraySize];  // dynamic allocation must be in  constractor
    }
    void print() {
        for (int i = 0 ; i<arraySize; i++) {
            cout<<aptr[i]<<" ";
        }
    }
    void setvalue(double val){
        for (int i = 0 ; i<arraySize; i++) {
            aptr[i]  = val;
        }
    }
    ~NumberArray()
    {
        delete aptr; // delete must be here
        aptr  = nullptr;
        cout<<"destroy oject of NumberArray  "<<arraySize<<endl;
    }
};
int main(){
    
    NumberArray *first = new NumberArray (3, 10.50);
   // first->setvalue(11.5);
    //or
    (*first).setvalue(11.5);
    NumberArray second = *first;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The value stored in first object is "<<endl;
    first->print();
    cout<<endl;
    cout<<"The value stored in secnod object is "<<endl;
     second.print();
    cout<<endl;
    cout<<"The second value will change "<<endl;
    second.setvalue(15.5);
    second.print();
    cout<<endl;
    first->print();
    cout<<endl;
    return 0;
}
*/
//==============================================
//A programmer can define a copy constructor for a class. A programmer-defined copy constructor must have a single parameter that is a reference to the same class. Thus, in the case of the previous example, the prototype for the copy constructor would be:
//  NumberArray (const NumberArray &obj)//====== important ======

// add one more constructor takes a sibgle paraameter to avoid alerting other object of the same class.
/*
class NumberArray {
private:
    int arraySize;
    double *aptr = nullptr;
public:
    NumberArray(const NumberArray &obj){ // very importact code to chnage the value without evecting the second value
        arraySize = obj.arraySize;
        aptr = new double[arraySize];
        for (int i = 0; i<arraySize; i++) {
            aptr[i] = obj.aptr[i];
        }
    }
    NumberArray(int zise, double value){
        arraySize = zise;
        aptr = new double[arraySize];
        setvalue(value);
    }
    void print() {
        for (int i = 0 ; i<arraySize; i++) {
            cout<<aptr[i]<<" ";
        }
    }
    void setvalue(double val){
        for (int i = 0 ; i<arraySize; i++) {
            aptr[i]  = val;
        }
    }
};
int main(){
    
    NumberArray first(3 , 10.5);
   // NumberArray second(3 , 1.5);
    NumberArray second = first;  // copy constractr
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The value stored in first object is "<<endl;
    first.print();
    cout<<endl;
    cout<<"The value stored in secnod object is "<<endl;
     second.print();
    cout<<endl;
    cout<<"==================="<<endl;
    cout<<"The second value will change "<<endl;
    second.setvalue(15.5);
    second.print();
    cout<<endl;
    cout<<"chech the first value "<<endl;
    first.print();
    cout<<endl;
    
    return 0;
}
*/
//==================
/*
class NumberArray {
private:
    int arraySize;
    double *aptr = nullptr;
public:
    NumberArray(const NumberArray &obj){ // very importact code to chnage the value without evecting the second value
        arraySize = obj.arraySize;
        aptr = new double[arraySize];
        for (int i = 0; i<arraySize; i++) {
            aptr[i] = obj.aptr[i];
        }
    }
    NumberArray(int zise, double value){
        arraySize = zise;
        aptr = new double[arraySize];  // dynamic allocation must be in  constractor
    }
    void print() {
        for (int i = 0 ; i<arraySize; i++) {
            cout<<aptr[i]<<" ";
        }
    }
    void setvalue(double val){
        for (int i = 0 ; i<arraySize; i++) {
            aptr[i]  = val;
        }
    }
    ~NumberArray()
    {
        delete aptr; // delete must be here
        aptr  = nullptr;
        cout<<"destroy oject of NumberArray  "<<arraySize<<endl;
    }
};
int main(){
    
    NumberArray *first = new NumberArray (3, 10.50);
    first->setvalue(11.5);
    NumberArray second = *first;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The value stored in first object is "<<endl;
    first->print();
    cout<<endl;
    cout<<"The value stored in secnod object is "<<endl;
    second.print();
    cout<<endl;
    cout<<"The second value will change "<<endl;
    second.setvalue(15.5);
    second.print();
    cout<<endl;
    cout<<"Check the first value "<<endl;
    first->print();
    cout<<endl;
    return 0;
}
*/

