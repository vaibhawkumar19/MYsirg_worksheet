/*5. Consider following class Numbers
class Numbers

{
int x,y,z;
public:
// methods

};
Overload the operator unary minus (-) to negate the numbers.*/
#include<iostream>
using namespace std;
class Number
{
	int x,y,z;
	public:
		void accept()
		{
			cout<<"enter the three numbers ";
			cin>>x>>y>>z;
		}
		void get(int a,int b,int c)
		{
			x=-a;
			y=-b;
			z=-c;
		}
		void operator-()
		{
			x=-x;
			y=-y;
			z=-z;
		}
		void diaplay()
		{
			cout<<" "<<x<<"\t"<<y<<"\t"<<z;
		}
		
};
int main()
{
	Number num;
	num.accept();
	cout<<"Numbers are :- \n \n";
	num.diaplay();
	-num;
	cout<<"\n \n Negative Numbers are :\n \n";
	num.diaplay();
return 0;
	
}
