/*
CPSC 121-0X
Paul De Palma
depalma
Example 13 
*/

//relational operators, if .. else 

#include <iostream>
using namespace std;

int main()
{
 bool trueValue, falseValue;

 int x = 5, y = 10;  //not the initialization

 if (x == y)
  cout << "X equals Y" << endl;
 else
  cout << "X does not equal Y" << endl; 

 trueValue = x < y;
 falseValue = x == y;

 cout << "True is internally " << trueValue << endl;
 cout << "False is internally " << falseValue << endl;

 return 0;

}
