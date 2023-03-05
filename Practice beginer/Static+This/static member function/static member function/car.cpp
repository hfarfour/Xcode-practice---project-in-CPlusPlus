
#include "car.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;

void car:: setMaker(string m)
{
   maker = m;
}
string car::getMaker()
{
    return maker;
}

void car:: setModel(int mo)
{
    model = mo;
}
int car:: getModel()
{
    return model;
}
int car::getcarsCount()
{
   return count;
    
}

int car :: count = 0;         // important for static mermeble variable

car::car():maker("honda"),model(200),color("white")
{
    count++;  // for counting
}
car::car(string m,int mo,string c):maker(m),model(mo),color(c)
{
     count++;
    
}
car::~car()
{
 count--;
    cout<<"car "<<count+1<<" has left"<<endl;
}
