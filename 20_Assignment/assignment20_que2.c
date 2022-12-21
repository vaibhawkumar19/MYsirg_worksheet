//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
void swap(char**,char**);
int main()
{
	char *a[20],*b[20];
	printf("enter the two string for swap ");
	gets(a);
	gets(b);
	swap(&a,&b);
	printf("before swaping %s %s",a,b);
}
void swap(char **a,char **b)
{
	char *tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

