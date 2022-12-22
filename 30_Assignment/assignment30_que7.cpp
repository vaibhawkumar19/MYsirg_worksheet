/*7. Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.*/
// test case:- vai@12
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
	int isDigit=0,isSpecil=0,isException=0,isChar=0;
	char uname[100];
	cout<<"enter the username:- ";
	gets(uname);
	
	try
	{
		if(strlen(uname) < 6)
				throw 1;
		for(int i=0;uname[i]!='\0';i++)
		{
			if(isdigit(uname[i]))
					isDigit=1;
				if((uname[i]>= 'a' && uname[i]<='z') || (uname[i]>= 'A' && uname[i]<='Z') || (uname[i]>= '0' && uname[i]<='9'))
				{		
					isChar=1;
				}
				else
				{
					isSpecil=1;
				}
			}
			if(isDigit == 0)
				throw 2;
			if(isSpecil == 0)
				throw 3;				
		}
		catch(int num)
		{
			if(num == 1)
				cout<<"\nUser contains more then 6 charactors ";
			if(num == 2)
				cout<<"\nDigit is not found ";
			if(num == 3)
				cout<<"\nspecial character not found ";
			isException =1;
		}
		if(!isException)
		{
			cout<<"user name Accepted sucessfully";
		}
	return 0;
}
		

