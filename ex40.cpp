/*
CPSC 121-0X
Paul De Palma
depalma
Example 40
*/

//Writing using <<

#include <iostream>
#include <fstream>   //data types used in file processing 
using namespace std;

const int MAX = 81;

int main()
{
 char line[MAX]; 
 int howMany;

 ofstream outputFile;         //declare an output file object
 outputFile.open("ex40.txt"); //associate the object with a file name

 cout << "How many lines do you want to enter" << endl;
 cin >> howMany;
 cin.clear();
 cin.ignore();

 for (int i = 0; i < howMany; i++)
   {
    cout << "Enter line " << i + 1 << endl;
    cin.getline(line,MAX - 1,'\n');
    outputFile << line << endl;
   }

 outputFile.close(); //tell the O/S that it's OK to write the output buffer
                     //to the associated file. 

 return 0;
} 
