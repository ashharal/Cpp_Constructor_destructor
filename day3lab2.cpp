/*Define a class to represent a bank account. Include the following members
Data Members
1. Name of the depositor
2. Account number
3. Type of account
4. Balance amount in the account.
Member functions
1. To assign initial values
2. To deposit an amount
3. To withdraw an amount after checking the balance
4. To display name and balance.*/

#include<iostream>
using namespace std;
class bank
{
	char name[10], acc_type[10];
	double balance, deposite ,withdraw ;
	int acc_no;
	public:
	bank()
	{
		cout<<"\n Enter  the name of depositor:";
		cin>>name;
		cout<<"\n enter the account type:";
		cin>>acc_type;
		cout<<"\n Enter the account number:";
		cin>>acc_no;
		cout<<"\n enter the balance in the account:";
		cin>>balance;
		
		
	}
	void initial_balance()
	{
	cout <<"\ninitial balance in your account is :"<<balance<< endl;	
	}
	
	void Deposite()
	{
		cout<<"\n Enter the amount you wish to deposite :";
		cin>>deposite;
		balance = balance+deposite;
		
	}
	
	void Withdraw()
	{
		cout<<"\n Enter the amount you want to withdraw:";
		cin>>withdraw;
		balance = balance-withdraw;
	}
	
	void display()
	{
		cout<<"\n\ncongratulations !! Your transaction is completed successfully ."<<endl;
		cout<<"Name :"<<name<<endl ;
		cout<<"Account NO:"<<acc_no<<endl;
		cout<<"Account type:"<<acc_type<<endl;
		cout<<"Balance after transactions :"<<balance;
	}
	
};
int main()
{
	bank b;
	b.initial_balance();
	b.Deposite();
	b.Withdraw();
	b.display();
	
	return 0;
}
