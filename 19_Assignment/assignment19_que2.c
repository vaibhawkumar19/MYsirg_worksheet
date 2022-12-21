//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10][30],tmp[10];
	int i,j;
	for(i=0;i<3;i++)
	{
		gets(str[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(tmp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],tmp);
			}
		}
	}
	for(i=0;i<3;i++)
	printf("%s \n",str[i]);
return 0;
}
