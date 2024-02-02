#include<iostream>
using namespace std;
int factorial(int n) // function definiton 
{
int fact;
fact=1;
while(n>=1)
{
    fact=fact*n;
    n=n-1;
}
    return (fact);
}
int main()
{ 
int fact,n;
cout<<"enter any no.";
cin>>n;
{
fact= factorial(n); // function calling   
}
cout<<"factorial "<<fact;
}
