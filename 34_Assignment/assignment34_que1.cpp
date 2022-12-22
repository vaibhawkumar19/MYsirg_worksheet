/*1. Write a C++ program to create a file and print “File created successfully” and throw
an error if file is not created.*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("c:/file/abc.txt");
	
	if(fout)
	{
		cout<<"file created Sucessfully";
		fout<<"My Name Is Vaibhaw Siddharth";
	}
	else
	{
		cout<<"file not Created ";
	}
return 0;
}
