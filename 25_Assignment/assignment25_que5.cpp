//5. Define a class ReverseNumber and define an instance member function to find
//Reverse of a Number using class.
/*#include<iostream>
using namespace std;
class ReverseNumber
{
	private:
		int actualnumber;
		int reversenumber ;
	public:
		void setactualnumber(int m)
		{
			actualnumber=m;
		}
		int getactualnumber()
		{
			return actualnumber;
		}
		int getreversenumber()
		{
			return reversenumber;
		}
		void calculate()
		{
			int r,rev,n;
			
			while(n>0)
			{
				r=n%10;
				rev=rev*10+r;
				n/=10;
			}
			rev=reversenumber;
		}
		
};
int main()
{
	ReverseNumber r;
	r.setactualnumber(1234);
	r.calculate();
	cout<<"reverse number is "<<r.getactualnumber()<<r.getreversenumber();
return 0;
}*/
#include<iostream>
using namespace std;
class ReverseNumber
{
	private:
		int actualnumber;
		int reversenumber ;
	public:
		void setactualnumber(int m)
		{
			actualnumber=m;
		}
		int getactualnumber()
		{
			return actualnumber;
		}
		int getreversenumber()
		{
			return reversenumber;
		}
		void calculate()
		{
			int n,rev=0,r;
     n=actualnumber;
			while(n>0)
			{
				r=n%10;
				rev=rev*10+r;
				n/=10;
			}
   reversenumber=rev;
		}
};
int main()
{
	ReverseNumber r;
	r.setactualnumber(1234);
	r.calculate();
	cout<<"reverse number is "<<r.getactualnumber()<<r.getreversenumber();
return 0;
}
