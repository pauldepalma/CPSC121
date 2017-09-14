/*
CPSC 121-0X
Paul De Palma
depalma
Example 14 
*/

//relational operators, format of if ... else 

#include <iostream>
using namespace std;

int main()
{
 bool trueValue, falseValue;

 int x = 5, y = 10;  //not the initialization

 if (x < y)
   cout << "X < Y" << endl;
 else
   if (x == y)
     cout << "X = Y" << endl;
   else
     if (x > y)
       cout << "X > Y" << endl;
     else
       cout << "There are not other possibilities" << endl;

 return 0;

}
