/*3. Create a Product class and convert Product type to Item type using constructor
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
class product
{
	int x,y;
	public:
	void dispaly()
	{
		cout<<"x= "<<x<<" y= "<<y<<endl;
	}
	product(int a,int b)
	{
		x=a;
		y=b;
	}	
	int getx(){return x;}
	int gety(){return y;}
};
class item
{
	int i;
	public:
	void display()
	{
		cout<<"item "<<i<<endl;
	}
	item(){}
	item(product p)
	{
		i=p.getx()+p.gety();
	}
};
int main()
{
	product p1(2,4);
	item i1;
	i1=p1;
	p1.dispaly();
	i1.display();
}
