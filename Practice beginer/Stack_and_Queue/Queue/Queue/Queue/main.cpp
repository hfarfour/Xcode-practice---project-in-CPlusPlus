//
//  main.cpp
//  Queue
//
//  Created by Hossam Farfour on 30/11/2022.
//
#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include<queue> // for enqueue and dequeue
using namespace std;


//Aqueue is a data structure that stores and retrieves items in a first-in-first-out manner.

//Queues, like stacks, can be implemented as arrays or linked lists. Dynamic queues offer the same advantages over static queues that dynamic stacks offer over static stacks. In fact, the primary difference between queues and stacks is the way data elements are accessed in each structure.

//A queue has a front and a rear like a checkout line in a grocery store. When an element is added to a queue, it is added to the rear. When an element is removed from a queue, it is removed from the front.

//The two primary queue operations are enqueuing and dequeuing: -enqueue means to insert an element at the rear of a queue, -dequeue means to remove an element from the front of a queue.


//============static queue class===========
/*
class inQueue{
private:
    unique_ptr<int[]>queueArray; // smart pointer
    int queueSize;  // queue size
    int front;
    int rear;
    int numItems;  //keep track of ltems in the queue
public:
    inQueue(int value){
        queueArray = make_unique<int[]>(value);
        queueSize = value;
        front = -1; // to indicate an empty queue
        rear = -1;  // to indicate an empty queue
        numItems = 0;
    }
    void enqueue(int val){
        if(isFull()){
            cout<<"The queue is full"<<endl;
            exit(1);
        } else {
            cout<<"enququing "<<val<<endl;
            // calculate the new rear position
            rear = (rear +1) %queueSize;//===========
            //insert new item
            queueArray[rear] = val;
            // update item count
            numItems++;
        }
    }
    void dequeue(int &val){
        if (isEmpty()) {
            cout<<"The queue is empty"<<endl;
            exit(1);
        } else {
            //move front
            front = (front +1) %queueSize; //===========
            //retrive the front item
            numItems--;
            val = queueArray[front];
        }
    }
    bool isEmpty(){
        return numItems == 0;
    }
    bool isFull(){
        return numItems == queueSize;
    }
    void clear(){
        //set queue to empty(clear the queue)
        front = -1;
        rear = -1;
        numItems = 0;
    }
};
int main() {
    inQueue iQueue(5);
    cout << "Enqueueing 5 items....\n";
    for (int i = 1; i<=5; i++) {
        iQueue.enqueue(i*i);
    }
    cout << "Dequeuing 5 items....\n";
    cout << "The values in the queue were: ";
    while (!iQueue.isEmpty()) {
        int value;
        iQueue.dequeue(value);
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}
*/
//===overflow and underflow static queue==
/*
 class inQueue{
 private:
     unique_ptr<int[]>queueArray; // smart pointer
     int queueSize;  // queue size
     int front;
     int rear;
     int numItems;  //keep track of ltems in the queue
 public:
     inQueue(int value){
         queueArray = make_unique<int[]>(value);
         queueSize = value;
         front = -1; // to indicate an empty queue
         rear = -1;  // to indicate an empty queue
         numItems = 0;
     }
     void enqueue(int val){
         if(isFull()){
             throw inQueue::Overflow();
         } else {
             cout<<"enququing "<<val<<endl;
             // calculate the new rear position
             rear = (rear +1) %queueSize;
             //insert new item
             queueArray[rear] = val;
             // update item count
             numItems++;
         }
     }
     void dequeue(int &val){
         if (isEmpty()) {
             throw inQueue::Underflow();
         } else {
             //move front
             front = (front +1) % queueSize;
             //retrive the front item
             val = queueArray[front];
             // update item count
             numItems--;
         }
     }
     bool isEmpty(){
         return numItems == 0;
     }
     bool isFull(){
         return numItems == queueSize;
     }
     void clear(){
         //set queue to empty(clear the queue)
         front = -1;
         rear = -1;
         numItems = 0;
     }
     //class Exceptions
     class Overflow{};
     class Underflow{};
 };
 int main() {
     inQueue iQueue(5);
     int Dequeue_Value;
     try {
         cout << "Enqueueing 5 items....\n";
         for (int i = 1; i<=5; i++) {
             iQueue.enqueue(i*i);
         }
         cout << "Enqueueing items after the queue is full...\n";
         iQueue.enqueue(30);
     }
     catch (inQueue::Overflow) {
         cout << "Overflow exception occurred\n";
     }
     try {
         cout << "Dequeuing 5 items....\n";
         cout << "The values in the queue were: ";
         while (!iQueue.isEmpty()) {
             iQueue.dequeue(Dequeue_Value);
             cout<<Dequeue_Value<<" ";
           }
        cout << "\nDequeueing items after the queue is empty...\n";
        iQueue.dequeue(Dequeue_Value);
         
       } catch (inQueue::Underflow) {
         cout << "Underflow exception occurred";
       }
     cout<<endl;
     return 0;
 }
*/
//====

