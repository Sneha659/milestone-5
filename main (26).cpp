/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void primen(int i);
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    primen(n);
}
void primen(int i)
{
 int p=0,j,k;
 for(j=1;j<=i;j++)
 {
     p=0;
     for(k=2;k<j/2;k++)
     {
      if(j%k==0)
      {
          p=p+1;
          break;
      }
     }
     if(p==0)
     {
         cout<<"prime numbers are:"<<endl<<j;
     }
 }
}
 
 