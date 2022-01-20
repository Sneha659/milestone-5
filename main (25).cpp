/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void armstrong(int a);
void perfect(int b);
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    armstrong(n);
    perfect(n);
}
void armstrong(int a)
{
 int sum=0,r,temp;
 temp=a;
 while(temp>0)
 {
     r=temp%10;
     sum=sum+(r*r*r);
     temp=temp/10;
 }
 if (sum==a)
 {
     cout<<"armstrong number";
 }
 else
 {
     cout<<"number is not armstrong";
 }
 cout<<endl;
}
void perfect(int b)
{
    int sum=0,i;
    for(i=1;i<b;i++);
    {
        if(b%i==0)
        sum=sum+i;
    }
    if(sum==b)
    {
        cout<<"number is perfect";
    }
    else
    {
        cout<<"number is not perfect";
    }cout<<endl;
}
 
 