/*4. Write a program to copy the contents of one text file to another while changing the
case of every alphabet.*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("c:/file/abc.txt");
	ofstream fout;
	fout.open("c:/file/second.txt");
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch>=97 && ch<=90)
		{
			ch=toupper(ch);
		}
		else if(ch>=65 && ch<=90)
		{
			ch=tolower(ch);
		}
		fout<<ch;
	}
	cout<<"\n Data has been Copied ";
	fin.close();
	fout.close();
return 0;
}
