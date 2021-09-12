/*Q.1 Create the following classes and write member functions and display proper
information to user using constructor and destructor.
a) Time b) Date c) Person d) Student e) Fan f) Point*/

#include<iostream>
using namespace std;
class Time
{
	int hr,min,sec;
	
	public:
		Time()
		{
			cout<<"enter hour:";
			cin>>hr;
			cout<<"enter min:";
			cin>>min;
			cout<<"enter second";
			cin>>sec;
			cout<<"you have entered time: hours:min:sec="<<hr<<":"<<min<<":"<<sec;
			
		}
		~Time()
		{
			cout<<"\n************************************";
		}
};
class Date
{
	int year, month,date;
	public:
		Date()
		{
		cout<<"\n\n\nenter year:";
		cin>>year;
		cout<<"enter month:";
		cin>>month;
		cout<<"enter date:";
		cin>>date;
		cout<<"your date is :"<<year<<"/"<<month<<"/"<<date;
		}
		~Date()
		{
		cout<<"\n";
		}
		
};
int main()
{
	Time t;
	Date D;
	return 0;
}
