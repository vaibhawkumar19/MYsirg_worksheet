//9. Write a program to store information of n students and display them using structure.
#include<stdio.h>
struct student{
	int id;
	char name[20];
	int roll;
};
int main()
{
	struct student s[100];
	int i,n;
	printf("enter the number student:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the name of student ");
	fflush(stdin);
	fgets(s[i].name,20,stdin);
	
	printf("enter id of student ");
	scanf("%d",&s[i].id);
	
	printf("enter roll number of student ");
	scanf("%d",&s[i].roll);
	}
	for(i=0;i<n;i++)
	{
		printf(" %s %d %d",s[i].name,s[i].id,s[i].roll);
	}
}

