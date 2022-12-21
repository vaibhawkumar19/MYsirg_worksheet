//Write a program to search a string in the list of strings.
#include<stdio.h>
int main()
{
	char str[10][20];
	int i,flag=0;
	for(i=0;i<5;i++)
	{
		gets(str[i]);
	}
	for(i=0;i<5;i++)
	{
		if(strcmp(str[i],"vaibhaw") == 0)
		{
			printf("string found");
			flag=1; 
		}
	}
	if(flag==0)
	{
		printf("string is not found");
	}
	return 0;
}
