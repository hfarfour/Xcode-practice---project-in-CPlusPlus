//
//  main.cpp
//  using File to store DATA
//
//  Created by Hossam Farfour on 28/06/2022.
//

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;


// ofstream for outputfile (write to file) <<
// ifstream for iutputfile (print from file) >>
// fstream  for both iutputfile and outputfile.
//=====write to a file=====
 
int main()
{
    ofstream outputfile;
    string Names;
    // open the out put file
    outputfile.open("demoFile.txt");
    if(outputfile.fail()){
        cout<<"can not open"<<endl;
    }
    cout << "Now writing data to a file !"<<endl;
    cout << "Enter the names of three friend!"<<endl;
    //cout<<"Enter the file name you want wright to"<<endl;
    
    for (int i = 1 ; i <= 3; i++)
    {
        cin>>Names;
        outputfile<<Names<<endl;
    }
    outputfile.close(); // closing the file
    cout<<"Names were saved to a file"<<endl;
    
    return 0;
}


//========read from file=======
/*
int main()
{
    ifstream iutputfile;
    string Names;
    // open the out put file
    iutputfile.open("demoFile.txt");
    if(iutputfile.fail()){
        cout<<"can not open"<<endl;
    }
    for (int i = 1 ; i <= 3; i++)
    {
        iutputfile>>Names;
        cout<<Names<<endl;
    }
    iutputfile.close(); // closing the file

    return 0;
}
 */

 /*
int main()
{
    // put number in the file (demofile.txt to sum them)
    cout << "this program reads the data from file !"<<endl;
    ifstream intputfile; //file stram object
    string filename;
    int numValues; //number of Values
    double value, total = 0.0;
    cout << "Enter the name of the file to read from!"<<endl;
    cin>>filename;
    if(intputfile.fail()){
        cout<<"can not open"<<endl;
    }
    cout << "getting the number  value to read !"<<endl;
    cout << "how many values are stored in your file (how many value do you want to sum) !"<<endl;
    cin>>numValues;
    //open the file
    intputfile.open(filename);
    //loop once for each piece of data to read
    for (int i = 1; i <= numValues; i++)
    {
        // read a value from the file and add it to the sum
        intputfile>>value;
        total += value;
    }
    cout<<"the total of the "<<numValues<<" values is "<<total<<endl;    intputfile.close(); // closing the file
    return 0;
}
*/

/*
int main()
{
    cout << "this program reads the data from file(integers) !"<<endl;
    ifstream intputfile; //file stram object
    string fileName;
    int numValues  = 0 ;//number of Values
    double value, total = 0.0;
    cout << "getting the number  value to read !"<<endl;
    cout << "Enter the name of the file to read from) !"<<endl;
    cin>>fileName;
    //open the file
    intputfile.open(fileName);
    if(intputfile.fail()){
        cout<<"can not open"<<endl;
    }
    //loop once for each piece of data to read
    while (intputfile >> value)
    {
        // read a value from the file and add it to the sum
        total += value;
        numValues ++ ;
    }
    cout<<"the total of the "<<numValues<<" values are "<<total<<endl;
    intputfile.close(); // closing the file
    return 0;
}
*/

/*
int main()
{
    cout << "this program reads the data from file (string) !"<<endl;
    ifstream intputfile;
    string fileName;
    cout << "getting thecontants of the file to read !"<<endl;
    cout << "Enter the name of the file to read from) !"<<endl;
    cin>>fileName;
    //open the file
    intputfile.open(fileName);
    //loop once for each piece of data to read
    while (getline(intputfile,fileName))
    {
        cout<<fileName<<endl;
    }
    intputfile.close(); // closing the file
    return 0;
}
*/
