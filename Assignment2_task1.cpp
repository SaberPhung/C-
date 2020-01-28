#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    cout << "Matrix" << endl;

    int matrix1[10][10], matrix2[10][10], sum[10][10], sub[10][10],
        multi[10][10];
	int r, c, rs, cs;

	cout << "The number of rows first matrix: ";
	cin >> r;
	
	cout << "The number of columns first matrix:  ";
	cin >> c;
	

	
	for(int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            matrix1[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << matrix1[i][j];
        }
        printf("\n");
    }
	cout << "The number of rows first matrix: ";
	cin >> rs;
    
	cout << "The number of columns first matrix:  ";
	cin >> cs;

    for (int i = 0; i < rs; i++) {
        for (int j = 0; j < cs; j++) {
            matrix2[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < rs; i++) {
        for (int j = 0; j < cs; j++) {
            cout << matrix2[i][j];
        }
        printf("\n");
    }

    // sum, subtract
    for (int i = 0; i < r; ++i) {

        for (int j = 0; j < c; ++j) {

            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            sub[i][j] = matrix1[i][j] - matrix2[i][j];
 
        }
    }
	// definition the first value of multiplication matrix
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < cs; j++) {
			multi[i][j] = 0;
		}
	}
	
	// Mulitication 2 matrix
	for (int i = 0; i < r; ++i) {

		for (int j = 0; j < cs; j++) {
			for (int k = 0; k < c; k++) {
				multi[i][j] += matrix1[i][k] * matrix2[k][j];

			}
		}
	}
    // Displaying the result sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            cout << sum[i][j] << "  ";
            if (j == c - 1)
                cout << endl;
        }
    // Displaying the result subtract matrix.
    cout << endl << "Subtract of two matrix is: " << endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            cout << sub[i][j] << "  ";
            if (j == c - 1)
                cout << endl;
        }
    // Displaying the result multi matrix.
    cout << endl << "Multiplication of two matrix is: " << endl;
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < cs; ++j) {
				cout << multi[i][j] << "  ";
				if (j == cs - 1)
					cout << endl;
			}
		}
    return 0;
}