//10. Write a program to print a string in reverse using a pointer.
#include<stdio.h>
#include<string.h>
void reverse(char *,char);
int main()
{
	char str[20]={"manipal"};
	reverse(str,20);
}
void reverse(char *str,char size)
{
	int i;
	for(i=size;i>=0;i--)
	printf("%c",str[i]);
}
