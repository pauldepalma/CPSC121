/*
CPSC 121-0X
Paul De Palma
depalma
Example 48
*/

//comparing strings

#include <iostream>
#include <string>   //note this include 
using namespace std;

int const MAX = 80;

string compare(string,string);

int main()
{
 string line1, line2;

 cout << "Enter a string" << endl;
 getline(cin,line1);

 cout << "Enter another string" << endl;
 getline(cin,line2);

 cout << compare(line1,line2) << " goes first" << endl;   
}

string compare(string l1, string l2)
{
 if (l1 <= l2)
   return l1;
 else 
   return l2;
} 

