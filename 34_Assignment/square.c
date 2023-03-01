//#include<stdio.h>
//int square(int n);
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	square(n);
//	printf("%d",square(n));
//}
//int square(int n)
//{
//	return n*n;
//}

/*simple input 10
simple output 2+4+6+8+10=30*/

#include<stdio.h>
long solution(long n)
{
	int i,tmp,sum=0;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			tmp=sum+i;
		}
		else
		{
			tmp=n-1;
			sum+=tmp;
			tmp-=2;
		}
	
		
	}
	return tmp;
}
int main()
{
	int n;
	printf("enter the numebr:-");
	scanf("%d",&n);
	printf("%d",solution(n));
}
