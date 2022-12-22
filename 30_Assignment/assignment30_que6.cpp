/*6. Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits. */
#include<iostream>
using namespace std;
int main()
{
	int area_pin,count=0;
	cout<<"enter area pin :- ";
	cin>>area_pin;
	try
	{
		while(area_pin)
		{
			area_pin= area_pin/10;
			count++;				
		}	
		if(count == 6)
			throw 1;
		if(count != 6)
			throw 2;
	}
	catch(int num)
	{
		if(num == 1)
				cout<<"Valid pin coad";
		if(num == 2)
				cout<<"invalid pin coad"<<"/ Exception handling";
	}
}
