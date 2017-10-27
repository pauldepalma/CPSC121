/*
CPSC 121-0X
Paul De Palma
depalma
Example 6 
*/

//formatting output, while loop  

#include <iostream>
#include <iomanip>   //notice this line
using namespace std;

const int WEEKS = 4;

int main()
{
 double hours, rate, pay;
 int i;

 i = 0;
 cout << setprecision(2) << fixed; //show decimal point, two digits precision

 while (i < WEEKS)
 {
  hours = 0.0;
  rate = 0.0;
  pay = 0.0;

  cout << "How many hours did your work in week " << i + 1 << endl;
  cin >> hours;

  cout << "How much did you get paid per hour in week " << i + 1 << endl;
  cin >> rate;

  pay = hours * rate;

  //8 spaces from the space after the colon to the dollar sign 
  cout << "Week " << i + 1 << ": " << setw(8) << "$" << pay << endl;
  i++;
 }
 return 0;
}
