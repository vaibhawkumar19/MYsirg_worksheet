/*6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.

Example-
int main()
{
int duration;
cout<<”Enter time duration in minutes”;
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}*/
#include<iostream>
using namespace std;
class Time
{
	int hour;
	int min,sec;
	public:
		Time(){}
		Time(int duration)
		{
			hour=duration/3600;
			min=duration%3600;
		}
		void display()
		{
			cout<<"Hour= "<<hour<<"Min= "<<min<<endl;
		}
};
int main()
{
	int duration=4000;
	Time t= duration;
	t.display();
return 0;
}

