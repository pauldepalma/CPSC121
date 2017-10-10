/*
CPSC 121-0X
Paul De Palma
depalma
Example 30 
*/

//reference variables 

#include <iostream>
using namespace std;

void shift(int&,int&);

int main()
{
 int var1 = 10, var2 = 20;

 cout << "variable var1 holds " << var1 << endl; 
 cout << "variable vari2 holds " << var2 << endl; 

 shift(var1,var2);

 cout << "Returned from function" << endl;

 cout << "variable var1 holds " << var1 << endl; 
 cout << "variable vari2 holds " << var2 << endl; 
 return 0;
} 
 
/*
Pre:  Both parameters are reference variables whose source has been
      initialized
Post: The variables referred to by the parameters have their values
      exchanged
*/
void shift(int& var1, int& var2)
{
 int buf;

 buf = var1;
 var1 = var2;
 var2 = buf;
}
