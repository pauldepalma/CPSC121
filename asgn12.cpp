/*
CPSC 121-0X
Paul De Palma
depalma
Assignment 12 

There are a number of approaches to the problem as stated.  I've assumed that
the input is stream of characters, including,possibly, '\n'.  I output
50 encrypted characters per line.
Notice, especially, the decomposition and the way tokenization is handled. 
*/


#include <iostream>
#include <fstream> 
#include <string>    
using namespace std;

ifstream* gfopenIn(string);
ofstream* gfopenOut(string);
void getKey(ifstream*, string&, char&);
void readLoop(string,char, ifstream*, ofstream*);
char tokenize(char);
char encode(char,char,char);
char intToAlph(int);
int alphToInt(char);

const int SIZE = 50;   //number of characters per line

int main(int argc, char* argv[])
{
 char mode; 
 string key; 
 ifstream* fin;
 ifstream* fkey;
 ofstream* fout;

 fkey = gfopenIn(argv[1]); 
 fin = gfopenIn(argv[2]); 
 fout = gfopenOut(argv[3]);

 getKey(fkey,key,mode); 

 readLoop(key,mode,fin,fout);
 
 fkey->close(); 
 fin->close();
 fout->close();
 delete fkey;
 delete fin;
 delete fout; 

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

void getKey(ifstream* fkey, string& key, char& mode) 
{
 char ch;

 fkey->get(ch);  //first character of key file is 'e' or 'd'
 mode = ch;

 int i = 0;
 fkey->get(ch);
 while(*fkey)  
 {
  key = key + ch; 
  fkey->get(ch);
  i++;
 }
}

void readLoop(string key, char mode, ifstream* fin, ofstream* fout)
{
 char ch;
 int keyPos = 0;
 int linePos = 0;

 fin->get(ch);
 while(*fin)
 {
  ch = tokenize(ch);
  if (isalpha(ch)) 
    ch = encode(mode,key.at(keyPos),ch);
  if (ch != '*')  //indicates a character to be passed over 
   {
    if (linePos % SIZE == 0)  //EOL after fifty characters
     fout->put('\n');
    linePos++;
    //advance key position for every character encrypted.  mod by
    //length - 1 b.c. we start at 0
    keyPos = (keyPos + 1) % (key.length() - 1); 
    fout->put(ch);
   }
  fin->get(ch);
 }
 fout->put('\n');
}

char tokenize(char ch)
{
 if (isupper(ch))
  ch = tolower(ch); 

 if (isdigit(ch) || isalpha(ch)) 
  return ch;
 else
  return '*';  //anything but an alphanumeric character 
}

char encode(char mode, char key, char ch)
{
 int posch = alphToInt(ch); 
 int poskey = alphToInt(key); 
 if (mode == 'e')
  posch = (posch + poskey) % 26;
 else
  posch = (posch - poskey + 26) % 26;  //add 26 to deal with neg. numbers
 ch = intToAlph(posch);
 return ch; 
}

char intToAlph(int pos)
{
 return pos + 'a';
}

int alphToInt(char ch)
{
 return ch - 'a';
}
