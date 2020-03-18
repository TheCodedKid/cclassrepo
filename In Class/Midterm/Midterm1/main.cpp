#include <iostream>
using namespace std;

int main() {
	int total = 0, count = 0;
	for (int i = 1; i <= 600; i++) {
		if (i % 7 == 0 && i <= 594) {
			count++;
			cout << i << ", ";
			total += i;
		}
		else if (i % 7 == 0 && i > 594) {
			count++;
			cout << i << "\n";
			total += i;
		}
	}
	cout << "The total sum of the multiples is: " << total << ".\n";
	cout << "There are " << count << " multiples of 7 between 1 and 600.";
	return 0;
}