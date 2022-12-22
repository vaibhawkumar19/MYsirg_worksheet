/*3.4. Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.*/
#include<iostream>
using namespace std;
class Addition
{
	private:
		double a,b,c;
		double sum=0;
	public:
		int add(int a,int b)
		{
			this->a=a;
			this->b=b;
			sum=a+b;
			return sum;
			
		}
		int add(double a,int b)
		{
			this->a=a;
			this->b=b;
			sum=a+b;
			return sum;
		}
		int add(double a,double b)
		{
			this->a=a;
			this->b=b;
			sum=a+b;
			return sum;
		}
		int add(int a,double b)
		{
			this->a;
			this->b;
			sum=a+b;
			return sum;
		}
		int add(int a,int b,int c)
		{
			this->a;
			this->b;
			this->c;
			sum=a+b+c;
			return sum;
		}
		int add(double a,double b,double c)
		{
			this->a;
			this->b;
			this->c;
			sum=a+b+c;
			return sum;
		}
};
int main()
{
	Addition add;
	cout<<"sum is"<<add.add(3.4,6)<<endl;
	cout<<"sum of three number:- "<<add.add(2.3,4.4,5.7)<<endl;
	cout<<"sum of three number:- "<<add.add(2,3,4)<<endl;
	cout<<"sum is"<<add.add(3.4,6.5)<<endl;
	cout<<"sum is"<<add.add(3,6)<<endl;
	cout<<"sum is"<<add.add(3,6.7)<<endl;
}
