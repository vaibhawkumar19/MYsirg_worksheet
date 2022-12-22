/*2. Define a class Rectangle and overload area function for different types of data type.*/
#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float ar;
	public:
		void display()
		{
			cout<<"area of Rectangle is:-"<<ar<<" cm square"<<endl;
		}
		void area(int x,int y)
		{
			ar=x*y;
		}
		void area(double x,int y)
		{
			ar=x*y;
		}
		void area(double x,double y)
		{
			ar=x*y;
		}
		void area(int x,double y)
		{
			ar=x*y;
		}
};
int main()
{
	Rectangle area;
	area.area(2,4);
	area.display();
	area.area(2.3,4);
	area.display();
	area.area(2.3,2.5);
	area.display();
	area.area(5,6);
	area.display();
}
