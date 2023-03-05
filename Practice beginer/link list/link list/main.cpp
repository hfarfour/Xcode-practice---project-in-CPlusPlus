 #include <iostream>
#include <fstream>
#include <list>
#include <iomanip> // needed to sue setw()
using namespace std;



//THE STL List Container in Page 1102



//Link List
//Dynami cally allocated data structures may be linked together in memory to form a chain.

//A linked list is a series of connected nodes, where each node is a data structure . The nodes of a linked list are usually dynamically allocated, used, and then deleted, allowing the linked list to grow or shrink in size as the program runs. If new information needs to be added to a linked list, the program simply allocates another node and inserts it into the series. If a particular piece of information needs to be removed from the linked list, the program deletes the node containing that information.

//-there is no need to know how many nodes in the list unlike array.
//-can add and remove nodes very easilly.
//-you need to have a pointer to the head of the list



// there is two way to build nodes
/*
struct listNode {
    double value;
    listNode *next;
};

int main()
{
    listNode *head = nullptr; //pointer to be used as the list head and initializing its value to nul1ptr
    
    //creating first node
    head = new listNode;   //allocate new node
    head->value = 12.3;    //store the value
    head->next = nullptr;  //first node is end of list
    
    //creating second node
    listNode *secondnode = new listNode;
    secondnode->value = 13.5;
    head->next = secondnode; //first node point to second
    secondnode->next = nullptr; //secode node is end of list
    
     //creating third node
    listNode *third = new listNode;
    third->value = 16.4;
    secondnode->next = third;
    third->next = nullptr;
    
    listNode *forth = new listNode;
    forth->value = 30.5;
    third->next = forth;
    forth->next = nullptr;
    
    //print list
    cout<<"the first Node is "<<head->value<<endl;
    cout<<"the second Node is "<<secondnode->value<<endl;
    cout<<"the third Node is "<<third->value<<endl;
     cout<<"the forth Node is "<<forth->value<<endl;
    
    // traverse the list while printing // go through each node
    
    cout<<"the content of the list are : "<<endl;
//    listNode *numberlist = head;
//    listNode *ptr = numberlist;
    //or
    listNode *ptr = head;
    while (ptr != nullptr)
    {
        cout<<ptr->value<<endl; //processint the node node
        ptr = ptr->next;        //moving to the next node
    }
    return 0;
}
*/
//=====another way ====by constructor====
/*
struct listNode {
    double value;
    listNode *next;
    listNode(double value1, listNode *head = nullptr){
          value = value1;
          next = head;
      }
};
int main()
{              // bage 1077
     listNode *first = new listNode(25.5);
     first->next = nullptr;
 
     listNode *secondnode = new listNode(13.7);
     first->next = secondnode;
     secondnode->next = nullptr;
    
     listNode *third = new listNode (11.5);
     secondnode->next = third;
     third->next = nullptr;
    
     listNode *forth = new listNode(20.5);
     third->next = forth;
     forth->next = nullptr;
    
     cout<<"the linked list are :"<<endl;
     cout<<first-> value<<", "<<secondnode->value<<", "<<third->value<<", " <<forth->value<<", "<<endl;
    
    // traverse the list while printing
    cout<<"the linked list are :"<<endl;
    listNode *numberlist = first;
    listNode *ptr = numberlist;
    while (ptr != nullptr)
    {
        cout<<ptr->value<<", "; //processint0 the node node
        ptr = ptr->next;//moving to  the next node
    }
    cout<<endl;
    return 0;
   
}
*/
//==============Read from file=================
/*
struct listNode
{
    double value;
    listNode *next;
    listNode(double value1,listNode *head = nullptr){
        value = value1;
        next = head;
    }
};
int main()
{
    double number;                   //use to read the file
    listNode *head = nullptr;  //list of numbers
    //open the file
    ifstream numberfile("numberFile.dat");
    //or
//    ifstream numberfile;
//    numberfile.open("numberFile.dat");
    if(!numberfile) {
        cout<<"error in opening the file "<<endl;
        exit(1);
    }
     //read the file into linked list
    cout<<"the contents of the file are : "<<endl;
    while (numberfile >> number)
    {
        cout<<number<<" ";
        //creat a node to hold these numbers
       head = new listNode(number,head);
   }
   // traverse the list while printing
    cout<<endl<<"the content of the list are : "<<endl;
   // listNode *numbers = head;
    listNode *ptr = head;
    while (ptr != nullptr)
    {
        cout<<ptr->value<<endl;//process node
        ptr = ptr->next; //move to next node
    }
    return 0;
}
*/

