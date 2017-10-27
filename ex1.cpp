/*
CPSC 121-0X
Paul De Palma
depalma
Example 1
*/

//i/o, variables, arithmetic operator, assignment 

#include <iostream>
using namespace std;

int main()
{
 double hours, rate, pay;

 //Get hours
 cout << "How many hours did your work? ";
 cin >> hours;

 //Get rate
 cout << "How much did you get paid per hour? ";
 cin >> rate;

 //calculate pay 
 pay = hours * rate;

 //display the pay
 cout << "You have earned $" << pay << endl;

 return 0;
}
