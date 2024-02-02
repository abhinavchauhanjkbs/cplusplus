#include<iostream>
using namespace std;
int main()
{
    int num,i,fact=1;
    cout<<"Enter a number : ";
    cin>>num;
    for(i=num;i>0;i--)
    {
        fact=fact*i;
    }
    cout<<"factorial of the number is:"<<fact;
    return 0;
}