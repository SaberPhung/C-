#include <iostream>
using namespace std;
#define MAX 10
// tại sao nếu dùng void read void max void min thì báo error
// return-statement with a value, in function returning 'void'[-fpermissive]
// còn nếu dùng int thì bị warning no return statement in function returing
// non-void
int read(int num[], int i) {

    for (int j = 0; j < i; j++) {
        cout << (j + 1) << ". number: ";
        cin >> num[j];
    }
    return 0;
}

int* max(int num[], int i) {
    int *max = &num[0];
    for (int j = 1; j < i; j++)
        if (*max < num[j]) {
            max = &num[j];
        }
 
    return max;
}
int* min(int num[], int i) {
    int *min = &num[0];
    for (int j = 1; j < i; j++)
        if (*min > num[j]) {
            min = &num[j];
        }
  
    return min;
}

// This function prints the content of its array argument
int print(int num[], int i) {

    for (int j = 0; j < i; j++)
        cout << num[j] << " ";
    return 0;
}
int main() {

    int i, c;
    int numbers[MAX];
    cout << "How many numbers you enter? \n";
    cin >> c;

    cout << "Read" << endl;
    read(numbers, c);

    cout << "Max: ";
    cout<<*max(numbers, c)<<endl;

    cout << "Min: ";
    cout<<*min(numbers, c)<<endl;

    cout << "Print out: " << endl;
    print(numbers, c);

    return 0;
}
