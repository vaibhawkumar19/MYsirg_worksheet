//8. Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
itn main()
{
	itn *ptr;
	ptr=(int*)malloc(size,sizeof(int));
	*ptr=10;
	
	printf("before fee the memory %d",*ptr);
	free(ptr);
	
	printf("after free memory %d",*ptr);
return 0;
}
