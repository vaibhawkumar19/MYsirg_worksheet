/*9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
#include<iostream>
using namespace std;
class mystring
{
	char str[100];
	public:
		void operator!();
		void accept_string()
		{
			cout<<"\n enter the string ";
			cin>>str;
		}
		void display_string()
		{
			cout<<str<<endl;
		}
};
void mystring :: operator!()
{
	int i,j;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>=96 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}
	cout<<"\n\n Reverse Case String : "<<str;
}
int main()
{
	mystring s;
	s.accept_string();
	cout<<"\n \n string is ";
	s.display_string();
	!s;
	return 0;
}
