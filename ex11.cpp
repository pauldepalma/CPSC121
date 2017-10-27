/*
CPSC 121-0X
Paul De Palma
depalma
Example 11 
*/

//working with modulus 

#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime>  // for time
using namespace std;

int main()
{
 int min, max, i, value; 
 unsigned seed;

 i = 0;

 cout << "Enter min and max values for random numbers" << endl;
 cin >> min >> max;
 cout << endl << endl;

 seed = time(0); 
 srand(seed);

 while(i++ < (max - min) + 1)
 {  
   value = (rand() % (max - min + 1)) + min; //why does this work?
   cout << value << endl;
 }

 return 0;  
}
