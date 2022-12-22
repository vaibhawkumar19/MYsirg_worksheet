/*8. Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
	int isDigit=0,isSpecil=0,isException=0,isChar=0;
	char password[100];
	cout<<"enter the password:- ";
	gets(password);
	
	try
	{
		if(strlen(password) < 6)
				throw 1;
		for(int i=0;password[i]!='\0';i++)
		{
			if(isdigit(password[i]))
					isDigit=1;
				if((password[i]>= 'a' && password[i]<='z') || (password[i]>= 'A' && password[i]<='Z') || (password[i]>= '0' && password[i]<='9'))
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
				cout<<"\nPassord contains more then 6 charactors ";
			if(num == 2)
				cout<<"\nDigit is not found ";
			if(num == 3)
				cout<<"\nspecial character not found ";
			isException =1;
		}
		if(!isException)
		{
			cout<<"password Accepted sucessfully";
		}
	return 0;
}
		
