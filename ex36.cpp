/*
CPSC 121-0X
Paul De Palma
depalma
Example 36 
*/

//Arrays of strings as 2-d arrays

#include <iostream>
#include <cmath>
using namespace std;

const int ROW = 7;
const int COL = 81;

void load(char[][COL]);
void display(char[][COL]);

int main()
{
 char data[ROW][COL]; 

 load(data);
 display(data);
        
 return 0; 
}

void load(char data[][COL])
{
 for (int i = 0; i < ROW; i++)
 {
  cout << "Enter a string of <= 80 characters" << endl;
  cin.getline(data[i],COL,'\n');
 }
}
 
void display(char data[][COL])
{
 cout << endl << endl;
 for (int i = 0; i < ROW; i++)
     cout << data[i] << endl;
 cout << endl << endl;
} 
