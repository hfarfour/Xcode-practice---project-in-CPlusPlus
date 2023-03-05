//
//  main.cpp
//  constant_member_function
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

//==================================================
                    //*this
//==================================================
//y default, the compiler provides each member function of a class with an implicit parameter that points to the object through which the member function is called. The implicit parameter is called this.
//A constant member function is one that does not modify the object through w hi ch it is called.
/*
class Example {
    
private:
    int x;
    
public:
    Example(int a) {
        x = a;
    }
    void setvalue(int a) {
        x = a;
    }
    void print() {
        cout<<"the object at address "<<this<<endl; // or &x
        cout<<" and the value is "<<(*this).x<<endl;// or just x
    }
};
int main() {
    Example example1(20);
    //cout<<"address is "<<&example1<<endl;
    example1.print();
    Example example2(40);
    example2.print();
    cout << "  \n";
    return 0;
}
*/
//==================================================
          //constant memebr function
//==================================================
//A parameter that is passed to a function by reference or through a pointer may be modified by that function. The const key word is used with a parameter to prevent the called function from modifying it. For example, a function declared as
//void fun(const string &str};


//==================================================
          //static memebr Variable
//==================================================
//If a member variable is declared static , all objects of that class have access to that variable. If a member function is declared static, it may be called before any instances of the class are defined.
//Static member variables must be declared inside the class and defined outside of it.

/*
class State {
    
private:
     static int x;
      int y;
public:
    void setx (int a) const {
        x = a;
    }
    void sety (int b)  {
        y = b;
    }
    int getx () {
        return x;
    }
    int gety (){
        return y;
    }
};
//Next, place a separate definition of the variable outside the class, such as:
//int State::y;
int State:: x;

//In this example, the member variable x will be shared by all objects of the State class. When one class object puts a value in x, it will appear in all other State objects. For example, assume the following statements appear in a program:

int main () {
    State obj1;
    State obj2;
    obj1.setx(5);
    obj1.sety(10);
    obj2.sety(20);
    
    cout<<"X : "<<obj1.getx()<<" "<<" and obj2 is "<<obj2.getx()<<endl;
    cout<<"Y : "<<obj1.gety()<<" "<<" and obj2 is "<<obj2.gety()<<endl;
    
    return 0;
}
*/

//============
//If a function is called more than once in a program, the values stored in the function's local variables do not persist between function calls. This is because local variables are destroyed when a function terminates and are then re-created when the function starts again
/*
void showLocal();
int main()
{
    showLocal();
    showLocal();
    return 0;
}
void showLocal()
{
    static int localNum = 5;
    cout<<"local number is "<<localNum<<endl;
    localNum = 90;
    cout<<"local number is "<<localNum<<endl;
}
*/
//==============================================
/*
void showLocal();
int main()
{
    cout << "working with static function !\n";
    for(int i = 0; i<5;i++)
   {
        showLocal();
       // showLocal();
    }
    return 0;
}
void showLocal()
{
  static int localNum = 0;
    cout<<"local number is "<<++localNum<<endl;
}
*/
//===
/*
class Budget {
private:
    static double corpBudget;
    double divBudget;
public:
    Budget(){
        divBudget = 0;
    }
    void addBudget(double b) {
        divBudget += b;
        corpBudget += divBudget;
    }
    double getDivBudget() const {
        return divBudget;
    }
    double getCorpBudget() const {
        return corpBudget;
    }
};

// Definition of the static member of the Budget class
double Budget:: corpBudget = 0;

int main (){
    
    const int N_Division = 3;
    Budget division[N_Division];
    // get the budget requested for each division
    for (int i = 0; i<N_Division; i++) {
        double bud;
        cout<<"Enter the budget requested for division "<<i+1<<endl;
        cin>>bud;
        division[i].addBudget(bud);
    }
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"here are the budget division requested "<<endl;
    for (int i = 0; i<N_Division; i++) {
        
        cout<<"Division "<<i+1<<" £";
        cout<<division[i].getDivBudget()<<endl;
    }
    //display the total
    cout<<"Total budget requested £";
    cout<<division[0].getCorpBudget()<<endl;
    return 0;
}
*/
//==================================================
          //static memebr function
//==================================================
//A member function of a class can be declared static by prefixing its declaration with the key word static. Here is the general form:
//static<return type><function name>(<parameter list>).

class Budget {
private:
    static double corpBudget;
    double divBudget;
public:
    Budget(){
        divBudget = 0;
    }
    void addBudget(double b) {
        divBudget += b;
        corpBudget += divBudget;
    }
    double getDivBudget()  {
        return divBudget;
    }
    double getCorpBudget() {
        return corpBudget;
    }
    static void mianOffice(double budReq) {
        corpBudget += budReq;
   }
};
// Definition of the static member of the Budget class
double Budget::corpBudget = 0;

int main () {
    
    const int N_Division = 3;
    Budget division[N_Division];
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
    }
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"here are the budget division requested "<<endl;
    for (int i = 0; i<N_Division; i++) {
        
        cout<<"Division "<<i+1<<" £";
        cout<<division[i].getDivBudget()<<endl;
    }
    //display the total
    cout<<"Total budget requested including main office £";
    cout<<division[0].getCorpBudget()<<endl;
    
    return 0;
}


//==============================================
                    // static count
//==============================================
/*
class car
{
private:
    string maker;
    int model;
    string color;

   static int count;         // static class

public:
    void setMaker(string n){
        maker = n;
    }
    string getMaker(){
        return maker;
    }
    void setModel(int mo){
        model = mo;
    }
    int getModel(){
        return model;
    }
    int getcarsCount(){
        return count;
    }
    car():maker("honda"),model(200),color("white") {
        count++; //for counting number of car
    }
    car(string n,int m,string c):maker(n),model(m),color(c) {
        count++;
    }
    ~car(){
        count--;
           cout<<count+1<<" left "<<endl;
    }
};

int car:: count = 0;  // for static

int main()
{
    // tutoria 27 static
    car c1;
    c1.getModel();
    cout<<"counter reached  "<<c1.getcarsCount()<<endl;
    car c2;
    cout<<"counter reached  "<<c2.getcarsCount()<<endl;
    car c3;
    cout<<"counter reached  "<<c3.getcarsCount()<<endl;
    return 0;
}

*/
