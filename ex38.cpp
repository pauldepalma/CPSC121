/*
CPSC 121-0X
Paul De Palma
depalma
Example 39
*/

//Demonstrates error-checking with two inputs 

#include <iostream>
#include <cstring>
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

int getInt()
{
 int num;

 while(true)
 {
  cout << "Enter an integer in the range [0,25]" << endl;
  if (cin >> num) 
    if (num >= 0 && num <= 25)
      break; 
  cin.clear();
  cin.ignore();
  cout << "Invalid input. Input must be an integer in the "; 
  cout << "range [0,25]" << endl << endl;
 }
 cin.clear();
 cin.ignore();
 return num;
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

