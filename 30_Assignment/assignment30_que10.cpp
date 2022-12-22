/*10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
	int isDigit=0,isSpecil=0,isException=0,isChar=0;
	char password[100];
	cout<<"enter the name:- ";
	gets(password);
	
	try
	{
		if(strlen(password) < 8)
				throw 1;
		for(int i=0;password[i]!='\0';i++)
		{
			if(isdigit(password[i]))
					isDigit=1;
				if((password[i]>= 'a' && password[i]<='z'))
				{		
					isChar=1;
				}
				else
				{
					isSpecil=1;
				}
			}
			if(isDigit != 0)
				throw 2;
			if(isSpecil != 0)
				throw 3;				
		}
		catch(int num)
		{
			if(num == 1)
				cout<<"\nname contains more then 8 charactors ";
			if(num == 2)
				cout<<"\nDigit is not found ";
			if(num == 3)
				cout<<"\nspecial character not found ";
			isException =1;
		}
		if(!isException)
		{
			cout<<"name Accepted sucessfully";
		}
	return 0;
}
		
