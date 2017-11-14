/*
CPSC 121-0X
Paul De Palma
depalma
Example 50 
*/

//string class operators

#include <iostream>
#include <string>   //note this include 
using namespace std;



int main()
{
 string line1, line2, line3;

 cout << "enter a string" << endl;
 getline(cin,line1);

 cout << "enter another string" << endl;
 getline(cin,line2);

 line3 = line1 + line2;

 int last = line3.length() - 1;
 cout << "Last position of new string is " << line3[last] << endl;
} 
