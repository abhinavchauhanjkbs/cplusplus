#include<iostream>
using namespace std;
int main()
{
    int ar[5],i,count=0;
    cout<<"enter elements of an array:\n";
     for(i=0;i<5;i++)
     {
for(i=0;i<5;i++)
        {
            cin>>ar[i];
            if(ar[i]%7==0)
        count++;
        }
     }
    
     cout<<"total elements that are multiple of 7\n"<<count;
    return 0;
}