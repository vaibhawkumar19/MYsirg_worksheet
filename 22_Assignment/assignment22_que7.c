//7. Write a program to demonstrate memory leak in C.
#include<stdio.h>
#include<conio.h>
int main()
{
	int *ptr;

	ptr=(int*)malloc(sizeof(int));
	ptr=NULL;
	
	return 0;
}
