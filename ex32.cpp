/*
CPSC 121-0X
Paul De Palma
depalma
Example 28 
*/

//strcmp 

#include <iostream>
#include <cstring>
using namespace std;

void shift(char[]);

int main()
{
 char line1[11];
 char line2[11];
 
 cout << "Enter not more than 10 characters"<< endl;
 cin.getline(line1,11,'\n');

 cout << "Enter not more than 10 characters"<< endl;
 cin.getline(line2,11,'\n');

 cout << "You entered" << endl; 
 cout << line1 << endl;  
 cout << line2 << endl;

 if (strcmp(line1,line2) < 0)
   cout << "line 1 comes before line 2" <<endl; 

 if (strcmp(line1,line2) == 0)
   cout << "line 1 and line 2 are identical" <<endl; 
 
 if (strcmp(line1,line2) > 0)
   cout << "line 1 comes after line 2" <<endl; 

 return 0;
}

void shift(char line[])
{

 for (int i = 0; i < strlen(line); i++)
   line[i] = toupper(line[i]);
}
