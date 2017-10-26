#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void getLine(char line[]);
void displayOutput(char line[]);
void emendLine(char line[]);

const int MAX = 81;

int main()
{
 char line[MAX];

 getLine(line);
 emendLine(line);
 displayOutput(line);

 return 0;
}

void getLine(char line[])
{
 cin.getline(line,MAX-1,'\n');
}

void displayOutput(char line[])
{
 int i = 0;
 while(i < strlen(line))
  {
   cout << line[i];
   i++;
  }
}

void emendLine(char ghar[])
{
 for (int i = 0; i < strlen(ghar); i++)
    if (isalpha(ghar[i]))
      if (isupper(ghar[i]))
        ghar[i] = tolower(ghar[i]);
      else
        ghar[i] = toupper(ghar[i]);
}
