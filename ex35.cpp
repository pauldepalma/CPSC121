/*
CPSC 121-0X
Paul De Palma
depalma
Example 35 
*/

//two dimensional arrays as function arguments

#include <iostream>
#include <cmath>
using namespace std;


const int ROW = 10;
const int COL = 4;

void load(int[][COL]);
void display(int[][COL]);

int main()
{
 int data[ROW][COL]; 

 load(data);
 display(data);
        
 return 0; 
}

void load(int data[0][COL])
{
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
}
 
void display(int data[0][COL])
{
 for (int i = 0; i < ROW; i++)
     cout << data[i][0] << " " << data[i][1] << " " << data[i][2] << endl;
} 
