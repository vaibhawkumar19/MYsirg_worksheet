//7. From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>
int main()
{
	char ip[]="23.134.12.13";
	int x;
	char *a =strtok(ip,".");//for point
	while(a!=NULL)
	{
		 x=atoi(a);
		if((x>=0) && (x<=255))
		 printf("%d",x);
		 a=strtok(NULL,".");
	}
}
