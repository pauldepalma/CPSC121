/*
CPSC 121-0X
Paul De Palma
depalma
Example 26 
*/

//cin precedes cin.get(). Try commenting out cin.ignore()

#include <iostream>
using namespace std;

int main()
{
 char ch;
 int num;
 

 cout << "Enter a number: ";
 cin >> num;
 cin.ignore(); 

 cout << "Enter a character: ";
 ch = cin.get();

 cout << num << endl;
 cout << ch << endl;
 return 0;
}
