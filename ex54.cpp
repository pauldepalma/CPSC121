/*
CPSC121-0X
Paul De Palma
depalma
Example 54
*/


//Dynamically allocating memory


#include <iostream>
using namespace std;

int main()
{
 //pointer to int
 int *p1; 

 //request enough memory from free store to hold an integer. 
 //Save its address in p1;
 p1 = new int;

 //go to the address stored in p1.  store 42 there.
 *p1 = 42;
 
 cout << "contents of what p1 points to " << *p1 << endl;
 cout << "contents of p1 " << p1 << endl;

 //return memory to free store. Zero out address in p1
 delete p1;
 p1 = NULL;
 return 0;
}
