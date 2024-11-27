#include<iostream>
using namespace std;

int main(){
	int choice;
	double num1,num2, result;
	cout<<" Dispaly the menu"<<endl;
	cout<<"1. Addition "<<endl;
	cout<<"2. Subtraction "<<endl;
	cout<<"3. Multiplication "<<endl;
	cout<<"4. Division "<<endl;
	cout<<"5 Exit "<<endl;
	cout<<" choice from (1-5)"<<endl;
	
	
	
	do{
		cout<<"Enter your choice "<<endl;
		cin>>choice;
		
		cout<<" Enter number "<<endl;
	cin>>num1;
	
	cout<<" Enter number"<< endl;
	cin>>num2;
		switch(choice){
			case 1:
			result = num1+num2;
			cout<<num1 <<"+"<<num2 << "=" <<result<<endl;
			break;
			
			case 2:
			result = num1-num2;
			cout<<num1<< "-" <<num2 << "=" <<result <<endl;
			break;
			
			case 3:
			result = num1*num2;
			cout<<num1<< "x" <<num2 << "=" <<result <<endl;
			break;
			
				case 4:
					if (num2!=0){
						result = num1/num2;
				cout<<num1<< "/" <<num2 << "=" <<result <<endl;
					}else{
						cout<<" logic error"<<endl;
					}
					break;
			
			default:
				cout<<" invalid entry try again"<<endl;
					
	
		 break;
			
		}
	}while(choice!=5);
	
	return 0;
}