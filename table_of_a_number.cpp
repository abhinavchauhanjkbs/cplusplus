#include<iostream>
using namespace std;
int main()
{
    int num,i,table=1;
    cout<<"enter a number:";
    cin>>num;
    cout<<"table of "<<num<<" is\n\n";
    for(i=1;i<11;i++)
    {
    table=num*i;
    cout<<num<<" * "<<i<<" = "<<table<<"\n";
    }
}