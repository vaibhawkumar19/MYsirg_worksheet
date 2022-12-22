//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the two number ";
	cin>>a>>b;
	cout<<"before swap a="<<a<<" b= "<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nbefore swap a="<<a<<" b="<<b;
}
