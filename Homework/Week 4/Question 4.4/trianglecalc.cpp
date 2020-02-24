#include <iostream>
using namespace std;

int main() {
	double a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a <= 0 | b <= 0 | c <= 0) {
		cout << "Please input possible nonzero numbers...";
	}
	if (a <= b && b <= c) {
		if ((pow(a, 2.0) + pow(b, 2.0)) == pow(c, 2.0)) {
			cout << "Is a triangle. \n";
			cout << c << " is the hypotenuse.";
		}
		else {
			cout << "Is not a triangle";
		}
	}
	if (b <= a && a <= c) {
		if ((pow(b, 2.0) + pow(a, 2.0)) == pow(c, 2.0)) {
			cout << "Is a triangle. \n";
			cout << c << " is the hypotenuse.";
		}
		else {
			cout << "Is not a triangle";
		}
	}
	if (c <= b && b <= a) {
		if ((pow(c, 2.0) + pow(b, 2.0)) == pow(a, 2.0)) {
			cout << "Is a triangle. \n";
			cout << a << " is the hypotenuse.";
		}
		else {
			cout << "Is not a triangle";
		}
	}
}