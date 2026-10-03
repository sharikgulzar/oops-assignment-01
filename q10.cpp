#include<iostream>
using namespace std;
int main(){
    int choice;
    float balance=50000,amount;
    cout<<"====MINI ATM==="<<endl;
    cout<<"1. Balance enquiry"<<endl;
    cout<<"2. Cash deposit"<<endl;
    cout<<"3. Cash withdrawal"<<endl;
    cout<<"4. Exit"<<endl;

    cout<<"enter your choice"<<endl;
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"your balance is: " <<balance<<endl;
        break;
         case 2:
         cout<<"enter amount to deposit: ";
         cin>>amount;
         if (amount >0){
            balance=balance+amount;
            cout<<"amount deposited successly"<<endl;
            cout<<"updated balance is "<<balance<<endl;
        
         }
         else{
            cout<<"invalid amount!"<<endl;
         }
         break;
         case 3:
         cout<<"enter cash to withdraw:"<<endl;
         cin>>amount;
         if (amount <= balance){
            balance = balance - amount;
            cout<<"amount withdrawed successfully"<<endl;
            cout<<"updated balance is: "<<balance<<endl;
         }
         else{
            cout<<"insufficient balance!"<<endl;
         }
         break;
         case 4:
         cout<<"thank you for using our atm"<<endl;
         break;

         default: 
         cout<<"invalid choice"<<endl;



    }
    return 0;


    
    
}