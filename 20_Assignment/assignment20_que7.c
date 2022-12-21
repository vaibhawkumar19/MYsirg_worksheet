//7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
#include<conio.h>
int main()
{
	char str[20]={"vaibhaw"};
	int vcount=0,ccount=0;
	char *p;
	p=str;
	while(*p != '\0')
	{
		if(*p== 'a' || *p=='e'||*p== 'i' || *p=='o'||*p== 'u')
			vcount++;
		else
			ccount++;
	p++;
	}
	printf("number of vowel %d\n",vcount);
	printf("number os conconant %d",ccount);
	
}
