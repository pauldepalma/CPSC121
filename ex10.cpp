/*
CPSC 121-0X
Paul De Palma
depalma
Example 10 
*/

//A simple if, a classic while, random numbers 

#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime>  // for time
using namespace std;

int main()
{
 bool more = true; 
 unsigned seed;
 char ans;

 seed = time(0); 
 srand(seed);

 while(more)
 {
   cout << rand() << endl;
   cout << "Do you want to see another random number (y/n)" << endl;
   cin >> ans;
   if (ans == 'n')
     more = false;
 }

 return 0;  
}
