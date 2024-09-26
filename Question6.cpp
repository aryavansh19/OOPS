#include<iostream>

using namespace std;

class hotel{
	private:
		int rno;
		string name;
		int tariff;
		int days;
		int calc(){
			float amount= days*tariff;
			if(amount>10000){
				amount=1.05*days*tariff;
			}
			return amount;
		}
		
	public:
		void checking(int rno, string name, int tariff, int days){
			this -> rno = rno;
			this -> name = name;
			this -> tariff = tariff;
			this -> days = days;
		}
		
		void checkout(){
			cout<<"Room Number: "<<rno<<endl;
			cout<<"Customer Name: "<<name<<endl;
			cout<<"Tariff: "<<tariff<<endl;
			cout<<"No of Days: "<<days<<endl;
			cout<<"Total Amout: "<< calc()<<endl;
		}

};

int main(){
	
	hotel customers;
	
	int rno;
	string name;
	int tariff;
	int days;
	
	cout<<"Enter Room Number: ";
	cin>>rno;
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter per Day Charges: ";
	cin>>tariff;
	cout<<"Enter no. of Days: ";
	cin>>days;
	
	customers.checking(rno, name, tariff, days);
	customers.checkout();
			
			
}
