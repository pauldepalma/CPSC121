/*
CPSC 121-0X
Paul De Palma
depalma
Example 20 
*/

//using cin.get to read in read in multiple characters 

#include <iostream>
using namespace std;

const char EOL = '\n';
const int MAX  = 80;

int main()
{
 char stuff[MAX], ch;

 int ct = 0;

 cout << "Enter a string of not more than " << MAX << " characters" << endl;

 //common structure for a read loop 
 ch = cin.get();   
 while(ch != EOL && ct < MAX - 1)
 {
  stuff[ct] = ch; 
  ct++;
  ch = cin.get();
 }

 stuff[ct] = '\0';
 cout << stuff << endl; 
 
 return 0;
}
