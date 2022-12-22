//2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]
#include<stdio.h>
#include<conio.h>
void display(struct employee e);
struct employee input();
struct employee
{
	int id;
	char name[20];
	int salary;
};
int main()
{
	struct employee e1={1,"vaibhaw",200};
	struct employee e2;
    display(e1);
	e2=input();
	display(e2);
	printf("\n");
	return 0;
}
struct employee input()
{
	struct employee e;
	printf("enter the name of id,name and salary\n");
	scanf("%d",&e.id);
	fflush(stdin);
	gets(e.name);
//	fgets(e.name,20,stdin);
	scanf("%d",&e.salary);
	return e;
}
void display(struct employee e)
{
	printf("%d %s %d",e.id,e.name,e.salary);
}

		

