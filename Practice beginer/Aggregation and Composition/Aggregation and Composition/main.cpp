//
//  main.cpp
//  Aggregation and Composition
//
//  Created by Hossam Farfour on 20/12/2022.
//#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

//============Aggregation and Composition=======with shared pointer====
//Class aggregation occurs when an object of one class owns an object of another class. Class composition is a form of aggregation where the owner class controls the lifetime of objects of the owned class.

//======Member Initialization Lists
//The Person constructor receives parameters month, day, and year that it needs to pass to the Date constructor of its dateOfBirth member. C++ provides a special notation, called a member initialization list, that allows constructors of classes to pass arguments to constructors of member objects.
/*
class Date {
    string month;
    int day;
    int year;
    int personID;
    public :
    Date(string m, int d, int y, int ID):month(m), day(d), year(y),personID(ID) {
        cout<<"Date of birth object for person "<<personID<<" has been created "<<endl;
    }
    ~Date() {
        cout<<"Date of birth object for person "<<personID<<" has been destroed"<<endl;
    }
};
class Country {
    string Name;
    public:
    Country(string name):Name(name){
        cout<<"A Country object has been ccreated "<<endl;
    }
    ~Country() {
        cout<<Name<<" A Country object has benn destroed"<<endl;
    }
};
class Person {
    string Name;
    Date DateOfBirth;
    int PersonID; // person idetification number (PID)
    shared_ptr<Country>pCountry; // share pointer //
    static int uniquePersonID; //Use to generate person idetification number (PID)
    public:
    Person(string name,string month,int day,int year,shared_ptr<Country>&PC):
        Name(name),
        DateOfBirth(month,day,year,uniquePersonID),
        PersonID (Person::uniquePersonID),
        pCountry(PC) {
        cout<<"Person object "<<PersonID<< " has been created "<<endl;
        uniquePersonID++;
    }
    ~Person() {
        cout<<"Person object "<<PersonID<<" has benn destroed"<<endl;
    }
};
int Person::uniquePersonID = 1;

int main(){
    // creat a Country object
    shared_ptr<Country>Person_usa = make_shared<Country>("USA");
    // creat a Person object
    shared_ptr<Person>p1 = make_shared<Person>("hossam","Janury",1,1990,Person_usa);
    // creat another Person object
    shared_ptr<Person>p2 = make_shared<Person>("Issa","may",1,1991,Person_usa);
    cout<<"Now there are two people "<<endl;
   // both person will go out of scope when main return,
    return 0;
}
*/

/*
class Date {
    string month;
    int day;
    int year;
    int personID;
    public :
    Date(string m, int d, int y, int ID):month(m), day(d), year(y),personID(ID) {
        cout<<"Date-of-birth object for person "<<personID<<" has been ccreated "<<endl;
    }
    ~Date() {
        cout<<"Date-of-birth object for person "<<personID<<" has benn destroed"<<endl;
    }
    friend class Person;
};
class Country {
    string Name;
    public:
    Country(string name):Name(name){
        cout<<Name<<" Country object has been ccreated "<<endl;
    }
    ~Country() {
        cout<<Name<<" Country object has benn destroed"<<endl;
    }
    
};
class Person {
    string Name;
    int PersonID; // person idetification number (PID)
    Date DateOfBirth;
    Country Countryname; // or shared_ptr<Country>pCountry; // share pointer //
    static int uniquePersonID; //Use to generate person idetification number (PID)
    public:
    Person(string name,string month,int day,int year, string place_of_birth):
        Name(name),
        DateOfBirth(month,day,year,Person::uniquePersonID),
        PersonID (Person::uniquePersonID),
        Countryname(place_of_birth) {
        cout<<"Person object "<<PersonID<< " has been ccreated "<<endl;
        uniquePersonID++; // for counting
    }
    void display(){   // either by object or Composition
        cout<<"person name is "<<Name<<endl;
        cout<<"date in year is "<<DateOfBirth.year<<endl;
        cout<<"date in month is "<<DateOfBirth.month <<endl;
        cout<<"date in day is "<<DateOfBirth.day <<endl;
    }
    ~Person() {
        cout<<"Person object "<<PersonID<<" has benn destroed"<<endl;
    }
   
};
// define the class static variable
int Person::uniquePersonID = 1;

int main(){
    // creat a Country object
    shared_ptr<Country>Person_usa = make_shared<Country>("USA");
    // creat a Person object
    shared_ptr<Person>p1 = make_shared<Person>("hossam","January",1,1990,"USA");// instead of "USA" use Person_usa with share pointer
    // creat another Person object
    shared_ptr<Person>p2 = make_shared<Person>("Issa","may",1,1991,"USA"); // same thing
    cout<<"Now there are two people "<<endl;
   // both person will go out of scope when main return,
    cout<<"================ "<<endl;
    p1->display();
    cout<<"==================== "<<endl;
    return 0;
}
 */
