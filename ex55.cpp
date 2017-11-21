/*
CPSC121-0X
Paul De Palma
depalma
Example 55
*/

//more dynamic declarations


#include <iostream>
using namespace std;
int main()
{
 int* p1;
 int* p2;

 //how much memory is allocated
 cout << sizeof(p1) << " " << sizeof(p2) << endl; 

 //allocate new memory, store the address in p1, store 42 in the new memory
 p1 = new int;
 *p1 = 42;

 //now p1 and p2 point to the same place 
 p2 = p1;
 cout << *p1 << " " << *p2 << endl;
 
 //now we put something in what p2 points to
 *p2 = 53;
 cout << *p1 << " " << *p2 << endl;

  p1 = new int;
 *p1 = 88;

 cout << *p1 << " " << *p2 << endl;
 cout << p1 << " " << p2 << endl;
 delete p1; //return to heap
 delete p2;
 p1 = NULL;
 p2 = NULL;
 return 0;
}

