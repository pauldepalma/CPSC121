/*
CPSC 121-0X
Paul De Palma
depalma
Example 51 
*/

//arrays of strings

#include <iostream>
#include <string>   //note this include 
using namespace std;

const int MAX = 5;

int main()
{
 string stuff[MAX];

 cout << "Enter " << MAX << " strings" << endl;
 for (int i = 0; i < MAX; i++)
   getline(cin,stuff[i]);

 cout << "You entered " << endl;

 for (int i = 0; i < MAX; i++)
   cout << stuff[i] << endl; 
} 
