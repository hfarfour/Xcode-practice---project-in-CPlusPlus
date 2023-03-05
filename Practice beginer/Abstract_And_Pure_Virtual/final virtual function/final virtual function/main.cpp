#include <iostream>
#include <string>
using namespace std;


/*
class shape
{
    string color;
public:
    shape (string c)
    {
        color = c;
    }
    virtual int area() = 0;
   
    virtual void draw() = 0;  // abstract classes
    virtual void erase() = 0;
    virtual void display () final  // final function
    {
        cout<<"this si a shape final function"<<endl;
    }
};
class rectangle : public shape
{
private:
    int length;
    int width;
public:
    rectangle(int l,int w ,string c): shape (c)
    {
        length = l;
        width = w;
    }
    int area()
    {
        cout<<"rectangle class area  : "<<(width * length)<<endl;
        return (width * length);
    }
    void draw( )
    {
        cout<<"draw rectangle "<<endl;
    }
    void erase()
    {
       cout<<"the rectangle erase "<<endl;
    }
    //can not be overriden because of final virtual function
    // void display ()
    //{
     //   cout<<"this si a shape"<<endl;
    //}
};
class circal : public shape
{
private:
    int radius;
public:
  circal(int r,string c):shape(c)
    {
        radius=r;
    }
    int area()
    {
        cout<<"circal area  :"<<3.14 * (radius * radius)<<endl;
        return (3.14 * radius * radius);
    }
    void draw()
    {
        cout<<"draw circal"<<endl;
    }
    void erase()
    {
        cout<<"the ciracal erase"<<endl;
    }
};

int main()
{
   // shape s1;//cannot create an object from    class shape
    shape *TG;
    rectangle rec(10,7,"red");
    circal c(5,"yellow");
    TG = &rec;
    TG -> area();
    TG -> draw();
    //TG ->display();
    
    TG = &c;
    TG ->area();
    TG ->draw();
    

    return 0;
}
*/
//=======================================


