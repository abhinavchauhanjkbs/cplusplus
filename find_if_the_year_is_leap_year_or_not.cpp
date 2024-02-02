#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter a year:";
    cin>>year;
    if((year%4==0) && (year%100!=0))
	{
		cout<<"This is a Leap Year";
	}
	else if(year%100==0)
	{
		cout<<"This is not a Leap Year";
	}
	else if(year%400==0)
	{
		cout<<"This is a Leap Year";
	}
	else
	{
		cout<<"This is not a Leap Year";
	}
    return 0;
}
    
