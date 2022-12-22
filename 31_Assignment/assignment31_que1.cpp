/*1. Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.*/
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	protected:
	char name[20];
	int age;
	public:
		void setName(char *n)
		{
			strcpy(name,n);
		}
		void setAge(int a)
		{
			age=a;
		}
		char * getName()
		{
			return name;
		}
		char getAge()
		{
			return age;
		}
};
class Employee : public Person
{
	int empId;
	int salary;
public:
	void setId(int id)
	{
		empId=id;
	}
	void setSalary(int s)
	{
		salary=s;
	}
	int getId()
	{
		return empId;
	}
	int setSalary()
	{
		return salary;
	}
	void display()
	{
		cout<<"Name="<<name<<"\nAge="<<age<<"\nemp Id="<<empId<<"\nSalary="<<salary<<endl;
	}
};
int main()
{
	Employee e;
	e.setName("vaibhae");
	e.setAge(23);
	e.setId(124);
	e.setSalary(1000);
	e.display();
return 0;	
}
