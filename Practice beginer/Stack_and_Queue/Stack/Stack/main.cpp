
//  Stack_and_Queue
//
//  Created by Hossam Farfour on 29/11/2022.
//

#include <iostream>
#include <fstream>
#include <list>
#include <vector>
using namespace std;


//==============Stack============:
//A stack is a data structure that stores and retrieves items in a last-in-first-out manner.

//There are two types of stack data structure: static and dynamic. -Static stacks have a fixed size and are implemented as arrays. -Dynamic stacks grow in size as needed and are implemented as linked list.

//A stack has two primary operations: push and pop.

//For both static and dynamic stacks we will need a Boolean isEmpty operation. The isEmpty operation returns true when the stack is empty and false otherwise.By calling this operat ion,a programmer can ensure that there is something on the stack before attempting a pop operation.

 
 //=======static stack class=========
 /*
class IntStack {
 unique_ptr<int[]>stackArray;
    int capacity; //to check the maximum item that stack can hold
    int top;      // to mark the top item is the stack//specifies the position of the next item that will add to the satck
public:
    IntStack(int capacity){
        stackArray = make_unique<int[]>(capacity);
        this->capacity = capacity;
        top = 0;
    }
    //memebr functions
    void push(int value){
        if (isFull()){
            throw IntStack::Overflow();
        }
        stackArray[top] = value;
        top++;
    }
    void pop(int &value){
        if (isEmpty()){
            throw IntStack::underflow();
        }
        top--; // this first
        value = stackArray[top];
    }
    bool isEmpty() const {
        return top == 0;
    }
    bool isFull() const {
        return top == capacity ;
    }
    //Stack Exceptions
    class Overflow {};
    class underflow{};
};

int main() {
    IntStack stack(5);
    int values[] = {5,10,15,20,25};
    int value;
   cout << "Pushing...!\n";
    for (int i = 0; i<5; i++) {
        cout <<values[i]<<" ";
        stack.push(values[i]);
    }
    cout<<endl;
    cout << "Poping...!\n";
    while (!stack.isEmpty()) {
        stack.pop(value);
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}
*/
//=====
/*
class IntStack {
 unique_ptr<int[]>stackArray;
    int capacity;
    int top;
public:
    IntStack(int capacity){
        stackArray = make_unique<int[]>(capacity);
        this->capacity = capacity;
        top = 0;
    }
    //memebr functions
    void push(int value){
        if (top == capacity){
            throw IntStack::Overflow();
        }
        stackArray[top] = value;
        top++;
    }
    void pop(int &value){
        if (isEmpty()){
            throw IntStack::underflow();
        }
        top--; // this first
        value = stackArray[top];
    }
    bool isEmpty() const {
        return top == 0;
    }
    //Stack Exceptions
    class Overflow {};
    class underflow{};
};

int main() {
    IntStack stack(5);
    int values[] = {5,10,15,20,25};
    int value;
    try {
        cout << "Pushing...!\n";
         for (int i = 0; i<5; i++) {
             cout <<values[i]<<" ";
             stack.push(values[i]);
         }
        cout << endl ;
        cout<<"Pushing value after stack is full..."<<endl;
        stack.push(30);
        cout << "You should not see this!!"<<endl;
    }
    catch (IntStack::Overflow) {
        cout << "Overflow exception occurred\n";
    }
    
    try {
        cout << "poppinf...!\n";
            while (!stack.isEmpty()) {
                stack.pop(value);
                cout<<value<<" ";
            }
        cout<<"\npopping value after stack is empty..."<<endl;
        stack.pop(value);
        cout << "You should not see this!!"<<endl;
    }
    catch (IntStack::underflow) {
        cout << "underflow exception occurred\n";
    }
    return 0;
}

*/
//=======Danamic stack class=========
//A stack may be implemented as a linked list and expand or shrink with each push or pop operation.
/*
class DynIntStack {
    struct StackNode {
        int value;
        StackNode *next;
        StackNode(int value1 ,StackNode *next1 = nullptr){
            value = value1;
            next = next1;
        }
    };
    StackNode *head;
public:
    DynIntStack(){
        head = nullptr;
    }
    ~DynIntStack(){
        while (head != 0) // loop through all nodes and delete them
        {
            StackNode *p = head;
            head = head->next;
            delete p;
        }
    }
    //memebr functions
    void push(int &value){
        head = new StackNode(value ,head);
    }
    void pop(int &value) {
        StackNode *temp;
        if (isEmpty()) {
            throw DynIntStack::Underflow();
        } else {
            //pop value off top of stack
            value = head->value;
            temp = head;
            head = head->next;
            delete temp;
        }
    }
    bool isEmpty() const {
        return head == 0;
    }
    //Stack Exceptions
    class Underflow{};
};

int main() {
    DynIntStack stack ;
    int popped_value;
    
    //push values 5,10,15 on the stack
    for (int i = 5; i<= 15; i = i+5) {
        cout << "Pushing "<<i<<endl;
        stack.push(i);
    }
    cout << endl ;
    //pop values 5,10,15 from the stack
    for (int i = 1; i<= 3; i++) {
        cout << "Popping "<<i<<endl;
        stack.pop(popped_value);
        cout<<"Popped value is: "<<popped_value<<endl;
    }
    //stack is now empty , a pop will cause an exception
    try {
        cout << "attempting to pop up again...!\n";
        stack.pop(popped_value);
         }
    catch (DynIntStack::Underflow) {
        cout << "Underflow exception occurred\n";
    }
    return 0;
}
*/
//=========

