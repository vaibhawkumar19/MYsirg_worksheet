//6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	float avg;
	cout<<"enter three number ";
	cin>>a>>b>>c;
	avg=a+b+c;
	avg=avg/3;
	cout<<"average is "<<avg;
return 0;
}
