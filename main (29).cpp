/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void perfect(int i);
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    perfect(n);
}
void perfect(int i)
{
    int j,sum=0;
    for(j=1;j<i;j++)
    {
        if(i%j==0)
        {
            sum=sum+j;
        }
    }    
    if(i==sum)
    {
      cout<<"number is perfect";
    }
    else
    {
      cout<<"number is not perfect number";
    }
    
}