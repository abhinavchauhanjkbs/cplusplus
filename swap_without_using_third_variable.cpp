#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter two numbers";
    cout<<"\nFirst Number : ";
	cin>>num1;
	cout<<"Second Number : ";
    cin>>num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"value of first no. and second no. after swapping is :\n";
    cout<<"first number:="<<num1<<"\n"<<"second number:="<<num2;
}
