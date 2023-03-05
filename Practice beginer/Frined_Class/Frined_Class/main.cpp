//
//  main.cpp
//  Frined_Class
//
//  Created by Hossam Farfour on 10/11/2022.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;
// friend function id not member function that means If i have inheritance will not inherit frined function.
//A friend is a function that is not a member of a class but has access to the private members of the class.

//As mentioned before, it is possible to make an entire class a friend of another class. The Student class could make the Person class its friend with the following declaration:
//  friend class Person;
//This may not be a good idea, however. Every member function of Person (including ones that may be added later) would have access to the private members of Student. The best practice is to declare as friends only those functions that must have access to the private members of the class.
/*
class Aux {
private:
    double AuxBudget;
public:
    Aux() {
        AuxBudget = 0;
     }
    void addBudget(double b);
        
    double getDiveBudget() const{
        return AuxBudget;
    }
};

class Budget {
private:
    static double TotalBudget;
    double divBudget;
public:
    Budget(){
        divBudget = 0;
    }
    void addBudget(double b) {
        divBudget += b;
        TotalBudget += divBudget;
    }
    double getDivBudget()  {
        return divBudget;
    }
    static double getCorpBudget() {
        return TotalBudget;
    }
    static void mianOffice(double budReq) {
        TotalBudget += budReq;
   }
    friend void Aux::addBudget(double);
};

double Budget::TotalBudget = 0;
void Aux::addBudget(double b){
    AuxBudget += b;
    Budget::TotalBudget += AuxBudget; // access private mermebr variable
}

int main () {
    
    const int N_Division = 3;
    Budget division[N_Division];
    Aux auxoffices[N_Division];
    cout<<"Enter the main office dubget requested "<<endl;
    double amount;
    cin>>amount;
    // Call the static member function of the Budget class
     Budget::mianOffice(amount);
    
    // get the budget requested for each division
    for (int i = 0; i<N_Division; i++) {
        double bud;
        cout<<"Enter the budget requested for division "<<i+1<<endl;
        cin>>bud;
        division[i].addBudget(bud);
        cout<<"Division "<<i+1<<": ";
        cin>>bud;
        auxoffices[i].addBudget(bud);
    }
    // print the budgets
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"here are the budget division requested "<<endl;
    for (int i = 0; i<N_Division; i++) {
        
        cout<<"Division "<<i+1<<" £";
        cout<<division[i].getDivBudget()<<endl;
        cout<<"\tAuxiliary office of Division "<<i+1<<" \t£";
        cout<<auxoffices[i].getDiveBudget()<<endl;
    }
    //print the total
    cout<<"Total budget requested including main office £";
   // cout<<division[0].getCorpBudget()<<endl;
    //or
    cout<<Budget::getCorpBudget()<<endl;
    return 0;
}
*/
//=============friend class=============
 /*
class Person {
private:
    string name;
    string gender;
    int age;
public:
    Person(){
    }
     Person(string n , string g ,int a):name(n),gender(g),age(a) {
     }
    void setName(string n){
        name = n;
    }
    void setGender(string g){
        gender = g;
    }
    void setAge(int a){
        age = a;
    }
    friend class Student;
};

class Student {
private:
   int level;
    float GPA;
    string depart;
public:
    Student(){
    }
    Student(int l,float G,string d):level(l),GPA(G),depart(d){
    }
    void setlevel(int l){
        level = l;
    }
    void setGPA(float G){
        GPA = G;
    }
    void setdepart(string d){
        depart = d;
    }
    void display(Person p) {
        cout <<"the person information are "<<endl;
        cout<<"name: "<<" "<<p.name<<endl;
        cout<<"age: "<<" "<<p.gender<<endl;
        cout<<"gender:"<<" "<<p.age<<"\n";
        cout <<"the Student information are "<<endl;
        cout<<"Level: "<<" "<<level<<endl;
        cout<<"GPA: "<<" "<<GPA<<endl;
        cout<<"Department:"<<depart<<"\n";
    }
};

int main() {
    const int count = 1;
    Person person1[count];
    Student student1[count];

    for (int i =0; i<count; i++) {
        cout<<"Enter(name, gender and age) for person "<<i+1<<endl;
        string name;
        string gender;
        int age;
        cin>>name>>gender>>age;
        person1[i].setName(name);
        person1[i].setGender(gender);
        person1[i].setAge(age);
        cout<<"Enter (level,GPA and depart) for student "<<i+1<<endl;
        int level;
        float GPA;
        string depart;
        cin>>level>>GPA>>depart;
        student1[i].setlevel(level);
        student1[i].setGPA(GPA);
        student1[i].setdepart(depart);
    }
    cout<<"here are the info "<<endl;
    for (int i = 0; i<count; i++) {
        student1[i].display(person1[i]);
    }
    
return 0;
}
  */
