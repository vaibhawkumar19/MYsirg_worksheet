#include<iostream>
using namespace std;
int main()
{
	int a=9,b=4,c=5;
	if(a>b && a<c)
		printf("2nd greater a");
	else if(b>a && b<c)
		printf("b is 2nd greater");
	else 
		printf("c is 2nd greater");
}
