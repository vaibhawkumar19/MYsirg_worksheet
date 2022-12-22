/*3. Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,ans;
	char Operator;
	
	cout<<"perform Arithmetic operator on two numbers "<<endl;
	cout<<"___________________________________________"<<endl;
	
	try
	{
		cout<<"enter the first number "<<endl;
		cin>>num1;
		if(num1==0)
			throw 0;
		cout<<"enter Operator "<<endl;
		cin>>Operator;
		if(Operator !='+' && Operator !='-' && Operator != '*' && Operator != '/')
			throw Operator;
		cout<<"enter the second numebr "<<endl;
		cin>>num2;
		cout<<"_________________________________________"<<endl;
		switch(Operator)
		{
			case '+':
				ans=num1+num2;
			break;
			case '-':
				ans=num1-num2;
			break;
			case '*':
				ans=num1*num2;
			break;
			case '/':
				if(num2 ==0)
					throw 0;
				ans=num1/num2;
			break;
		}
		cout<<"\n Answer : "<<num1<<" "<<Operator<<num2<<" = "<<ans;
	}
	catch(const char c)
	{
		cout<<"\n Exception Caught .....\n Bad Operator "<<c<<"is not a valid operator "<<endl;
	}
	catch(const int n)
	{
		cout<<"\n Error : Bad Operator ";
	}
return 0;
}
