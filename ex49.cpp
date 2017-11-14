/*
CPSC 121-0X
Paul De Palma
depalma
Example 49 
*/

//length and at

#include <iostream>
#include <string>   //note this include 
using namespace std;

int const MAX = 80;


int main()
{
 string line1;
 int pos;

 cout << "Enter a string" << endl;
 getline(cin,line1);

 cout << line1 << " has " <<  line1.length()  << " characters" << endl;

 cout << "Enter a position" << endl;
 cin >> pos;

 cout << line1.at(pos) << " is at position " << pos << endl;

}


