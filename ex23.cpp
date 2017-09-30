/*
CPSC 121-0X
Paul De Palma
depalma
Example 23 
*/

//A simple function: linear search with a C-string
 
 
#include <iostream>
using namespace std; 

int mystrlen(char[]);

const int MAX  = 80;

int main()
{
 char line[MAX];
 
 cout << "Enter a string of not more than " << MAX << " characters" << endl;

 cin.getline(line,MAX);

 cout << "You have input " << mystrlen(line) << " characters" << endl;   
 
 return 0;
}

/*
Pre:  strIn is a C-string
Post: returns the number of characters in strIn, not including '\0'
*/ 

int mystrlen(char strIn[])
{
 int ct = 0;
 while (strIn[ct] != '\0')
   ct++;
 return ct;
}