//==============Variations of the Linked List=============

//There are many ways to link dynamically allocated data structures together. Two variations of the linked list are the doubly linked list and the circular linked list.
/*
int main(){
    list<int>myList;
    list<int>::iterator iter;
 // Add values to the list
 for(int x = 10; x < 100; x += 10)
     myList.push_back(x);
    //Display the values
    for (iter = myList.begin(); iter != myList.end(); iter++)
        cout << *iter <<" ";
        cout << endl ;
    //Now reverse the order of the elements
    myList.reverse();
    for (iter = myList.begin(); iter != myList.end(); iter++)
        cout << *iter <<" ";
        cout << endl ;
    return 0;
}
*/
//======Linked List Operations(add, print, check and destroy node)======
 
/*
class ListNode
{
private:
    double value;
    ListNode *next; // pointer to next element in the list
    friend class LinkedList;// LinkedList  has friend status
public:
    ListNode(double value1, ListNode *head = nullptr) // constructor
    {
        value = value1;
        next = head;
    }
};
// The linked list class itself
class LinkedList
{
private:
    ListNode *head; // head of the list
public:
    LinkedList() {
        head = nullptr;
    }
    ~LinkedList() // desctructor
    {
        while (head != nullptr) // loop through all nodes and delete them
        {
            ListNode *p = head;
            head = head->next;
            delete p;
        }
    }
    void add(double data) {
        head = new ListNode(data, head);
    }

    bool isMember(double x)  // check if a value is a member
    {
        ListNode *p = head;     // Use p to walk through list
        while (p != nullptr) {
            if (p->value == x){
            cout<<"yes it is "<<endl;
            return true;
            } else {
                p = p->next;
            }
        }
        // List is exhausted without finding x
        cout<<"no it is not "<<endl;
        return false;
    }

    //print the linked list
    void print() {
        ListNode *head = this->head;
        int i = 1;
        while (head != nullptr ) {      // loop until head is null
            cout << i << " : " << head->value <<endl;
            head = head->next;
            i++;
        }
    }
//
//    void insert(double x, int pos)
//    {
//        // Cases where the new value goes at the beginning
//        // or when the list is empty are handled separately
//        if (pos == 0 || head == NULL)
//        {
//            head = new ListNode(x , head);
//        }
//
//        // Figure out how many nodes to skip before splicing
//        // in a new node
//        ListNode *p = head;  // p is used to walk down the list
//        int numberToSkip = 1;
//        while (numberToSkip <= pos)
//        {
//            if (p->next == NULL || numberToSkip == pos)
//            {
//                p->next = new ListNode(x, p->next);
//            }
//            // Not at end and have not skipped enough
//            // So skip another one
//            p = p->next;
//            numberToSkip++;
//        }
//
//    }
  
};

int main() {
    LinkedList *list = new LinkedList(); //create a new linked list
    for (int i = 0; i < 10; i++)// add 100 random numbers
    {
        list->add(rand() % 100); //number is between 0 and 100
    }
    list->print(); // print the list
    cout<<list->isMember(44)<<endl;
    delete list;
    return 0;
}
*/
//======add , remove and display a linkedList======
/*
class NumberList
{
protected:
    struct ListNode { //Declare a class for the list node
    double value;
    ListNode *next;  // pointer to next element in the list
    ListNode(double value1, ListNode *next1 = nullptr) // constructor
    {
        value = value1;
        next = next1;
    }
  };
    ListNode *head;    // list head pointer
public:
    NumberList() {
        head = nullptr;
    }
    ~NumberList() {
        ListNode *p = head; //start at head of list
        while (p != nullptr) // loop through all nodes and delete them
        {
            // garbage keeps track of node to be deleted
            ListNode *garbage = p;
            //Move on to the next node, if any
            p = p->next;
            delete garbage;
        }
    }
    void add(double number) {
         //head = new ListNode(number, head);
        //or
        if (head == nullptr)
            head = new ListNode(number,head);
        else {
            //The list is not empty
            //Use nodePtr to traverse the list
            ListNode *nodePtr = head;
            while (nodePtr->next != nullptr)
                nodePtr = nodePtr->next;
            // nodePtr ->next is nullptr so nodeptr points to last node
            // Create a new node and put it after the last node
            nodePtr = new ListNode(number,head);
            }
     }
    // removing a node for list require three steps
    //1-Locating the node containing the element to be removed
    //2-Unhooking the node from the list
    //3-Deleting the memory allocated to the node
    void remove(double number){
        ListNode *nodePtr , *previousNodePtr = nullptr;
        //If the list is empty, do nothing
        if (!head) return ;
        //Determine if the first node is the one to delete
        if (head->value == number){
            nodePtr = head ;
            head = head->next;
            delete nodePtr;
        } else {
            // Initialize nodePtr to the head of the list
            nodePtr = head ;
            //Skip nodes whose value member is not number
            while (nodePtr != nullptr && nodePtr->value != number){
                previousNodePtr = nodePtr ;
                 nodePtr = nodePtr ->next;
            }
    //Link the previous node to the node after nodePtr, then delete nodePtr
            if (nodePtr != nullptr) {
                previousNodePtr->next = nodePtr->next;
                delete nodePtr;
            }
        }
        
     }
    
    void print() {
        ListNode *P = head;
        while (P) {      // loop until nodePtr is null
            cout<< P->value<<" " <<endl;
            P = P->next; //  move to next node
        }
     }
};

//==Inserting a Node into a Sorted List====

class SortedNumberlist : public NumberList {
public :
    //=override=
    void add(double number){
        ListNode *nodePtr , *previousNodePtr ;
        // nodePtr hold the new number
        // previousNodePtr point to the node that precced the new number
        if(head == nullptr || head->value >= number){
            // a new node goes at the beginning of the list if the list is empty or the new number is less then the first value in the list
            head = new ListNode(number,head);
        } else {//start from the second node
            previousNodePtr = head;
            nodePtr = head->next;
            // Find the insertion point
            while (nodePtr != nullptr && nodePtr->value < number){
                previousNodePtr = nodePtr;
                nodePtr = nodePtr->next;
            }
            // Insert the new node just before nodePtr
            previousNodePtr->next = new ListNode(number, nodePtr);
     }
  }
};
    int main() {
    SortedNumberlist list;
    list.add(2.5);
    list.add(3.5);
    list.add(10.5);
    list.add(1.5); // goes before 1.5
    list.add(5.5); // goes before 10.5
    list.print();
    cout<<"removing a node from list "<<endl;
    list.remove(3.5);
    list.print();
        
    return 0;
}
*/
//==============Linked List Template=============
/*
template<class T>
class NumberList
{
protected:
    struct ListNode { //Declare a class for the list node
    T value;
    ListNode *next;  // pointer to next element in the list
    ListNode(T value1, ListNode *next1 = nullptr) // constructor
    {
        value = value1;
        next = next1;
    }
  };
    ListNode *head; // list head pointer
public:
    NumberList() {
        head = nullptr;
    }
    ~NumberList()
    {
        ListNode *p = head; //start at head of list
        while (p != nullptr) // loop through all nodes and delete them
        {
            // garbage keeps track of node to be deleted
            ListNode *garbage = p;
            //Move on to the next node, if any
            p = p->next;
            delete garbage;
        }
    }
    void add(T number)
    {
        if (head == nullptr)
            head = new ListNode(number);
        else {
            //The list is not empty
            //Use nodePtr to traverse the list
            ListNode *nodePtr = head;
            while (nodePtr->next != nullptr)
                nodePtr = nodePtr->next;
            // nodePtr ->next is nullptr so nodeptr points to last node
            // Create a new node and put it after the last node
            nodePtr->next = new ListNode(number);
            }
     }
    void remove(T number){
        ListNode *nodePtr , *previousNodePtr;
        //If the list is empty, do nothing
        if (!head) return ;
        //Determine if the first node is the one to delete
        if (head->value == number){
            nodePtr = head ;
            head = head ->next;
            delete nodePtr;
        } else {
            // Initialize nodePtr to the head of the list
            nodePtr = head ;
            //Skip nodes whose value member is not number
            while (nodePtr != nullptr && nodePtr->value != number){
                previousNodePtr = nodePtr ;
                 nodePtr = nodePtr ->next;
            }
    //Link the previous node to the node after nodePtr, then delete nodePtr
            if (nodePtr) {
                previousNodePtr->next = nodePtr->next;
                delete nodePtr;
            }
        }
        
     }
    
    void print() {
        ListNode *P = head;
        while (P) {      // loop until nodePtr is null
            cout<< P->value<<" " <<endl;
            P = P->next; //  ove to next node
        }
     }
};
int main() {
    NumberList<string>list;
    list.add("Hossam");
    list.add("Farfour");
    list.add("Issa");
    list.add("Daniz");
    list.add("Yildiz");
    list.print();
    cout<<"removing a node from list "<<endl;
    list.remove("Farfour");
    list.print();

   return 0;
}
*/
//==============Recurisve Linked List Function=============

