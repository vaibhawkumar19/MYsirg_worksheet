/*5. Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.*/
#include<iostream>
using namespace std;
int main()
{
	int mobile_num,count=0;
	cout<<"enter the mobile number :- +91 ";
	cin>>mobile_num;
	try
	{
		while(mobile_num)
		{
			mobile_num= mobile_num/10;
			count ++;
		}
		if(count == 10)
			throw 1;
		if(count != 10)
			throw 2;
	}
	catch(int num)
	{
		if(num == 1)
				cout<<"valid mobile number ";
		if(num == 2)
				cout<<"invalid mobile number ";
	}
return 0;
}
