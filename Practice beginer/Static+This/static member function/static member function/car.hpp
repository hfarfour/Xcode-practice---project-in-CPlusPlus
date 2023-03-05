
#ifndef car_hpp
#define car_hpp
#include <stdio.h>
#endif /* car_hpp */
#include <iostream>
using namespace std;


class car
{
private:
    string maker;
    int model;
    string color;
   static int count;         // static veriable
    
    
public:
    void setMaker(string n);
    string getMaker();
    void setModel(int mo);
    int getModel();
    int getcarsCount();
    
    car();
    car(string n,int m,string c);
    ~car();
};