//Recursion is a useful approach to solving problems that can be broken down into smaller problems of the same type. Some data structures, such as arrays and linked lists, mirror this property of recursion in that a large array can be split into smaller arrays; and likewise, a nonempty linked list can be reduced to a smaller linked list by removing its first node.

/*
struct listNode
{
    double value;
    listNode *next;
    listNode(double value1,listNode *next1 = nullptr)
    {
        value = value1;
        next = next1;
    }
};
// recurisive list function
int size(listNode *ptr);
void displayList(listNode *ptr);

int main()
{
    double number;                   //use to read the file
    listNode *numberlist = nullptr;  //list of numbers
    //open the file
    ifstream numberfile("numberFile.dat");
    //or
//    ifstream numberfile;
//    numberfile.open("numberFile.dat");
    if(!numberfile) {
        cout<<"error in opening the file "<<endl;
        exit(1);
    }
     //read the file into linked list
    cout<<"the contents of the file are : "<<endl;
    while (numberfile >> number)
    {
        cout<<number<<" ";
        //creat a node to hold these numbers
        numberlist = new listNode(number,numberlist);
   }
   // traverse the list while printing
    cout<<endl<<"the content of the list are : "<<endl;
    // use function call====
    displayList(numberlist);
    //or code to print====
//    listNode *ptr = numberlist;
//    while (ptr != nullptr)
//    {
//        cout<<ptr->value<<endl;//process node
//        ptr = ptr->next; //move to next node
//    }

    cout<<"Print the size/number of the item in the list ("<<size(numberlist)<<")"<<endl;

   return 0;
}

int size(listNode *ptr){
    //takes as parameter a pointer to the head node of a linked list and returns the number of elements stored in the list. If the list is empty, its size is zero:
    if (ptr == nullptr) {
        return 0;
    } else {
    //But if a list is nonempty, its size will be one more than the size of its tail:
        return  1+ size(ptr->next);
    }
}
void displayList(listNode *ptr){
    if (ptr != nullptr) {
        cout<<ptr->value<<" "<<endl;
        displayList(ptr->next);
    }
}
*/

