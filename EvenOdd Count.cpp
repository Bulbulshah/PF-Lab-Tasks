#include <iostream>
using namespace std;

int main(){
	
	int num;
	int evenCount=0; int oddCount=0;
	cout<<" Enter Numbers For EVEN AND ODD COUNT"<<endl;
	while(true){
		cout<<" Enter Number"<<endl;
		cin>>num;
			if(num==0){
			break;
		}
		
		
		if(num%2==0){
			evenCount++;
		}
		else {
		
			oddCount++;
		}
	
	}
		cout<<"count of even number: "<<evenCount++<<endl;
		cout<<"count of odd number: "<<oddCount++<<endl;
	
	
	return 0;
}