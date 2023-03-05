
//  main.cpp
//  Created by Hossam Farfour on 18/11/2022.
//
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip> // for cin>>setw(9);
#include <sstream> //for  istringstream and ostringstream
#include <fstream> // for file input and output
#include <sstream>

using namespace std;


//(BOOK PAGE 864)============================
// ofstream for outputfile (write to file) <<
// ifstream for intputfile (print from file) >>
// fstream  for both intputfile and outputfile.

//The ifstream , ofstream ,and fstream classes are very similer. Each has a defult constructor that allows instances of the class to be created:

//1- istringstream(string s) Constructor for ostringstream : sets the initial value of the output stream for the object.
//2- ostringstream(string s) Constructor for istringstream : sets the initial value of the input stream for the object.
//3- string str() Returns the string contained in the ostringstream or istringstream  object.
//4- void str(string &s) Sets the string that serves as the input or output stream for the object.


//==========getline function=======
/*
int main(){
    // variables needed for file input
    fstream outputfile;
    string input;
    outputfile.open("intout.txt");
    if(outputfile.fail()){
    cout << "File open error !"<< endl ;
    }
  //read
    getline(outputfile, input);
       while(outputfile){
           getline(outputfile, input);
           cout<<input<<endl;
    }
    outputfile.close();
    return 0;
}
*/
//=========the get familiy of memebr function====
// Use EOF to avoid the error generated by attempting to get input past the end of a file. The EOF function returns False until the end of the file has been reached. With files opened for Random or Binary access, EOF returns False until the last executed Get statement is unable to read an entire record.
/*
int main(){
    // variables needed to read file one character at a time
    fstream outputfile;
    char ch;
    outputfile.open("intout.txt");
    if(outputfile.fail()){
    cout << "File open error !"<< endl ;
    }
  //read
    ch = outputfile.get();
       while(ch != EOF){
           cout<<ch;
           ch = outputfile.get();
    }
    outputfile.close();
    return 0;
}
*/
//======The peek Member Function=========
/*
int main(){
    // variables needed to read character and numbers
    char ch;
    int number;
    fstream inputfile, outputfile;
    
    inputfile.open("intout.txt");
    if(inputfile.fail()){
    cout << "File open error !"<< endl ;
    }
    
    outputfile.open("output.txt");
    if(outputfile.fail()){
    cout << "File open error !"<< endl ;
    }
   
  //read . // peek at the first character
    ch = inputfile.peek();
       while(ch != EOF){
           cout<<ch;
           // examine currect character
           if (isdigit(ch)) {
               inputfile>>number;
               outputfile<<number+1;
           } else {
               ch = inputfile.get();
               outputfile<<ch;
           }
           //peek at the next character from inputfile file
           ch = inputfile.peek();
         
    }
    inputfile.close();
    outputfile.close();
    return 0;
}
*/

//===write to file===
/*
int main() {
    fstream outputfile;
    string word;
    // open the file
    outputfile.open("intout.txt");
    if(outputfile.fail()){
        cout<<"the file was not found "<<endl;
        return 1;
    }
    cout<<"enter three name "<<endl;
    for (int i = 1 ; i <= 3; i++)
    {
        cin>>word;
        outputfile<<word<<endl;
    }
//    //clear end of file flag to allow addtional file operations

//    // write a word to the file and close the file
//    inputfile<<"hello"<<endl;
      outputfile.close();
    return 0;
}
 */
//===read from file===
/*
int main() {
    fstream inputfile;
    string word;
    // open the file
    inputfile.open("intout.txt");
    if(inputfile.fail()){
        cout<<"the file was not found "<<endl;
        return 1;
    }
    // read and print
    while(inputfile>>word) {
        cout<<word<<" ";
    }
//    //clear end of file flag to allow addtional file operations
//    inputfile.clear();
//    // write a word to the file and close the file
//    inputfile<<"hello"<<endl;
     inputfile.close();
    return 0;
}
 */

//=================
// str(). copy of the current contents of the stream.
/*
int main () {
  ostringstream ss;
  ss.str ("Example string");
  string s = ss.str();
  cout << s << '\n';
  return 0;
}
 */
//====
 /*
string dollarFormat (double);

int main(){
    const int ROWS = 3, COLS = 2;
    double amount[ROWS][COLS] = {184.45, 7, 64.32,
                                 64.32 , 7.29, 12.89} ;
    // Format table of dollar amounts right justified in columns of width 10
    cout << left ;
    for( int row = 0; row < ROWS; row++){
        for( int column = 0; column < COLS; column++){
            cout<<setw(10)<<dollarFormat(amount[row][column]);
        }
        cout<<endl;
    }
    return 0;
}
string dollarFormat (double amount){
   //Create ostringstream object
    ostringstream outString ;
    //Set up format information and write to outStr.
   outString << showpoint <<fixed<< setprecision(2);
    outString << '$' << amount;
    // Extract and return the string inside outString.
    return outString.str();
    }
*/
//======
/*
int main(){
    int a, b;
     cout << "Enter two decimal numbers: ";
     cin >>a>>b;
     cout << "The numbers in decimal: "<<a<< "\t"<<b<<endl;
     cout << "The numbers in hexadecimal: "<< hex << showbase <<a<< '\t'<<b<<endl;
     cout<< "The numbers in octal: "<< oct << a<< '\t' << b << endl;
    // Read some hexadecimal and print their decimal equivalents
     cout<< "Enter two hexdecimal numbers: ";
     cin>>hex>>a>>b;
     cout <<"You entered decimal "<<dec<<a<< '\t' << b <<endl ;
    // Read some octals and print their decimal equivalent
    cout<< "Enter two octals numbers: ";
    cin>>oct>>a>>b;
    cout <<"You entered decimal "<<dec<<a<< '\t' << b <<endl ;
    return 0;
}
*/

//=================More Detailed Error Testing===============
//All streamobjects have error state bits that indicate the condition of the stream .
/*
void showstate (fstream &);
int main(){
    // Open a file , write a number, and show file status
    fstream testFile ("stuff.dat",ios::out);

    if(testFile.fail()){
        cout<<"can not open file"<<endl;
        return 0;
    }
    int num = 10;
    cout << "Writing to the file"<<endl;
    testFile<<num;
    showstate(testFile);
    testFile.close();
    //Open the same file , read the number , show state
    testFile.open("stuff.dat",ios::in);
    if(testFile.fail()){
        cout<<"can not open file"<<endl;
        return 0;
    }
    cout << "Reading from the file.\n";
    testFile >> num;
    showstate(testFile);
    //Attempt an invalid read, and show status
    cout << "Forcing a bad read operation .\n";
    testFile >> num;
    showstate (testFile);
    //Close file and quit
    testFile.close( );
    return 0;
}
void showstate (fstream &file){
    cout<<"file state"<<endl;
    cout<<"eof bit "<<file.eof()<<endl;
    cout<<"fail bit "<<file.fail()<<endl;
    cout<<"bad bit "<<file.bad()<<endl;
    cout<<"good bit "<<file.good()<<endl;
    file.clear();
}
 */

