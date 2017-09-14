/*
CPSC 121-0X
Paul De Palma
depalma
Example 17 
*/

//switch 

#include <iostream>
using namespace std;

int main()
{
 char choice;
 
 cout << "Enter E to hear Emily Dickenson" << endl;
 cout << "Enter S to hear Shakespeare" << endl;
 cout << "Enter T to hear T.S. Eliot" << endl;
 cout << "Enter M to hear Andrew Marvell" << endl;

 cin >> choice;

 switch(choice)
 { 
    case 'E': cout << "I'm nobody, who are you?\n";
              break;
    case 'S': cout << "Full fadom five, thy father lies\n";
              break;
    case 'T': cout << "Let us go, then, you and I\n"; 
              break;
    case 'M': cout << "Andrew Marvell\n";
              break; 
    default: cout << "You didn't enter E,S,T, or M\n";
             cout << "Don't you like English poetry?\n";
 }
 cout << endl;
 return 0;

}
