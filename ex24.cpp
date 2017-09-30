/*
CPSC 121-0X
Paul De Palma
depalma
Example 24 
*/

//Functions can be nested
 
 
#include <iostream>
using namespace std;

bool isLower(char); 
int numLowerCase(char[]);

const int MAX = 80;

int main()
{
 char line[MAX];
 
 cout << "Enter a string of not more than " << MAX << " characters" << endl;

 cin.getline(line,MAX);

 cout << "You have input " << numLowerCase(line) << " lower case ";
 cout << "characters" << endl;   
 
 return 0;
}

/*
Pre:  strIn is a null-terminated string
Post: returns the number of lower case characters stored in strIn
*/
int numLowerCase(char strIn[])
{
 int ct = 0, idx = 0;
 while (strIn[idx] != '\0')
   {
    if (isLower(strIn[idx]))
       ct++;
    idx++;
   }
 return ct;
}

/*
Pre:  ch is an ASCII-encoded character 
Post: returns true if ch is lower case, false otherwise 
*/
bool isLower(char ch)
{
 if (ch >= 'a' && ch <= 'z')
   return true;
 return false;
}
