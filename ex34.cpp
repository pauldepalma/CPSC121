/*
CPSC 121-0X
Paul De Palma
depalma
Example 34 
*/

//two dimensional rrays

#include <iostream>
#include <cmath>
using namespace std;


const int ROW = 10;
const int COL = 4;

int main()
{
 int data[ROW][COL]; 

 for (int i = 0; i < ROW; i++)
   for (int j = 0; j < COL; j++)
     {
      if (j == 0)
        data[i][j] = i;
      if (j == 1)
        data[i][j] = pow(i,2); 
      if (j == 2)
        data[i][j] = pow(i,3);
     } 
        
 for (int i = 0; i < ROW; i++)
     cout << data[i][0] << " " << data[i][1] << " " << data[i][2] << endl; 
 return 0; 
}

