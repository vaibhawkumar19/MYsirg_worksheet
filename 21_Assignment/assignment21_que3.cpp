//3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
#include<conio.h>
struct employee
{
	char name[20];
	int  id;
	int salary;	
};
int main()
{
	struct employee e[5];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter the name ");
		fflush(stdin);
		//fgets(e[i].name,20,stdin);
		gets(e[i].name);
		printf("enter the id ");
		scanf("%d",&e[i].id);
		
		printf("enter the salary");
		scanf("%d",&e[i].salary);
		
	}
	for(i=0;i<3;i++)
	{
		printf(" %s %d %d",e[i].name,e[i].id,e[i].salary);
	}
}

