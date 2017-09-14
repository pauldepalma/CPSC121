/*
CPSC 121-0X
Paul De Palma
depalma
Example 15 
*/

//<= and >=, nested if 

#include <iostream>
using namespace std;

int main()
{
 char inp; 
 int inpT;
 bool good = false;

 cout << "Type a character" << endl;

 cin >> inp;

 inpT = static_cast<int>(inp);

 if (inpT >= 65)
   if (inpT <= 90)
     {
      cout << "You have input an upper case alphabetic character" << endl;
      good = true;
     }
   else
     if (inpT >= 97)
       if (inpT <= 122)
         {
          cout << "You have input a lower case alphabetic character " << endl; 
          good = true;
         }

 if (!good)
    cout << "You have input a non-alpabetic character" << endl;
 
 return 0; 
 
}
