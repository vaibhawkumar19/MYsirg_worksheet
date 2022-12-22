//4. Define a class LargestNumber and define an instance member function to find the
//Largest of three Numbers using the class.
#include<iostream>
using namespace std;
class LargestNumber
{
	int a,b,c,larg;
	public:
		void set(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}	
		int get(int a,int b,int c,int larg)
		{
			return larg;
		}
		int CalculateLargest()
		{
			if(a>b && a>c)
				return a;
			else if(b>c && b>a)
				return b;
			else
				return c;
		}
};
int main()
{
	LargestNumber l;
	l.set(24,99,34);
	l.CalculateLargest();
	cout<<"greatest number is "<<l.CalculateLargest();
}
