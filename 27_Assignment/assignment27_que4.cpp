/*4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time. */
#include<iostream>
using namespace std;
class Time 
{
	private:
	int hr;
	int min,second;
	
	public:
		Time()
		{
			hr=min=second=0;
		}
		friend void operator>>(istream &input,Time &t)
		{
			cout<<"\n enter the Hours :";
			input>>t.hr;
			cout<<"\n enter the Minuts :";
			input>>t.min;
			cout<<"\n enter the Second :";
			input>>t.second;
			t.min=t.min+t.second/60;
			t.second=second%60;
			t.hr=t.hr+t.min/60;
			t.min%=60;
			if(t.hr >=25)
				return 1;
			else
				return 0;
		}
		friend void operator<<(ostream &Output,Time &t)
		{
			Output<<"\n Hours : "<<t.hr;
			Output<<"\n Minuts : "<<t.min;
			Output<<"\n seconds : "<<t.second;
		}
		int operator==(Time t1)
		{
			int tot;
			int tot1;
			tot=hr*3600 +min*60+second;
			tot1=t1.hr*3600+t1.min*60 +t1.second;
			if(tot == tot1)
				return 1;
			else
				return 0;
		}
		~Time(){
		}
};
int main()
{
	Time t,t1;
	cout<<"\n enter the First number ";
	cout<<"\n ____________________________";
	if(cin>>t)
	{
		cout<<"\n Invalid Time ";
		return 0;
	}
	cout<<"\n First Time ";
	cout<<t;
	cout<<"\n enter second Time ";
	cout<<"_______________________________";
	if(cin>>t1)
	{
		cout<<"\n Invalid Time ";
		return 0;
	}
	cout<<"\n Second time ";
	cout<<t1;
	if(t=t1)
		cout<<"\n time are same ";
		else
		cout<<"\n time are different ";
	return 0;
}
