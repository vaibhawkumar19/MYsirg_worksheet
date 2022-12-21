//9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
#include<conio.h>
void sum(int *ptr,int size);
int main()
{
	int a[6]={1,2,3,4,8,6},i;
	sum(a,6);
//	for(i=0;i<6;i++)
//	printf("sum is %d",a[i]);
	return 0;
}
void sum(int *ptr,int size)
{
	int i;
	for(i=size-1;i>=0;i--)
	{
 		printf("%d ",ptr[i]);
	}

}