//==========
 /*
 class Date {
     string month;
     int day;
     int year;
     string Place_of_birth;
     public :
     Date(string m, int d, int y, string country_of_birth):month(m), day(d), year(y),Place_of_birth(country_of_birth) {
         cout<<"Date for this person has been ccreated "<<endl;
     }
 };
 class Person {
     string Name;
     Date DateOfBirth;
     int PersonID; // person idetification number (PID)
     static int uniquePersonID; //Use to generate person idetification number (PID)
     public:
     Person(string name,string month,int day,int year, string place_of_birth):
         Name(name),
         DateOfBirth(month,day,year,place_of_birth),
         PersonID (Person::uniquePersonID) {
         cout<<"Person object "<<PersonID<< " has been ccreated "<<endl;
         uniquePersonID++; // for counting
     }
 };
 // define the class static variable
 int Person::uniquePersonID = 1;

 int main(){
     // creat a Person object
     shared_ptr<Person>p1 = make_shared<Person>("hossam","January",1,1990,"UK");// instead of "USA" use Person_usa with share pointer
     // creat another Person object
     shared_ptr<Person>p2 = make_shared<Person>("Issa","may",1,1991,"USA"); // same thing
     return 0;
 }
*/

/*
class Person {
private:
    string name;
    string gender;
    int age;
public:
     Person(string n,string g,int a):name(n),gender(g),age(a) {
     }
    string getPersonName(){
        return name;
    }
    string getPersonGender(){
        return gender;
    }
    int getPersonAge(){
        return age;
    }
};

class Student {
private:
   Person Info;
    int level;
    int GPA;
    string depart;
public:
    Student(int l,int G,string d, string n,string g,int a):
    level(l),GPA(G),depart(d),
    Info(n,g,a) {
    }
    void display () {
        cout <<"the person information are "<<endl;
        cout<<"Leval: "<<" "<<level<<endl;
        cout<<"GPA: "<<" "<<GPA<<endl;
        cout<<"Department:"<<" "<<depart<<"\n";
        cout<<"Name: "<<" "<<Info.getPersonName() <<endl;
        cout<<"Age: "<<" "<<Info.getPersonAge()<<endl;
        cout<<"Gender: "<<" "<<Info.getPersonGender()<<"\n";
    }
};
int main() {
    Student budget1(13,14,"IT","Hossam","male",32);
    cout<<"here are the info "<<endl;
        budget1.display();
return 0;
}
 */
//=======access private memebr function through Composition
/*
class Person {
private:
    string name;
    string gender;
    int age;
public:
     Person(string n,string g,int a):name(n),gender(g),age(a) {
     }
    string getPersonName(){
        return name;
    }
    string getPersonGender(){
        return gender;
    }
    int getPersonAge(){
        return age;
    }
};

class Student {
private:
   Person Info;
    int level;
    int GPA;
    string depart;
public:
    Student(int l,int G,string d, string n,string g,int a):
    level(l),GPA(G),depart(d),
    Info(n,g,a) {
    }
    void display () {
        cout <<"the person information are "<<endl;
        cout<<"level: "<<" "<<level<<endl;
        cout<<"GPA: "<<" "<<GPA<<endl;
        cout<<"depart:"<<" "<<depart<<"\n";
        cout<<"Name: "<<" "<<Info.getPersonName() <<endl;
        cout<<"Age: "<<" "<<Info.getPersonAge()<<endl;
        cout<<"Gender: "<<" "<<Info.getPersonGender()<<"\n";
        
    }
};
int main() {
    Student S1(12,14,"IT","Hossam","male",30);
    S1.display();
    return 0;
}

*/
