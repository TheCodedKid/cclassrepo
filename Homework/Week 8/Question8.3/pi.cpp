#include <iostream>
using namespace std;

int main() {
	double total = 0;
	for (int i = 0; i <= 1000; i++) {
		if (i % 2 == 0) {
			total += (4 / ((i * 2.0) + 1));
		}
		else {
			total -= (4 / ((i * 2.0) + 1));
		}
		cout << "Iteration count: " << i << "\nPi Value: " << total << "\n";
	}
}