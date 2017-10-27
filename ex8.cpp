/*
CPSC 121-0X
Paul De Palma
depalma
Example 8 
*/

//exponentiation  

#include <iostream>
#include <cmath>  //try commenting this out
using namespace std;

const double PI = 3.14159;
const double EXP = 2.0;

int main()
{
 double radius, area =  0.0;

 cout << "enter an integer radius" << endl;
 cin >> radius;

 //pow is a function, radius and EXP are arguments
 area = PI * pow(radius,EXP);

 cout << "Area: " << area << endl;

 return 0;
} 

