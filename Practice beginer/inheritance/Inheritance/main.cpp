
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
//overload
// the menthod can be in the same class or one in the base class and the other in derived class.
//override
//the method must be one in the base class and the other in the derived class.

/*
class Person {
private:
    string name;
    string gender;
    int age;
public:
     Person() {
         name = "Unknown";
         gender = "Unknown";
         age = 0;
     }
    Person(string N, string G, int A):name(N), gender(G), age(A) {
    }
    void setPersonName(string n){
        name = n;
    }
    void setPersonGender(string g){
        gender = g;
    }
    void setPersonAge(int a){
        age = a;
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
    void display() {
        cout <<"the person information are "<<endl;
        cout<<"name: "<<" "<<name<<endl;
        cout<<"age: "<<" "<<age<<endl;
        cout<<"gender: "<<" "<<gender<<"\n";
    }
};

class Student : public Person {
private:
   int level;
    float GPA;
    string department;
public:
    Student(string N, string G, int A,int l, float gpa,string d):Person(N,G,A) {
    }
    Student() {
        level = 0;
        GPA = 0.0;
        department = "Unkown";
    }
    
    void setStudentLeval(int l){
        level = l;
    }
    void setStudentGPA(float gpa){
        GPA = gpa;
    }
    void setStudentDepartment(string d){
        department = d;
    }
    int getPersonlevel(){
        return level;
    }
    float getPersonGPA(){
        return GPA;
    }
    string getPersondepartment(){
        return department;
    }
    void display()  {  //override // it is the redefinition of base class functionin its derived class with the same signature
            Person::display();
            cout<<"level: "<<" "<<level<<endl;
            cout<<"GPA: "<<" "<<GPA<<endl;
            cout<<"depart: "<<" "<<department<<"\n";
    }
};
class postGraduate: public Student {
private:
    string research;
public:
    postGraduate(string n,string g,float a,int l,float G,string d,string ar):Student(n,g,a,l,G,d) {
        research = ar;
    }
    postGraduate() {
        research = "Unkown";
    }
    void setPostGraduate(string r){
        research = r;
    }
    string getPostGraduate(){
        return research;
    }
    
    void display()
    {
        Student::display(); // calling student display method.
        cout<<"research interacet: "<<research<<endl;
    }
};


int main() {
    postGraduate s1;
    s1.setPersonName("hossam");
    s1.setPersonGender("male");
    s1.setPersonAge(32);
    s1.setStudentLeval(13);
    s1.setStudentGPA(14.50);
    s1.setStudentDepartment("IT");
    s1.display();
    cout<<"=====just calling Person display method====."<<endl;
    s1.Person::display();
    cout<<"=====adding multi inheritance===== "<<endl;
    s1.setPostGraduate("Technology");
    s1.display();
  
   return 0;
}
*/
//==================
/*
class Person {
private:
    string name;
    string gender;
    int age;
public:
     Person() {
         name = "Unknown";
         gender = "Unknown";
         age = 0;
     }
    Person(string N, string G, int A):name(N), gender(G), age(A) {
    }
    void setPersonName(string n){
        name = n;
    }
    void setPersonGender(string g){
        gender = g;
    }
    void setPersonAge(int a){
        age = a;
    }
    void display() {
        cout <<"the person information are "<<endl;
        cout<<"name: "<<" "<<name<<endl;
        cout<<"age: "<<" "<<age<<endl;
        cout<<"gender: "<<" "<<gender<<"\n";
    }
};

class Student : public Person {
private:
   int level;
    float GPA;
    string department;
public:
    Student(string N, string G, int A,int l, float gpa,string d):Person(N,G,A) {
        level = l;
        GPA = gpa;
        department = d;
    }
    Student() {
        level = 0;
        GPA = 0.0;
        department = "Unkown";
    }
    
    void setStudentLeval(int l){
        level = l;
    }
    void setStudentGPA(float gpa){
        GPA = gpa;
    }
    void setStudentDepartment(string d){
        department = d;
    }
    void display()  {  //override // it is the redefinition of base class functionin its derived class with the same signature
            Person::display();
            cout<<"level: "<<" "<<level<<endl;
            cout<<"GPA: "<<" "<<GPA<<endl;
            cout<<"depart: "<<" "<<department<<"\n";
    }
};

int main() {
 
    Student S1;
    for (int i = 0; i <1; i++) {
        cout<<"Enter name , gander and age for peron "<<endl;
        string name;
        string gender;
        int age;
        cin>>name>>gender>>age;
        S1.setPersonName(name);
        S1.setPersonGender(gender);
        S1.setPersonAge(age);
    }
    
    for (int i = 0; i <1; i++) {
        cout<<"Enter level, GPA and Department info for student "<<endl;
        int level;
        float GPA;
        string depart;
        cin>>level>>GPA>>depart;
        S1.setStudentLeval(level);
        S1.setStudentGPA(GPA);
        S1.setStudentDepartment(depart);
    }
    for (int i = 0; i < 1; i++) {
        S1.display();
    }
   return 0;
}
*/
//================
/*
class Person {
private:
    string name;
    string gender;
    int age;
public:
    Person(string N, string G, int A):name(N), gender(G), age(A) {
    }
     Person() {
         name = "Unknown";
         gender = "Unknown";
         age = 0;
     }
    void setPersonName(string n){
        name = n;
    }
    void setPersonGender(string g){
        gender = g;
    }
    void setPersonAge(int a){
        age = a;
    }
    void display() {
        cout <<"the person information are "<<endl;
        cout<<"name: "<<" "<<name<<endl;
        cout<<"gender: "<<" "<<gender<<"\n";
        cout<<"age: "<<" "<<age<<endl;
    }
};

class Student : public Person {
private:
   int level;
    float GPA;
    string department;
public:
    Student(string N, string G, int A,int l, float gpa,string d):Person(N,G,A) {
        level = l;
        GPA = gpa;
        department = d;
    }
    Student() {
        level = 0;
        GPA = 0.0;
        department = "Unkown";
    }
    
    void setStudentLeval(int l){
        level = l;
    }
    void setStudentGPA(float gpa){
        GPA = gpa;
    }
    void setStudentDepartment(string d){
        department = d;
    }
    void display()  {
            Person::display();
            cout<<"level: "<<" "<<level<<endl;
            cout<<"GPA: "<<" "<<GPA<<endl;
            cout<<"depart: "<<" "<<department<<"\n";
    }
};
int main() {
    int count = 1;
    Student S1[count];

    for (int i = 0; i < count; i++) {
        cout<<"Enter name , gander and age for peron "<<endl;
        string name;
        string gender;
        int age;
        cin>>name>>gender>>age;
        S1[count].setPersonName(name);
        S1[count].setPersonGender(gender);
        S1[count].setPersonAge(age);
        cout<<"Enter level, GPA and Department info for student "<<endl;
        int level;
        float GPA;
        string depart;
        cin>>level>>GPA>>depart;
        S1[count].setStudentLeval(level);
        S1[count].setStudentGPA(GPA);
        S1[count].setStudentDepartment(depart);
    }
   // S1[count].display();
    for (int i = 0; i < count; i++) {
        S1[count].display();
    }
    
   return 0;
}
*/
//=============
/*
//multi inhetritance
class Person {
private:
    string name;
    string gender;
    int age;
public:
     Person() {
         name = "Unknown";
         gender = "Unknown";
         age = 0;
     }
    Person(string N, string G, int A):name(N), gender(G), age(A) {
    }
    void setName(string n){
        name = n;
    }
    void setPersonGender(string g){
        gender = g;
    }
    void setPersonAge(int a){
        age = a;
    }
    void display() {
        cout <<"the person information are "<<endl;
        cout<<"person name: "<<" "<<name<<endl;
        cout<<"age: "<<" "<<age<<endl;
        cout<<"gender: "<<" "<<gender<<"\n";
    }
};

class Student {
private:
    int level;
    float GPA;
    string department;
public:
    Student(int l, float gpa,string d) {
        level = l;
        GPA = gpa;
        department = d;
    }
    Student() {
        level = 0;
        GPA = 0.0;
        department = "Unkown";
    }
    
    void setStudentLeval(int l){
        level = l;
    }
    void setStudentDepartment(string d){
        department = d;
    }
    int getStudentlevel(){
        return level;
    }
    void display()  {
            cout<<"level: "<<" "<<level<<endl;
            cout<<"GPA: "<<" "<<GPA<<endl;
            cout<<"depart: "<<" "<<department<<"\n";
    }
};
class postGraduate: public Person, public Student {
private:
    string research;
public:
    postGraduate(string n,string g,float a,int l,float G,string d,string ar):Person(n,g,a) , Student (l,G,d){
        research = ar;
    }
    postGraduate() {
        research = "Unkown";
    }
    void setPostGraduate(string r){
        research = r;
    }
    void display()
    {
        Person::display();   //calling person display method.
        Student::display(); // calling student display method.
        cout<<"research interacet: "<<research<<endl;
    }
};

int main() {
    postGraduate s1("hossam","male",32,13,14.50,"IT","technology");
    s1.display();
    cout<<"===== multi inheritance===== "<<endl;
    //s1.setPersonName("ali");// the tarp in multi inheritance
    s1.setName("Issa");
    s1.display();
  
   return 0;
}
*/


