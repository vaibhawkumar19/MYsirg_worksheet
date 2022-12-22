/*1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.*/
#include<iostream>
using namespace std;
void test_try(int num)
{
	try
	{
		if(num>=0 && num <=9)
			throw num;
		else
		cout<<"\n It is not a single Number ";
			throw ;
	}
	catch(int a)
	{
		cout<<"\n It is a single Number ";
	}
	catch(char b[100])
	{
		cout<<b;
	}
}
int main()
{
	int num;
	cout<<"\n enter Number : ";
	cin>>num;
	test_try(num);
return 0;
}
