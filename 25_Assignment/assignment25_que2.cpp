//2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
/*number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include<iostream>
using namespace std;
class Time
{
	private:
	int hr,min,sec;
	public:
	void set(int h,int m,int s)
	{
		hr=h;
		min=m;
		sec=s;
	}	
	void display()
	{
		cout<<hr<<" : "<<min<<" : "<<sec;
	}
};
int main()
{
	Time T1;
	T1.set(3,45,34);
	T1.display();
return 0;	
}
