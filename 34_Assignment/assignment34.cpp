#include<iostream>
#include<stdio.h>
using namespace std;
class Access
{
//	private:
//		void Private()
//		{
//			cout<<"Containt is private";
//		}
	public:
		void Public()
		{
			cout<<"containt is public";
		}
//	protected:
//		void Protected()
//		{
//			cout<<"containt is proctected";		
//		}	
};
int main()
{
	Access a;
	a.Public();
//	a.Private();
	//a.protected();
return 0;
}
