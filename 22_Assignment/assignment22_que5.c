//5. Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.
#include<stdio.h>
int main()
{
	{
	int *ptr,c;
	int sum=0,i=0,size=0;
	
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
		scanf("%d",(ptr+i));
	}
	for(i=0;i<size;i++)
	{
		sum=sum+(*ptr+i);
	}
	printf("sum of array is %d",sum);
	free(ptr);
return 0;
}

}
