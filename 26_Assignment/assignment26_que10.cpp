/*10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.*/
#include<iostream>
using namespace std;
class Counter
{
	private:
		static int count;
		
	public:
		Counter()
		{
			count++;
		}
		void set_count()
		{
			count++;
		}
		int get_count()
		{
			return count;
		}
};
int Counter::count;
int main()
{
	Counter c1,c2,c3;
	
	cout<<c1.get_count();
	
	cout<<"\n";
return 0;	
}
