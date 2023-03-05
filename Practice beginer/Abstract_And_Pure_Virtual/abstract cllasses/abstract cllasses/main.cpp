#include <iostream>
#include <string>
#include <vector>
using namespace std;

//abstracted classes

//Abstract classes and pure virtual functions can be used to define an interface that must be implemented by derived classes.

// means evry drived class must implement the method that apears as pure virtial function in the base class.

// can not great an object from abstracted class.
 

class shape{
    string color;
public:
    shape (string c){
        color=c;
    }                         //this is a abstracted classes
    virtual int area() = 0;   //no body in pure virtual function
   
    virtual void draw() = 0;
   
    virtual void erase() = 0;
};

class rectangle : public shape{
private:
    int length;
    int width;
public:
    rectangle(int l,int w ,string c):shape (c){
        length=l;
        width=w;
    }               // a clss taking inheritance form pure  must                but implementation (body)
    int area(){
        cout<<"rectangle class area  : "<<(width * length)<<endl;
        return (width * length);
    }
    void draw( ){
        cout<<"draw rectangle "<<endl;
    }
    void erase(){
       cout<<"the rectangle erase "<<endl;
    }
};
class circal : public shape{
private:
    int radius;
public:
  circal(int r,string c):shape(c){
        radius = r;
    }
    int area(){
        cout<<"circal area  :"<<3.14 * (radius * radius)<<endl;
        return (3.14 * radius * radius);
    }
    void draw(){
        cout<<"draw circal"<<endl;
    }
    void erase(){
        cout<<"the ciracal erase"<<endl;
    }
};

int main()
{
    
   // shape s1;     //cannot create an object from class shape
 //   because it is a abstract classes
    shape* TG;
    rectangle rec(10,7,"red");
    circal c(5,"yellow");
    TG = &rec;
    TG -> area();
    TG -> draw();

    TG = &c;
    TG ->area();
    TG-> draw();
    
    return 0;
}

//==============================
/*
class shape{
protected:
    int posX, posY;
public:
    virtual void draw() = 0;
   
    void setPosition(int pX , int pY){
        posX = pX;
        posY = pY;
    }
};

class rectangle : public shape{
public:
     void draw( ){
        cout<<"drawing rectangle at "<<posX<<" "<<posY<<endl;
    }
};
class circal : public shape{
public:
     void draw(){
        cout<<"draw circal "<<posX<<" "<<posY<<endl;
    }
};

int main() {
    // greate vector pf pointers to shapes
    vector<shared_ptr<shape>>shapes {
        make_shared<circal>(),
        make_shared<rectangle>(),
        make_shared<circal>()
    };
    //Set positions of all the shapes
    int posX =5, posY = 15;
    for (int i = 0; i < shapes.size(); i++) {
        shapes[i]->setPosition(posX, posY);
        posX += 10;
        posY += 10;
    }
    //Draw all the shapes at their position
    for (int i = 0; i < shapes.size(); i++) {
        shapes[i]->draw();
    }
    return 0;
}
*/
