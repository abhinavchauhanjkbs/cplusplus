#include<iostream>
using namespace std;
int main()
{
    int pos=0,neg=0,zero=0,ar[10],i;
    cout<<"Enter 10 numbers : ";
	for(i=0; i<10; i++)
    {
        cin>>ar[i];
        
    }
   for(i=0; i<10; i++)
	{
		if(ar[i]<0)
		{
			neg++;
		}
		else if(ar[i]==0)
		{
			zero++;
		}
		else
		{
			pos++;
		}
	}

   cout<<"Negative Numbers = "<<neg<<"\n";
	cout<<"Zero = "<<zero<<"\n";
	cout<<"Positive= "<<pos<<"\n";

}