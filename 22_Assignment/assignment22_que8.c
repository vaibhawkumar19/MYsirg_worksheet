//8. Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
int main()
{
	int *ptr;
	ptr=(int*)malloc(sizeof(int));
	*ptr=10;
	
	printf("before fee the memory %d\n",*ptr);
	free(ptr);
	
	printf("after free memory %d",*ptr);
return 0;
}
