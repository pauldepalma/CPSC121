/*
CPSC 121-0X
Paul De Palma
depalma
Example 38 
*/

//Demonstrates error-checking with two inputs 

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

/*
Pre:  None
Post: returns an integer int the range [0,25]
*/
int   getInt(); 

/*
Pre:  None
Post: returns an character in the range ['A','F']
*/
char  getChar();


int main()
{
 int num = getInt();
 char ch = getChar();
 cout << num << " " << ch << endl; 
 return 0;
}


char getChar()
{
 char ch;

 while(true)
 {
  cout << "Enter an upper case character in the ";
  cout << "range ['A','F']" << endl << endl;
  if (cin >> ch) 
    if (ch >= 'A' && ch <= 'F')
      break;
  cin.clear();
  cin.ignore();
  cout << "Invalid input. Input must be character in the ";
  cout << "range ['A','F']" << endl << endl;
 }
 cin.clear();
 cin.ignore();
 return ch;
}

int getInt()
{
 float numIn;
 int num;

 while(true)
 {
  cout << "Enter an integer in the range [0,25]" << endl;
  if (cin >> numIn)
    if (floor(numIn) == numIn)
      { 
       num = static_cast<int>(numIn);
       if (num >= 0 && num <= 25)
         break; 
      }
  cin.clear();
  cin.ignore();
  cout << "Invalid input. Input must be an integer in the "; 
  cout << "range [0,25]" << endl << endl;
 }
 cin.clear();
 cin.ignore();
 return num;
}
