#include <iostream>
using namespace std;

class Animal{
 public:
   virtual void id() = 0;      //pure virtual function

   virtual void sound() = 0;     // pure virtual function must be impelmented in all drived classes
};

class Cat : public Animal{
 public:
   void id(){
     cout << "cat"<< endl;
      }
   void sound(){
     cout << "Meow" << endl;
     }
};

class Dog : public Animal{
 public:
   void id(){
    cout << "dog"<< endl;
    }
     void sound(){
    cout << "bark" << endl;
    }
};

class Poodle: public Dog{
  public:
    void id(){
      cout << "poodle" << endl;
    }
    void sound(){
    cout << "yap" << endl;
    }
};

class Rabbit: public Animal
{
    void id(){
    cout << "rabbit"<< endl;
    }

  void sound(){
    cout << "none" << endl;
    }
};

int main() {

  Animal *array[] = {new Dog, new Rabbit, new Cat, new Poodle};

  for(int i=0; i<4; i++)
  {
      array[i]->id();    // polymorphizm
      array[i]->sound();
  }
    
    
   
    /*
    Animal* TypeAnimals;
    Cat cats;
   // Dog dogs;
    Poodle poodles;
    Rabbit rabbits;
    
    TypeAnimals = &cats;
    TypeAnimals->id();
    TypeAnimals->sound();
   
//    TypeAnimals = &dogs;
//    TypeAnimals->id();
//    TypeAnimals->sound();
    //or
    TypeAnimals = new Dog;
    TypeAnimals->id();
    TypeAnimals->sound();
    
    TypeAnimals = &poodles;
    TypeAnimals->id();
    TypeAnimals->sound();
  
    TypeAnimals = &rabbits;
    TypeAnimals->id();
    TypeAnimals->sound();
    cout<<endl;
     */
}
