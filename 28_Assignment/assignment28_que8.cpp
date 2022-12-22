/*8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.*/
#include<iostream>
using namespace std;
class Coordinate
{
	int a,b,c;
	public:
		Coordinate(){a=b=c=0;
		}
		Coordinate(double a,double b,double c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		void display()
		{
			cout<<"x= "<<a<<endl;
			cout<<"y= "<<b<<endl;
			cout<<" z= "<<b<<endl;
		}
		Coordinate operator,(Coordinate obj)
		{
			Coordinate temp;
			temp.a=obj.a;
			temp.b=obj.b;
			temp.c=obj.c;
		return temp;
		}
};
int main()
{
	double a,b,c;
	Coordinate c1(1,3,4);
	Coordinate c2(2,4,5);
	Coordinate c3;
	
	c2=(c1,c2);
	c3.display();
	
	cout<<endl;
	Coordinate c4(10,20,30);
	c3.display();
return 0;
}
