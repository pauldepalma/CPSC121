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
char getMode();
string getPtct(); 
void createBifid(char[][MAX],string);
void display(char[][MAX]);
string encrpt(char[][MAX],string);

int main()
{
 char bifid[MAX][MAX];
 
 string key = getKey();
 char mode = getMode();
 string ptct = getPtct();
 createBifid(bifid,key); 

 if (mode == 'd')
   encrypt(bifid,ptct);
 //display(bifid);
 return 0;
}

string encrypt(char bifid[][MAX],string pt)
{
 string ctPre;
 string ct; 
 string r0,r1;
 for (int k = 0; k < pt.length(); i++)
   {
    string pos = find(pt.at(k),bifid);
    r0 = r0 + pos.at(0);
    r1 = r1 + pos.at(1);
   }
 ctPre = r0 + r1;
 int i = 0;
 while (i + 1 < ctPre.length())
  {
   int row = stoi(ctPre.at(i))
   int col = stoi(ctPre.at(i+1))
   ct = ct + bifid[row][col];
   i++
  }
 return ct;
}

string find(char ch, bifid[][MAX])
{
 for (int row = 0; row < MAX; row++)
   for (int col = 0; col < MAX; col++)
     if (ch = bifid[row]p[col])
      {
       string pos = row + col;
       return pos;
      }
} 

string getPtct()
{
 string ptct;
 cout << "Enter text" << endl;
 getline(cin,ptct);
 return ptct;
}

char getMode()
{
 cout << "Encrypt (e) or Decrypt (d)" << endl;
 char mode;
 cin.get(mode);
 cin.clear();
 cin.ignore();
 return mode;
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
            
