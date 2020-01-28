#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
	int r1, c1, c2, i, j, k;
	int** A, ** B, ** mult;
	srand((unsigned)time(0));

	cout << "Matrix 1" << endl;
	r1 = (rand() % 10);
	cout << "Rows: " << r1 << endl;
	c1 = (rand() % 10);
	cout << "Columns: " << c1 << endl;
	A = new int* [r1];
	for (int i = 0; i < r1; i++)
		A[i] = new int[c1];
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c1; j++)
			A[i][j] = rand() % 10;

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++)
			cout << A[i][j] << "  ";
		cout << endl;
	}

	cout << "Matrix 2" << endl;
	cout << "Rows: " <<c1 << endl;
	c2 = (rand() % 10);
	cout << "Columns: " << c2 << endl;
	cout << endl;

	B = new int* [c1];
	for (int i = 0; i < c1; i++)
		B[i] = new int[c2];
	for (int i = 0; i < c1; i++)
		for (int j = 0; j < c2; j++)
			B[i][j] = rand() % 10;

	for (int i = 0; i < c1; i++) {
		for (int j = 0; j < c2; j++)
			cout << B[i][j] << "  ";
		cout << endl;
	}

	// multiplication
	mult = new int* [r1];
	for (i = 0; i < r1; i++) {
		mult[i] = new int[c2];
	}
	// stored
	for (int i = 0; i < r1; ++i) {

		for (int j = 0; j < c2; j++) {

			mult[i][j] = 0;
			for (int k = 0; k < c1; k++) {
				mult[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	// Displaying the result multi matrix.
	cout << "Multiplication of two matrix is: " << endl;
	for (int i = 0; i < r1; ++i) {
		for (int j = 0; j < c2; ++j) {
			cout << mult[i][j] << "\t ";
		}
		cout << endl;
	}
	return 0;
}
