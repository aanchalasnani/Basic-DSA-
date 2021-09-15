#include<iostream>
#include<stdlib.h>

using namespace std;

class account {
	
	public :
	string name;
	int acc_num;
	string type;
	
};

class cur_acct : public account //checkbook facility only
{
	
	int depo;
	int balance;
	public :
	void initialise() {
		
		 depo = 10000;
		 balance = 20000;
		 
		 cout<<"\nInitializing deposit with "<<depo <<" and balance with "<<balance<<endl;
		 fflush(stdin);
		
	}
	
	void get_depo () {
		
		int depos;
		cout<<"\nEnter deposit amount :  ";
		cin>>depos;
		fflush(stdin);
		
		balance  = balance + depos;
		
	}
	
	void display() {
		
		cout<<"\nBalance :  "<< balance;
	}
	
	void depo_interest () {
		
		int depo_interest = 0;
		cout<<"interest : "<<depo_interest;
	}
	
	void withdrawal() {
		int amt;
		cout<<"\nEnter the ammount to withdraw : ";
		cin>>amt;
		fflush(stdin);
		cur_acct :: balance = cur_acct :: balance - amt;
		cout<<"\nAmount After withdrawing "<<amt<<" is "<<cur_acct :: balance<<endl;
	}
	
	void getinfo() {
		
		cout<<"\nEnter user name :  ";
		cin>>account::name;
		fflush(stdin);
		cout<<"\nEnter account number :  ";
		cin>>account::acc_num;
		fflush(stdin);
		cout<<"\nEnter account type :  ";
		cin>>account::type;
		fflush(stdin);
		
	}
	
//	account :: name
	
};

int main() {
	cur_acct object ;
	
	object.initialise();
	object.getinfo();
	object.get_depo();
	object.withdrawal();
	object.depo_interest();
	object.display();
}
