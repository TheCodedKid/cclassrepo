#include <iostream>
using namespace std;

//factorial function
double factorial(double input) {
	double total = 1;
	for (int i = 1; i <= input; i++) {
		total *= i;
	}
	return total;
}

int main() {
	double num, total, acc;
	total = 0;

	//factorial
	cout << "Enter a number to find its factorial: ";
	cin >> num;
	cout << factorial(num) << "\n";

	//e value
	cout << "Enter a number to represent the precision for exponetial e: ";
	cin >> acc;
	for (int i = 1; i <= acc; i++) {
		total += (1 / factorial(i));
	}
	cout << "e = " << total << "\n";

	//e^x value
	total = 0;
	cout << "Enter a number to represent the precision for exponetial e^x: ";
	cin >> acc;
	cout << "Enter a number to represent x: ";
	cin >> num;
	for (int i = 1; i <= acc; i++) {
		total += (pow(num, i) / factorial(i));
	}
	cout << "e^" << num << " = " << total;
}