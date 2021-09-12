
/*Define class student which shows the information about the Student using
constructor and destructor - Include the following members
Data Members
1. Name of the Student
2. Roll No
3. Address
4. Percentage
Member functions
1. To assign initial values
2. To accept the values from user.
3. To display all data to user including Grade by using following conditions
a. Per>=70 Distinction
b. Per <70 and Per >=60 First Class
c. Per<60 and Per>=40 Second class
d. Per<40 Student is Fail*/

#include<iostream>
using namespace std;


class student
{
	char name[10];
	char address[100];
	int rollno;
	float per;
	
	public:
		student()
		{
			float per;
		}
		
		void getdata()
		{
			cout<<"\n Enter the Name of student :";
			cin>>name;
			
			cout<<"\n Enter the roll no :";
			cin>>rollno;
			
			cout<<"\n Enter the address of student :";
			cin>>address;
			
			cout<<"\n Enter the percentage of student :";
			cin>>per;
			
			
		}
		void showdata()
		{
			if(per>=70)
			cout<<"distinction";
			
			else if(per<70 && per >= 60)
			cout<<"first class";
			
			else if(per<60 && per >=40)
			cout<<"second class";
			
			else if(per<40)
			cout<<"Fail";
			
			
		}
	
};
int main()
{
	student s;
	s.getdata();
	s.showdata();
	return 0;
}
