//8. Define a class Rectangle and define an instance member function to find the area of the rectangle.
#include<iostream>
using namespace std;
class Rectangle
{
	int l,b,area;
	public:
		void set(int x,int y)
		{
			l=x;
			b=y;
		}
		int get()
		{
			return area;
		}
		int calc()
		{
			area=l*b;
		return area;
		}
};
int main()
{
	Rectangle r;
	r.set(2,6);
	r.get();
	r.calc();
	cout<<"Area is rectangle is "<<r.calc();
return 0;
}

