#include<iostream>
using namespace std;
int main()
{
int i, n, sum=0, num;
	cout<<"How many numbers you want to enter and add them ?";
	cin>>n;
	cout<<"Enter "<<n<<" numbers :";
	for(i=0;i<n;i++)
	{
		cin>>num;
		sum=sum+num;
	}
	cout<<"Sum of all the "<<n<<" numbers is "<<sum;
}