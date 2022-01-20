/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;

int prime(int);

int main()
{
   bool isPrime;
   int count;
   cout<<"Enter the value of n:";
   cin>>count;
   for(int n = 2; n < count; n++)
   {
       isPrime = prime(n);

       if(isPrime == true)
          cout<<n<<" ";
   }
   return 0;
}
int prime(int n)
{
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++)
   {
      if (n%i == 0)
      {
         isPrime = false;
         break;
      }
   }
   return isPrime;
}
   
   
   
   
   