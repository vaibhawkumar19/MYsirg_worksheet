/*5. Write a C++ program to merge the two files.*/
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	string ch;
	ifstream fin1;
	fin1.open("c:/file/abc.txt");
	ifstream fin2;
	fin2.open("c:/file/abc1.txt");
	if(!fin1 || !fin2)
	{
		cout<<"Invalid file name \n";
		exit(0);
	}
	ofstream fout;
	fout.open("c:/file/merge.txt");
	if(!fout)
	{
		cout<<"invalid file name \n";
		exit(0);
	}
	while(!fin1.eof()==0)
	{
		getline(fin1,ch);
		fout<<ch;
	}
	while(!fin2.eof()==0)
	{
		getline(fin2,ch);
		fout<<ch;
	}
	cout<<"\n two file have been merged ";
	fin1.close();
	fin2.close();
	fout.close();
return 0;
}
