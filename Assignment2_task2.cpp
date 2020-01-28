#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string text;

	cout << "Enter something: ";

	getline(cin, text);

	cout << "You entered: " << text << '\n';

	sort(text.begin(), text.end());

	cout << "Your text sorted is: " << text << endl;
	return 0;
}