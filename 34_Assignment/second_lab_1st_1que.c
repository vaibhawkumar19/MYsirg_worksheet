//write a progtam to print ADT string 4 oprtation.
//Author name:- vaibhaw Kumar
#include<stdio.h>
#include<stdlib.h>
int len(char string[]);
int main()
{
	int i;
	char string[20];	
	printf("enter the string:-");
	gets(string);
	printf("Enterd String is :- %s\n",string);
	printf("Length of String are:-%d\n",len(string));
}
int len(char string[])
{
	int i,lenght=0;
	for(i=0;string[i]!='\0';i++)
	{
		lenght++;
	}
	return i;
}


