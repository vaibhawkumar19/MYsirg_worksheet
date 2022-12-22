//10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
	int sum=0,i;
	int arr[10]={1,2,3,4,5,6,67,7,8,9};
	for(i=0;i<=9;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"sum is "<<sum;
}
