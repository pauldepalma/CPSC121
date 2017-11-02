/*
CPSC 121-0X
Paul De Palma
depalma
Example 37 
*/

//arrays of structs 

#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 10;

struct record
{
 int num;
 char ch;
};

/*
Pre:  data is an array of structs of type struct record
Post: num and ch are filled with successive integers and characters 
*/ 
void load(record data[]);

/*
Pre:  data is an array of structs of type struct record
Post: num and ch for each element in the array are displaye   
*/ 
void display(record data[]);

int main()
{
 record data[MAX]; 

 load(data);
 display(data);
        
 return 0; 
}

void load(record data[])
{
 int value = 0; 
 for (int i = 0; i < MAX; i++)
    {
     data[i].num = value;
     data[i].ch = 'A' + value;
     value++;
    }
}

 
void display(record data[])
{
 for (int i = 0; i < MAX; i++)
   cout << data[i].num << " " << data[i].ch << endl;
} 
