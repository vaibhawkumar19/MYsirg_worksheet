//4. Define a class Counter and Write a program to Show Counter using Constructor.
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
