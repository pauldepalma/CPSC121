/*
CPSC 121-0X
Paul De Palma
depalma
Example 3 
*/

//while loop, named constants, accumulator pattern 

#include <iostream>
using namespace std;

const int BASE = 3;
const int POW = 3;

int main()
{
 int accum, i;  

 accum = 1;
 i = 0;

 while (i < POW)
 {
   accum = accum * BASE;
   i = i + 1;
 } 

 
 cout << endl;
 cout << BASE << " to the power of " << POW << " equals " << accum;
 cout << endl;
 cout << endl;

 return 0;
}
