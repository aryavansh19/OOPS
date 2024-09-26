#include<iostream>

using namespace std;

class bank{
	private:
		string name;
		int ac_no;
		string type;
		int amount=0;
		
	public:
		void assign(string name, int ac_no, string type){
			this -> name = name;
			this -> ac_no = ac_no;
			this -> type = type;
			//this -> amount = amount;
		}
		
		void deposit(){
			int dep;
			cout<<"\nEnter amount that you want to deposit: ";
			cin>>dep;
			amount+=dep;
		}
		
		void withdrawl(){
			int wit;
			cout<<"\nEnter amount that you want to Withdrawl: ";
			cin>>wit;
			amount-=wit;
		}
		
		void display(){
			cout<<"\nCustomer Name: "<<name<<endl;
			cout<<"Account Number: "<<ac_no<<endl;
			cout<<"Account Type: "<<type<<endl;
			cout<<"Total Amount: "<<amount<<endl;
		}

};

int main(){
	
	bank customers;
	
	string name;
	int ac_no;
	string type;
	int amount;
	

	cout<<"Enter Customer Name: ";
	cin>>name;
	cout<<"Enter Account Number: ";
	cin>>ac_no;
	cout<<"Enter Acount Type: ";
	cin>>type;
	
	customers.assign(name, ac_no, type);
	
	while(1){
		int n;
		cout<<"\nSelect the Operation that you want to perform:\n1) DEPOSIT\n2) WITHDRAWL\n3) DISPLAY DETAILS\nChoose '1' or '2' or '3': ";
		cin>>n;
	
		if(n==1){
			customers.deposit();
		}
	
		else if(n==2){
			customers.withdrawl();
		}
		
		else if(n==3){
			customers.display();
		}
	}
			
}
