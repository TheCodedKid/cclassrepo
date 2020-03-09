#include <iostream>
using namespace std;

int main() {
	int total = 1;
	for (int i = 1; i <= 15; i++) {
		if (i % 2 == 1) {
			total *= i;
		}
	}
	cout << total;
}