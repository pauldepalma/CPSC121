/*
CPSC 121-0X
Paul De Palma
depalma
Example 16 
*/

//DeMorgan 

#include <iostream>
using namespace std;

int main()
{
 int x = 2, y = 6;

 if (!(x == 1 && y == 2))
    cout << "Negation with Logical And" << endl;

 if (!(x==1) || !(y == 2))
    cout << "DeMorgan Equivalent" << endl;

 if (!(x == 1 || y == 2))
    cout << "Negation with Logical Or" << endl;

 if (!(x==1) && !(y == 2))
    cout << "DeMorgan Equivalent" << endl;
 return 0;

}
