/*4. Create Product class and convert Product type to Item type using casting operator
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
return 0;
}*/
#include<iostream>
using namespace std;
class item
{
	int i;
	public:
		void display()
		{
			cout<<"item i= "<<i<<endl;
		}
		item(){}
		item(int x)
		{
			i=x;
		}
};
class Product
{
	int x,y;
	public:
		void display()
		{
			cout<<"x= "<<x<<" y= "<<y<<endl;	
		}
		Product(int a,int b)
		{
			x=a;
			y=b;		
		}		
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
		operator item()
		{
			item m(x+y);
		return m;
		}
};
int main()
{
	Product p1(2,4);
	item i1;
	i1=p1;
	p1.display();
	i1.display();
}
