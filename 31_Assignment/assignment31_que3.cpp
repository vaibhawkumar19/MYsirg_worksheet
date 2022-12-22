/*Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.*/
#include<iostream>
using namespace std;
class Marks
{
	protected:
		int subjects[3];
	public:
		void Accept()
		{
			cout<<"enter the english marks ";
			cin>>subjects[0];
			cout<<"enter the Maths marks ";
			cin>>subjects[1];
			cout<<"enter the science marks ";
			cin>>subjects[3];
		}
};
class Total:public Marks
{
	protected:
		int total;
	public:
		void Total_marks()
		{
			total=subjects[0]+subjects[1]+subjects[2];
		}
};
class Calculate:public Total
{
	protected:
		float avg;
	public:
		void Calculate_marks()
		{
			avg=total/3;
		}
		void display()
		{
			cout<<"Average of Marks "<<avg;
		}
};
int main()
{
	Calculate c;
	c.Accept();
	c.Total_marks();
	c.Calculate_marks();
	c.display();
}
