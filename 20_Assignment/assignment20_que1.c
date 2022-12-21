//1. Write a function to swap values of two in variables of calling function.
#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter the two values for swap ");
	scanf("a=%d b=%d",&a,&b);
	swap(&a,&b);
	printf("before swaping %d %d",a,b);
}
void swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

