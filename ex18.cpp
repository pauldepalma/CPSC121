/*
CPSC 121-0X
Paul De Palma
depalma
Example 18 
*/

//more decisions (which start to get complicated) 

#include <iostream>
using namespace std;

int main()
{
 unsigned seed;
 int a,b,c,d,e;

 seed = time(0);
 srand(seed);

 a = rand();
 b = rand();
 c = rand();

 cout << "using a nested if" << endl; 
 if (a > b)
   if (a > c)
       cout << a << " is largest" << endl;
   else
       cout << c << " is largest" << endl;
 else
   if (b > c)
       cout << b << " is largest" << endl;
   else
       cout << c << " is largest" << endl;

  cout << endl;
  cout << "using a compound if" << endl;
  //alternatively
  if (a > b && a > c)
    cout << a << " is largest" << endl;

  if (b > a && b > c)
    cout << b << " is largest" << endl;

  if (c > a && c > b)
    cout << c << " is largest" << endl;

  cout << endl;
  cout << "Here are the integers" << endl;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
}
