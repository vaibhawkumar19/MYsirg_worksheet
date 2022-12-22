/*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.

Example-
int main()
{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}*/
#include<iostream>
using namespace std;
class Dollar
{
	int x;
	public:
	Dollar(){}
	
		void getx(int d)
		{
			x=d;
		}
		void display()
		{
			cout<<"rupee:-"<<x<<endl;
		}
		//operator rupee()
		//{
		//	return rupee;
		//}
};
class rupee
{
	int x;
	public:
		rupee(){}
		rupee(Dollar d)
		{
			x=d.getx()*80;
		}
		void getx(int a)
		{
			x=a;
		}
		void display()
		{
			cout<<"dollar:-"<<x<<endl;
		}
		operator Dollar()
		{
			return x;
		}
		operator rupee()
		{
			return x;
		}
};
int main()
{
	rupee r=30;
	Dollar d = r; // Rupee to Dollar conversion
	d.display();
	r.display();
	r = d; // Dollar to Rupee Conversion
	d.display();
	r.display();
	return 0;
}

