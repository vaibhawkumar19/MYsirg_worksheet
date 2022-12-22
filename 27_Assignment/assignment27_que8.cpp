/*8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
Output -*/
#include<iostream>
using namespace std;
class Matrix
{
	private:
		int a[3][3];
	public:
		void accept();
		void display();
		void operator-();
		
};
void Matrix :: accept()
{
	int i,j;
	cout<<"enter the Matrix Element (3X3) : \n \n";
	for(int i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" ";
			cin>>a[i][j];
		}
	}
}
void Matrix::display()
{
	int i,j;
	cout<<"\n Matrix is \n\n";
	for(int i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" ";
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void Matrix :: operator-()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=-a[i][j];
		}
	}
}
int main()
{
	Matrix m;
	m.accept();
	m.display();
	-m;
	m.display();
return 0;
}
