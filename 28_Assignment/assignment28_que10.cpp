/*10. Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.*/
#include<iostream>
using namespace std;
class Distance
{
	int feet;
	int inches;
	public:
		Distance(int feet,int inches)//parameterized Constructor
		{
			this->feet=feet;
			this->inches=inches;
		}
		Distance()
		{
		}
		Distance operator ()(int a,int b ,int c)
		{
			Distance d;
			d.feet= a+c+5;
			d.inches=a+b+15;
		return d;
		}
		void display()
		{
			cout<<"feet= "<<feet<<" Inches= "<<inches<<endl;
		}
};
int main()
{
	Distance d(2,3);
	Distance d1;
	d.display();
	
	d1=d(2,3,4);
	
	d.display();
	d1.display();
return 0;
}
