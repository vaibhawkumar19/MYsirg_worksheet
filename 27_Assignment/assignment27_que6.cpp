/*6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/
#include<iostream>
#include<string.h>
using namespace std;
class CString
{
	private:
		char str[20];
	public:
		void get_string()
		{
			cout<<"enter the stirng   : ";
			cin>>str;
		}
		void display()
		{
			cout<<" "<<str<<endl;
		}
		CString operator+(CString s)
			{
				CString c;
				strcpy(c.str,str);
				strcat(c.str,s.str);
			return c;
			}
		int operator==(CString &t);
};
int CString::operator==(CString &t)
{
	int i,j;
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;t.str[i]!='\0';j++)
		{
			if(str[i]==t.str[j])
			{
				return 0;
			}
			else
				return 1;
			}
		}
	}
int main()
{
	CString c1,c2,c3;
	int result=0;
	
	c1.get_string();
	c2.get_string();
	cout<<"\n \n First string :- ";
	c1.display();
	
	cout<<"\n \n second string :- ";
	c2.display();
	
	c3=c1+c2;
	cout<<"\n \n compared string are:- ";
	c3.display();
	
	result=c1==c2;
	
	if(result == 0)
	
		cout<<"\n \nboth string are equal";
	else
		cout<<"\n \nboth string are not equal";
	
return 0;
}
