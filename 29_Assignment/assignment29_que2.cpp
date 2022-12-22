/*2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;*/
#include<iostream>
using namespace std;
class Complex
{
	int imag,real;
	public:
		void set(int imag,int real)
		{
			this->imag=imag;
			this->real=real;
		}
		Complex(int a,int b)
		{
			real=a;
			imag=b;
		}
		operator int()
		{
			return (real+imag);
		}
		explicit operator long()
		{
			return (real+imag);
		}
};
int main()
{
	Complex c(10,20);
	int x=c;
	cout<<(int)c;
return 0;
}
