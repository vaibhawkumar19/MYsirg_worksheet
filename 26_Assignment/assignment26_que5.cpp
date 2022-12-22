//5. Define a class Date and write a program to Display Date and initialise date object using Constructors.
#include<iostream>
using namespace std;
class Date
{
	private:
	int dd,mm,yyyy;
	public:
		Date()
		{
			dd=12;
			mm=3;
			yyyy=1998;
			cout<<"Date Object have been created .................!!!\n";
		}
		void display()
		{
			cout<<"enterd date is ::";
			cout<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
		}
};
int main()
{
	Date d1;
	d1.display();
return 0;
}
