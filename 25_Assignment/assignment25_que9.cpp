//9. Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class Circle
{
	int r;
	float area;
	public:
		void set(int x)
		{
			r=x;
		}
		int get()
		{
			return area;
		}
		float calc()
		{
			area=3.14*r*r;
		return area;
		}
};
int main()
{
	Circle r;
	r.set(2);
	r.get();
	r.calc();
	cout<<"Area is rectangle is "<<r.calc();
return 0;
}

