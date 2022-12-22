//1. Define a function to input variable length string and store it in an array without memory wastage.
#include<stdio.h>
int main()
{
	char *str,c;
	int i=0,j=1;
	str=(char*)malloc(sizeof(char));
	printf("enter the string ");
	
	while(c!='\n')
	{
		c=getc(stdin);
		j++;
		str=(char*)realloc(str,j*sizeof(char));
		str[i]=c;
		i++;
	}
	str[i]='\0';
	printf("The enterd string is %s",str);
	free(str);
return 0;
}

