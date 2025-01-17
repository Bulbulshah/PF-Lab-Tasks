#include<iostream>
#include<string>
using namespace std;
string convert();
int main(){
	convert();
	return 0;
}
string convert()
{
	char str[35] = " Pakistan Zindabad ";
	for(int i = 0 ; str[i]!='\0'; i++){
		if(str[i]>='A' && str[i]<='Z'){
			str[i] = str[i] + 32;
		}else if(str[i] >='a' && str [ i ] <= 'z'){
			str[i] = str[i] - 32;
		}
	}
	cout<<" Convert upper to lower and lower to upper : "<<str;
}