//4. Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
int main()
{
	char *str,c;
	int i=0,j=1,size;
	str=(char*)malloc(size*sizeof(char));
	printf("enter the string ");
	
	if(str == NULL)
	{
		printf("memory allocation failed ");
	return 0;
	}
	if(c !='\n')
	{
		c=getc(stdin);
		j++;
		str=(char*)realloc(str,j*sizeof(char));
		str[i]=c;
		i++;
	}
	str[i]='\0';
	printf("the entered string is %s",str);
	free(str);
return 0;
}
