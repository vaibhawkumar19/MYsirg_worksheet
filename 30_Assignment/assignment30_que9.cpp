/*9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com.*/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	string email= "vaibhaw@gmail.com";
	string gmail= "@gmail.com";
	
	if(email.find(gmail)!= -1)
	{
		cout<<"yes";
	}
	else
		cout<<"No";
return 0;
}
