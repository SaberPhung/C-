#include <iostream>
#include <new>

using namespace std;

struct room {
    int number;
    char type[100];
    double price;
};
struct cust {
    char name[100];
    int number;
    int night;
};

int main(void) {

    int i, j;
    int r_num, c_num;

    cout << "Enter how many room available: ";
    cin >> r_num;

    cout << "How many customer: ";
    cin >> c_num;

    room *p = new room[r_num];

    cust *q = new cust[c_num];

    for (i = 0; i < r_num; i++) {
        cout << "Room Number: " << endl;
        cin >> p[i].number;
        cout << "Type: " << endl;
        cin >> p[i].type;
        cout << "Price/night: " << endl;
        cin >> p[i].price;

        cout << endl;
    }

    for (i = 0; i < c_num; i++) {
        cout << "Customer Name: " << endl;
        cin >> q[i].name;
        cout << "Booking room: " << endl;
        cin >> q[i].number;
        cout << "Number of night: " << endl;
        cin >> q[i].night;

        cout << endl;
    }

    for (i = 0; i < r_num; i++) {
        for (j = 0; j < c_num; j++) {
            if (p[i].number == q[j].number) {
                cout << "Room Number: " << q[j].number
                     << ", Name: " << q[i].name
                     << ", How many night: " << q[i].night
                     << ", Total Price: " << p[i].price * q[j].night << endl;
            }
        }
    }

    // Here we set the value of p to NULL to make sure that it
    // doesn't refer to data.
    p = NULL;
    q = NULL;
    // Here we delete the memory array reserved in the beginning.
    delete[] p;
    delete[] q;

    return 0;
}