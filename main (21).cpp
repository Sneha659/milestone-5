/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int cube(int num);
int main()
{
    int num;
    int c;
    cout<<"Enter any number: "<<endl;
    cin>>num;
 
    c = cube(num);
 
    cout<<"Cube of " <<num << " is "<<c;
 
    return 0;
}
int cube(int num)
{
    return(num*num*num);
}