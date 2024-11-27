#include <iostream>
using namespace std;

int main(){
	int choice;
	double totalbalance = 1000;
	double amount ;
	
	
	
	cout<<"Enter Your Choice"<<endl;
	cout<<"1. Check Balance"<<endl;
	cout<<"2. Withdraw money"<<endl;
	cout<<"3. Deposite Money"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<" Choice From (1-5)"<<endl;
	
	do{
		cout<<"Enter Your Choice "<<endl;
		cin>>choice;
		
		switch(choice){
			case 1:
			cout<<" Check Balance"<<endl;
			cout<<"Your Total Balance is. $ "<<totalbalance<<endl;
			break;
			
			case 2:
			cout<<" Withdraw money"<<endl;
			cin>>amount;
			if(amount>0 && amount <=1000){
				totalbalance -= amount;
				cout<<" You Withdraw : $"<<amount<<endl;
				cout<<" Your Remaining balance is: $"<<totalbalance<<endl;
			}else{
				cout<<" Insufficent balance"<<endl;
				
			}
			
			break;
			
			case 3:
				cout<<" Enter the amount you deposite "<<endl;
				cin>>amount;
				if(amount>0){
					totalbalance+=amount;
				cout<<" You Deposit: $"<<amount<<endl;
				cout<<" Your Balance is now : $"<<totalbalance<<endl;
				}
				else
				cout<<"invalid"<<endl;
				
				break;
				
			case 4:
				cout<<"Thank you for using this ATM"<<endl;
				break;
				
			default:
			cout<<"Invalid Entry"<<endl;
			break;
			
			
		}
	}while(choice !=4);
	
	
	return 0;
	
}