//
//  main.cpp
//  Struct
//
//  Created by Hossam Farfour on 03/07/2022.

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iomanip>
using namespace std;

/*
struct Date {
    int day ,month , year;
};
int main () {
    Date birthday = {01,01,1990};
    cout<<"hosssam's date of birth is "<<endl;
    cout<<birthday.day<<" ";
    cout<<birthday.month<<" ";
    cout<<birthday.year<<endl;
    return 0;
}
*/

//=====================================

/*
struct PayRoll
{
    int empNumber;
    string name;
    double hours;
    double payRate;
};

int main()
{
    cout << " using Struct \n";
    PayRoll employee;
    double grosspay;  // amount earned this week
    // get employee data
    cout<<"Enter the employee's number "<<endl;
    cin>>employee.empNumber;
    cout<<"Enter the employee's name "<<endl;
    cin.get(); // move past the '\n' left in the input buffer by the last input
    getline(cin,employee.name);
    cout<<"Enter the employee's worked hours for this week "<<endl;
    cin>>employee.hours;
    cout<<"Enter the employee's rate paye "<<endl;
    cin>>employee.payRate;
    // calculate wages
    grosspay = employee.hours * employee.payRate;
    cout<<"============================"<<endl;
    //display wage
    cout<<"Here is the employee's payroll data "<<endl;
    cout<<"Name:  "<<employee.name<<endl;
    cout<<"Employee number:  "<<employee.empNumber<<endl;
    cout<<"Hours worked  "<<employee.hours<<endl;
    cout<<"employee pay rate is  "<<employee.payRate<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Gross pay is (£"<<grosspay<<")"<<endl;
    return 0;
}
*/
//===========================================================
// using more than one struct (struct composition) (Nested struct)
/*
struct CostInfo
{
    double food, medical, license, misc;
};
struct PetInfo
{
    string name, type;
    int age;
    CostInfo cost; // a petInfo structure has a CostInfo structure nested inside as one of its member
    PetInfo()    //constructo
    {
        name = "unknown ";
        type = "unknown ";
        age = 0;
        cost.food = cost.medical = cost.license = cost.misc = 0.0;
    }
};
int main()
{
    cout<<"using more than one struct (struct composition)"<<endl;
    PetInfo pet;
    double Total;
    pet.name = "Sassy";
    pet.type = "cat";
    pet.age = 5;
    pet.cost.food = 300;
    pet.cost.license = 7;
    pet.cost.medical = 200;
    //display the total;
    cout<<fixed<<showpoint<<setprecision(2);
    Total = pet.cost.food + pet.cost.license + pet.cost.medical + pet.cost.misc;
    cout<<"Annual costs for my "<<pet.age<<"-year old "
    <<pet.name<<" "<<pet.type<< " are £"<<Total<<endl;
    return 0;
}
*/
//===========================================================
/*
struct CostInfo
{
    double food,medical, license;
};
struct PetInfo
{
    string name, type;
    int age;
    CostInfo cost; // a petInfo structure has a CostInfo structure nested inside as one of its member
    PetInfo()    //constructo
    {
        name = "unknown ";
        type = "unknown ";
        age = 0;
        cost.food = cost.medical = cost.license = 0.0;
    }
};
int main()
{
    cout<<"using more than one struct"<<endl;
    PetInfo pet;
    double Total;
    cout<<"Enter your pet name"<<endl;
    cin.get();
    cin>>pet.name;
    cout<<"Enter your pet type"<<endl;
    cin>>pet.type;
    cout<<"Enter your pet age"<<endl;
    cin>> pet.age ;
    cout<<"Enter your food cost"<<endl;
    cin>>pet.cost.food;
    cout<<"Enter your pet license cost"<<endl;
    cin>>pet.cost.license;
    cout<<"Enter your pet medical cost"<<endl;
    cin>>pet.cost.medical;
    //display the total;
    cout<<fixed<<showpoint<<setprecision(2);
    Total = pet.cost.food + pet.cost.license + pet.cost.medical;
    cout<<"Annual costs for my "<<pet.age<<"-year old "
    <<pet.name<<" "<<pet.type<< " are £"<<Total<<endl;
    return 0;
    
}
*/
//===========================================================

