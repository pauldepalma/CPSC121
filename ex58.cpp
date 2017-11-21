/*
CPSC121-0X
Paul De Palma
depalma
Example 58 
*/

//returning a dynamically declared array


#include <iostream>
#include<cstdlib>
using namespace std;

char* makeArray(int);

//note arguments to main 
int main(int argc, char* argv[])
{

 int size = atoi(argv[1]);   

 char* stuff = makeArray(size);

 int i = 0;
 while (i < size)
 {
  cout << stuff[i] << endl;
  i++;  
 }

 delete stuff;  //return memory to heap
 return 0;
}

char* makeArray(int size)
{
  char* data = new char[size];

  for (int i = 0; i < size; i++)
   data[i] = 'a' + i; 

  return data;
}
