/*
CPSC121-0X
Paul De Palma
depalma
Example 57 
*/

//dynamic declaration of arrays
//command line arguments 


#include <iostream>
#include<cstdlib>
using namespace std;


int main(int argc, char* argv[])
{
 int size;
 char* stuff;  //pointer to char

 //argv[1] is the command line argument.  It's a C-string
 //atoi transforms c-string to int
 size = atoi(argv[1]);   

 //allocate memory. Store starting address is stuff
 stuff = new char[size];

 for (int i = 0; i < size; i++)
   stuff[i] = 'A' + i;

 //a while loop, just for pracice
 int i = 0;
 while (i < size)
 {
  cout << stuff[i] << endl;
  i++;  
 }

 delete stuff;  //return memory to heap
 return 0;
}