//=======Danamic Queue class=========
/*
//like linkedList
class DynIntQueue {
    struct QueueNode {
        int value;
        QueueNode *next;
        QueueNode(int value1 ,QueueNode *next1 = nullptr){
            value = value1;
            next = next1;
        }
    };
    //these track the front and rear of the queue
    QueueNode *front;
    QueueNode *rear;
public:
    DynIntQueue(){
        front = nullptr; //set queue empty
        rear = nullptr;
    }
    ~DynIntQueue(){
        while (front != nullptr) // loop through all nodes and delete them
        {
            QueueNode *p = front;
            front = front->next;
            delete p;
        }
    }
    //memebr functions
    void enqueue(int value){
        if (isEmpty()) {
        } else {
            cout<<"enqueueing "<<value<<endl;
            rear->next = new QueueNode(value);
            rear = rear->next;
        }
    }
    //Function dequeue removes the value at the front of the queue, and copies it into value.
    void dequeue(int &value) {
        QueueNode *temp; //  for copy
        if (isEmpty()) {
            throw DynIntQueue::Underflow();
        } else {
            //pop value off top of stack
            value = front->value;
            temp = front;
            front = front->next;
            delete temp;
        }
    }
    bool isEmpty(){
        if (front == nullptr) {
            return true;
        } else {
        return false;
        }
    }
    void clear(){
        int value;
        //set queue to empty(clear the queue)
        while (!isEmpty()) {
            dequeue(value);
        }
    }
    //class Exceptions
    class Underflow{};
};

int main() {
    DynIntQueue iQueue ;
    int Dequeue_Value;
    
    //push values 5,10,15 on the stack
    cout << "Enqueueing 5 items....\n";
    for (int i = 1; i<=5; i++) {
        iQueue.enqueue(i*i);
    }
    try {
        cout << "Dequeuing 5 items....\n";
        cout << "The values in the queue were: ";
        while (!iQueue.isEmpty()) {
            iQueue.dequeue(Dequeue_Value);
            cout<<Dequeue_Value<<" ";
          }
       cout << "\nDequeueing items after the queue is empty...\n";
       iQueue.dequeue(Dequeue_Value);
        
      } catch (DynIntQueue::Underflow) {
        cout << "Underflow exception occurred";
      }
    cout<<endl;
    return 0;
}
*/
//=========STL queue container=========
/*
int main(){
    queue<int>iDequeue;  // need #include<queue>
    cout << "I will now enqueue items . . . \n";
    for (int i = 2; i<= 8; i+=2) {
        cout<<"pushing "<<i<<endl;
        iDequeue.push(i);
    }
    cout<<"The size of the stack is: "<<iDequeue.size()<<endl;
    cout << "I will now dequeue items . . . \n";
    while (!iDequeue.empty()) {
        cout<<"popping "<<iDequeue.front()<<endl;
        iDequeue.pop();
    }
    return 0;
}
 */

//=========STL dequeue container=========
//push_back . iDequeue.push_back(7);
//pop_front . iDequeue.pop_front();
//front     . return a referance to the first item in the deque
//       cout<<iDequeue.front();

/*
int main(){
    deque<int>iDequeue;
    cout << "I will now enqueue items . . . \n";
    for (int i = 2; i<= 8; i+=2) {
        cout<<"pushing "<<i<<endl;
        iDequeue.push_back(i);
    }
    cout<<"The size of the stack is: "<<iDequeue.size()<<endl;
    cout << "I will now dequeue items . . . \n";
    while (!iDequeue.empty()) {
        cout<<"popping "<<iDequeue.front()<<endl;
        iDequeue.pop_front();
    }
    return 0;
}
*/

//=====================

