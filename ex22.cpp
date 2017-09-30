/*
CPSC 121-0X
Paul De Palma
depalma
Example 22 
*/

//reading input with getline, testing input with cin 

#include <iostream>
#include <cstring>  //necessary for strcmp
using namespace std;

const int MAX  = 80;

int main()
{
 char line[MAX];
 char inp = 'y';
 
 while (inp == 'y')
 {
  cout << "Enter a sequence of < 80 characters" << endl; 

  //stop with MAX chars have been read or return pressed
  cin.getline(line,MAX,'\n');

  cout << "You entered: " << endl;
  cout << line << endl;

  cout << "Again?  Enter y or n" << endl;
  cin >> inp;
  cin.ignore();   //try commenting out this line
 } 
 
 return 0;
}
