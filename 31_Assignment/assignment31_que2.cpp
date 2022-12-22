/*2. Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class.*/
#include<iostream>
using namespace std;
class Base
{
	protected:
		int num1,num2;
	public:
		void Accept()
		{
			cout<<"enter the first number:-";
			cin>>num1;
			cout<<"enter the second number:-";
			cin>>num2;
		}		
};
class Derived: public Base
{
	int sum=0;
	public:
		void add()
		{
			sum=num1+num2;
		}
		void display()
		{
			cout<<"sum of two number is :-"<<sum;
		}
};
int main()
{
	Derived d;
	d.Accept();
	d.add();
	d.display();
return 0;
}
