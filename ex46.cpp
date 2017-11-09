/*
CPSC 121-0X
Paul De Palma
depalma
Example 46 
*/

//Testing for file open errors

#include <iostream>
#include <fstream> 
#include <string>    
using namespace std;

ifstream gfopen(string);

int main()
{
 string line;
 //string fileName = "ex40.txt"; 
 string fileName = "ex4.txt"; 

 ifstream inputFile = gfopen(fileName); 

 getline(inputFile,line); 
 while (inputFile)
  {
   cout << line << endl; //'\n' is the delimiter and not included in line; 
   getline(inputFile,line); 
  }

 inputFile.close(); 

 return 0;
}

ifstream gfopen(string fileName)
{
 ifstream inputFile;
 
 inputFile.open(fileName);

 if (inputFile)
  return inputFile;

 cout << "Error opening input file: " << fileName << endl;
 exit(0);
}
