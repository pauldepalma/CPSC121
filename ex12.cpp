/*
CPSC 121-0X
Paul De Palma
depalma
Example 12 
*/

//type casting 

#include <iostream>
using namespace std;

int main()
{
 int books, months;
 double perMonth1, perMonth2; 

 cout << "How many books do you plan to read?" << endl;
 cin >> books;
 cout << "How many months will it take you to read them?" << endl;
 cin >> months;

 perMonth1 = books / months; 
 perMonth2 = static_cast<double>(books) / months; 

 cout << "Which output is more accurate?" << endl;

 cout << "That is " << perMonth1 << " books per month" << endl; 
 cout << "That is " << perMonth2 << " books per month" << endl; 

 return 0;

}
