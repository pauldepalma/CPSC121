/*
CPSC 121-0X
Paul De Palma
depalma
Example 25 
*/

//A boolean function 
 
 
#include <iostream>
using namespace std; 

bool isOdd(int); 

bool more(int); 

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

  } while (more);
 
}

bool more()
{
 if (num % 2 == 0)
   return false;
 return true;
}

char checkInp()
{
 char inp;

 do
  {
   cin >> inp; 
   if (inp == 'y' || inp == 'Y')
     return true;
   else
     if inp == 'n' || inp == N')
       return false;
     else
       cout << "Incorrect input. Enter y/n" << endl;
   } while(true);
}
