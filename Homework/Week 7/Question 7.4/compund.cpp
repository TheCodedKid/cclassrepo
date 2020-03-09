#include <iostream>
using namespace std;

int main() {
	double amount;
	double principle = 1000.0;
	double rate = .05;

	cout << "Year\tAmount on deposit" << endl;

	for (double i = rate; i <= 0.10; i = i + 0.01) {
		cout << "Rate set to: " << i << endl;
		for (int year = 1; year <= 10; year++) {
			amount = principle * pow(1.0 + rate, year);
			cout << year << "\t" << amount << endl;
		}
	}
}