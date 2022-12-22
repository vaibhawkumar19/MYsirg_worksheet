/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==*/

#include<iostream>
using namespace std;
class Complex
{
	int num1,num2;
	public:
		void accept()
		{
			cout<<"\n enter the Complex Number ";
			cin>>num1>>num2;
		}
		friend Complex operator+(Complex c1,Complex c2);
		friend Complex operator-(Complex c1,Complex c2);
		friend Complex operator*(Complex c1,Complex c2);
		friend Complex operator==(Complex c1,Complex c2);
		void display()
		{
			cout<<num1<<"+"<<num2<<"i"<<"\n";
			
		}
		void display1()
		{
			cout<<num1<<"-"<<num2<<"i"<<endl;
		}
		void display2()
		{
			cout<<num1<<"*"<<num2<<"i"<<endl;
		}
		void display3()
		{
			cout<<num1<<"=="<<num2<<"i";
		}
};
Complex operator+(Complex c1,Complex c2)
{
	Complex c;
	c.num1=c1.num1+c2.num1;
	c.num2=c1.num2+c2.num2;
return (c);
}
Complex operator-(Complex c1,Complex c2)
{
	Complex c;
	c.num1=c1.num1-c2.num1;
	c.num2=c1.num2-c2.num2;
return (c);
}
Complex operator*(Complex c1,Complex c2)
{
	Complex c;
	c.num1=c1.num1*c2.num1;
	c.num2=c1.num2*c2.num2;
return (c);
}
Complex operator==(Complex c1,Complex c2)
{
	Complex c;
	c.num1=c1.num1==c2.num1;
	c.num2=c1.num1==c2.num2;
return c;
}
int main()
{
	Complex c1,c2,sum,diff,mul,equal;
	c1.accept();
	c2.accept();
	
	sum=c1+c2;
	diff=c1-c2;
	mul=c1*c2;
	equal=(c1==c2);
	
	cout<<"\n Enter the Value :\n";
	cout<<"\t";
	c1.display();
	cout<<"\t";
	c2.display();
	cout<<"sub of complex number\n";
	cout<<"\t";
	c1.display1();
	cout<<"\t";
	c2.display1();
	cout<<"multiplication\n";
	cout<<"\t";
	c1.display2();
	cout<<"\t";
	c2.disply2();
	cout<<"equal operator\n";
	cout<<"\t";
	c1.dispaly3();
	cout<<"\t";
	c2.dispal3();
}
