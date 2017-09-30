/*
CPSC 121-0X
Paul De Palma
depalma
Example 27 
*/

//cin precedes cin.getline(). Try commenting out cin.ignore() 

#include <iostream>
using namespace std;

int main()
{
 char str[25]; 
 char ch; 

 cout << "Enter a character: ";
 cin >> ch; 
 cin.ignore();

 cout << "Enter a character sequence: ";
 cin.getline(str,25,'\n');

 cout << ch << endl;
 cout << str << endl;

 return 0;
}
