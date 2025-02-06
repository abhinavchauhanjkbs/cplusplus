#include<iostream>
using namespace std;
int main()
{
    int ar[5],sum,i;
    cout<<"insert elements of an array";
    for(i=0 ; i<5 ; i++)
    {
        cin>>ar[i];
    }
            sum=0;
            sum=ar[0]+ar[2]+ar[4];
            cout<<"\nsum of alternate element:"<<sum;
        
        return 0;
}