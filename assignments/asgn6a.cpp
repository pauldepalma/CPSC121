#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int);
void checkValues(int&, int&); 
void getInput(int&,int&);
void genPrimes(int, int, int[]); 
void display(int[]); 

int main()
{
 int primes[1000];
 int small, large; 

 checkValues(small,large);
 genPrimes(small,large,primes);
 display(primes);

 return 0;
}

/*
pre:  small and large hold values in legal range, primes has been defined
post: primes holds primes numbers in the range [small,large]
*/   
void genPrimes(int small, int large, int primes[])
{
 int idx = 0;
 cout << endl;
 cout << "Here are the primes in the range [" << small << ",";
 cout << large << "]" << endl;
 while(small <= large)
 {
   if (isPrime(small))
     {
       primes[idx] = small;
       idx++;
     }
   small++;  
 }
 primes[idx] = -1;
}

/*
pre:  primes is an array holding prime numbers 
post: contents of prime are displayed on the screen, one to a line 
*/   
void display(int primes[])
{
 cout << endl;

 for (int i = 0; primes[i] != -1; i++)
   cout << primes[i] << endl;

 cout << endl;
}

/*
pre:  parameters are references to ints 
post: parameters hold values in the legal range 
*/   
void checkValues(int& small, int& large)
{
  while(true)
  {
   getInput(small,large);    
   if (small > 1 && small < large && large < 1000)
      break; 
   cout << "Input not in the proper range. Try again" << endl << endl;
  }
}

/*
pre:  parameters are references to ints 
post: parameters hold integers 
*/   
void getInput(int& small, int& large)
{
 while (true)
 {
   bool good1 = false;
   bool good2 = false;
   cout << "To display primes in a range, you must enter the start and";
   cout << " ends of the range" << endl << endl; 
   cout << "Enter the first integer" << endl;
   if (cin >> small)
     {
      cin.clear();
      cin.ignore();
      good1 = true;
      cout << "Enter the second integer" << endl;
      if (cin >> large)
        good2 = true;
     }
   cin.clear();
   cin.ignore();
   if (good1 && good2) 
     break;
   cout << "Non-numeric value(s). Try again."<< endl << endl;
 }
}

/*
pre:  num holds an integer > 1 and <= 1000 
post: returns true if num is prime, false otherwise 
*/  
bool isPrime(int num)
{
 int limit = sqrt(static_cast<double>(num));
 int i = 2;
 while(i <= limit)
   {
    if (num % i == 0)
      return false;
    i++;
   }
  return true;
} 
