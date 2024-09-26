#include<iostream>
using namespace std;

class Invoice{
    private:
        string partNumber;
        string partDescription;
        int quantity;
        double price_per_item;
    public:
        Invoice(){};
        Invoice(string partNumber, string partDescription, int quantity, double price_per_item){
            this-> partNumber=partNumber;
            this-> partDescription=partDescription;
            if(quantity<0){
                quantity=0;}
            this->quantity=quantity;
            if(price_per_item<0){
                price_per_item=0.0}
            this->price_per_item=price_per_item;
        }
        
        void setPartNumber(string partNumber){
            this->partNumber=partNumber;        
        }
        string getPartNumber(){
            return partNumber;
        }
        
        void setpartDescription(string partDescription){
            this->partDescription=partDescription;        
        }
        string getpartDescription(){
            return partDescription;
        }
        
        void setquantity(int quantity){
            this->quantity=quantity;        
        }        
        int getquantity(){
            return quantity;
        }
        
        void setprice_per_item(double price_per_item){
            this->price_per_item=price_per_item;        
        }        
        double getprice_per_item(){
            return price_per_item;
        }
        

        double calculateInvoice(){
            return quantity*price_per_item;
        }

};


int main(){
    Invoice in("001", "Nail", 2, 10);
    cout<<"Part Number: "<<in.getPartNumber()<<endl;
    cout<<"Part Description: "<<in.getpartDescription()<<endl;
    cout<<"Part Quantity: "<<in.getquantity()<<endl;
    cout<<"Price Per Item: "<<in.getprice_per_item()<<endl;
    
    cout<<"Total Price: "<<in.calculateInvoice()<<endl;
    
    in.setPartNumber("002");
    in.setpartDescription("Hammer");
    in.setquantity(20);
    in.setprice_per_item(100);
    cout<<endl;
    
    cout<<"Part Number: "<<in.getPartNumber()<<endl;
    cout<<"Part Description: "<<in.getpartDescription()<<endl;
    cout<<"Part Quantity: "<<in.getquantity()<<endl;
    cout<<"Price Per Item: "<<in.getprice_per_item()<<endl;
    
    cout<<"Total Price: "<<in.calculateInvoice()<<endl;

 

}
