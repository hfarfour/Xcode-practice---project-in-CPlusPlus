 #include <iostream>
using namespace std;





//recursion
//A recursive function is one that calls itself.
//void message (){
//cout << "This is a recursive function.\n";
//message();
//}
// must have a base function otherwise the recurisive never end.
//A base case should eventually be reached, at which time the breaking down (recursion) will stop.

/*
void message(int);

int main()
{
    message(5);
    return 0;
}

void message(int times)
{
   //cout<<"message "<<times<<endl;
    if (times > 0)
    {
        cout<<"message "<<times<<endl;
        message(times-1);
    }
   // cout<<"message "<<times<<"is running "<<endl;
}
*/

//=======================


//factorial
/*
int factorials (int);

int main() {
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    cout<<"the factorial of "<<number<<"  is  "; // for example 5! = 5*4*3*2*1=120
    cout<<factorials(number)<<endl;
    return 0;

}

int factorials(int num){
    if (num == 0) // this is the base function
        return 1;
    else
        return num * factorials(num-1);
}
*/
//============================

//greatest commn divisor
/*
int gcd(int,int);

int main()
{
    int num1,num2;
    cout<<"enter a numver"<<endl;
    cin>>num1>>num2;
    cout<<"the greatest commom divisor of " <<num1<<"  and "<<num2<<"  is ";
    cout<<gcd(num1,num2)<<endl;
}
int gcd(int x,int y)
{
    if(x%y == 0)
        return y;
    else
        return gcd(y,x%y);
}
*/
//============================

/*
//fibonacci
int fib(int);
int main()
{
    cout<<"the first 10 fabonacci numbers are"<<endl;
    for (int x = 0; x<10; x++)
        cout<<fib(x)<<" "<<endl;
}
int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
*/
//=============Recursive Binary Search Function=====
//The binary search algorithm can be defined as a recursive function.
/*
int binarySearch (int [],int, int, int);
const int SIZE = 10;

int main()
{
int tests[SIZE] = {10,20,30,32,34,36,46,78,90,102};
    int result;  // result of the search
    int empID;   // what to search for
    cout<<"enter the emplyee ID to search for :"<<endl;
    cin>>empID;
    result = binarySearch(tests,0, SIZE-1 , empID);
    if(result == -1)
        cout<<"emplyee "<<empID<<" does not exist..or not in esending order "<<endl;
    else
    {   cout<<" ID "<<empID<<" is found at element "<<result+1<<" in the array"<<endl;}
    return 0;
}
int binarySearch (int array[],int first, int last, int value)
{
    int middle;
    int position = -1;
    bool found = false;
    if (first > last) {
        //cout<<"number must be in esending order"<<endl; run with return call of function
        return -1;
    }
    while ( !found && first <= last) {
        middle = (first + last)/2;
        if (array[middle] == value) {
            found = true;
            position = middle;
        } else if (array[middle] > value) {
             return binarySearch(array,first, middle-1, value);
            //or
            //last = middle -1;
        } else {
            return binarySearch(array, middle+1,last, value);
            //or
            //first = middle +1;
        }
    }
    return position;
}
*/
//==================
/*
int binarySearch (const int [],int, int, int);
const int size = 10;

int main()
{
int tests[size] = {10,20,30,32,34,36,46,78,90,102};
    int result;  // result of the search
    int empID;   // what to search for
    cout<<"enter the emplyee ID to search for :"<<endl;
    cin>>empID;
    result = binarySearch(tests,0, size-1 , empID);
    if(result == -1)
      cout<<"that number does not exist "<<endl;
    else
    {   cout<<" ID "<<empID<<" is found at element "<<result+1<<" in the array"<<endl;}
    return 0;
}
int binarySearch (const int array[],int first, int last, int value)
{
    int middle;
    if (first > last) {
        return -1;
    }
        middle = (first + last)/2;
        if (array[middle] == value) {        // if the vlaue in middle
            return middle;
        }
         if (array[middle] > value) {
             return binarySearch(array,first, middle-1, value);
        } else {
            return binarySearch(array, middle+1,last, value);// if the vlaue in upper half
        }
}
*/
//========================================
// inputString: the string to be searched
// ch: the character to be searched for and counted
// position: the starting subscript for the search
 /*
int frequency(string inputString, char ch, int position);

int main(){
    char ch;
    string inputString = "abcddddefa";
    cout<<"enter the character to search for :"<<endl;
    cin>>ch;
    cout << "The letter appears "<<
    frequency(inputString, ch, 0) <<" times.\n";
    return 0;
}

int frequency(string inputString, char ch, int position){
 // base function
    if(position == inputString.length()) //base case//determines whether the base case,that is,the end of the string,has been reached:
        return 0;//If the end of the string has been reached,the function returns 0,indicating there are no more characters to count.
 
    if(inputString[position] == ch)
    return 1+ frequency(inputString, ch, position+1);
    else
    return frequency(inputString,ch, position+1);
}
*/
//===
/*
void quickSort(int[], int, int);
int partition(int[], int, int);

int main(){
    
    const int size = 10;
    int array[size] = {17,53,9,2,30,1,82,64,26,5};
    for (int x = 0 ; x<size; x++){
        cout<<array[x]<<" ";
    }
    cout<<endl;
    //sort the array using quickSort
    quickSort(array, 0, size-1);
    //pint
    for (int x = 0 ; x<size; x++){
        cout<<array[x]<<" ";
    }
    cout<<endl;
    return 0;
}
void quickSort(int array[], int start, int end){
    if (start<end) {
        //Partition the array and get the pivot point
        int p = partition(array,start,end);
        //sort the portion before the pivot point
        quickSort(array, start, p-1);
        //sort the portion after the pivot point
        quickSort(array, p+1, end);
    }
}
int partition(int array[], int start, int end){
    //The pivot element is taken to be the element at the start of the subrange to be partitioned
    int Value = array[start];
    int Position = start ;
    // Rearrange the rest of the array elements to partition the subrange from start to end
    for (int x = start+1; x<=end; x++){
        if (array[x] < Value) {
            swap(array[Position+1], array[x]);
            // Swap the current item with the pivot element
            swap(array[Position], array[Position+1]);
            Position++;
        }
    }
    return Position;
}
*/
/*
void sortArray(int[] ,int , int);
void showArray(int[],int, int);
               
int main() {
    const int Size = 10;
    int values[Size] = {17,53,9,2,30,1,82,64,26,5};
    // Display the values
    cout << "The unsorted values are: \n";
    showArray(values, 0, Size-1);
    // Sort the values
    sortArray (values, 0, Size-1);

    // Display them again
    cout << "The sorted values are:\n";
    showArray (values, 0, Size-1);
    
    return 0;
}
void sortArray(int array[] ,int start, int end) {
    int temp;
    bool madeSwap;
    do {
       madeSwap = false;
        for (int i = start; i <= end ; i++) {
            if (array[i] > array[i+1]) {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                madeSwap = true;
            }
        }
    } while (madeSwap);
}
void showArray(int array[],int start, int end) {
    for (int i = start; i <= end; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
*/
