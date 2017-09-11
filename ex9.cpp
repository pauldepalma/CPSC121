/*
CPSC 121-0X
Paul De Palma
depalma
Example 9 
*/

//exponentiation with ints 
//try using exponents greater than 30

#include <iostream>
#include <cmath>  
#include <iomanip>
using namespace std;

int main()
{
  
 int base, exp, i, total; 
 
 base = exp = i = total = 0;
 
 cout << "Enter a base and the highest power you'd like to see" << endl;  
 cin >> base >> exp; 
 
 cout << setprecision(0) << fixed;
 while(i <= exp)
 {
  total = pow(base,i);
  cout << i << ":" <<  setw(10) << total << endl;
  ++i;
 } 
 
 return 0;
} 

