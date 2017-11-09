/*
CPSC 121-0X
Paul De Palma
depalma
Example 44 
*/

//Writing a file
//character by character writing 

#include <iostream>
#include <fstream>    
using namespace std;


int main()
{
 char ch; 

 ofstream outputFile;         
 outputFile.open("ex43.txt");

 cout << "Enter your data. When finished, enter a '#'" << endl;  

 cin.get(ch); 
 while (ch != '#')
  {
   outputFile.put(ch);
   cin.get(ch); 
  }

 outputFile.close(); 

 return 0;
} 
