//8. Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
struct student{
	int id;
	char name[20];
	int roll;
};
int main()
{
	struct student s[10];
	int i;
	for(i=0;i<3;i++)
	{
	printf("enter the name of student ");
	fflush(stdin);
	fgets(s[i].name,20,stdin);
	
	printf("enter id of student ");
	scanf("%d",&s[i].id);
	
	printf("enter roll number of student ");
	scanf("%d",&s[i].roll);
	}
	for(i=0;i<3;i++)
	{
		printf(" %s %d %d",s[i].name,s[i].id,s[i].roll);
	}
}

