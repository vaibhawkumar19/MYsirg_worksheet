/*6. Create a complex class and overload assignment operator for that class.*/
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
		friend ostream & operator<<(ostream &output,Complex &c)
		{
			cout<<"real= "<<c.real<<" Imagnary= "<<c.imag<<endl;
		return output;
		}
		void set(int real,int imag)
		{
			this->real=real;
			this->imag=imag;
		}
		Complex & operator=(Complex &c)
		{
			this->real=c.real;
			this->imag=c.imag;
  		return *this;
		}
};
int main()
{
	Complex c1(2,3);
	Complex c2;
	c2.set(4,5);
	Complex c3;
	c3=c1=c2;
	cout<<c1<<c2<<endl;
return 0;
}
