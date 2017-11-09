/*
CPSC 121-0X
Paul De Palma
depalma
Example 45 
*/

//Reading a file
//line at a time reading. 

#include <iostream>
#include <fstream>    
using namespace std;

int main()
{
 string line; 

 ifstream inputFile;         
 inputFile.open("ex40.txt"); 

 getline(inputFile,line); 
 while (inputFile)
  {
   cout << line << endl; //'\n' is the delimiter and not included in line; 
   getline(inputFile,line); 
  }

 inputFile.close(); 

 return 0;
} 
