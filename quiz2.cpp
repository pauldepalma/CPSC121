1.  

int data[10];
for (int i = 0; i < 10; i++)
  data[i] = i;

int i = 0;
while (i < 10)
{
 cout << data[i] << endl;
 i++;
}


2.

#include <iostream>
using namespace std;



bool isEven(int);


int main()
{
 int num = 0;
 int data[10];

 for (int i = 0; i < 10; i++)
   {
    if (!isEven(num))
     num++;
    data[i] = num; 
    num++;
   }

 for (int i = 0; i < 10; i++)
   cout << data[i] << endl;
}






bool isEven(int num)
{
 if (num % 2 == 0)
   return true;
 return false;
}
