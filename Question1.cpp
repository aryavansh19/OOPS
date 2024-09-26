#include<iostream>

using namespace std;

class users{
	public:
		string name;
		int units;

};

int main(){

	users member;
	int charge=0;
	
	cout<<"Enter name: ";
	cin>>member.name;
	
	cout<<"Enter Units: ";
	cin>>member.units;
	
	if(member.units<=100){
		charge=50 + 0.60*member.units;
	}
	
	else if(member.units>100 && member.units<=300){
		charge= 100* 0.60;
		member.units=member.units-100;
		charge+=50 + 0.80*member.units;
	}
	
	else if(member.units>300){
		charge=100*0.60 + 200*0.80;
		member.units=member.units-300;
		charge+=50 + 0.90*member.units;
	}
	
	if(charge>300){
		float surcharge= 0.15*charge;
		charge+= surcharge;
		}
		
	cout<<charge;
}
