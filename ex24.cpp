/*
CPSC 121-0X
Paul De Palma
depalma
Example 24 
*/

//A boolean function 
 
 
#include <iostream>
using namespace std; 

bool isOdd(int); 

const int MAX  = 80;

int main()
{
 int num = 0;
 char more;

 do
  {
    cout << "Enter an integer " << endl;
    cin >> num;
 
    cout << "The number is "; 
    if (isOdd(num))
      cout << "odd";
    else
      cout << "even";
    cout << endl;

    cout << "Would you like to try another (y/n)?" << endl;
    cin >> more;
  } while (more == 'Y' || more == 'y');
 
}

bool isOdd(int num)
{
 if (num % 2 == 0)
   return false;
 return true;
}
