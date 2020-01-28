#include <iostream>
using namespace std;

int main(void) {

	double x = 100;
	//Here we define y to be an alias for x
	double& y = x;


	double* p = &y;

	double*& p2 = p;

	cout << "The value of x in the beginning is: " << x << endl;

	y += -50;

	//Here we check how the value of x has changed
	//after changing the value of y

	cout <<y <<" "<< *p <<" "<< *p2<<endl;
	return 0;
}