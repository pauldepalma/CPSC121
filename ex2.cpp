/*
CPSC 121-0X
Paul De Palma
depalma
Example 2 
*/

//i/o, variables, arithmetic operator, assignment 

#include <iostream>
using namespace std;

int main()
{
 int accum, base, pow; 

 accum = 1;
 base = 2;
 pow = 5;
 
 accum = accum * base;
 accum = accum * base;
 accum = accum * base;
 accum = accum * base;
 accum = accum * base;

 cout << endl;
 cout << base << " to the power of " << pow << " equals " << accum;
 cout << endl;
 cout << endl;

 return 0;
}
