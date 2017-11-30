/*
CPSC 121-0X
Paul De Palma
depalma
Example 59 
*/

//Use of pointers and dynamic memory with file streams
//Graceful open
//Simple character i/o

#include <iostream>
#include <fstream> 
#include <string>    
using namespace std;

ifstream* gfopenIn(string);
ofstream* gfopenOut(string);
void doStuff(ifstream*,ofstream*);

int main()
{
 string fileIn, fileOut; 
 ifstream* fin;
 ofstream* fout;

 cout << "Enter an input file name" << endl;
 getline(cin,fileIn);
 cout << "Enter an output file name" << endl;
 getline(cin,fileOut);

 fin = gfopenIn(fileIn); 
 fout = gfopenOut(fileOut); 

 doStuff(fin,fout);

 //notice the member access operators, necessary with pointers
 fin->close();
 fout->close();

 return 0;
}

ifstream* gfopenIn(string fileIn)
{
 ifstream* fin = new ifstream; 
 
 fin->open(fileIn);
 if (!fin->fail())
   return fin;
 cout << "Error opening input file: " << fileIn << endl;
 exit(0);
}

ofstream* gfopenOut(string fileOut)
{
 ofstream* fout = new ofstream; 
 
 fout->open(fileOut);

 if (!fout->fail())
   return fout; 
 cout << "Error opening output file: " << fileOut << endl;
 exit(0);
}

void doStuff(ifstream* fin, ofstream* fout)
{
 char ch;

 fin->get(ch);
 while(*fin)     //why the dereference operator.  Take a guess.
 {
  if (islower(ch))
    ch = toupper(ch);
  fout->put(ch);
  fin->get(ch);
 }
}
