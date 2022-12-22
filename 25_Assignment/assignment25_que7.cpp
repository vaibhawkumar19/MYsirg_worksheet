//7. Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.
#include<iostream>
using namespace std;
class Greatest
{
	int a,b,c,max;
	public:
		void set(int x,int y,int z)
		{
				a=x;
				b=y;
				c=z;
		}	
		int get()
		{
			return max;
		}
		int calculate()
		{
			if(a>b && c>b)
			  return a;
			else if(b>c && b>a)
			  return b;
			else
			  return c;
		}
};
int main()
{
	Greatest g;
	g.set(2,3,4);
	g.get();
	g.calculate();
	cout<<"Maximum number is "<<g.calculate();
return 0;
}
