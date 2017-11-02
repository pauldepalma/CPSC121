/*
CPSC 121-0X
Paul De Palma
depalma
Example 42 
*/

//Reading a file
//character by character reading

#include <iostream>
#include <fstream>    
using namespace std;

const int MAX = 81;

int main()
{
 char ch; 
 int howMany;

 ifstream inputFile;         
 inputFile.open("ex40.txt"); 

 int i = 0;
 inputFile.get(ch); 
 while (inputFile)
  {
   cout << ch;
   inputFile.get(ch); 
  }

 inputFile.close(); 

 return 0;
} 
