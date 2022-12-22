//9. Write a program to allocate memory dynamically of the size in bytes entered by the
//user. Also handle the case when memory allocation is failed.
#include<stdio.h>
int main()
{
	int *ptr,c;
	int sum=0,i=0,size=0;
	
	printf("enter the size of array ");
	scanf("%d",&size);
	
	ptr=(int*)calloc(size,sizeof(int ));
	if(ptr == NULL)
	{
		printf("Memory Allocation Failed");
	return 0;
	}
	printf("\nenter the %d for size\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<size;i++)
	printf(" %d ",*(ptr+i));
	free(ptr);
return 0;
}



