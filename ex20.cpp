/*
CPSC 121-0X
Paul De Palma
depalma
Example 19 
*/

//C-strings, getline, strlen 

#include <iostream>
#include <cstring> //header files for C-string functions
using namespace std;

const int SIZE  = 80;

int main()
{
 char line[SIZE]; //holds the C-string

 cout << "Enter a sentence of no more than "
      << (SIZE - 1) << " characters:\n";

 cin.getline(line,SIZE);  //store input in the array, line

 cout << line << endl;  //one way to print

 for (int i = 0; line[i] != '\0'; i++) //'\0' null terminator
      cout << line[i];
 cout << endl; 

 //now we can do more interesting things
 int i = strlen(line);

 while (i >= 0)
  {
   cout << line[i];
   --i;
  }
 cout << endl;  

 //the same thing but with a for loop
 for (int i = strlen(line); i >= 0; i--)
   cout << line[i];
 cout << endl;

 return 0;
}
