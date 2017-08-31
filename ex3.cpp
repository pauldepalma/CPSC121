/*
CPSC 121-0X
Paul De Palma
depalma
Example 3 
*/

//while loop 

#include <iostream>
using namespace std;

int main()
{
 int accum, base, pow, i; 

 accum = 1;
 base = 3;
 pow = 3;
 i = 0;

 while (i < base)
 {
   accum = accum * base;
   i = i + 1;
 } 

 
 cout << endl;
 cout << base << " to the power of " << pow << " equals " << accum;
 cout << endl;
 cout << endl;

 return 0;
}
