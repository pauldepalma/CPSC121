/*
CPSC 121-0X
Paul De Palma
depalma
Example 32 
*/

//comparing strings: strcmp

#include <iostream>
#include <cstring>
using namespace std;

void compare(char[],char[]);

const int MAX = 81;

int main()
{

 char word1[MAX]; 
 char word2[MAX]; 

 cout << "Enter a word" << endl;
 cin.getline(word1,MAX - 1,'\n'); 

 cout << "Enter another word" << endl;
 cin.getline(word2,MAX - 1,'\n'); 

 compare(word1,word2);

 return 0;
}

/*
Pre:  Both parameters are C-Strings
Post: Displays a string that indicates the orthographical ordering of
      the two parameters.
*/    
void compare(char word1[], char word2[])
{ 
 int comp = strcmp(word1,word2);

 if (comp < 0)
  cout << word1 << " is less than " << word2 << endl; 
 if (comp == 0)
  cout << word1 << " is the same as " << word2 << endl; 
 if (comp > 0)
  cout << word1 << " is greater than " << word2 << endl; 
} 