//==============Recurisve Linked List memeber Function=============
/*
class NumberList
{
protected:
    struct ListNode { //Declare a class for the list node
    double value;
    ListNode *next;  // pointer to next element in the list
    ListNode(double value1, ListNode *next1 = nullptr) // constructor
    {
        value = value1;
        next = next1;
    }
 };
    ListNode *head;   // list head pointer
private:
    // Recursive implementations
    ListNode *add(double value,ListNode *alist);
    ListNode *remove(double value, ListNode *alist);
    void print (ListNode *alist);
    int size(ListNode *alist);
public:
    NumberList(){
        head = nullptr;
    }
    ~NumberList(){
        ListNode *ptr = head;
        while (ptr != nullptr){
            // Point to the node to be deleted
            ListNode *garbage = ptr;
            ptr = ptr->next;
            delete garbage;
        }
    }
    void add(double value){
        head = add(value, head);
    }
    void remove(double value) {
        head = remove(value, head);
    }
    void print()  {
        print(head);
    }
    int size()  {
        return size(head);
    }
};

NumberList::ListNode *NumberList::add(double value, ListNode *alist){
    if (alist == nullptr) { // if the list is emply great new node and return pointer to that node
        return new ListNode(value);
    }else{
        // add the value to the end of tail
        alist->next = add(value, alist->next);
        return alist;
    }
}

NumberList::ListNode *NumberList::remove(double value, ListNode *alist ){
    //If the list is empty,the function returns nullptr
    if(alist == nullptr) return nullptr;
    // See if value is first on the list If so, delete the value and return the tail
    if (alist->value == value){
       ListNode *tail = alist->next;
       delete alist;
       return tail;
       } else {
      //value is not the first on the list Return the list with the value removed from the tail of the list
        alist->next = remove(value, alist->next);
        return alist;
    }
}
void NumberList:: print(ListNode *alist)  {
    if (alist != nullptr){
        cout<<alist->value<<" "<<endl;
        print(alist->next);
  }
}
int NumberList::size(ListNode *alist)  {
    if (alist == nullptr) return 0;
    else
    return 1 + size(alist->next);
}

int main() {
    NumberList list;
    double number;
    list.add(2.5);
    list.add(3.5);
    list.print();
    cout<<"Enter a numnber to add to the list"<<endl;
    cin>>number;
    list.add(number);
    cout<<"My List now contain :"<<endl;
    list.print();
    cout<<"Enter a number to removing from list "<<endl;
    cin>>number;
    list.remove(number);
    cout<<"The linked list now are "<<endl;
    list.print();

    return 0;
}
*/


