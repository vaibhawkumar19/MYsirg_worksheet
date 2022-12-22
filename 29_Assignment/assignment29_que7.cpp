/*8. Create a Rupee class and convert it into int. And Display it.

Example-
int main()

{
Rupee r = 10;
int x = r;
cout<<x;
return 0;
}*/
#include<iostream>
using namespace std;
class Rupee
{
	int r;
	public:
		Rupee(){}
		Rupee(int x){
			r=x;
		}
		void display()
		{
			cout<<"display of rupee "<<r<<endl;
		}
		operator int ()
		{
			return r;
		}
};
int main()
{
	int x=10;
	Rupee r=x;
	r.display();
	cout<<"convert into int :-"<<x;
return 0;
}
