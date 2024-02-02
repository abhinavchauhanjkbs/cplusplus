#include<iostream>
using namespace std;
int largest(int a, int b, int c) // function definiton 
{
    if(a>b>c)
    cout<<a<<"is the largest";
    else if(b>a>c)
    cout<<b<<"is the largest";
    else
    cout<<c<<"is the largest";
    return(0);
}
int main ()
{
int a,b,c,L;
cout<<"enter any three no.";
cin>>a>>b>>c;
L=largest(a,b,c);
cout<<L<<" is the largest ";
}