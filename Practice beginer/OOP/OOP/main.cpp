
//  OOP
//  Created by Hossam Farfour on 02/07/2022.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iomanip>
using namespace std;


//the class is the construct primarily used to create ojects
/*
class Rectangle
{
private:
    double length;
    double width;
public:
   
    void setLength(double);
    void setWidth(double);
    double getLength();
    double getWidth();
    double calcArea();
    Rectangle();//constructor
};
// memeber function implementation section

void Rectangle :: setLength(double len)
{
    if(len >= 0.0)
    {
        length = len;
    }
    else
    {
        //length = 1.0;
        cout<<"Invaild length. using default length 1.0 "<<endl;
    }
}
void Rectangle :: setWidth(double wed)
{
    if(wed >= 0.0)
        width = wed;
    else
        //width = 1.0;
        cout<<"Invaild wedth. using default width 1.0 "<<endl;
}
double Rectangle :: getLength()
{
    return length;
    
}
double Rectangle ::getWidth()
{
    return width;
}
double Rectangle :: calcArea()
{
    return length * width;
}
Rectangle::Rectangle()  // constuctor declaration memeber function
{
    length = 1.0;
    width = 1.0;
    cout << "this is the constuctor  !\n";
    
}
int main()
{
    Rectangle box;
    double boxLength, boxWidth;
    cout << "working with object_Orinted_Programming !\n";
    
    cout << "what is the length of the box !\n";
    cin>>boxLength;
    cout << "what is the width of the box !\n";
    cin>>boxWidth;
    
    cout << "calling memeber function to set box dimensions\n";
    box.setLength(boxLength);
    box.setWidth(boxWidth);
    cout<<"Here is the rectangle's data :\n";
    cout<<"Length : "<<box.getLength() <<endl;
    cout<<"Width : "<<box.getWidth() <<endl;
    cout<<"Area : "<<box.calcArea() <<endl;
    return 0;
}
 */
 
//============constuctor overloding===================
 
/*
class sale
{
private:
    double taxRate;
public:
    sale(double rate) { //constructor with one parmater
        taxRate = rate;
    }
    sale() {           //Default constructor
        taxRate = 0.0;
    }
    ~sale() {          //Destructor
        cout<<"GOOD BAY"<<endl;
        
    }
    double calcSaleTotal() {
        double cost = 24.95;
        double Total = cost + cost * taxRate;
        return Total;
    }
};

int main()
{
    cout<<"working with overloading constructor :\n";
    sale cashier1(0.06);
    sale cashier2;
    //formate the output
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"with a 0.06 sales tax rate , the total \n";
    cout<<"of the £24.95 saleis ";
    cout<<cashier1.calcSaleTotal()<<endl;
    
    cout<<"=================================="<<endl;
    cout<<"On a tax-exempt purchase the total  \n";
    cout<<"of the £24.95 saleis ";
    cout<<cashier2.calcSaleTotal()<<endl;
    
    return 0;
}
*/
//==================== private member function===================

/*
class SimpleStat
{
private:
    int Largest;
    int sum;
    int count;
    bool isNewLargeest(int);   // privat emember function
public:
    SimpleStat() {
        Largest = 0;
        sum = 0;          //Largest = sum = count = 0;
        count = 0;
    }
    ~SimpleStat()
    {
        cout<<"All done "<<endl;
    }
    bool addNumber(int);
    double calaAverage();
    int getLargest();
    int getCount();
};

bool SimpleStat::isNewLargeest(int num)
{
    if( num > Largest)
        return true;
    else
        return false;
}
bool SimpleStat::addNumber(int num)
{
    bool goodNum = true;
    if(num >= 0)   // if num is valid
    {
        sum += num; // add it to the sum
        count++ ; //count it
        if(isNewLargeest(num)) //find out if it is the new largest
        
            Largest = num;
    } else
        goodNum = false;  // num is invalid
    
    return goodNum;
}

double SimpleStat::calaAverage()
{
    if(count > 0)
    
       return static_cast<double>(sum)/count;
         //return sum/count;
    else
        return 0;
}
int SimpleStat:: getLargest()
{
    return Largest;
}
 int SimpleStat:: getCount()
{
    return count;
}

int main()
{
    cout<<"working with private member functionr "<<endl;
    cout<<"get the largest number and display the avarage "<<endl;
    int number;
    SimpleStat statHelper;
    cout<<"Enter the set of non-negative integer "<<endl;
    cout<<"values you want to avarge . separate them with"<<endl;
    cout<<"wspace and enter -1 after last value "<<endl;
    cin>>number;
    while (number >= 0)
    {
        statHelper.addNumber(number);
        cin>>number;
    }
    cout<<"You entred  "<<statHelper.getCount()<<" values "<<endl;
    cout<<"the largest value was "<<statHelper.getLargest()<<endl;
    cout<<"the avarage value was "<<statHelper.calaAverage()<<endl;
    return 0;
}
*/
 
 
 