//=============friend function==========
/*
class Person {
private:
    string name;
    string gender;
    int age;
public:
    Person(){
    }
     Person(string n , string g ,int a):name(n),gender(g),age(a) {
     }
    void setName(string n){
        name = n;
    }
    void setGender(string g){
        gender = g;
    }
    void setAge(int a){
        age = a;
    }
    friend void display(Person p);
};
void display(Person p) {
    cout <<"the person information are "<<endl;
    cout<<"name: "<<" "<<p.name<<endl;
    cout<<"age: "<<" "<<p.gender<<endl;
    cout<<"gender:"<<" "<<p.age<<"\n";
}
int main() {
    Person person1;
        cout<<"Enter(name, gender and age) for person "<<endl;
        string name;
        string gender;
        int age;
        cin>>name>>gender>>age;
        person1.setName(name);
        person1.setGender(gender);
        person1.setAge(age);
    
    cout<<"here are the info "<<endl;
    display(person1);
    
return 0;
}
*/

//=================================================================
                  //Friend function
//=================================================================
// friend function is not memeber of the class
// friend function prototype is declared in side the calss and the difinetion is notside of the class through an object of that class
/*
class person
{
    private :
    string name;
    string gender;
    float age;
public:
    person(string n,string g,float a):name(n),gender(g),age(a){
    }
    friend void print (person x);  // prototype
};
void print (person x)  // definition
{
    cout <<"the person information are "<<endl;
    cout<<"name: "<<" "<<x.name<<endl;
    cout<<"age: "<<" "<<x.age<<endl;
    cout<<"gender:"<<" "<<x.gender<<"\n";
}

int main()
{
 person s1("hossam","male",30);
  print(s1);
 
    return 0;
}
 */

//=================================================================
                    //friend function with inheritance
//=================================================================
/*
class person
{
    private :
    string name;
    string gender;
    float age;
public:
    person():name("unknown"),age(1),gender("male"){
    }
    person(string n,string g,float a):name(n),gender(g),age(a){
    }
    void setAge(float a) {
        age = a;
    }
    float getAge() {
        return age;
    }
    void setName(string n){
        name = n;
    }
    string getName(){
        return name;
    }
    void setGender(string g){
        gender = g;
    }
    string getGender() {
        return gender;
    }
    void display() {
        cout<<"name = "<<" "<<name<<endl;
        cout<<"age = "<<" "<<age<<endl;
        cout<<"gender = "<<" "<<gender<<"\n";
    }
    friend void display (person x);

};
void display(person x)
{
    cout <<"the friend person information are "<<endl;
    cout<<"name: "<<" "<<x.name<<endl;
    cout<<"age: "<<" "<<x.age<<endl;
    cout<<"gender:"<<" "<<x.gender<<"\n";
}

class student : public person
{
private:
    int level;
    float GPA;
    string depart;
public:
    
    student(string n,string g,float a,int l,float G,string d):person(n,g,a)
    {
        level = l;
        GPA = G;
        depart = d;
    }
    void setLevel(int l){
        level = l;
    }
    int getLevel(){
        return level;
    }
    void setGPA(float g){
        GPA = g;
    }
    int getGPA(){
        return GPA;
    }
    void setDepart(string d){
        depart = d;
    }
    string getDepart(){
        return depart;
    }
    void display() {
        person::display();   // calling display function from person class
        cout<<"level "<<" "<<level<<endl;
        cout<<"GPA "<<" "<<GPA<<endl;
        cout<<"depart"<<" "<<depart<<"\n";
    }
};

int main()
{
    // this is for inheritance function
  student s1("hossam","male",32,12,14,"KFd");
   s1.display();
    
    // this is for friend function
    person p1;
    p1.setName("issa");
    p1.setAge(30);
    p1.setGender("male");
    display(p1);
    return 0;
}
*/
//======================================================
                // friend class
