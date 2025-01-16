#include<iostream>
#include<string>
using namespace std;

int length(char[]);

int main(){
	char st[] = "Asad ali shah";
	cout<<length(st); //calling
	return 0;
}
int length(char x[]){
	int i, count = 0;
	for(i=0; x[i]!='\0';i++){
		count++;
	}
	return count;
}