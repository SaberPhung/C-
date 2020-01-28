#include <iostream>
#include <new>

using namespace std;

int main(int argc, char *argv[]) {
    int size, *p, i, j, num = 0;

    // cout << "Enter the interval:  " << endl;
    // cin >> size;
    int upper_limit, lowerlimit;

    upper_limit = std::atof(argv[1]);
    lowerlimit = std::atof(argv[2]);

    // use "std::atof(argv[2])" to convert to int type
    // p = new int[(std::atof(argv[2])- std::atof (argv[1]))];

    int len = lowerlimit - upper_limit;
    if (len < 0)
        len = -len;
    p = new int[len];

    cout << "Prime number:  " << argv[1] << " to " << argv[2] << ": ";
    // find the prime numbers from the interval:
    for (i = upper_limit; i <= lowerlimit; i++) {
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                num = 1;
            }
        }
        if (num == 0) {
            *p = i;            // save them to array *p[]
            cout << *p << " "; // print them
            p++;
        }
        num = 0;
    }

    cout << endl;
    // Here we set the value of p to NULL to make sure that it
    // doesn't refer to data.
    p = NULL;
    // Here we delete the memory array reserved in the beginning.
    delete[] p;
    return 0;
}