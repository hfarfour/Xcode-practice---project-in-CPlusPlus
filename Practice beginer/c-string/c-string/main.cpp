
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip> // for cin>>setw(9);
#include <sstream> //for  istringstream and ostringstream
using namespace std;

//A C -string is a sequence of characters stored in consecutive memory locations and terminated by a null character.

// strlen == Return the length of string (whatever you type)
// strcat == the function append the contant of the secode string to the first.
// strcpy == the function copies the contant of the secode string to the first.
// strcmp == If string1 and string2 are the same
// strstr == Searches need * prinrt after that char...
int main()
{
    
//    string str2;
//    cout << "Enter your job: ";
    //cin>>str2; // pickes the first string just
   // getline(cin, str2); // pickes up all input form user
   // getline(cin, str2, ' '); // pickes the first string just
    //cout<<str2<<endl;
    
    //====or sequence of characters with array====
//    char str2[20];
//    cout << "Enter your job: ";
//    cin.getline(str2, 20);
//    cout<<str2<<endl;


    // =====strcpy======
//    char str3[20];
//    strcpy(str3, "hossam farfour");
//    cout<<str3<<endl;
  
//    char str3[20] = "hossam farfour";
//        cout<<str3<<endl;
//
 
//      char str[20] = "hi";
//      char *x = str;
//      cout << x <<endl;

    
   //  =====strcat=====
//    char b1[15] = "Good ";
//    char b2[30] = "Morning!";
//    strcat(b1, b2);
//    cout << b1<<endl;
//    cout << b2<<endl;
    
   //  =====strlen=====// return the length of string
//    char b1[] = "Good moorning hossam";
//    int length = strlen(b1);
//    cout << b1<<endl;
//    cout << length<<endl;
//
    //or
    //cout<< strlen(b1)<<endl;
    
    
    //===strcmp=== //Often used to test for equality
   
//    char str1[15];
//     strcpy(str1,"hossam");
//    char str2[15];
//     strcpy(str2,"farfour");
//       if(strcmp(str1,str2) == 0)
//             cout << "equal"<<endl;
//         else
//             cout << "not equal"<<endl;
    
    
//    const double A_PRICE = 49.0, B_PRICE = 69.95;
//    const int PART_LENGTH = 8;
//    char partNum[PART_LENGTH];
//    cout <<"The computer part numbers are:\n";
//    cout <<"Blu-ray Disk Drive, part number S147-29A"<<endl;
//    cout << "Wireless Router , part number S147-29B"<<endl;;
//    cout << "Enter the part number\n";
//    cout << "you wish to purchase: ";
//    //cin>>setw(9);
//    cin>>partNum;
//    cout<<showpoint<<fixed<<setprecision(2);
//    if(strcmp(partNum,"S147-29A") == 0) {
//        cout << "The price is £"<<A_PRICE<<endl;
//        exit(1);
//    } else if(strcmp(partNum,"S147-29B") == 0){
//        cout << "The price is £"<<B_PRICE<<endl;
//        exit(1);
//    } else
//        cout << partNum <<" is not a valid part number "<<endl;

    
    
   // ======strstr=====//Searches for the occurrence of str2 within   str1.

//    char s[15] = "Abracadabra";
//    char *found = strstr(s,"dab");
//    cout <<found<<endl;     // prints dabra

    
//    string word1, phrase;
//    string word2 = " Dog";
//    cout<<"enter a word"<<endl;
//    cin >> word1; // user enters "Hot"
//                  // word1 has "Hot"
//    phrase = word1 + word2; // phrase has
//                            // "Hot Dog"
//    phrase += " on a bun";
//    for (int i = 0; i < 16; i++)
//        cout << phrase[i];  // displays
//    cout<<endl;
//    // "Hot Dog on a bun*/

    
    
    
    // define variables that are pointers to char
//    const char length = 20;
//    const char *p = nullptr;
//    const char *s = nullptr;
//    // assign string to the pointer to char
//    p = new char[length];
//    s = new char[length];
//    p = "Hello";
//    s = "world!";
//    cout<<p<<" "<<s<<endl;
//
    
    
//    const int Lenght = 14;
//    char line[Lenght];
//    // Read a string i nto the character array
//    cout << "Enter a sentence of no more than "
//    << Lenght-1<<" characters "<<endl;
//    cin.getline(line, Lenght);
//    cout<<line<<endl;
    
    
    
    //====pointer to char====
//    const int Lenght = 14;
//    char *line = nullptr;
//    line = new char[Lenght];
//    cout << "Enter name "<<endl;
//    cin.getline(line, Lenght);
//    cout<<"hello "<<line<<endl;
//
    
    

//====Using String Stream Objects(sstream)for Numeric Conversions===
    /*
// A-istringstream(string s):
   // Constructor for istringstream : sets the initial value of the input stream for the object.
   // Example: istringstream istr("50 64 28");
    
// B-ostringstream(string s):
    //Constructor for ostringstream : sets the initial value of the output stream for the object.
    //Example:ostr i ngstream ostr("50 64 28");
    
// C-string str():
    //Returns the string contained in the ostringstream or istringstream object.
    //Example: string is = istr.str();
    //         string os = ostr.str ();
    
// D-void str(string &s):
   // Sets the string that serves as the input or output stream for the object.
   //Example: ostr.str("50 64 28");
   //         istr.str("50 64 28");
    
    
    string str = "John 20 50";
    const char *cstr = "Amy 30 42";
    istringstream istr1(str);
    istringstream istr2;
    ostringstream ostr;
    
    string name;
    int score1, score2, average_score ;
    // read name and scores
    istr1>>name>>score1>>score2;
    average_score = (score1 + score2)/2;
    ostr << name<<" has average score "<<average_score << "\n";
    
    //Set istr2 to read from the C string and repeat the above
    
    istr2.str(cstr);
    istr2 >>name>> score1 >> score2;
    average_score = (score1 + score2)/2;
    ostr << name<<" has average score "<< average_score << "\n";
    
    //Switch to hexadecimal output on ostr
     ostr<<hex;
    
    // Write Amy's scores in hexadecimal
    ostr <<name<< "'s scores in hexadeci mal are: "<< score1<<" and "<<score2<<"\n";
    // Extract the string from ostr and print it to the screen
    cout<<ostr.str();
 
     */
    return 0;
}

