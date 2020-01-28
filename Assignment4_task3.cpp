 
#include <iostream>
#include <new>

using namespace std;

typedef struct cust {
    char name[100];
    int id;
    int amount;
} cust;
bool compare(cust a, cust b) {
    // for ascending order replace with a.roll <b.roll
    if (a.amount < b.amount)
        return 1;
    else
        return 0;
}


void sort(cust customers[],int n) {
	int temp;
	for (int m = 0; m < n; ++m)
		for (int  p= m + 1; p < n; ++p) {
			if (m>p) {
				temp=m;
				m=p;
				p=temp;
			}
		}
}



int main(void) {

    int i;
    int c_num;

    cout << "How many customer: ";
    cin >> c_num;

    cust *s = new cust[c_num];

    for (i = 0; i < c_num; i++) {
        cout << "Customer Name: ";
        cin >> s[i].name;
        cout << "ID: ";
        cin >> s[i].id;
        cout << "Amount of Purchase: ";
        cin >> s[i].amount;

        cout << endl;
    }


	sort(s,c_num);
   // sort(s, s + c_num, &compare);
    // Displaying information
    for (int i = 0; i < c_num; ++i) {
        cout << "Name: " << s[i].name << "\tID: " << s[i].id
             << "\tAmount: " << s[i].amount << endl;
    }

    // Here we set the value of p to NULL to make sure that it
    // doesn't refer to data.
    s = NULL;
    // Here we delete the memory array reserved in the beginning.
    delete[] s;

    return 0;
}