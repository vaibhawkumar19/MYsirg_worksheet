/*1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include<iostream>
using namespace std;
class Complex
{
	private:
		int real,imag;
	public:
		Complex(int x,int y)
		{
			real=x;
			imag=y;
		}
		Complex()
		{
		}
		void set(int real,int imag)
		{
			this->real=real;
			this->imag=imag;
		}
		friend ostream & operator<<(ostream &output,Complex &c)
		{
			output<<"real= "<<c.real<<" Imagnary= "<<c.imag<<endl;
		return output;
		}
};
int main()
{
	Complex c1(2,3);
	Complex c2;
	c2.set(4,5);
	cout<<c1<<c2<<endl;
return 0;
}
