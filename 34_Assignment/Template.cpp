/* Template*/
#include<iostream>
using namespace std;
template <class T>
T add(T x,T y)
{
	return (x+y);
}
int main()
{
	float sum = add<float>(2.3,5);
	int sum1 = add<int>(2,6);
	cout<<"Additon of float "<<sum;
	cout<<"\naddition of int "<<sum1;
return 0;
}
