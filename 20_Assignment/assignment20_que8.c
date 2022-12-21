//8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
#include<conio.h>
void sum(int *ptr,int size);
int main()
{
	int a[6]={1,2,3,4,1,6},i;
	sum(a,6);
//	for(i=0;i<6;i++)
//	printf("sum is %d",a[i]);
	return 0;
}
void sum(int *ptr,int size)
{
	int i,sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+ptr[i];
	}
	printf("sum is %d",sum);
}
