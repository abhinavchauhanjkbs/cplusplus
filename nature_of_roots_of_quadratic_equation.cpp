#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float a,b,c,d,x,y;
cout<<"enter value of a,b,c\n";
cin>>a>>b>>c;
d=b*b-4*a*c;
if(d>0)
{
x=(-b+sqrt(d))/(2.0*a);
y=(-b-sqrt(d))/(2.0*a);
cout<<"the roots are real and unequal\n";
cout<<x<<"\n";
cout<<y;
}
else
if(d==0)
{
x=-b/(2.0*a);
y=-b/(2.0*a);
cout<<"the roots are real and equal\n";
cout<<x<<"\n";
cout<<y;
}
else
cout<<"the roots are imaginary";
}