// it works in window better see example in windows
/*
class Queue {
private:
    int front;
    int back;
    int values[5];
public:
    Queue() {
        front = -1;
        back = -1;
    }
    bool IsEmpty() {
        if(front == -1 && back == -1)
            return true;
        else
            return false;
    }
    bool IsFull() {
        if(back == 4)
            return true;
        else
            return false;
    }
    void Enqueue(int val) {
        if(IsFull()) {
            cout<<" the queue is full right now so dequeue an item to do so  "<<endl;
            return;
          }
           else if(IsEmpty()) {
            front = 0;
            back = 0;
            values[back] = val;
        } else {
               back++;
               values[back] = val;
           }
    }
    int Dequeue() {
        int x;
        if(IsEmpty()) {
            cout<<" the queue is empty "<<endl;
            return 0;
        }
        // if the queue has only one item
        else if (front == back)
        {
            x = values[front];
            values[front] = 0;
            front = -1;
            back = -1;
            return x;
        } else // if the queue has more than one item
        {
            x = values[front];
            values[front] = 0;
            front = front+1; //or front++;
            return x;
        }
    }
    int Count () {
        return(back-front+1);
    }
    void display() {
        cout<<"Values in the Queue are : "<<endl;
        for(int i =0 ; i<5; i++) {
            cout<<values[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Queue q1;
    int option;
    int value;
    
    do {
        cout<<"\n what operation do you want to perform ?  choose from the list .Enter 0 to exit "<<endl;
        cout<<"  press 1 to Enqueue"<<endl;
        cout<<"  press 2 to Dequeue"<<endl;
        cout<<"  press 3 to check whether the queue is empty or not"<<endl;
        cout<<"  press 4 to check whether the queue is full or not"<<endl;
        cout<<"  press 5 to count the element in the queue"<<endl;
        cout<<"  press 6 to display the content of the queue"<<endl;
        cout<<"  press 7 to Clear the screen"<<endl;
        
        cin>>option;
        
        switch (option)
        {
            case 0:
                cout<<" thank you "<<endl;
            break;
                
            case 1:
                cout<<" Enqueue operation \n enter an item to enqueue  "<<endl;
                cin>>value;
                q1.Enqueue(value);
            break;
                
            case 2:
            cout<<" Dequeue operation /n "<<q1.Dequeue()<<endl;
            break;
                
            case 3:
                if(q1.IsEmpty()) {
                    cout<<" queue is empty "<<endl;
                } else {
                    cout<<" queue is Not empty "<<endl;
                }
            break;
                
            case 4:
                if(q1.IsFull()) {
                    cout<<" queue is full "<<endl;
                } else {
                    cout<<" queue is Not full "<<endl;
                }
                break;
                
            case 5:
                cout<<" elements in the queue are: "<<q1.Count()<<endl;
            break;
                
            case 6:
                cout<<"display function is called "<<endl;
                q1.display();
            break;
                
            case 7:
                system("cls");
            break;
                
            default:
                cout<<" enter proper option number please " <<endl;
                break;
        }
    }
    while (option != 0);
    return 0;
}
*/
//===========PriorityQueue==================
/*
class Node {
private:
    int val;
    Node *next;
    Node *prev;
    int priority;
public:
    Node(int value, Node *nextptr = nullptr, Node *prevptr = nullptr,int currentpriority=0)
    {
        val = value;
        next = nextptr;
        prev = prevptr;
        priority = currentpriority;
    }
    int getVal(){
        return val;
    }
    
    void setVal(int vals) {
        val = vals;
    }
     
   void setNext(Node *nextptr) {
        next = nextptr;
    }
    Node *getNext(){
        return next;
    }
    
    void setPrev(Node *prevptr){
        prev = prevptr;
    }
    
    Node *getPrev(){
        return prev;
    }
    
    int getPriority() {
        return priority;
    }
    void setPriority(int priority)
    {
        //priority = currentpriority;
    }
    
};
class Queue
{
protected:
    Node *back;
    Node *front;
public:
     Queue( ) {
        front = back = nullptr;
    }
    ~Queue() {
        while (front != nullptr)
        {
            delete NodeDequeue();
        }
    }
    void Enqueue(int i,int priority = 0) {
        Node *tmp = new Node(i,back,nullptr,priority);
        back = tmp;
        if(front == nullptr) front = back ;
        else {
            tmp = back->getNext();
            tmp->setPrev(back);
        }
    }
//    Node *NodeDequeue() // =====need adjuestment to use priority
//    {
//        Node *tmp = front;
//        if(front != nullptr) {
//            front = front->getPrev();
//            if(front != nullptr) front ->setNext(nullptr);
//        }
//        return tmp;
//    }
    //=====================================================
    Node *NodeDequeue() // =====need adjuestment to use priority
       {
           Node *max = front;   //max priority
           int mp = 0;          //maximum priority
           int cp = 0;          // current priority
           Node *temp=front;
           while (temp != nullptr)
           {
               cp = temp->getPriority();
               if(cp > mp)
               {
                   mp=cp;
                   max=temp;
               }
               temp=temp->getPrev();
           }
           Node *pmax = back;   // previous max
           Node *nmax = front;  // next max
           pmax = max->getPrev();
           nmax = max->getNext();
           pmax->setNext(nmax);
           nmax->setPrev(pmax);
           back = max->getNext();   //uopdate the back
           front = max->getPrev();  //update the front
          
           return max;
           
       }
    //==================================================
    int Dequeue()
    {
        Node * tmp=NodeDequeue();
        int  ret =0;
        if(tmp != nullptr)
        {
            ret=tmp->getVal();
        }
        else
        {
            cout<<" the Queue is Empty"<<endl;
        }
        if(front == nullptr) back = front ;
        
        delete tmp;
        return ret;
    }
    
    void print (string order)
    {
        cout<< " printing queue ["<<order << "]"<<endl;
        Node *temp=nullptr;
        if(order=="forward")
        {
            temp=front;
            while (temp!=nullptr)
            {
                cout<<temp->getVal()<<", ";
                cout<<temp->getPriority()<<endl;
                temp=temp->getPrev();
            }
        }
        else
        {
            temp=back;
            while (temp!=nullptr)
            {
                cout<<temp->getVal()<<", ";
                cout<<temp->getPriority()<<endl;
                temp=temp->getNext();
            }
        }
        cout<<endl<<endl;
    }
};

int main()
{
    Queue numbers;
   
    numbers.Enqueue(10,1);
    numbers.Enqueue(20,3);
    numbers.Enqueue(50,2);
    numbers.Enqueue(80,2);
    numbers.print("forward");
    numbers.print("backward");
//    cout<<numbers.Dequeue()<<" "<<endl;
//    numbers.print("forward");
//    cout<<numbers.Dequeue()<<" "<<endl;
//    numbers.print("forward");
//    cout<<numbers.Dequeue()<<" "<<endl;
  //  cout<<numbers.Dequeue()<<" "<<endl;
    try
    {
        for(int i=0;i<5;i++)
        {
            cout<<"Dequeue = "<<numbers.Dequeue()<<endl;
            numbers.print("forward");
       }

    }
    catch (string s)
    {
        cout<< s <<endl;
    }
   // getchar();
    return 0;
}
*/
//===============

