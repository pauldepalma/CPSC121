/*
CPSC 121-0X
Paul De Palma
depalma
Example 47 
*/

//Introduction to the string class

#include <iostream>
#include <string>   //note this include 
using namespace std;

int const MAX = 80;

int main()
{
 string name, line;

 cout << "what is your first name?" << endl;
 cout << "try entering your first and last name?" << endl;
 cin >> name;
 cout << name << endl;
 cin.ignore(MAX,'\n'); //flush the input buffer
 
 cout << "What is your first and last name?" << endl;
 getline(cin,line);
 cout << line << endl;
}
