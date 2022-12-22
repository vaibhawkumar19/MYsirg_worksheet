/*9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;
class Bill
{
	private:
		int c_no;
		char c_name[20];
		int unit;
		double bill;
	public:
		void get()
		{
			cout<<"Enter the Details of Customer Below ::\n"<<endl;
			cout<<"Enter the customer id :: "<<endl;
			cin>>c_no;
			cout<<"\n Enter the Customer name :: "<<endl;
			cin>>c_name;
			cout<<"\n Enter no of Units used :: ";
			cin>>unit;
		}
			void display()
		{
			cout<<"\n custome no is : "<<c_no;
			cout<<"\n \n Customer Name is : "<<c_name;
			cout<<"\n \n Name of Unites Consumed : "<<unit;
			cout<<"\n \b bill of Custromr : "<<bill;
		}
		void calculateBill()
		{
	
			if(unit<=100)
				bill=unit*1.20;
			else if(unit<=200)
			    bill=(100*1.2)+(unit-100)*2;	    
			else
				bill=(100*1.2)+(200*2)+(unit-300)*3;		
	
		}
};
int main()
{
	Bill b;
	b.get();
	b.calculateBill();
	b.display();
	cout<<"\n";
	return 0;
}