//==========inhertance and pointer with enum =======================
/*
enum Discipline {Math, Networking, Computer_Science};

class Person {
private:
    string Name ;
public:
    Person(){
      setName(" ");
    }
    Person(string pName){
        setName(pName);
    }
    void setName(string name) {
       Name = name;
    }
    string getName(){
        return Name;
    }
};
class Student : public Person {
private:
    Discipline major;
    shared_ptr<Person>advioser;
public:
    void setMajor(Discipline d) {
       major = d;
    }
    Discipline getMajor() {
        return major;
    }
    void setAdvisor(shared_ptr<Person>p){
        advioser = p;
    }
    shared_ptr<Person>getAdvisor() {
        return advioser;
    }
};
class Faculty : public Student  {
  private :
   Discipline department;
  public :
    void setDepartment(Discipline d) {
         department = d ;
    }
    Discipline getDepartment() {
        return department;
    }
};

// These arrays of string are used to print the enumerated types .
string dName[] = {"Math", "Networking", "Computer_science"};

int main(){
  //  create a faculty object
    shared_ptr<Faculty>prof = make_shared<Faculty>();
    //Use Person member function to set name
    prof->setName(" Hossam Farfour");
    //Use Faculty me mber function to set Department
    prof->setDepartment(Discipline::Computer_Science);
   // prof->setAdvisor(Discipline::Computer_Science);
    cout <<"Professor"<< prof->getName()
    <<" teaches in the " << "Department of " ;
    // Get Department as an enumerated type
    Discipline dept = prof->getDepartment();
    // print department in satring type
    cout<<dName[dept]<< endl;
    //or incuse of need to change datatype
   // cout<<dName[static_cast<int>(dept)]<< endl;
    
    return 0;
}
 */
