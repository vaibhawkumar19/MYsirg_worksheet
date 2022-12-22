//10. Find out the maximum and minimum from an array using dynamic memory allocation in C.
#include<stdio.h>
int main()
{
	int *ptr,c;
	int i=0,max,min,size=0;
	
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
	max=ptr[0];
	for(i=0;i<size;i++)
	{
		if(max < (ptr+i))
		{
			max=ptr[i];
		}
	}
	min=ptr[0];
		for(i=0;i<size;i++)
		{
			if(min >(ptr[i]))
		{
			min=ptr[i];
		}
	}
	printf("maximum of this array is %d\n",max);
	printf("minimum of this array is %d",min);
	free(ptr);
return 0;
}
