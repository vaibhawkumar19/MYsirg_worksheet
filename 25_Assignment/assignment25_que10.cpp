//10. Define a class Area and define instance member functions to find the area of the
//different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;
class Area
{
	int r,a,l,b;
	float area3;
	int area1,area2;
	public:
		void set(int x,int y,int z,int m)
		{
			r=x;
			a=y;
			l=z;
			b=m;
		}
		int get()
		{
			return area1;
			return area2;
			return area3;
		}
		int calcArea1()
		{
			area1=a*a;
		return area1;
		}
		float calcArea2()
		{
			area2=3.14*r*r;
		return area2;
		}
		int clacArea3()
		{
			area3=l*b;
		return area3;
		}
};
int main()
{
	Area r;
	r.set(3,4,5,6);
	r.get();
	r.calcArea1();
	r.calcArea2();
	r.clacArea3();
	cout<<"Area of square is "<<r.calcArea1()<<"\narea of circle "<<r.calcArea2()<<"\n areaof rectangle "<<r.clacArea3();
return 0;
}

