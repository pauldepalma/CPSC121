/*
CPSC 121-0X
Paul De Palma
depalma
Example 45 
*/

//line at a time reading, string type 

#include <iostream>
#include <fstream>    
#include <string>
using namespace std;

int main()
{
 string line; //notice the new type 
 string fileName = "ex40.txt";

 ifstream inputFile;         
 inputFile.open(fileName); 

 getline(inputFile,line); 
 while (inputFile)
  {
   cout << line << endl; //'\n' is the delimiter and not included in line; 
   getline(inputFile,line); 
  }

 inputFile.close(); 

 return 0;
} 
