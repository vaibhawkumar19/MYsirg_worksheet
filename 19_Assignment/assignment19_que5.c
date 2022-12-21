//5. Suppose we have a list of email addresses, check whether all email addresses have
//‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10][30];
	int i,j;
	for(i=0;i<3;i++)
	{
		gets(str[i]);
	}
	for(i=0;i<3;i++)
	{
		if(strchr(str[i],'@') != 0 )
		{
			printf("%s \n",str[i]);
		}
	}
}

