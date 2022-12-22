//1. Define a class Complex to represent a complex number. Declare instance member
/*variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
#include<iostream>
using namespace std;
class Complex
{
	private:
	 	int img;
		int real;
	public:
	void set(int r,int i)
	{
		real=r;
		img=i;
	}
	void print()
	{
		cout<<real<<" + "<<img<<"i"<<endl;	
	}	
};
int main()
{
	Complex c1,c2;
	c1.set(3,4);
	c2.set(6,9);
	c1.print();
	c2.print();
return 0;
}
