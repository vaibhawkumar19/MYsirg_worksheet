#include<iostream>
using namespace std;
class Dollar
{
	int d;
	public:
		Dollar()
		{
			cout<<"Default Constructor called "<<endl;
		}
		Dollar(float y)
		{
			cout<<"Paramrtrise Constructor called "<<endl;
			d=y;
		}
		float getD()
		{
			return d;
		}
		void display()
		{
			cout<<d<<endl;
		}
		operator float()
		{
			cout<<"colled for doller "<<endl;
		return d;
		}
};
class Rupees
{
	private:
		int r;
	public:
		Rupees(){cout<<"default Constructor "<<endl;}
		Rupees(int x){ r=x;
			cout<<"parametrise Constructor "<<endl;
		}
		Rupees(Dollar d1)
		{
			cout<<"Rupees (Dollar) called "<<endl;
			r=d1.getD*100;
		}
		void display(){
			cout<<"Display of Rupees "<<r<<endl;
		}
		operator float()
		{
			cout<<"float of rupees colled ";
		return r;
		}	
};

int main()
{
	int x=10;
	Rupees r=x;
	r.display();
	
	float y;
	y=r;
	cout<<y<<endl;
	
	float m=20;
	Dollar d1;
	d1=m;
		d1.display();
		
	m=(float)d1;
	cout<<m<<endl;
	
	r1=(Rupees)d1;
	r1.display();
return 0;
}
