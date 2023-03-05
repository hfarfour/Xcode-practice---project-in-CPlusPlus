
#ifndef calculator_hpp
#define calculator_hpp

#include <stdio.h>

#endif /* calculator_hpp */
#include <cmath>
#include <iostream>
using namespace std;

// static member function
class calculator
{
public:
    static int add (int num1,int num2);
    static int multiply (int num1,int num2);
    static int subtract(int num1,int num2);
    
    calculator();
    ~calculator();
};

