/*1. Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT.*/
#include<iostream>
using namesapce std;
class FLOAT
{
	private:
		float data;
	public:
		FLOAT()
		{
		}
			FLOAT(float num)
			{
				data=num;
			}
			FLOAT operator+(FLOAT x)
			{
				FLOAT tmp;
				tmp.data=data+x.data;
				return tmp;
			}
			FLOAT operator-(FLOAT x)
			{
				FLOAT tmp;
				tmp.data=data-x.data;
				return tmp;
			}
			FLOAT operator*(FLOAT x)
			{
				FLOAT tmp;
				tmp.data=data*x.data;
				return tmp;
			}
			FLOAT operator/(FLOAT x)
			{
				FLOAT tmp;
				tmp.data=data/x.data;
				return tmp;
			}
			void display()
			{
				cout<<data<<endl;
			}
};
int main()
{
	FLOAT x,y,z;
	x=3.4,y=4.4;
	
	z=x+y;
	z.display();
	
	z=x*y;
	z.display();
	
	z=x-y;
	z.display();
	
	z=x/y;
	z.display();
	
}
