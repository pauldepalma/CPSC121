#include <iostream>
#include <cstring>
using namespace std;

void getInput(char[]);
void dispForward(char[]);
void dispBackward(char[]);
int HowMany(char[], char ch);

int main()
{
 char inp[81];
 getInput(inp);
 dispForward(inp);
 dispBackward(inp);
 cout << HowMany(inp,'A');

 return 0;
}

void getInput(char inp[])
{
 cin.getline(inp,80,'\n');
}

void dispForward(char inp[])
{
 for (int i = 0; i < strlen(inp); i++)
  cout << inp[i] << endl;
}

void dispBackward(char inp[])
{
 int i = strlen(inp) - 1;

 while (i >= 0)
 {
  cout << inp[i] << endl;
  i--;
 }
}

int HowMany(char inp[], char ch)
{
 int ct = 0;
 int i = 0;
  
 while (i < strlen(inp))
 {
  if (inp[i] == ch)
     ++ct;
  ++i;
 }
 return ct;
}    


 
