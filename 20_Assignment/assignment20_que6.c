//6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
#include<conio.h>
int main()
{
	int length;
	char str[20]={"vaibhaw"};
	char *ptr;
	ptr=str;
	while(*ptr !='\0')
	{
		length++;
		ptr++;
	}
	printf("lenght of string is %d",length);
return 0;
}
