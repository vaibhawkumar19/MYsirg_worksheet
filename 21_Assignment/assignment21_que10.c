/*10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.*/
#include<stdio.h>
struct student{
	int id;
	char name[20];
	int roll;
	float chem_marks,maths_marks,phy_marks,avg;
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
	
	printf("enter the chemistry marks");
	scanf("%f",&s[i].chem_marks);
	
	printf("enter the  Maths marks");
	scanf("%f",&s[i].maths_marks);
	
	printf("enter the physics marks");
	scanf("%f",&s[i].phy_marks);
	
	s[i].avg=(s[i].chem_marks+s[i].maths_marks+s[i].phy_marks);
	s[i].avg=s[i].avg/3;
	}
	for(i=0;i<n;i++)
	{
		printf(" %s %d %d %f",s[i].name,s[i].id,s[i].roll,s[i].avg);
	}
}

