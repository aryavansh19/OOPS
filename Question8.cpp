#include<iostream>
using namespace std;

class Students{
    private:
    	int  score[5];
    public:
		void input(){
			for(int i=0; i<5; i++){
				cin>>score[i];
			}
		}
		
		int calculateTotalScore(){
			int sum=0;
			for(int i=0; i<5; i++){
				sum+=score[i];
			}
			return sum;
		}
};
   
int main(){
    int n;
    cout<<"Enter no ofstudents: ";
    cin>>n;
    
    Students std[n];
    for(int i=0;i<n;i++){
    	std[i].input();	
    }
    
    int anna=std[0].calculateTotalScore();
    int count=0;
    
    for(int i=1; i<n; i++){
    	if(std[i].calculateTotalScore() > anna)
			count++;
    }
    
    cout<<count;
}
