#include <iostream>
using namespace std;

int main() {

	int rows , column , Add[rows][column];
	cout<<" Enter number of Rows and Columns For the first Matrix : "<<endl;
	cin>>rows >> column;
	
	int matrix[rows][column] , matrix2[rows][column];
	cout<<" Enter the Elements of the Matrix : "<<endl;
	for(int i = 0 ; i<rows; i++){
		for(int j = 0 ; j<column ; j++){
			cin>>matrix[i][j];
		}
	} 
	//Dispaly the Matrix
	cout<<" [ matrix are ] "<<endl;
	for(int i = 0 ; i<rows; i++){
		for(int j = 0 ; j<column ; j++){
			cout<< matrix[i][j]<<" ";
		}
			cout<<endl;
	}
	
	cout<<" Enter the Elements of the 2nd Matrix : "<<endl;
	for(int i = 0 ; i<rows; i++){
		for(int j = 0 ; j<column ; j++){
			cin>>matrix2[i][j];
		}
	} 
	//Dispaly the Matrix
	cout<<" [ 2nd matrix are ] "<<endl;
	for(int i = 0 ; i<rows; i++){
		for(int j = 0 ; j<column ; j++){
			cout<< matrix2[i][j]<<" ";
		}
			cout<<endl;
	}
	cout<<" [ Addition of matrix are ] "<<endl;
	for(int i = 0 ; i<rows; i++){
		for(int j = 0 ; j<column ; j++){
			Add[i][j] =  matrix[i][j] + matrix2[i][j] ;
			cout<<Add[i][j]<<" "<<endl;
		}
			cout<<endl;
	}

    return 0;
}
