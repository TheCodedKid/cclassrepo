#include <iostream>
#include <string>
using namespace std;

int main() {
	int x, y;
	cout << "Please input an integer (denominator): ";
	cin >> y;
	cout << "Please input an integer (numerator): ";
	cin >> x;
	cout << (x / y) << " R: " << (x % y) << "\n";

	cout << "Please enter a number to be seperated: ";
	cin >> x;
	string output = to_string(x);
	for (int i = 0; i < output.length(); i++) {
		cout << output.at(i) << "  ";
	}
}