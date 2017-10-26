#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void getInput(char[]);
void emendLine(char[]);
void displayOutput(char[]);


const int MAX = 81;

int main()
{
 char line[MAX];

 getInput(line);
 emendLine(line);
 displayOutput(line);  
  
 return 0;
}

void getInput(char line[])
{
 cin.getline(line,MAX-1,'\n');
}

void displayOutput(char line[])
{
 int i = 0;
 while (line[i] != '\0')
  {
   cout << line[i]; 
   i++;
  }
  cout << endl;
} 

void emendLine(char line[])
{
 for (int i = 0; line[i] != '\0'; i++)
  if (isalpha(line[i]))
   if (isupper(line[i]))
     line[i] = tolower(line[i]);
   else
     line[i] = toupper(line[i]);
}  
