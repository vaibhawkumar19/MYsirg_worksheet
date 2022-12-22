/* 1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
return 0;
}*/
#include<iostream>
using namespace std;
class Complex
{
	int imag,real;
	public:
		void get(int a,int b)
		{
			imag=a;
			real=b;
		}
		void dispaly()
		{
			cout<<"real= "<<real<<" imag= "<<imag;
		}
		Complex(int x)
		{
			imag=x;
			real=x;
		}
		
};
int main()
{
	Complex c=10;
	c.dispaly();
return 0;
}
