//3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include<stdio.h>
int main()
{
	int *ptr,c;
	int i=0,size,sum=0;
	printf("enter the size of array ");
	scanf("%d",&size);
	
	ptr=(int*)malloc(size*sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Memory allocation failed");
	return 0;
	}
	printf("enter the %d of size \n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<size;i++)
	{
		sum=sum+*(ptr+i);
	}
printf("sum is %d",sum);	
free(ptr);
return 0;
}
