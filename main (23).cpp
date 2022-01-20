/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int oddeven(int);
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin>>num;
    oddeven(num);
    return 0;
}
int oddeven(int num)
{
if(num%2==0)
  cout<<num<<"is an even";
else
    cout<<num<<"is an odd";
}
