#include <iostream>
#include <cstring>
using namespace std;

char encrypt(char,int);
char decrypt(char,int);
int  alphToInt(char,bool);
char intToAlph(int,bool);
void display(char[]);
int checkInput();

const int MAX = 81;

int main()
{
 char line[MAX];
 int shift;

 shift = checkInput();

 cout << "Enter a line of not more than 80 characters" << endl; 

 cin.getline(line,MAX-1,'\n');


 for (int i = 0; i < strlen(line); i++)
    line[i] = encrypt(line[i],shift);
 display(line);

 for (int i = 0; i < strlen(line); i++)
    line[i] = decrypt(line[i],shift);
 display(line);

 return 0;
}


char encrypt(char ch,int shift)
{
 int pos;
 bool upper;

 if (!isalpha(ch))
  return ch;

 upper = isupper(ch);
 pos = alphToInt(ch,upper); 
 pos = (pos + shift) % 26;
 ch = intToAlph(pos,upper);
 return ch; 
}

char decrypt(char ch,int shift)
{
 int pos;
 bool upper;

 if (!isalpha(ch))
  return ch;

 upper = isupper(ch);
 pos = alphToInt(ch,upper);
 pos = ((pos - shift) + 26) % 26; //+ 26 compensates for negative numbers
 ch = intToAlph(pos,upper);
 return ch; 
}

int alphToInt(char ch, bool upper)
{
 if (upper)
  return ch - 'A';
 else
  return ch - 'a';
} 

char intToAlph(int pos, bool upper)
{
 if (upper)
  return pos + 'A';
 else
  return pos + 'a';
}

void display(char line[])
{
 cout << endl;
 for (int i = 0; i < strlen(line); i++)
   cout << line[i];
 cout << endl;
}

int checkInput()
{
 int shift;

 while(true)
 {
  cout << "Enter an integer in the range [0,25]" << endl;
  if ((cin >> shift) && (shift >= 0) && (shift <= 25))
    break;
  cin.clear();
  cin.ignore();
  cout << "Invalid input. Input must be an integer in the range [0,25]" << endl << endl;
 }
 cin.clear();
 cin.ignore();
 return shift;
}
  
