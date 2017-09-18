/*
CPSC 121-0X
Paul De Palma
depalma
Example 19 
*/

//a first look at arrays, two for loops 

#include <iostream>
using namespace std;

const int MOD = 16;
const int SIZE  = 5;

int main()
{
 unsigned seed;

 int stuff[SIZE]; 

 seed = time(0);
 srand(seed);
 
 //conventional for loop
 for (int i = 0; i < SIZE; i++)
   stuff[i] = rand() % MOD;

 //range-based for loop
 for (int value : stuff)
   cout << value << endl; 

 return 0;
}