// passing structures to function
/*
struct  InventoryItem
{
    int partNum;   //part number
    string descrition; //item description
    int onHand;  //units on hand
    double cost; //unit price
};

void getItemData (InventoryItem &);
void showItemData(const InventoryItem) ;

int main()
{
    cout << "OOP passing strcuct to function !"<<endl;
    InventoryItem part;
    getItemData(part);
    showItemData(part);
    return 0;
}

void getItemData (InventoryItem &item) // receive an object by reference
{
    // in class can not access them directly because they are private.
    
    cout << "Enter data for the new part !"<<endl;
    cout << "part number!"<<endl;
    cin>>item.partNum;
    cout << "Descriptin of the item !"<<endl;
    cin.get(); // move past the '\n' left in the input buffer by the last input
    getline(cin,item.descrition);
    cout << "Quantity on hand !"<<endl;
    cin>>item.onHand;
    cout << "unit price !"<<endl;
    cin>>item.cost;
}
void showItemData(const InventoryItem items) // receive an object by vlaue
{
    cout <<fixed<<showpoint<<setprecision(2)<<endl;
    cout << "part Number "<<items.partNum<<endl;
    cout << "Description "<<items.descrition<<endl;
    cout << "units on hand "<<items.onHand<<endl;
    cout << "Price (£"<<items.cost<<")"<<endl;
    
}
*/
//==================================================
/*
struct  InventoryItem
{
    int partNum;   //part number
    string descrition; //item description
    int onHand;  //units on hand
    double cost; //unit price
    void storeInfo(int ,string ,int ,double);
};
void InventoryItem :: storeInfo(int p, string d, int o, double c)
{
    partNum = p;
    descrition = d;
    onHand = o;
    cost = c;
}
//function prototype for client program
void getItemData (InventoryItem &);
void showItemData(const InventoryItem &) ;

int main()
{
    cout << "OOP passing strcuct to function !"<<endl;
    InventoryItem part;
    getItemData(part);
    showItemData(part);
    return 0;
}

void getItemData (InventoryItem &item) // receive an object by reference
{
    
    int partNumber;  //local variable to hold user input
    string descriptionOfItem;
    int qty;
    double price;
    // get the data from the user
    cout << "Enter data for the new part !"<<endl;
    cout << "part number!"<<endl;
    cin>>partNumber;
    cout << "Descriptin of the item !"<<endl;
    cin.get();  // move past the '\n' left in the input buffer by the last input
    getline(cin, descriptionOfItem);
    cout << "Quantity on hand !"<<endl;
    cin>>qty;
    cout << "unit price !"<<endl;
    cin>>price;
    //store the data in the InventoryItem object.
    item.storeInfo(partNumber, descriptionOfItem, qty, price);
}
void showItemData(const InventoryItem &items) // receive an object by vlaue
{
    cout <<fixed<<showpoint<<setprecision(2)<<endl;
    cout << "part Number "<<items.partNum<<endl;
    cout << "Description "<<items.descrition<<endl;
    cout << "units on hand "<<items.onHand<<endl;
    cout << "Price (£"<<items.cost<<")"<<endl;
    
}
*/
//===========================================================
// returning a structure from a function
/*
struct InventoryItem
{
    int partNum;//part number
    string descrition;//item description
    int onHand; //units on hand
    double cost;//unit price
};
//function prototype for client program
InventoryItem getItemData();
//return an inventory object
void showValues(const InventoryItem &);

int main()
{
    cout << "returning an object from a function !"<<endl;
    InventoryItem part = getItemData();
    showValues(part);
    return 0;
}
 InventoryItem getItemData()
{
    InventoryItem item;
    // get the data from the user
    cout << "Enter data for the new part !"<<endl;
    cout << "part number!"<<endl;
    cin>>item.partNum;
    cout << "Descriptin of the item !"<<endl;
    cin.get(); // move past the '\n' left in the input buffer by the last input
    getline(cin,item.descrition);
    cout << "Quantity on hand !"<<endl;
    cin>>item.onHand;
    cout << "unit price !"<<endl;
    cin>>item.cost;
    return item;
}

void showValues(const InventoryItem &items) // receive an object by vlaue
{
    cout <<fixed<<showpoint<<setprecision(2);
    cout << "part Number "<<items.partNum<<endl;
    cout << "Description "<<items.descrition<<endl;
    cout << "units on hand "<<items.onHand<<endl;
    cout << "Price £ "<<items.cost<<endl;
    
}
*/
//===============
/*
struct InventoryItem
{
    int partNum;
    string descrition;
    int onHand;
    double cost;
    void storeInfo(int ,string ,int ,double);
};
void InventoryItem :: storeInfo(int p, string d, int o, double c)
{
    partNum = p;
    descrition = d;
    onHand = o;
    cost = c;
}

InventoryItem getItemData();
void showValues(const InventoryItem &);

int main()
{
    cout << "returning an object from a function !"<<endl;
    InventoryItem part = getItemData();// return object from function
    showValues(part);                   // pass object to a function
    return 0;
}
 InventoryItem getItemData()
{
    InventoryItem item;
     int partNumber;  //local variable to hold user input
     string descriptionOfItem;
     int qty;
     double price;
     // get the data from the user
     cout << "Enter data for the new part !"<<endl;
     cout << "part number!"<<endl;
     cin>>partNumber;
     cout << "Descriptin of the item !"<<endl;
     cin.get();  // move past the '\n' left in the input buffer by the last input
     getline(cin, descriptionOfItem);
     cout << "Quantity on hand !"<<endl;
     cin>>qty;
     cout << "unit price !"<<endl;
     cin>>price;
     //store the data in the InventoryItem object.
     item.storeInfo(partNumber, descriptionOfItem, qty, price);
    return item;
}

void showValues(const InventoryItem &items) // receive an object by vlaue
{
    cout <<fixed<<showpoint<<setprecision(2);
    cout << "part Number "<<items.partNum<<endl;
    cout << "Description "<<items.descrition<<endl;
    cout << "units on hand "<<items.onHand<<endl;
    cout << "Price £ "<<items.cost<<endl;
    
}
*/


