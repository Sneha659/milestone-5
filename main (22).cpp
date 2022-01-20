/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

float Diameter(float radius);
float Circumference(float radius);
float Area(float radius);
int main()
{
    float radius, diameter, circle, area;
    cout<<"Enter radius of circle: ";
    cin>>radius;
 
    diameter = Diameter(radius);     
    circle = Circumference(radius);  
    area = Area(radius);           
 
    cout<<"Diameter of the circle: "<<diameter<<endl;
    cout<<"Circumference of the circle: "<<circle<<endl;
    cout<<"Area of the circle:"<<area<<endl;
 
    return 0;
}
float Diameter(float radius)
{
    return (2 * radius);
}
float Circumference(float radius)
{
    return (2 * 3.14 * radius); 
}
float Area(float radius)
{
    return (3.14 * radius * radius);
}

