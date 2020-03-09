#include <iostream>
using namespace std;

int main() {
	double input, miles, gallons, total; 
	input = 0;
	total = 0;
	while (input != -1) {
		cout << "Enter miles driven (-1 to quit): ";
		cin >> input;
		if (input != -1) {
			miles = input;

			cout << "Enter gallons used: ";
			cin >> input;
			gallons = input;

			cout << "MPG this tankful: " << (miles / gallons) << "\n";
			if (total == 0) {
				total = (miles / gallons);
			}
			else {
				total = (total + (miles / gallons)) / 2.0;
			}
			cout << "Total MPG: " << total << "\n";
		}
	}
}