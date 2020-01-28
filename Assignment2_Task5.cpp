#include <iostream>

using namespace std;

//sum of the array

void sum(int *array, int length) {
    int i, sum_of_array=0;
    for (i = 0; i < length; i++)
        sum_of_array = sum_of_array + *(array + i);
    cout << "sum of array is = " << sum_of_array;
}

int main() {
    int arr[10], n, i;
	int sum= 0;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\nEnter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "\nSum of array elements : " << sum;
    return 0;
}