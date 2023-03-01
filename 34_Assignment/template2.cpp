// template
#include<iostream>
using namespace std;
template <class t,class f,class p>
p add(t x,f y)
{
	return (x+y);
}
int main()
{
	float sum1=add<float,int ,float>(2.4,5);
	float sum2=add<int ,int ,int >(2,3);
	cout<<sum1<<endl;
	cout<<sum2;
return 0;
}
