//6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
int main()
{
	int *ptr,c;
	int i=0,max=5,size=0;
	
	printf("enter the size of array ");
	scanf("%d",&size);
	
	ptr=(int*)calloc(size,sizeof(int));
	
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
	{
		if(*ptr < *(ptr+i))
		{
			*ptr=*(ptr+i);
		}
	}
		printf("maximum of this array is %d",*ptr);
	free(ptr);
return 0;
}
