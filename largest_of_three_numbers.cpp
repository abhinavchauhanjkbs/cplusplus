#include<iostream>
using namespace std;
int main()
{
	int a, b, c, large;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	//let a is the largest
	large=a;
	if(large<b)
	{
		if(b>c)
		{
			large=b;
		}
		else
		{
			large=c;
		}
	}
	else if(large<c)
	{
		if(c>b)
		{
			large=c;
		}
		else
		{
			large=b;
		}
	}
	else
	{
		large=a;
	}
cout<<"Largest number is "<<large;
}