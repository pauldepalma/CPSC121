#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

string makeUpper(string);

int main()
{
 string stuff[3];

 ifstream fin;
 fin.open("quiz7.txt");

 for (int i = 0; i < 3; i++)
  getline(fin,stuff[i]);

 for (int i = 0; i < 3; i++)
   cout << stuff[i] << " " << stuff[i].length() << endl; 

 for (int i = 0; i < 3; i++)
   cout << makeUpper(stuff[i]) << endl;
 
 fin.close();
 return 0;
}

string makeUpper(string line)
{
 for (int i = 0; i < line.length(); i++)
   if (islower(line[i]))
     line[i] = toupper(line[i]); 
 return line;
}
 

