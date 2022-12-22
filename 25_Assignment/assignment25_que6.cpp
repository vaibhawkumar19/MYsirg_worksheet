//6. Define a class Square to find the square of a number and write a C++ program to
//Count number of times a function is called.
#include<iostream>
using namespace std;
class Square
{
	private:
	int x;
	int x2;
	static int b;
	public:
		void input()
		{
			cout<<"enter the number ";
			cin>>x;
		b++;
		}
		void calculate()
		{
			x2=x*x;
			b++;
		}	
		void dispaly()
		{
			cout<<"square of number is"<<x2;
			cout<<"\n function is called "<<b<<" times";
		}
};int Square::b;
int main()
{
	Square s;
	s.input();
	s.calculate();
	s.dispaly();
return 0;
}
