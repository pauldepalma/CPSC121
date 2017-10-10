/*
CPSC 121-0X
Paul De Palma
depalma
Example 33 
*/

//character functions, another example of call by reference
//you'll learn a more interesting way later in the course 

#include <iostream>
#include <cstring>
#include <cctype> //some compilers require this
using namespace std;

void determine(char, char[]);


int main()
{
 char input;
 char output[80]; 

 input = cin.get(); 
 determine(input,output);
 cout << output << endl; 
 
}

/*
Pre:  inp is a single character, output is character array of 80 characters 
Post: Uses character functions to determine the kind of character stored
      in inp.  Uses strcpy to copy a string literal to output. 
*/
void determine(char inp,char output[])
{
 char answ[80]; 
 if (isalpha(inp)) 
   strcpy(output, "That's an alphabetic character");
 else if (isdigit(inp)) 
   strcpy(output, "That's a digit");
 else if (isspace(inp)) 
   strcpy(output, "That's a space");
 else if (ispunct(inp)) 
   strcpy(output, "That's a punctuation character");
 else if (isprint(inp)) 
   strcpy(output, "That's a printable character");
 else
   strcpy(output, "That's a non-printable character");

} 