//===============================
 //using constrator to initialize node
/*
struct node
{
    int data;
    node *next;
    
    node(int d,node *p = nullptr)
    {
        data = d;
        next = p;
    }
};

class linkedList
{
   protected:
     node *head;
   public:
     linkedList()
    {
        head = nullptr;
    }
    ~linkedList()
    {
        node *next;
        while(head != nullptr)
        {
            next = head->next;
            delete head;
            head = next;
        }
     }
    
    void insert (int val)
    {
        node *newNode = new node(val,head);
        if(head == nullptr)
        {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

 void display()
 {
    node *temp = head;
    while(temp!= nullptr)
    {
        cout<<"temp ->v data = "<<temp->data<<"  ";
        cout<<"temp ->v next = "<<temp->next<<"  "<<endl;
        temp = temp->next;
    }
    cout<<endl;
 }
    
    //==============  qusestion
    
//    void displayRecursively (node *temp)
//    {
//        if(temp != nullptr)
//        {
//            cout<< temp ->data<<" ";
//            displayRecursively(temp ->next);
//        }
//    }
  
    //==============
    // deleting node
    //===============
    
void deleteNode (int n)
{
    node *temp = head;
    unsigned int count = 0;
    if(n==0)
    {
        head = head->next;
        cout<<"delet node "<<temp->data<<endl;
        delete temp;
    }
    
    // deleting second node
    while(temp -> next != nullptr && count < n-1)
    {
        temp = temp -> next;
        count++;
        cout<<count<< " "<<endl;
        
    }
    if (count == n-1)
    {
        node *temp2 = temp->next;
        temp->next=temp->next->next;
        delete temp2;
    }else
        {
            cout<<"your position is greater than my linked list "<<endl;
        }
 }
};
int main()
{
    linkedList l;
    l.insert(1);        // question why cant delete this one ?
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.display();
    cout<<"============"<<endl;
    l.deleteNode(2);
    l.display();
 
    
    return 0;
}
*/
