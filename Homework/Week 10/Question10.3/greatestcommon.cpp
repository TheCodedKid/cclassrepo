#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int great = b;

	while (b % great != 0 || a % great != 0) {
		great--;
	}
	return great;
}

int main() {
	int a, b;
	cout << "Enter two numbers to calculate the GCD: ";
	cin >> a;
	cin >> b;
	cout << "The GCD is: " << gcd(a, b);
}