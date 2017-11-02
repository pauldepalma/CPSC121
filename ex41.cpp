/*
CPSC 121-0X
Paul De Palma
depalma
Example 40 
*/

//Reading a file
//Are you surprised? 

#include <iostream>
#include <fstream>   //data types used in file processing 
using namespace std;

const int MAX = 81;

int main()
{
 char line[MAX];
 int howMany;

 ifstream inputFile;         
 inputFile.open("ex40.txt"); 

 while (inputFile >> line)
  cout << line << endl;

 inputFile.close(); 

 return 0;
} 
