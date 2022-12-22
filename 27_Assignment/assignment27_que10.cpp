/*10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).*/
#include<iostream>
#include<conio.h>
using namespace std;
class Matrix
{
	int a[3][3];
	public:
		void accept();
		void display();
		void operator +(Matrix x);
};
void Matrix::accept() 
		{
			int i,j;
			cout<<"enter the Matrix Element (3X3) :";
			for(i=0;i<3;i++)
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
			for(i=0;i<3;i++)
			{
				cout<<" ";
				for(j=0;j<3;j++)
				{
					cout<<a[i][j]<<"\t";
				}
			cout<<"\n";
			}
		}
		void Matrix :: operator +(Matrix x)
		{
			int i,j;
			int m[3][3];
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					m[i][j]=a[i][j]+x.a[i][j];
				}
			}
			cout<<"\n Additon of Matrix :\n \n";
			for(i=0;i<3;i++)
			{
				cout<<" ";
				for(j=0;j<3;j++)
				{
					cout<<m[i][j]<<"\t";
				}
				cout<<"\n";
			}
}
int main()
{
 	Matrix p1,p2;
    p1.accept();
    p2.accept();
    cout<<"\n Matrix 1st: \n";
    p1.display();
    cout<<"\n Matrix 2nd: \n";
    p2.display();
	p1+p2;  
return 0;
}
