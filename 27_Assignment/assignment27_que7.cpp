/*7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Fraction
{
	private:
		long num;
		long denom;
	public:
		Fraction(long int n=0,long int d=0)
		{
			num=n;
			denom=d;
		}
		friend void operator>>(iostream &in,Fraction &f)
		{
			cout<<"\n numerator : ";
			in>>f.num;
			cout<<"\n denominator : ";
			in>>f.denom;
		}
		friend void operator<<(ostream &out,Fraction &f)
		{
			cout<<f.num<<"/"<<f.denom;
		}
		Fraction operator++()
		{
			++num;
			++denom;
		}
		Fraction operator++(int s)
		{
			Fraction tmp=*this;
			num++;
			denom++;
			return tmp;
		}
		
};
int main()
{
	Fraction f1,f2;
	cout<<"\n f1   :";
	cout<<f1;
	cout<<"\n f2   :";
	cout<<f2;
	cout<<"\n \n enter 1st fraction value \n";
	//cin>>f1;
	cout<<"\n f1++ :";
	f1++;
	cout<<f1;
	cout<<"\n ++f1 :";
	++f1;
	cout<<f1;
	cout<<"\n \n enter 2nd fraction value \n";
 	//cin>>f2;
 	f2=++f1;
	cout<<"\n f2==f1++ :";
	cout<<"\n f1 :";
	cout<<f1;
	cout<<"\n f2 : ";
	f2=f1++;
	cout<<"\n\n f2 =f1++";
	cout<<"\n f1 :";
	cout<<f1;
	cout<<"\n f2  :";
	cout<<f2;
	return 0;
}
