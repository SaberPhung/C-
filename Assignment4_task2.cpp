#include <algorithm>
#include <iostream>
using namespace std;
#define MAX 50

int read(char* str[], int n) {
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". ";
        cin >> str[i];
    }
    return 0;
}
int sortString(char* str[], int n) {
    char* temp=new char[MAX];
	for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(str[i] , str[j])>0) {
                strcpy_s(temp,MAX, str[i]);
                strcpy_s(str[i],MAX , str[j]);
                strcpy_s(str[j],MAX ,temp);
            }
        }
    
    return 0;
}
int main() {

    int i, c;
    char** names;

    cout << "How many names you enter? \n";
    cin >> c;

	if (c < 0) {
		cout << c << " NOT VALID" << endl;
		return -1;
	}

	names = new char*[c];
	for (int i = 0; i < c; i++) {
		names[i] = new char[MAX];
	}


    cout << "Read" << endl;
    read(names, c);

    cout << "Sort: " << endl;
    sortString(names, c);

	for (int i = 0; i < c; i++) {
		cout << names[i] << endl;
	}


    return 0;
}
