/*
CPSC 121-0X
Paul De Palma
depalma
Example 53 
*/

//Creating the BIFID key

#include <iostream>
#include <string>    
using namespace std;

string getKey();

int main()
{
 string stuff[3][3];

 cout << getKey() << endl;

}

string getKey()
{ 
 string key;
 cout << "Enter up to 25 alphabetic characters with duplicates" << endl;
 getline(cin,key);

 for (int i = 0; i < 26; i++)
  {
   char ch = 'A' + i; 
   if (key.find(ch) == string::npos)
     key = key + ch;
  }
 return key;
}