//==================
/*
enum Department {It, Engenerring, Medicine};
enum Discipline {Math, Networking, Computer_Science};
enum Classification {EntryLevel, Junior, Senior};
enum Advisory {Cate, Jack, Aimi};

 class Person {
 private:
     string Name ;
 public:
     Person(){
       setName(" ");
     }
     Person(string pName){
         setName(pName);
     }
     void setName(string name) {
        Name = name;
     }
     string getName(){
         return Name;
     }
 };
 class Student : public Person {
 private:
     Department department;
     Discipline major;
     Classification level;
     Advisory advisor;
 public:
     void setDepartment(Department d) {
          department = d ;
     }
     Department getDepartment() {
         return department;
     }
     void setMajor(Discipline d) {
        major = d;
     }
     Discipline getMajor() {
         return major;
     }
     void setLevel(Classification L) {
         level = L;
     }
     Classification getLevel() {
         return level;
     }
     void setAdvisory(Advisory Ad) {
         advisor = Ad ;
     }
     Advisory getAdvisory() {
         return advisor;
     }
 };

 // These arrays of string are used to print the enumerated types .
 string DepartName[] = {"It", "Engenerring", "Medicine"};
 string MajoringName[] = {"Math", "Networking", "Computer_Science"};
 string ClassificationLevel[] = {"EntryLevel", "Junior", "Senior"};
 string AdvisoryName[] = {"Cate", "Jack", "Aimi"};

 int main(){
   //  create a student object
     shared_ptr<Student>prof = make_shared<Student>();
     prof->setName("Hossam Farfour");
     prof->setDepartment(Department::Engenerring);
     prof->setMajor(Computer_Science);
     prof->setLevel(Classification::EntryLevel);
     prof->setAdvisory(Aimi);
     
     // print enumrated names
     Department dept = prof->getDepartment();
     Discipline major = prof->getMajor();
     Classification level = prof->getLevel();
     Advisory Advisor = prof->getAdvisory();
     
     cout <<"Professor"<< prof->getName()
     <<" teaches in the " << "Department of ";
     cout<<DepartName[dept]<<" majoring in ";
     cout<<MajoringName[major]<<" level ";
     cout<<ClassificationLevel[level]<<endl;
     cout <<prof->getName()<< "'s advisor is "<<AdvisoryName[Advisor]<<endl;
     return 0;
 }
*/
//==========protected memeber and class access =======================

