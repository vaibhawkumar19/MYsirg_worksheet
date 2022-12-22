/*4. Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol.*/
#include<iostream>
using namespace std;
bool IsValidEmailId(char *);
int main()
{
	char email[100];
	
	cout<<"enter the email id :-";
	gets(email);
	try
	{
		if(IsValidEmailId(email))
			cout<<"\n Enter id is valid ";
		else
			throw 'c';
	}
	catch(char c)
	{
		cout<<"\n Exception Caught.... \n Invalid email";
	}
	catch(...)
	{
		cout<<"\n Default Exception ";
	}
	return 0;
}
bool IsValidEmailId(char *email)
{
	int AtOffset=-1;
	int DtOffset=-1;
	int length=0;
	for(int i=0;email[i]!='\0';i++)
	{
		if(email[i]=='@')
			AtOffset=i;
		else if(email[i]=='.')
			DtOffset=i;
	length++;
	}
	if(AtOffset == -1 || DtOffset == -1)
		return 0;
	if(AtOffset > DtOffset)
	 	return 0;
	return !(DtOffset >= (length -1));
}
