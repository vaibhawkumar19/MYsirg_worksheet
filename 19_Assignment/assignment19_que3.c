//3. Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[3][20];
	int i,j;
	for(i=0;i<3;i++)
	{
		gets(str[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("%s \n",str[i]);
	}
	return 0;
}
