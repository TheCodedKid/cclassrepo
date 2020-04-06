#include <iostream>
using namespace std;

int roundToInteger(double number) {
	return int(number);
}
double roundToTenths(double number) {
	return floor(number * 10 + 0.5) / 10;
}
double roundToHundredths(double number) {
	return floor(number * 100 + 0.5) / 100;
}
double roundToThousandths(double number) {
	return floor(number * 1000 + 0.5) / 1000;
}

int main() {
	cout << roundToInteger(4.2) << "\n";
	cout << roundToTenths(4.234) << "\n";
	cout << roundToHundredths(73.87678) << "\n";
	cout << roundToThousandths(5.76523) << "\n";
}