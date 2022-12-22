//6. Write a function to sort employees according to their names [refer structure from question 1]
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
	char name[20];
	int  id;
	int salary;	
};
int main()
{
	struct employee e[10],tmp;
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("enter the name ");
		fflush(stdin);
		fgets(e[i].name,20,stdin);
		//gets(e[i].name);
		printf("enter the id ");
		scanf("%d",&e[i].id);
		
		printf("enter the salary");
		scanf("%d",&e[i].salary);
		
	}
	for(i=0;i<2;i++)
	{
		for(j=i;j<3;j++)
		{
			if(strcmp(e[i].name,e[j].name)>0)
			{
				tmp=e[i];
				e[i]=e[j];
				e[j]=tmp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf(" %s %d %d",e[i].name,e[i].id,e[i].salary);
	}
}









