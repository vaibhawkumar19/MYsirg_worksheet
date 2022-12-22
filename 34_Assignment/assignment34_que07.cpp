/*7. Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:

1. Accept the details of ‘n’ employees.

2. Display the details of ‘n’ employees.

3. Search a given Employee by emp-code.*/
#include<iostream>
using namespace std;
class Employee
{
	public:
	int emp_code;
	char name[20];
	void get()
	{
		cout<<"enter employee code:-";
		cin>>emp_code;
		cout<<"\nenter employee name:-";
		cin>>name;
	}
};
class Fulltime : public Employee
{
	public:
		float daily_rate;
		int number_of_day;
		double salary;
	void get_value()
	{
		cout<<"\nenter daily rate:-";
		cin>>daily_rate;
		cout<<"\nenter number of days:-";
		cin>>number_of_day;
	}
	void cal()
	{
		salary=daily_rate*number_of_day;
		cout<<"\nTotal salary :-"<<salary;
	}
	void show()
	{
		cout<<"\n-----------------------\n";
		cout<<"\nemployee number:-"<<emp_code;
		cout<<"\nemployee name:-"<<name;
		cout<<"\nsalary:-"<<salary;
		cout<<"\nstatus:- FullTime";
	}
};
class PartTime : public Employee
{
	public:
	int hourly_rate;
	int working_hours;
	int salary1;
	int get1()
	{
		cout<<"\n enter hourly rate :-";
		cin>>hourly_rate;
		cout<<"\n enter working rate:- ";
		cin>>working_hours;
	}
	int cal1()
	{
		salary1=hourly_rate*working_hours;
	}
	int show1()
	{
		cout<<"\n-----------------------\n";
		cout<<"\nemployee number:-"<<emp_code;
		cout<<"\nemployee name:-"<<name;
		cout<<"\nsalary:-"<<salary1;
		cout<<"\nstatus:- PartTime";
	}
};
int main()
{
	int var=0;
	int var1=0;
	Fulltime f1[5];
	PartTime f2[5];
	
	int x,y,i;
	do
	{
		cout<<"\n";
		cout<<"\n 1.enter record:-";
		cout<<"\n 2.enter display record:-";
		cout<<"\n 3.Search Record:- ";
		cout<<"\n 4.Quit:-";
		cout<<"\n enter your choice:-";
		cin>>x;
		switch(x)
		{
			case 1:
				int y;
				cin>>y;
				cout<<"\nfulltime employee:-";
				cout<<"\nparttime employee:-";
				cout<<"\nenter:-";
				
				switch(y)
				{
					case 1:
						f1[var].get();
						f1[var].get_value();
						f1[var].cal();
						var++;
					break;
					case 2:
						f1[var].show();
						f1[var].get();
						f1[var].cal();
						var++;
					break;
				}
			break;
			case 2:
				for(i=0;i<var;i++)
				{
					f1[i].show();
				
				}
				for(i=0;i<var1;i++)
				{
					f2[i].show1();
				}
			break;
			case 3:
				int a,i;
				for(i=0;i<var;i++)
				{
					cout<<"enter employee id:-";
					cin>>a;
					for(i=0;i<var;i++)
					{
						if(f1[i].emp_code==0)
						{
						 	f1[i].show();
						}
						if(f2[i].emp_code==0)
						{
							f2[i].show1();
						}
					}
				}		
			}
		}
		while(x!=4);
return 0;
}

