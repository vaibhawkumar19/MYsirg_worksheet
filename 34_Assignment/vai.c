//#include<stdio.h>
//#define max 100
//typedef struct queue{
//	int rear,front;
//	int arr[max];
//}q;
//int isFull(queue q,int count)
//{
//	if(count==0)
//		return 1;
//	else
//		return 0;
//}
//int 
#include <stdio.h>
#include <string.h>
  
typedef struct student
{
  char name[50];
  char branch[50];
  int ID_no;
} students;
  
// Driver code
int main()
{
  students st;
  strcpy(st.name, 
         "Kamlesh Joshi");
  strcpy(st.branch, 
         "Computer Science And Engineering");
  st.ID_no = 108;
    
  printf("Name: %s\n", st.name);
  printf("Branch: %s\n", st.branch);
  printf("ID_no: %d\n", st.ID_no);
  return 0;
}
