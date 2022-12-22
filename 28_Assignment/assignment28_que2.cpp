/*2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables.*/
#include<iostream>
using namespace std;
class Complex
{
	private:
	int real,imag;
	public:
		void SetData(int real,int imag)
		{
			this->real=real;
			this->imag=imag;
		}
		void display()
		{
			cout<<"real= "<<real<<" Imag= "<<imag<<endl;
		}
};
int main()
{
	Complex c;
	c.SetData(2,4);
	c.display();
return 0;
}
