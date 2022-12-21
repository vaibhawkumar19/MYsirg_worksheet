//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,flag=0;;
	char str[10][20]={"vaibhaw","rahul","monah"};
	for(i=0;i<3;i++)
	{
		if(strcmp(str[i],"vaibhaw")==0)
		{
			printf("found");
			flag=1;
		}
	}
	if(flag==0)
			printf("not found");
	
return 0;
}
