/*
CPSC 121-0X
Paul De Palma
depalma
Example 52 
*/

//hint on how to encrypt with BIFID

#include <iostream>
#include <string>    
#include <cstdlib>  //needed for to_string
using namespace std;


int main()
{
 string stuff[3][3];
 string key;
 cout << "enter key" << endl;


 int k = 0;
 for (int i = 0; i < 3; i++)
   for (int j = 0; j < 3; j++)
    {
     stuff[i][j] = 'A' + k;
     k++;
    }

 cout << "initial values and initial index string" << endl; 
 for (int i = 0; i < 3; i++)
   for (int j = 0; j < 3; j++)
     cout << stuff[i][j];
 cout << endl;

 //use of to_string allows for concatenation
 string indices; 
 for (int i = 0; i < 3; i++)
   for (int j = 0; j < 3; j++)
     indices = indices + to_string(i) + to_string(j);

 cout << indices << endl;

 string newindices;
 int border = indices.length() / 2; //half-way point
 for (int i = 0; i < indices.length()/ 2; i++)
  {
   newindices = newindices + indices.at(i);
   newindices = newindices + indices.at(border + i); 
  } 

 
 cout << "final index string and final values" << endl;
 cout << newindices << endl;
 
 for (int i = 0; i < newindices.length(); i = i + 2)
 {
  int row = newindices[i] - '0'; //convert back to int to use as index
  int col = newindices[i + 1] - '0';
  cout << stuff[row][col];
 } 
 cout << endl;

 return 0; 
} 
