/*
CPSC 121-0X
Paul De Palma
depalma
Example 22 
*/

//testing input with getline and strcmp 

#include <iostream>
#include <cstring>  //necessary for strcmp
using namespace std;

const int MAX  = 80;

int main()
{
 char line[MAX];
 
 cout << "Enter y or n" << endl;

 //stop when MAX characters have been read or '\n' is encountered.
 cin.getline(line,MAX,'\n');

 if (strcmp(line,"y") == 0) 
  cout << "y was entered" << endl;
 else
  cout << "something other than y was entered" << endl;

 
 return 0;
}
