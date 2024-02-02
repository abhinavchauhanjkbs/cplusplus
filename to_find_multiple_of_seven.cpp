#include<iostream>
using namespace std;
int main()
{
    int ar[2][2],i,j,count=0;
    cout<<"enter elements of an array:\n";
     for(i=0;i<2;i++)
     {
     for(j=0;j<2;j++)
     {
        
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)

        {
            cin>>ar[i][j];
            if(ar[i][j]%7==0)
        count++;
        }
     }
     }}
     cout<<"total elements that are multiple of 7\n"<<count;
    return 0;
}