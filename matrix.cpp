#include <iostream>
using namespace std;

int main() {
    int num1[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int num2[3][3] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int add[3][3];
    int i, j;

    // Display the first matrix
    cout << "First Matrix: " << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << " " << num1[i][j];
        }
        cout << endl;
    }

    // Display the second matrix
    cout << "Second Matrix: " << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << " " << num2[i][j];
        }
        cout << endl;
    }

    // Perform and display the addition of matrices
    cout << "Addition of Matrices: " << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            add[i][j] = num1[i][j] + num2[i][j];
            cout << " " << add[i][j];
        }
        cout << endl;
    }

    return 0;
}
