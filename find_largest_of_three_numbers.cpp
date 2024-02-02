#include<iostream>
using namespace std;
int main()
{
    int a,b,c,largest;
    cout<<"enter three numbers:";
    cin>>a>>b>>c;
    if(a>b>c)
    cout<<a<<" is the largest ";
    else 
    if(b>a>c)
    cout<<b<<" is the largest ";
    else
    cout<<c<<" is the largest ";
}