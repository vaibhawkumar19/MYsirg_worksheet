/*9. Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.*/
#include<iostream>
using namespace std;
class Integer
{
	int x;
	public:
		void set(int x)
		{
			this->x=x;
		}
		int operator()()
		{	
			return x;
		}
};
int main()
{
	Integer i;
	i.set(4);
	cout<<i()<<endl;
return 0;
}
