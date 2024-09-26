//Ques 9
#include<iostream>
using namespace std;

class Area{
	public:
		float area(float s){
			float area=s*s;
			return area;
		}
		
		float area(float l, float b){
			float area=l*b;
			return area;
		}
		
		float area(float c, float l, float b){
			float area=c*l*b;
			return area;
		}
};

int main(){
	Area a;
	
	cout<<a.area(1.1)<<endl;
	cout<<a.area(1,2.4)<<endl;
	cout<<a.area(0.5,2,3)<<endl;

}
