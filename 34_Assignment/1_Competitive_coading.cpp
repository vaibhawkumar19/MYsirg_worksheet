#include<iostream>
using namespace std;
int pallindrome(int );
int main()
{
	int a=-121;
	  if(a>0)
		cout<<"False";
	if(pallindrome(121))
		cout<<"trun";
	else
	 	cout<<"false";	
}
int pallindrome(int x)
{
	int rev=0,r,n=x;
	
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==x)
		return 1;
	else 
		return 0;
}
