//3. Define a class Factorial and define an instance member function to find the Factorial
//of a number using class.
#include<iostream>
using namespace std;
class Factorial
{
	private:
	int fact,n;
	public:
		void setN(int x)
		{
			n=x;
		}
		int getN()
		{
			return n;
		}
		int getFactorial()
		{
			return fact;
		}
		void calculateFactorial()
		{
			int f=1,i;
			if(n<=0)
			{
				fact=1;
			return;
			}
			for(i=1;i<=n;i++)
			{
				f=f*i;
			}
			fact=f;
		}
};

int main()
{
	Factorial f;
	f.setN(5);
	f.calculateFactorial();
	cout<<"factorial of "<<f.getN()<<" is "<<f.getFactorial();	
return 0;
}
