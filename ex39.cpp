/*
CPSC 121-0X
Paul De Palma
depalma
Example 39 
*/

//Bubble Sort


#include <iostream>
using namespace std;


int main()
{
 int data[] = {10,9,8,7,6,5,4,3,2,1,0};

 for (int i = 10; i >= 0; i--)
  for (int j = 0; j < i; j++)
    {
     if (data[j] > data[j+1])
      {
       int buf = data[j];
       data[j] = data[j+1];
       data[j+1] = buf;
      }
    }

 for (int i = 0; i < 11; i++)
   cout << data[i] << endl;
 return 0;
}
