/*1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)*/
#include<iostream>
using namespace std;
class Complex
{
	int a;
	int b;
	public:
		void setData(int x,int y)
		{
			a=x;
			b=y;
		}
		void showData()
		{
			cout<<endl<<" real "<<a<<" img "<<b;
		}
		Complex add(Complex c)
		{
			Complex temp;
			temp.a =a+c.a;
			temp.b =b+c.b;
		return temp;	
		}
};
int main()
{
	Complex c1,c2,c3;
	c1.setData(2,5);
	c2.setData(4,6);
	c3=c1.add(c2);
	c3.showData();
	cout<<endl;
}
