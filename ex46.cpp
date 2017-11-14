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
 string line, fileName;
 ifstream inputFile;

 cout << "Enter an input file name" << endl;
 getline(cin,fileName); //notice the slightly different usage with a string 

 inputFile = gfopen(fileName); 

 getline(inputFile,line);  //notice the analogous usage with a file   
 while (inputFile)
  {
   cout << line << endl; //'\n' is the default delimiter and not read in. 
   getline(inputFile,line); 
  }

 inputFile.close(); 

 return 0;
}

ifstream gfopen(string fileName)
{
 ifstream fileIn;
 
 fileIn.open(fileName);

 if (fileIn)
  return fileIn;

 cout << "Error opening input file: " << fileName << endl;
 exit(0);
}
