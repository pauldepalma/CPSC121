/*
CPSC121-0X
Paul De Palma
depalma
Example 56 
*/

//array names are addresses 


#include <iostream>
using namespace std;

void doStuff(int*, int);
void doStuffA(int[], int);

int main()
{
 int a[10];
 int* p;
 p = a;
 for (int i = 0; i < 10; i++)
   p[i] = i;

 doStuff(p, 10);
 doStuffA(a,10);
 return 0;
}
void doStuff(int* collection, int howMany)
{
 cout << "in the pointer function" << endl;
 for (int i = 0; i < howMany; i++)
  cout << collection[i] << endl;
}

void doStuffA(int collection[], int howMany)
{
 cout << "in the array function" << endl;
 for (int i = 0; i < howMany; i++)
  cout << collection[i] << endl;
}
