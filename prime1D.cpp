#include<iostream>
using namespace std;
int main()
{
    int ar[5],i,n,count,flag,prime=0;
    cout<<"enter elements:\n";
    for(i=0;i<5;i++)
    {
    cin>>ar[i];
    }
    cout<<"Prime numbers:\n";
    for(i=0;i<5;i++)
    {
        flag=0;
    for(n=2;n<ar[i];n++)
    {
        if(ar[i]%n==0)
        {
        flag=1;
        break;
        }
    }
    if(flag==0)
    {
        cout<<"\t"<<ar[i];
        prime++;
    }
    }
    
    cout<<"\nno. of prime element:"<<prime;
    return 0;
}
