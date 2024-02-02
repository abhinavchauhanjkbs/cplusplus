#include<iostream>
using namespace std;
int main()
{
    int ar[5],i,sum=0;
    cout<<"enter elements of an array:";
    for(i=0;i<5;i++)
    {
    cin>>ar[i];
    sum=sum+ar[i];
    }
    
cout<<"sum is"<<sum;
    return 0;
}