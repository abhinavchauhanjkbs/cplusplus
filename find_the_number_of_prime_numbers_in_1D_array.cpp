#include<iostream>
using namespace std;
int main()
{
    int ar[3][3],i,j,n,m,count,flag,prime=0;
    cout<<"enter elements:\n";
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    cin>>ar[i][j];
    }
    }
    cout<<"\nThe given 2D array is:\n";
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
        cout<<"\t"<<ar[i][j];
    }
    cout<<"\n";
    }
    cout<<"Prime numbers:\n";
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
        flag=0;
    for(n=2;n<ar[i][j];n++)
    {
        if(ar[i][j]%n==0)
        {
        flag=1;
        break;
        }
    }
    if(flag==0)
    {
        cout<<"\t"<<ar[i][j];
        prime++;
    }
    }
    }
    cout<<"\nno. of prime element:"<<prime;
    return 0;
}
