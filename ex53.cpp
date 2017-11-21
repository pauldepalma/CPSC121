/*
CPSC121-0X
Paul De Palma
depalma
Example 53
*/

//pointer example

#include <iostream>
using namespace std;


int main()
{
 //p is a pointer to int
 int* p;

 int val1, val2;

 val1 = 12;

 //& is the address operator.  Assign the address of val1 to p
 p = &val1;

 //*p causes the value of what p points to to be stored in val2
 //this is called dereferencing
 val2 = *p;


 cout << "value of what p points to " << *p << endl;
 cout << "value of val2 " << val2 << endl;

 cout << "p holds the address of val1 " << p << endl;
 cout << "val1's address is " <<  &val1 << endl;
 cout << "notice that size of address and size of int differ" << endl;
 cout << "size of address " << sizeof(p) << endl;
 cout << "size of int " << sizeof(val1) << endl;

 return 0;
}
