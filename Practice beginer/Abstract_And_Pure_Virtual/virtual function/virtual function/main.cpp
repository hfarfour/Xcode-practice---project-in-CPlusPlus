
#include <iostream>
#include <string>
#include <vector>
using namespace std;



// polymorphism (secion 34)
//the same entity (function or object) behaves differently in different scenarios.
// 1- use with virtual function
// 2- use pointer to point to the object from any derived class. ->

// There are two kind of  Polymorphism:
// A- Compile time Polymorphism  // Method overload //
// B- Run time Polymorphism      //Method override //


//CONCEPT : Virtual functions allow the most specific version of a member function in an inheritance hierarchy to be selected for execution. Virtual functions make polymorphism possible.

/*
class shape {
private:
    string color;
public:
    shape(string c){
        color = c;
    }
virtual int area()  //telling the compiler that this method is going to be overriden
    {
       cout<<"parents class area :"<<"\n";
        return 0;
    }
virtual void draw() {
        cout<<"draw parents shape in : "<<color<<"  color"<<endl;
    }
virtual void erase() {
        cout<<"erase the parent shape "<<endl;
    }
};

class rectangle : public shape {
private:
    int length;
    int width;
public:
    rectangle(int l,int w ,string c):shape (c) {
        length = l;
        width = w;
    }
    int area() {
        cout<<"rectangle class area  : "<<(width * length)<<endl;
        return (width * length);
    }
    void draw(){
        cout<<"draw rectangle "<<endl;
    }
    void erase(){
        cout<<"the rectangle erase "<<endl;
    }
};
class circal : public shape {
private:
    int radius;
public:
  circal(int r,string c):shape(c){
        radius = r;
    }
    int area(){
        cout<<"circal area  :"<<3.14 * (radius * radius)<<endl;
        return (3.14 * radius * radius);
    }
    void draw(){
        cout<<"draw circal"<<endl;
    }
    void erase(){
        cout<<"the ciracal erase"<<endl;
    }
};

int main()
{
    shape* SomeShape;           //used pointer with Polymorphism
    rectangle rec(10,7,"red");  // object from Rectangle class
    circal c(5,"yellow");       // object from Circal class
    SomeShape = &rec; //very importrant//use with pointer to share to a specific method
    SomeShape -> area();
    SomeShape -> draw();

    SomeShape = &c;
    SomeShape->area();
    SomeShape->draw();
    
    //or
//    shared_ptr<shape>SomeShape = make_shared<rectangle>(10,7,"red");
//    SomeShape -> area();
//    SomeShape -> draw();
//
//    shared_ptr<shape>SomeShap = make_shared<circal>(5,"yellow");
//    SomeShap ->area();
//    SomeShap ->draw();
    
    return 0;
}
*/
//=========================================
//as you can see from the program's output. The reason is that the the two functions have different parameter types, so functionA in the Derived class does not override functionA in the Base class. The function in the base class takes an int argument, but the one in the derived class takes a long argument. So, functionA in the Derived class merely overloads functionA in the Base class.
/*
class Base {
private:
public:
    virtual void functionA (int arg){
        cout << "This is Base:: functionA" << endl;
    }
};
class Derived : public Base {
private:
public:
     void functionA (long arg){ // to voerride need same signiture
        cout << "This is Derived:: functionA" << endl;
    }
};
int main(){
    // Base pointer b points to a Derived class object .
    shared_ptr<Base>p = make_shared<Derived>();
    //Call virtual functionA through Base pointer.
    p->functionA(99);
    return 0;
}
*/
//=========override==========
//To make sure that a member function in a derived class overrides a virtual member function in a base class, you can place the override key word just after the derived class's function prototype (or the function header, if the function is written inline). The override key word tells the compiler that the function is supposed to override
/*
class Base {
private:
public:
    virtual void functionA (int arg) {
        cout << "This is Base:: functionA" << endl;
    }
};
class Derived : public Base {
private:
public:
   virtual  void functionA (int arg) override {
        cout << "This is Derived:: functionA" << endl;
    }
};
int main(){
    // Base pointer b points to a Derived class object .
    shared_ptr<Base>p = make_shared<Derived>();
    //Call virtual funct i onA through Base pointer.
    p->functionA(99);
    return 0;
}
 */

//================================
/*
class Dog {
protected:
    double weight;
public:
    Dog(double w) {
        weight = w;
    }
    virtual void bark() {
        cout << "I am a dog weighing " <<weight<<" pounds."<< endl;
    }
};
class SheepDog : public Dog {
protected:
    int numberOfSheep;
public:
    SheepDog(double w,int numSheep):Dog(w) {
        numberOfSheep = numSheep;
    }
     void bark() {
         cout << "I am a sheepDog weighing "<<weight<<" pounds \n and guarding "<<numberOfSheep <<" sheeps."<<endl;
    }
};

int main() {
    // greate vector of pointers to shapes
    vector<shared_ptr<Dog>>kennel {
        make_shared<Dog>(40.5),
        make_shared<SheepDog>(45.3,50),
        make_shared<Dog>(24.7)
    };
    //Walk by each kennel and make the dog bark
    for (int i = 0; i < kennel.size(); i++) {
        cout <<i+1<<": ";
        kennel[i]->bark();
    }
    //or
//    shared_ptr<Dog>dogs = make_shared<Dog>(47.50);
//    dogs->bark();
//    shared_ptr<Dog>dog = make_shared<SheepDog>(53.3,50);
//    dog->bark();
    return 0;
}
 */
