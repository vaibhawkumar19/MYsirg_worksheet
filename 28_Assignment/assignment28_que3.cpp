/*3. Overload subscript operator [] that will be useful when we want to check for an index
out of bound.*/
#include<iostream>
using namespace std;
class Array
{
	private:
		int a[100];
		const int size=100;
	public:
		Array(){}
	void setArray(int n,int index)
	{
		if(index>size)
		{
		cout<<"Array out of Bound Exception "<<endl;
		exit(0);
		}
	a[index]=n;
	}
	void dispaly(int index)
	{
		cout<<a[index]<<endl;
	}
	int operator[](int index)
	{
		if(index >size )
		{
			cout<<"Array Index Out of Bound Exception "<<endl;
		exit(0);
		}
	return a[index];
	}
};
int main()
{
	Array b;
	b.setArray(5,10);
	cout<<b[10];
return 0;
}
