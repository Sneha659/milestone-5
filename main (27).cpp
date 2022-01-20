/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void strong(int i);
int main()
{
  int n;
  cout<<"enter the number";
  cin>>n;
  strong(n);
}
void strong(int i)
{
    int j,sum=0,m,rem,fact=1;
    m=i;
    while(m!=0)
    {
        rem=m%10;
        for(j=1;j<=rem;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
        fact=1;
        m=m/10;
    }
    if(sum==i)
    {
        cout<<"number is strong number";
    }
    else
    {
        cout<<"number is not strong number";
    }
}