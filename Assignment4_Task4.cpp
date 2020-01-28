#include <cmath>
#include <iostream>
using namespace std;
// đệ quy tức là gọi lại chính nó
// Recursive function to return
// the sum of the given series
float sum(int n) {

    // 1^1 = 1
    if (n == 1) {
        return 1 * 1.0 / 2;
    } else

    // Recursive call
    // return (pow(2, n) - 1) / pow(2, n);
    {
        // cout << (float)(1 / (2 * n)) << "\n";
        return (float)1 / (2 * n) +
               sum(n - 1); // mình phải đổi kiểu là float trước cho return có 2
                           // cách hoặc (float) 1/(2*n) + sum(n-1) hoặc
                           // 1*1.0/2*n+ sum(n-1)
    }
}
float product(int m) {
    if (m == 1) {
        return 1 * 1.0 / 3;
    } else {
        return (float)m / (2 * m + 1) * product(m - 1);
    }
}

// product(3)= 3/7 * product(2)
// product (2)=2/5 * product(1)
// product (1)= 1/3

//    sum(4) = 1/8 + sum(3)
//    sum(3) = 1/6 + sum(2)
//    sum(2) = 1/4 + sum(1)
//    sum(1) = 1/2

// Driver code
int main() {
    int n, m;
    cout << "Enter a number n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "+ 1/" << i * 2 << " ";
    }
    cout << " = " << sum(n) << endl;

    cout << "Enter a number m: ";
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cout << -i << "/" << i * 2 + 1 << " * ";
    }
    if (m % 2) {
        cout << "= " << -1 * product(m) << endl;
    } else {
        cout << "=" << product(m) << endl;
    }

    return 0;
}