//======================================================
/*
class person
{
    private :
    string name;
    string gender;
    float age;
public:
  
    person(string n,string g,float a):name(n),gender(g),age(a){
    }
    friend class student; // is not a memebr function
};

class student
{
private:
    int level;
    float GPA;
    string depart;
public:
    
    student (int l,float G,string d){
        level = l;
        GPA = G;
        depart = d;
    }
    
    void display(person x)
     {
        cout <<"the person information"<<endl;
        cout<<"level = "<<" "<<level<<endl;
        cout<<"GPA = "<<" "<<GPA<<endl;
        cout<<"depart = "<<" "<<depart<<"\n";
        cout <<"the friend calss person information"<<endl;
        cout<<"name: "<<" "<<x.name<<endl;
        cout<<"age: "<<" "<<x.age<<endl;
        cout<<"gender: "<<" "<<x.gender<<"\n";
     }
};

int main() {
    person person1("hossam","male",30);
    student student1(12,14,"KFd");
    student1.display(person1);
    return 0;
}
*/


//======================================================
            //friend class with inheritance
//=======================================================
/*
class person
{
    private :
    string name;
    string gender;
    float age;
public:
  
    person(string n,string g,float a){
        name = n;
        gender = g;
        age = a;
    }
    void display(){
        cout<<"name = "<<" "<<name<<endl;
        cout<<"gneder = "<<" "<<gender<<endl;
        cout<<"age ="<<" "<<age<<"\n";
    }
    friend class student;
};

class student : public person {
private:
    int level;
    float GPA;
    string depart;
public:
    student (string n,string g,float a,int l,float G,string d):person(n,g,a) {
        level = l;
        GPA = G;
        depart = d;
    }
   void display(person x) // friend class
    {
       cout <<"the person information"<<endl;
       cout<<"name: "<<" "<<x.name<<endl;
       cout<<"age: "<<" "<<x.age<<endl;
       cout<<"gender: "<<" "<<x.gender<<"\n";
       cout<<"level: "<<" "<<level<<endl;
       cout<<"GPA: "<<" "<<GPA<<endl;
       cout<<"depart: "<<" "<<depart<<"\n";
    }
    
    void display() {   //inheritance
        person::display();
        cout<<"level =  "<<" "<<level<<endl;
        cout<<"GPA = "<<" "<<GPA<<endl;
        cout<<"depart = "<<" "<<depart<<"\n";
    }
};
class postGraduate: public student
{
private:
    string research;
public:
    postGraduate(string n,string g,float a,int l,float G,string d,string ar):student(n,g,a,l,G,d)
    {
        research = ar;
    }
    
    void display()
    {
        student::display();
        cout<<"research interacet = "<<research<<endl;
 }
};

int main()
{
    cout<<"inheritance calss output are"<<endl;
    postGraduate s1("hossam","male",30,13,14,"IT","technology");
    s1.display();
    cout<<"friend calss output are"<<endl;
    person person1("hossam","male",30);
    student student1("hossam","male",30,13,14,"IT");
    student1.display(person1);
    return 0;
}
*/

//=======================================================
             // Memberwise Assignment
//========================================================
//The = operator may be used to assign one object to another , or to initialize one object with another object's data. By default,each member of one object is copied to its counterpart in the other object.
/*
class Rectangle {
private:
    double length;
    double width;
public:
    void setLength(double Length) {
        length = Length;
    }
    void setWidth(double Width) {
        width = Width;
    }
    double getLength() const {
        return length;
    }
    double getWidth() const {
        return width;
    }
    void coutput(){
        cout<<"length :" <<length<<" , ";
        cout<<"Width :" <<width<<endl;
    }
};

int main() {
    Rectangle box1;
    Rectangle box2;
    double length , width;
    cout <<"set up the rectangle dimention"<<endl;
    for (int i = 0; i<1; i++) {
        cout<<"enetr box 1 length and width"<<endl;
        cin>>length>>width;
        box1.setLength(length);
        box1.setWidth(width);
        cout<<"enetr box 2 length and width"<<endl;
        cin>>length>>width;
        box2.setLength(length);
        box2.setWidth(width);
    }
    cout<<"Rectangle dimentios are before assignment "<<endl;
    cout<<"box 1 are ";
    box1.coutput();
    cout<<"box 2 are ";
    box2.coutput();
    box1 = box2; // assignment ===
    cout<<"Rectangle dimentios are after assignment "<<endl;
    cout<<"box 1 are ";
    box1.coutput();
    cout<<"box 2 are ";
    box2.coutput();
    return 0;
}
*/
