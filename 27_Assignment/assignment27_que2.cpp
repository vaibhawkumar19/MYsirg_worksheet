//3. Write a C++ program to add two complex numbers using operator overloaded by a
//friend function.
#include<iostream>
using namespace std;
class Complex
{
	private:
		int num1,num2;
	public:
		void accept()
		{
			cout<<"enter the two number ";
			cin>>num1>>num2;
		}
		friend Complex operator+(Complex num1,Complex num2);
		
		void dispaly()
		{
			cout<<num1<<"+"<<num2<<"i"<<endl;	
		}
};
Complex operator+(Complex c1,Complex c2)
{
	Complex c;
	c.num1=c1.num1+c2.num2;
	c.num1=c1.num1+c2.num2;
return c;
}
int main()
{
	Complex c1,c2,sum;
	
	c1.accept();
	c2.accept();
	
	sum= c1+c2;
	
	cout<<"enter the value ";
	c1.dispaly();
	c1.dispaly();
}
