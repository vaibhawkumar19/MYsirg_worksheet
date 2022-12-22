/*11. Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function.*/
#include<iostream>
using namespace std;
class Marks
{
	int marks;
	public:
		void mark(int marks)
		{
			this->marks=marks;
		}
		void display()
		{
			cout<<"marks are:- "<<marks<<endl;
		}	
		Marks operator->()
		{
			Marks m1;
			m1.marks=marks;
		return m1;
		} 	
};
int main()
{
	Marks m;
	m.mark(400);
	m.display();
return 0;
}