//===================Object Composition================

//It is possible for a class to have a member variable that is an instance of another class.
/*
class Rectangle {
private:
    double length;
    double width;
public:
    void setLength(double Length){
        length = Length;
    }
    void setWidth(double Width){
        width = Width;
    }
    double getLength(){
        return length;
    }
    double getWidth(){
        return width;
    }
    double calcArea(){
        return  length * width;
    }
};

class Carpet {
private:
    double pricePerSqYd;
    Rectangle zise;
public:
    void setPricePerSqYd(double p){
        pricePerSqYd = p;
    }
    void setDimention(double length, double width){
        zise.setLength(length/3); // convert feet to yard
        zise.setWidth(width/3);
    }
    double getToralPrice(){
        return (zise.calcArea() * pricePerSqYd);
    }
};

int main() {
    Carpet purchase;   //This var iable is a Carpet object
    double pricePerYd;
    double length;
    double width;
    cout <<"Room length in feet: "<<endl;
    cin>>length;
    cout <<"Room width in feet: "<<endl;
    cin>>width;
    cout<<"Carpet price per sq. yard"<<endl;
    cin>>pricePerYd;

    purchase.setDimention(length, width);
    purchase.setPricePerSqYd(pricePerYd);
    cout<<"The total price is £"<<purchase.getToralPrice()<<endl;
    return 0;
}
*/


class Account {
private:
    double balance;
    double intRate;
    double interest;
    int transactions;
public:
    // Constructor
    Account() {
        intRate  = 0.045;
        balance  = 0.0;
        interest = 0.0;
        transactions = 0;
    }
    void makeDeposit (double amount) {
        balance += amount;
        transactions ++;
    }
    bool withDraw(double amount) {
        if( balance < amount) {
            return  false;
        } else {
            balance -= amount;
            transactions ++;
            return true;
        }
    }
    void calclnterest() {
        interest = balance * intRate;
        balance += interest;
    }
    double getBalance() {
        return balance;
    }
    double getlnterest () {
        return interest;
    }
    int getTransactions() {
        return transactions;
    }
};

void displaymenu();
char getChoice(char);
void makedeposite(Account &);
void withdraw(Account &);

int main (){
    const char max_choice = '7';
    Account savings;
    char choice;
    cout<<fixed<<showpoint<<setprecision(2);
    do {
        displaymenu();
        choice = getChoice(max_choice);
        switch (choice) {
            case '1':
                cout<<"The current balance is £"<<savings.getBalance()<<endl;
                break;
            case '2':
                cout<<"There have been "<<savings.getTransactions()<<" Transactions"<<endl;
                break;
            case '3':
                cout<<"Interest earned for this period £"<<savings.getlnterest()<<endl;
                break;
            case '4':
                makedeposite(savings);
                break;
            case '5':
                withdraw(savings);
                break;
            case '6':
                savings.calclnterest();
                cout<<"Intrest added "<<endl;
                break;
            case '7':
                exit(0);
        }
    } while (choice != '7');

    return 0;
}

void displaymenu() {
    cout<<"1- Display the account balance"<<endl;
    cout<<"2- Display the number of transtions"<<endl;
    cout<<"3- Display interest earned for this period"<<endl;
    cout<<"4- Make a deposit "<<endl;
    cout<<"5- Make a withdrow"<<endl;
    cout<<"6- Add the interest for this period"<<endl;
    cout<<"7- Exist"<<endl;
}
char getChoice(char max){
    char choice = cin.get();
    cin.ignore();  //clear buffer before taking new
    while (choice < '1' || choice > max) {
        cout<<"choice must be between 1 - 7 "<<endl;
        cout<<"reanter choice.... "<<endl;
        choice = cin.get();
        cin.ignore();
    }
    return choice;
}
void makedeposite(Account &account){
    double pound;
    cout<<"Enter the amount of the deposit"<<endl;
    cin>>pound;
    cin.ignore();
    account.makeDeposit(pound);
}
void withdraw(Account &account){
    double pound;
    cout<<"Enter the amount of the withdrow"<<endl;
    cin>>pound;
    cin.ignore();
    if (!account.withDraw(pound)) {
        cout<<"Error, withdrow amount too large!"<<endl;
    }
}
