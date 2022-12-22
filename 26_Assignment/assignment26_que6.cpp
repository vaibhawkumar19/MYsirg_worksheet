//6. Define a class student and write a program to enter student details using constructor
//and define member function to display all the details.
#include<iostream>
using namespace std;
class Student
{
	private:
		int marks;
		char gread;
	public:
		Student(int mr,char gr)
		{
			marks=mr;
			gread=gr;
		}
		void disaplay()
		{
			cout<<"\nMarks:-"<<marks;
			cout<<"\nGread:-"<<gread;
		}
};
int main()
{
	Student s(299,'A'),s1(345,'A');
	s.disaplay();
	s1.disaplay();
	cout<<endl;
}
