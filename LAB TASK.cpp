#include <iostream>
using namespace std;

int main(){
	
	int choice;
	double totalbill = 0.0;
	
	cout<<" DISPLAY MENU"<<endl;
		cout<<" 1. Tea-2$"<<endl;
		cout<<" 2. Coffee-3$"<<endl;
		cout<<" 3. Sandwich-5$"<<endl;
		cout<<" 4. Burger-7$"<<endl;
		cout<<" 5. Exit"<<endl;
	
	
	do{
		
		cout<<" Enter your Choice from 1-5"<<endl;
		cin>> choice;

		
		switch(choice){
			case 1:
			cout<<"Tea";
			totalbill +=2;
			break;
			
			case 2:
			cout<<"Coffee";
			totalbill +=3;
			break;
			
			case 3:
			cout<<"Sandwich";
			totalbill +=5;
			break;
			
			case 4:
			cout<<"Burger";
			totalbill +=7;
			break;
			
			case 5:
			cout<<" Thank You"<<endl;
		
			break;
			default:
			cout<<"Invalid choice";
		}
		
	}while(choice !=5);
	  cout<<" Your totalbill is: $" <<totalbill << endl;
	  cin >> totalbill;

	
	
	return 0;
}