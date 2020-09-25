#include <iostream>
#include <string>
#include <stdbool.h>

bool f_get(string* s);

int main(int argc, char* argv[]) {
	string a;
	cout << "data: ";

	bool control = f_get(&a);

	if (control) {
		cout << endl << a;
	} else {
		cout << endl;
	}


	return 1;
}

bool f_get(string* s) {
	string x;
	getline(cin, x);
	*s = x;
	if (*s == x) {
		return true;
	} else {
		return false;
	}
}
