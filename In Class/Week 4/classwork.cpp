#include <iostream>
using namespace std;

int main() {
	int input, x, y;
	cout << "Type a number between 10 and 99: ";
	cin >> input;

	y = input % 10;
	x = input / 10;

	cout << x << "\n" << y << "\n";
	cout << x << " + " << y << " = " << x + y;

}