enum Discipline {Math, Networking, Computer_Science};
class Person {
protected:
    string name ;
public:
    Person(){
      setName(" ");
    }
    Person(string pName){
        setName(pName);
    }
    void setName(const string &pName) {
       name = pName;
    }
    string getName() {
        return name;
    }
};
class Student : public Person {
private:
    Discipline major;
    shared_ptr<Person>advioser;
public:
    Student(const string &sname, Discipline d, shared_ptr<Person>adv):Person(sname) {
      //  name = sname;
        major = d;
        advioser = adv;
    }
    void setMajor(Discipline d) {
       major = d;
    }
    Discipline getMajor() {
        return major;
    }
    void setAdvisor(shared_ptr<Person>p){
        advioser = p;
    }
    shared_ptr<Person>getAdvisor() {
        return advioser;
    }
};
class Faculty : public Person {
  private :
   Discipline department;
  public :
    Faculty(const string &fname, Discipline d):Person(fname){
        // access the protected base class member
       // name = fname;
        department = d;
    }
    void setDepartment(Discipline d) {
         department = d ;
    }
    Discipline getDepartment() const {
        return department;
    }
};

// These arrays of string are used to print the enumerated types .
 string dName[] = {"Math", "Networking", "Computer_science"};

int main(){
  //  create a faculty and student object
    shared_ptr<Faculty>prof = make_shared<Faculty>(" Hossam farfour", Discipline::Computer_Science);
    shared_ptr<Student>st = make_shared<Student>("Issa farfour", Discipline::Math,prof);
    //Use Person member function to set name
//    prof->setName(" Hossam Farfour");
//    //Use Faculty me mber function to set Department
//    prof->setDepartment(Discipline::Computer_Science);

    cout <<"Professor"<< prof->getName()
    <<" teaches in the " <<dName[static_cast<int>(prof->getDepartment())]<<". "<<endl;
    
   // get student advisor
    shared_ptr<Person>pAdvisor = st->getAdvisor();
    cout<<st->getName()<<"\'s advisor is "<<pAdvisor->getName()<<".";
    cout<<endl;
    
    return 0;
}

