//10. Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,flag=0;
	char a[3][2][20]={
		{
			"vaibhaw","123"
		},
		{
			"rahul","234"
		},
		{
			"rohan","456"
		}
	};
	char username[]={"vaibhaw"};
	char password[]={"234"};
	for(i=0;i<3;i++)
	{
		if(strcmp(username,a[i][0])==0 && strcmp(password,a[i][1])==0)
		{
			printf("login successful !!");
			flag=1;
		}
	}
	if(flag==0)
		printf("username or password not matched");
	return;
}
