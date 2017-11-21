/*
CPSC 121-0X
Paul De Palma
depalma
Example 52 
*/

//Creating the BIFID key and BIFID array 

#include <iostream>
#include <string>    
using namespace std;

const int MAX = 5;
string getKey();
void createBifid(char[][MAX],string);
void display(char[][MAX]);

int main()
{
 string key = getKey();
 char bifid[MAX][MAX];
 
 createBifid(bifid,key); 
 display(bifid);
}

string getKey()
{ 
 string key;
 cout << "Enter up to 25 UC chars, no duplicates, no J " << endl;
 getline(cin,key);

 for (int i = 0; i < 26; i++)
  {
   char ch = 'A' + i;
   if (ch != 'J') 
     if (key.find(ch) == string::npos)
       key = key + ch;
  }
 return key;
}


void createBifid(char bifid[][MAX],string key)
{
 int k = 0;
 for (int row = 0; row < MAX; row++)
   for (int col = 0; col < MAX; col++)
    {
     bifid[row][col] = key.at(k); 
     k++;
    }

}

void display(char bifid[][MAX])
{
  for (int row = 0; row < MAX; row++)
   {
    string out; 
    for (int col = 0; col < MAX; col++)
      out = out + bifid[row][col];
    cout << out << endl;
   }
} 
            
