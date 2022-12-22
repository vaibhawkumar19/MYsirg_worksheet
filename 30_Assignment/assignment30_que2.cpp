//2. Write a C++ program to demonstrate try, throw and catch statements.
#include<iostream>
using namespace std;
int main()
{
		try
		{
			throw 'e';
		}
		catch(char e)
		{
			cout<<"\n Exception Caught "<<e<<"'"<<endl;
		}
	return 0;
}