/*
class Node
{
private:
    int val;
    Node *next;
    Node *prev;
    
public:
    Node(int value, Node *nextptr, Node *prevptr = nullptr) {
        val = value;
        next = nextptr;
        prev = prevptr;
    }
    int getVal()
    { return val; }
    
   void setNext(Node *nextptr)
    { next = nextptr; }
    
    Node *getNext()
    { return next; }
    
    void setPrev(Node *prevptr)
    { prev = prevptr; }
    
    Node *getPrev()
    { return prev; }
    
};
class Queue
{
protected:
    Node *back;
    Node *front;
public:
     Queue(){
        front = back = nullptr;
    }
    ~Queue() {
        while (front != nullptr){
            delete NodeDequeue();
        }
    }
    void Enqueue(int i){
        Node *tmp = new Node(i,back);
        back = tmp;
        if(front == nullptr)
            front = back ;
        else {
            tmp = back->getNext();
            tmp->setPrev(back);
        }
    }
    Node *NodeDequeue() {
        Node *tmp = front;
        if(front != nullptr) {
            front = front-> getPrev();
            if(front != nullptr) front->setNext(nullptr);
        }
        return tmp;
    }
    
    int Dequeue(){
        Node *tmp = NodeDequeue();
        int  ret = 0;
        if(tmp != nullptr) {
            cout<<"dequeuing this value "<<endl;
            ret = tmp->getVal();
        } else {
           throw "the is Queue Empty";
        }
        if(front == nullptr)
        back = front ;
        delete tmp;
        return ret;
    }
    void print (string order)
    {
        cout<< " printing queue ["<<order << "]"<<endl;
        Node *temp = nullptr;
        if(order == "forward") {
            temp = front;
            while (temp != nullptr) {
                cout<<temp->getVal()<<", ";
                temp = temp->getPrev();
            }
        } else {
            temp = back;
            while (temp!=nullptr) {
                cout<<temp->getVal()<<", ";
                temp = temp->getNext();
            }
        }
        cout<<endl<<endl;
    }
};


int main()
{
    Queue numbers;
    numbers.Enqueue(10);
    numbers.Enqueue(20);
    numbers.Enqueue(30);
    try{
    numbers.print("forward");
    cout<<numbers.Dequeue()<<" "<<endl;
    cout<<numbers.Dequeue()<<" "<<endl;
    cout<<numbers.Dequeue()<<" "<<endl;
    cout<<numbers.Dequeue()<<" "<<endl;
    numbers.print("forward");
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}
*/
