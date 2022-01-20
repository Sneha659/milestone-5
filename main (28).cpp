/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void armstrong(int a);
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    armstrong(n);
}
void armstrong(int a)
{
    int j,sum=0,r,temp;
    for(j=1;j<=a;j++)
    {
        temp=j,sum=0;
        if(temp>0)
        {
            r=temp%10;
            sum=sum+(r*r*r);
            temp=temp/10;
        }
        if(sum==j)
        {
            cout<<"armstrong numbers are"<<endl<<j;
        }
    }
}