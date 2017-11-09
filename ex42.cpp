
/*
CPSC 121-0X
Paul De Palma
depalma
Example 42 
*/

//peculiar properties of <<

#include <iostream>
#include <fstream>   //data types used in file processing 
using namespace std;


int main()
{
 int num;
 int sum = 0;

 ifstream inputFile;         
 //inputFile.open("ex42.txt"); 
 inputFile.open("ex42a.txt"); 

 while (inputFile >> num)
  sum = sum + num;

 cout << sum << endl;

 inputFile.close(); 

 return 0;
} 