/*
class StackNode {
 private:
    int value;
    StackNode *next;
 public:
    StackNode(int value1 ,StackNode *next1 = nullptr){
        value = value1;
        next = next1;
    }
    int getVal(){
        return value;
    }
    StackNode *getNext(){
        return next;
    }
};

class Stack {
 private:
    StackNode *top;
 public:
    int value;
    Stack(){
        top = nullptr;
    }
    ~Stack(){
        while (top != nullptr){
           pop(value);
        }
    }
    void push(int value){
        cout << "Pushing "<<value<<endl;
        StackNode *head = new StackNode(value , top);
        top = head;
    }
    int pop(int &popped_value){
          //int popped_value;
//        if(top != nullptr) {
//            cout<<"popping ";
//            popped_value = top->getVal();
//            StackNode *temp = top;
//            top = top->getNext();
//            delete temp;
//
//        } else
//        throw "underFlow exception occured";
        //or
        StackNode *temp;
        if (top == nullptr) {
            throw "underFlow exception occured";
        } else {
            cout<<"popping ";
            //pop value off top of stack
            popped_value = top->getVal();
            temp = top;
            top = top->getNext();
            delete temp;
        }
        return popped_value;
    }
};
int main() {
    Stack s;
    int popped_value;
    cout<<"pushing...... "<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    
    try {
    cout<<"popping... "<<endl;
    cout<< s.pop(popped_value)<<endl;
    cout<< s.pop(popped_value)<<endl;
    cout<< s.pop(popped_value)<<endl;
    cout<< s.pop(popped_value)<<endl;
    }
    catch(const char *msg) {
        cout<< msg<<endl;
    }
    return 0;
}
*/
//=========STL Stack container=========
//The Standard Template Library offers a stack template that maybe implemented as a vector , a list or a deque.
//1-stack<int, vector<int> >iStack;  //Vector stack
//2-stack<int>iStack;                  // Deque stack(the default)
//3-stack<int, list<int> >iStack      //list stack

//empty  . if(iStack.empty());
//pop    . iStack.pop();
//push   . iStack.push(x);
//size   . out<< iStack.size()<<endl;
//top    . The top function returns a reference to the element at the top of the stack.
//    x = iStack.top();
/*
int main(){
    stack <int, vector<int> >iStack;
    for (int i = 2; i<= 8; i+=2) {
        cout<<"pushing "<<i<<endl;
        iStack.push(i);
    }
    cout<<"The size of the stack is: "<<iStack.size()<<endl;
    //print items and pop unill the stack is empty
    while(!iStack.empty()) {
        cout<<"popping "<<iStack.top()<<endl;
        iStack.pop();
    }
    return 0;
}
*/
//============
/*
int main(){
    stack<int>iStack;
    cout << "I will now enqueue items . . . \n";
    for (int i = 2; i<= 8; i+=2) {
        cout<<"pushing "<<i<<endl;
        iStack.push(i);
    }
    cout<<"The size of the stack is: "<<iStack.size()<<endl;
    cout << "I will now dequeue items . . . \n";
    while (!iStack.empty()) {
        cout<<"popping "<<iStack.top()<<endl;
        iStack.pop();
    }
    return 0;
}
*/
