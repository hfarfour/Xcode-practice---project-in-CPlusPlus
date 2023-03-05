
//  main.cpp
//  Passing Object to function
//  Created by Hossam Farfour on 03/07/2022.

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iomanip>
using namespace std;


//============OOP passing objects to function!========
/*
class  InventoryItem
{
private:
    int partNum;         //part number
    string descrition;   //item description
    int onHand;          //units on hand
    double cost;         //unit price
public:
    void storeInfo(int ,string ,int ,double);
    int getPartNum();
    string getDescription();
    int getOnHand();
    double getCost();
};
void InventoryItem::storeInfo(int p,string d,int o,double c)   //passing objects to function is here
{
    partNum = p;
    descrition = d;
    onHand = o;
    cost = c;
}
int InventoryItem:: getPartNum()
{
    return partNum;
}
string InventoryItem:: getDescription()
{
    return descrition;
}
int InventoryItem:: getOnHand()
{
    return onHand;
}
double InventoryItem:: getCost()
{
    return cost;
}
//function prototype for client program
void storeValue(InventoryItem &);
void showValues(InventoryItem);

int main()
{
    cout << "OOP passing objects to function !"<<endl;
    InventoryItem part;
    storeValue(part);
    showValues(part);
    return 0;
}

void storeValue(InventoryItem &item) // receive an object by reference
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
void showValues(InventoryItem items) // receive an object by vlaue
{
    cout <<fixed<<showpoint<<setprecision(2)<<endl;
    cout << "part Number: "<<items.getPartNum()<<endl;
    cout << "Description: "<<items.getDescription()<<endl;
    cout << "units on hand: "<<items.getOnHand()<<endl;
    cout << "Price £ "<<items.getCost()<<endl;
    
}
*/

//========Returning an object from a function(437)==========

/*
class  InventoryItem
{
private:
    int partNum;              //part number
    string descrition;        //item description
    int onHand;               //units on hand
    double cost;              //unit price
public:
    void storeInfo(int p ,string d,int o,double c) {
        partNum = p;
        descrition = d;
        onHand = o;
        cost = c;
    }
    int getPartNum() const {
        return partNum;
    }
    string getDescription() const {
        return descrition;
    }
    int getOnHand( ) const {
        return onHand;
    }
    double getCost() const {
        return cost;
    }
};
//function prototype for client program
 InventoryItem createItem(); //return an inventory object
void showValues(const InventoryItem);

int main()
{
    cout << "returning an object from a function !"<<endl;
    InventoryItem part = createItem();
    //storeValue(part);
    showValues(part);
    return 0;
}

InventoryItem createItem()
{
    InventoryItem tempItem;
    int partNumber;//local variable to hold user input
    string descriptionOfItem;
    int qty;
    double price;
    // get the data from the user
    cout << "Enter data for the new part !"<<endl;
    cout << "part number!"<<endl;
    cin>>partNumber;
    cout << "Descriptin of the item !"<<endl;
    cin.get(); // move past the '\n' left in the input buffer by the last input
    getline(cin, descriptionOfItem);
    cout << "Quantity on hand !"<<endl;
    cin>>qty;
    cout << "unit price !"<<endl;
    cin>>price;
    //store the data in the InventoryItem object.
    tempItem.storeInfo(partNumber, descriptionOfItem, qty, price);
    return tempItem;
}
void showValues( const InventoryItem items) // receive an object by vlaue
{
    cout <<fixed<<showpoint<<setprecision(2);
    cout << "part Number "<<items.getPartNum()<<endl;
    cout << "Description "<<items.getDescription()<<endl;
    cout << "units on hand "<<items.getOnHand()<<endl;
    cout << "Price £ "<<items.getCost()<<endl;
    
}
*/

