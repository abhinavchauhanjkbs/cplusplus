#include<iostream>
using namespace std;
int main()
{
    int ar[5],i,max,min;
    cout<<"enter elements";
    for(i=0;i<5;i++)
    {
    cin>>ar[i];
    }
    max=ar[0];
    for(i=0;i<5;i++)
     {
        if(ar[i]>max)
    max=ar[i];
     }
    
        min=ar[0];
   for(i=0;i<5;i++)
   {
   if(ar[i]<min)
   min=ar[i];
   }
    
   cout<<"max element"<<max;
   cout<<"\nmin element"<<min;
    
   return 0;
    
}