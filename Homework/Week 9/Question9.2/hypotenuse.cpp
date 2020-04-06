#include <iostream>
using namespace std;

double hypotenuse(double side1, double side2) {
	return sqrt(pow(side1, 2) + pow(side2, 2));
}

int main() {
	cout << hypotenuse(3.0, 4.0) << "\n";
	cout << hypotenuse(5.0, 12.0) << "\n";
	cout << hypotenuse(8.0, 15.0) << "\n";
}