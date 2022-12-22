//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class Cube
{
	public:
	double size;
	
		double volume()
		{
			return size*size*size;
		}
		Cube(double size1)
		{
			cout<<"A constructor is called "<<endl;
			size=size1;
		}
		Cube()
		{
			cout<<"A default Constructor is Called "<<endl;
		}
		~Cube()
		{
			cout<<"Distructor is Called"<<endl;
		}
		 
};
int main()
{
	Cube c1(2.34);
	Cube c2;
	cout<<"\n the side of the cube is:"<<c1.size<<endl;
	cout<<"\n the volume of the first cube is:"<<c1.volume()<<endl;
	cout<<"\n enter the lenght of the second cube";
	cin>>c2.size;
	cout<<"\n the volume of secondcube is :"<<c2.volume()<<endl;
return 0;
}
