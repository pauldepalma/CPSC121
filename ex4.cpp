/*
CPSC 121-0X
Paul De Palma
depalma
Example 4 
*/

//integer division and modulus 

#include <iostream>
using namespace std;

int main()
{
 int x, y; 

 cout << "Enter an integer for the numerator" << endl;
 cin >> x;
 cout << "Enter an integer for the denominator" << endl;
 cin >> y;


 cout << "The integer division quotient is " << x/y << endl;

 cout << "The remainder is " << x%y << endl;

 return 0;
}
