//7. Create an Integer class and overload logical not operator for that class.
#include<iostream>
using namespace std;
class Integer
{
	private:
	int i;
	public:
	Integer(int i):i(i)
	{
	}
	int operator!()
	{
		return -i;
	}
};
int main()
{
	Integer i1=4;
	cout<<!i1<<endl;
	return 0;
}
