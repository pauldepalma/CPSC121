/*
CPSC 121-0X
Paul De Palma
depalma
Example 31 
*/

//array names are addresses, some c-string and character functions 

#include <iostream>
#include <cstring>
using namespace std;

void shift(char[]);

int main()
{

 char stuff[6];
 char stuffConv[6];

 cout << "Enter 5 lower case characters" << endl;

 cin.getline(stuff,6,'\n'); //Read until 6 chars have been entered
                            //including '\n' or until '\n', whichever 
                            //is first 
 cout << stuff << endl; 

 shift(stuff); 
 
 cout << "Returned from shift" << endl;

 cout << stuff << endl; 

 strcpy(stuffConv,stuff);

 cout << "Display the copy" << endl;

 cout << stuffConv << endl;
 
 return 0;
}

/*
Pre:  line is a C-string filled with lower case characters
Post: All characters in line are upper case
*/   
void shift(char line[])
{
 for (int i = 0; i < strlen(line); i++)
   line[i] = toupper(line[i]);
}
