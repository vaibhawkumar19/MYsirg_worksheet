/*7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.*/
#include <iostream>
using namespace std;
class Box
{
    double length,width,height;
    double volume;
	public:
		Box(double a,double b,double c)
		{
			length=a;
			width=b;
			height=c;
			volume=length*width*height;
		}
	void vol()
		{
			cout<<"discription of Box are:-"<<endl;
			cout<<"length "<<length<<endl;
			cout<<"width "<<width<<endl;
			cout<<"height "<<height<<endl;
			cout<<"volume "<<volume<<endl;
			
		}
};
int main()
{
	Box b1(2,4,5),b2(2.2,4.5,5.6);
	b1.vol();
	b2.vol();
}
		
