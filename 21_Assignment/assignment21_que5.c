//5. Write a function to sort employees according to their salaries [ refer structure from
//question 1]
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
			if(e[i].salary>e[j].salary)
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



























////2. Write a function to take input employee data from the user.
//#include<stdio.h>
//#include<conio.h>
//void dispaly();
//struct employee input();
//struct employee
//{
//	int id;
//	char name[20];
//	int salary;
//};
//int main()
//{
//	struct employee e1[5];
//	int i;
//	display(e1);
//	e2=input();
//	display(e2);
//	printf("\n");
//	return 0;
//}
//struct employee input()
//{
//	struct employee e;
//	printf("enter the name of id,name and salary\n");
//	scanf("%d",&e.id);
//	fflush(stdin);
//	gets(e.name);
////	fgets(e.name,20,stdin);
//	scanf("%d",&e.salary);
//	return e;
//}
//void display(struct employee e)
//{
//	printf("%d %s %d",e.id,e.name,e.salary);
//}
 

