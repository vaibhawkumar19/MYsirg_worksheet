/*8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.*/
#include<iostream>
using namespace std;
class Bank
{
	double principal,rate;
	int year;
	double si;
	public:
		Bank(double p,double r,int yr)
		{
			principal=p;
			rate=r;
			year=yr;
			si=principal*rate*year/100;
		}
		void display()
		{
			cout<<"simple intrest "<<si;
		}
};
int main()
{
	Bank b(200,3.1,2);
	b.display();
return 0;
}
